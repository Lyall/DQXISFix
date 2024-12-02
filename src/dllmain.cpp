#include "stdafx.h"
#include "helper.hpp"

#include "SDK/Engine_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/WBP_UMG_Root_Widget_modern_classes.hpp"
#include "SDK/WBP_UMG_Fade_Widget_000_classes.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "DQXISFix";
std::string sFixVersion = "0.9.2";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.777777791f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;

// Ini variables
bool bCustomRes = true;
int iCustomResX = 0;
int iCustomResY = 0;
bool bFixAspect = true;
float fGameplayFOVMulti = 1.00f;
bool bFixHUD = true;

// Variables
int iCurrentResX;
int iCurrentResY;
int iOldResX;
int iOldResY;
int iFullscreenMode;
SDK::UWBP_UMG_Fade_Widget_000_C* FadeWidget = nullptr;
SDK::UWBP_UMG_Root_Widget_modern_C* ModernHUD = nullptr;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }  
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath.string() + sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Custom Resolution"], "Enabled", bCustomRes);
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Gameplay FOV"], "Multiplier", fGameplayFOVMulti);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);

    // Log ini parse
    spdlog_confparse(bCustomRes);
    spdlog_confparse(iCustomResX);
    spdlog_confparse(iCustomResY);
    spdlog_confparse(bFixAspect);
    spdlog_confparse(fGameplayFOVMulti);
    spdlog_confparse(bFixHUD);

    spdlog::info("----------");
}

void CalculateAspectRatio(bool bLog)
{
    if (iCurrentResX <= 0 || iCurrentResY <= 0)
        return;

    if (iCurrentResX == 0 || iCurrentResY == 0) {
        spdlog::error("Current Resolution: Resolution invalid, using desktop resolution instead.");
        iCurrentResX = DesktopDimensions.first;
        iCurrentResY = DesktopDimensions.second;
    }

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD 
    fHUDWidth = (float)iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2.00f;
    fHUDHeightOffset = 0.00f;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0.00f;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2.00f;
    }

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
        spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
        spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("----------");
    }
}

void CurrentResolution()
{
    // Grab desktop resolution/aspect just in case
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;
    CalculateAspectRatio(true);

    // Current Resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "44 ?? ?? ?? ?? 48 ?? ?? 44 ?? ?? ?? ?? 48 ?? ?? ?? ?? E8 ?? ?? ?? ?? F3 0F ?? ?? ??");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                // Get window mode
                if (ctx.rbx + 0xA0) {
                    iFullscreenMode = *reinterpret_cast<int*>(ctx.rbx + 0xA0);
                }

                // Apply custom resolution
                if (bCustomRes) {
                    // Automatically use desktop resolution
                    if (iCustomResX == 0 || iCustomResY == 0) {
                        iCustomResX = DesktopDimensions.first;
                        iCustomResY = DesktopDimensions.second;
                    }

                    ctx.r9 = iCustomResX;
                    ctx.r10 = iCustomResY;
                }

                // Set desktop resolution if using borderless mode
                if (iFullscreenMode == 1) {
                    ctx.r9 = DesktopDimensions.first;
                    ctx.r10 = DesktopDimensions.second;
                }

                int iResX = (int)ctx.r9;
                int iResY = (int)ctx.r10;

                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }    
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "74 ?? 44 0F ?? ?? ?? ?? ?? ?? 48 8D ?? ?? ?? ?? ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0xD);
        SDK::Offsets::GObjects = GObjectsAddr - (std::uint8_t*)exeModule + 0x10;
        spdlog::info("Offsets: GObjects: Offset: {:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // AppendString
    std::uint8_t* AppendStringScanResult = Memory::PatternScan(exeModule, "48 89 ?? ?? ?? 56 48 83 ?? ?? 48 8B ?? 48 8B ?? E8 ?? ?? ?? ?? 48 8B ?? 8B ?? 99 81 ?? ?? ?? ?? ?? 03 ??");
    if (AppendStringScanResult) {
        spdlog::info("Offsets: AppendString: Address is {:s}+{:x}", sExeName.c_str(), AppendStringScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::AppendString = AppendStringScanResult - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: AppendString: Offset: {:x}", (uintptr_t)SDK::Offsets::AppendString);
    }
    else {
        spdlog::error("Offsets: AppendString: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 8B ?? ?? 45 33 ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::ProcessEvent = ProcessEventScanResult - (std::uint8_t*)exeModule;
        spdlog::info("Offsets: ProcessEvent: Offset: {:x}", (uintptr_t)SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect) {
        // Aspect Ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 8B ?? ?? 33 ?? ?? ?? ?? ?? 83 ?? 01");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- cutscene FOV
                    if (fAspectRatio > fNativeAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xB,
                [](SafetyHookContext& ctx) {
                    ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }

        // Gameplay Aspect Ratio
        std::uint8_t* GameplayAspectRatioScanResult = Memory::PatternScan(exeModule, "89 ?? ?? 8B ?? ?? ?? ?? 00 33 ?? ?? 83 ?? 01 31 ?? ?? 0F ?? ?? ?? ?? ?? 00");
        if (GameplayAspectRatioScanResult) {
            spdlog::info("Gameplay Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), GameplayAspectRatioScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid GameplayAspectRatioMidHook{};
            GameplayAspectRatioMidHook = safetyhook::create_mid(GameplayAspectRatioScanResult,
                [](SafetyHookContext& ctx) {
                    ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
        }
        else {
            spdlog::error("Gameplay Aspect Ratio: Pattern scan failed.");
        }

        // Damage Numbers - APlayerController::execProjectWorldLocationToScreen()
        std::uint8_t* DamageNumbersScanResult = Memory::PatternScan(exeModule, "48 ?? ?? ?? 0F ?? ?? 66 0F ?? ?? 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? ??");
        if (DamageNumbersScanResult) {
            spdlog::info("Damage Numbers: Address is {:s}+{:x}", sExeName.c_str(), DamageNumbersScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid DamageNumbersMidHook{};
            DamageNumbersMidHook = safetyhook::create_mid(DamageNumbersScanResult + 0xE,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio > fNativeAspect) {
                        ctx.xmm1.f32[0] = fHUDWidthOffset;
                    }
                    else if (fAspectRatio < fNativeAspect) {
                        ctx.xmm0.f32[0] = fHUDHeightOffset;
                    }
                });
        }
        else {
            spdlog::error("Damage Numbers: Pattern scan failed.");
        }
    }  

    // Gameplay FOV - Gameplay uses it's own camera component class called JackPlayerCameraComponent
    uint8_t* GameplayFOVScanResult = Memory::PatternScan(exeModule, "F3 41 ?? ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? 48 ?? ?? FF ?? ??");
    if (GameplayFOVScanResult) {
        spdlog::info("Gameplay FOV: Address is {:s}+{:x}", sExeName.c_str(), GameplayFOVScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid GameplayFOVMidHook{};
        GameplayFOVMidHook = safetyhook::create_mid(GameplayFOVScanResult + 0x6,
            [](SafetyHookContext& ctx) {
                // Fix vert- gameplay FOV
                if (bFixAspect && fAspectRatio > fNativeAspect)
                    ctx.xmm1.f32[0] = atanf(tanf(ctx.xmm1.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);

                // Multiply gameplay FOV
                if (fGameplayFOVMulti != 1.00f)
                    ctx.xmm1.f32[0] *= fGameplayFOVMulti;
            });
    }
    else {
        spdlog::error("Gameplay FOV: Pattern scan failed.");
    }
}

void HUD()
{
    if (bFixHUD) {
        // HUD
        std::uint8_t* HUDSizeScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? ?? ?? 44 89 ?? ?? 48 89 ?? ?? BE 03 00 00 00 48 8D ?? ?? ?? ?? ??");
        if (HUDSizeScanResult) {
            spdlog::info("HUD: Size: Address is {:s}+{:x}", sExeName.c_str(), HUDSizeScanResult - (std::uint8_t*)exeModule);
            std::uint8_t* HUDSizeFunction = Memory::GetAbsolute(HUDSizeScanResult + 0x3);
            spdlog::info("HUD: Size: Function address is {:s}+{:x}", sExeName.c_str(), HUDSizeFunction - (std::uint8_t*)exeModule);
            if (HUDSizeFunction) {
                static SafetyHookMid HUDSizeMidHook{};
                HUDSizeMidHook = safetyhook::create_mid(HUDSizeFunction + 0x7,
                    [](SafetyHookContext& ctx) {
                        if (ctx.xmm0.f32[0] == 0.00f && ctx.xmm0.f32[1] == 0.00f && ctx.xmm0.f32[2] == 1.00f && ctx.xmm0.f32[3] == 1.00f) {
                            SDK::UObject* obj = (SDK::UObject*)ctx.rcx; 
                            // Don't center these markers
                            if (obj->GetName().contains("WBP_3DWidgetRootPanelWidget_C") || obj->GetName().contains("WBP_UMG_Root_Widget_modern_C"))
                                return;

                            if (fAspectRatio > fNativeAspect) {
                                ctx.xmm0.f32[0] = fHUDWidthOffset / (float)iCurrentResX;
                                ctx.xmm0.f32[2] = 1.00f - ctx.xmm0.f32[0];
                            }
                            else if (fAspectRatio < fNativeAspect) {
                                ctx.xmm0.f32[1] = fHUDHeightOffset / (float)iCurrentResY;
                                ctx.xmm0.f32[3] = 1.00f - ctx.xmm0.f32[1];
                            }
                        }
                    });
            }
        }
        else {
            spdlog::error("HUD: Size: Pattern scan failed.");
        }

        // JackGameplayStatics::SetCameraFade()
        std::uint8_t* CameraFadeScanResult = Memory::PatternScan(exeModule, "0F 10 ?? ?? 44 0F ?? ?? ?? 48 85 ?? 0F ?? ?? ?? F3 0F ?? ?? ?? 40 0F ?? ??");
        if (CameraFadeScanResult) {
            spdlog::info("Camera Fade: Address is {:s}+{:x}", sExeName.c_str(), CameraFadeScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid CameraFadeMidHook{};
            CameraFadeMidHook = safetyhook::create_mid(CameraFadeScanResult,
                [](SafetyHookContext& ctx) {
                    // This is performance intensive so lets cache ModernHUD and FadeWidget
                    if (!ModernHUD || !FadeWidget) {
                        for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
                            SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

                            if (!Obj || Obj->IsDefaultObject())
                                continue;

                            if (!ModernHUD && Obj->IsA(SDK::UWBP_UMG_Root_Widget_modern_C::StaticClass()))
                                ModernHUD = (SDK::UWBP_UMG_Root_Widget_modern_C*)Obj;

                            if (!FadeWidget && Obj->IsA(SDK::UWBP_UMG_Fade_Widget_000_C::StaticClass()))
                                FadeWidget = (SDK::UWBP_UMG_Fade_Widget_000_C*)Obj;

                            if (ModernHUD && FadeWidget)
                                break;
                        }
                    }

                    // Check if ModernHUD's clipping has been set
                    if (ModernHUD && ModernHUD->Clipping != SDK::EWidgetClipping::Inherit) {
                        auto panel = (SDK::UCanvasPanel*)ModernHUD->RootPanel;
                        panel->SetClipping(SDK::EWidgetClipping::Inherit);
                    }

                    // Set FadeWidget scale
                    if (FadeWidget) {
                        FadeWidget->CanvasPanel->SetClipping(SDK::EWidgetClipping::Inherit);
                        auto fadeslot = (SDK::UCanvasPanelSlot*)FadeWidget->Fade->Slot;

                        if (fAspectRatio > fNativeAspect) {
                            FadeWidget->SetRenderScale(SDK::FVector2D(fAspectMultiplier, 1.00f));
                        }
                        else if (fAspectRatio < fNativeAspect) {
                            FadeWidget->SetRenderScale(SDK::FVector2D(1.00f, 1.00f / fAspectMultiplier));
                        }
                    }
                });
        }
        else {
            spdlog::error("Camera Fade: Pattern scan failed.");
        }

        // Loading screen background
        std::uint8_t* LoadingScreenScanResult = Memory::PatternScan(exeModule, "F3 41 ?? ?? ?? ?? ?? ?? 00 F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? 3D 55 05 00 00 75 ??");
        if (LoadingScreenScanResult) {
            spdlog::info("Loading Screen: Address is {:s}+{:x}", sExeName.c_str(), LoadingScreenScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid LoadingScreenMidHook{};
            LoadingScreenMidHook = safetyhook::create_mid(LoadingScreenScanResult + 0x9,
                [](SafetyHookContext& ctx) {
                    ctx.xmm1.f32[0] = (float)iCurrentResX;
                    ctx.xmm2.f32[0] = (float)iCurrentResY;
                });
        }
        else {
            spdlog::error("Loading Screen: Pattern scan failed.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    UpdateOffsets();
    CurrentResolution();
    AspectRatioFOV();
    HUD();
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}