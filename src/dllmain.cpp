#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
string sFixName = "DQXISFix";
string sFixVer = "0.9.1";
string sLogFile = "DQXISFix.log";
string sConfigFile = "DQXISFix.ini";
string sExeName;
filesystem::path sExePath;
filesystem::path sThisModulePath;
std::pair DesktopDimensions = { 0,0 };

// Ini Variables
bool bCustomResolution;
int iCustomResX;
int iCustomResY;
bool bHUDFix;
bool bAspectFix;
bool bFOVFix;
float fAdditionalFOV;

// Aspect ratio + HUD stuff
float fPi = (float)3.141592653;
float fNativeAspect = (float)16 / 9;
float fNativeWidth;
float fNativeHeight;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDHeight;
float fDefaultHUDWidth = (float)1920;
float fDefaultHUDHeight = (float)1080;
float fHUDWidthOffset;
float fHUDHeightOffset;

// Variables
int iResX;
int iResY;
int iFullscreenMode;

void Logging()
{
    // Get this module path
    WCHAR thisModulePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, thisModulePath, MAX_PATH);
    sThisModulePath = thisModulePath;
    sThisModulePath = sThisModulePath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(baseModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Calculate aspect ratio / use desktop res instead
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();

    // spdlog initialisation
    {
        try
        {
            logger = spdlog::basic_logger_st(sFixName.c_str(), sThisModulePath.string() + sLogFile, true);
            spdlog::set_default_logger(logger);

            spdlog::flush_on(spdlog::level::debug);
            spdlog::info("----------");
            spdlog::info("{} v{} loaded.", sFixName.c_str(), sFixVer.c_str());
            spdlog::info("----------");
            spdlog::info("Path to logfile: {}", sThisModulePath.string() + sLogFile);
            spdlog::info("----------");

            // Log module details
            spdlog::info("Module Name: {0:s}", sExeName.c_str());
            spdlog::info("Module Path: {0:s}", sExePath.string());
            spdlog::info("Module Address: 0x{0:x}", (uintptr_t)baseModule);
            spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(baseModule));
            spdlog::info("----------");
        }
        catch (const spdlog::spdlog_ex& ex)
        {
            AllocConsole();
            FILE* dummy;
            freopen_s(&dummy, "CONOUT$", "w", stdout);
            std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        }
    }
}

void ReadConfig()
{
    // Initialise config
    std::ifstream iniFile(sThisModulePath.string() + sConfigFile);
    if (!iniFile)
    {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVer.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sThisModulePath.string().c_str() << std::endl;
    }
    else
    {
        spdlog::info("Path to config file: {}", sThisModulePath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Read ini file
    inipp::get_value(ini.sections["Custom Resolution"], "Enabled", bCustomResolution);
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bHUDFix);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bAspectFix);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFOVFix);
    inipp::get_value(ini.sections["Fix FOV"], "AdditionalFOV", fAdditionalFOV);

    // Log config parse
    spdlog::info("Config Parse: bCustomResolution: {}", bCustomResolution);
    spdlog::info("Config Parse: iCustomResX: {}", iCustomResX);
    spdlog::info("Config Parse: iCustomResY: {}", iCustomResY);
    spdlog::info("Config Parse: bHUDFix: {}", bHUDFix);
    spdlog::info("Config Parse: bAspectFix: {}", bAspectFix);
    spdlog::info("Config Parse: bFOVFix: {}", bFOVFix);
    spdlog::info("Config Parse: fAdditionalFOV: {}", fAdditionalFOV);
    spdlog::info("----------");
}


void ResolutionFix()
{
    // Apply custom resolution / get current resolution
    uint8_t* ApplyResolutionScanResult = Memory::PatternScan(baseModule, "44 ?? ?? ?? ?? 48 ?? ?? 44 ?? ?? ?? ?? 48 ?? ?? ?? ?? E8 ?? ?? ?? ?? F3 0F ?? ?? ??");
    if (ApplyResolutionScanResult)
    {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ApplyResolutionScanResult - (uintptr_t)baseModule);

        static SafetyHookMid ApplyResolutionMidHook{};
        ApplyResolutionMidHook = safetyhook::create_mid(ApplyResolutionScanResult,
            [](SafetyHookContext& ctx)
            {
                // Get window mode
                if (ctx.rbx + 0xA0)
                {
                    iFullscreenMode = *reinterpret_cast<int*>(ctx.rbx + 0xA0);
                }

                // Automatically use desktop resolution
                if (iCustomResX == 0 || iCustomResY == 0)
                {
                    iCustomResX = DesktopDimensions.first;
                    iCustomResY = DesktopDimensions.second;
                }

                if (bCustomResolution)
                {
                    ctx.r9 = iCustomResX;
                    ctx.r10 = iCustomResY;
                }

                // Set desktop resolution if using borderless mode, the game does not do this >:(
                if (iFullscreenMode == 1)
                {
                    ctx.r9 = DesktopDimensions.first;
                    ctx.r10 = DesktopDimensions.second;
                }

                iResX = (int)ctx.r9;
                iResY = (int)ctx.r10;

                fAspectRatio = (float)iResX / iResY;
                fAspectMultiplier = fAspectRatio / fNativeAspect;
                fNativeWidth = (float)iResY * fNativeAspect;
                fNativeHeight = (float)iResX / fNativeAspect;

                // HUD variables
                fHUDWidth = (float)iResY * fNativeAspect;
                fHUDHeight = (float)iResY;
                fHUDWidthOffset = (float)(iResX - fHUDWidth) / 2;
                fHUDHeightOffset = 0;
                if (fAspectRatio < fNativeAspect)
                {
                    fHUDWidth = (float)iResX;
                    fHUDHeight = (float)iResX / fNativeAspect;
                    fHUDWidthOffset = 0;
                    fHUDHeightOffset = (float)(iResY - fHUDHeight) / 2;
                }

                // Log aspect ratio stuff
                spdlog::info("----------");
                spdlog::info("Resolution: Resolution: {}x{}", iResX, iResY);
                spdlog::info("Resolution: fAspectRatio: {}", fAspectRatio);
                spdlog::info("Resolution: fAspectMultiplier: {}", fAspectMultiplier);
                spdlog::info("Resolution: fNativeWidth: {}", fNativeWidth);
                spdlog::info("Resolution: fNativeHeight: {}", fNativeHeight);
                spdlog::info("Resolution: fHUDWidth: {}", fHUDWidth);
                spdlog::info("Resolution: fHUDHeight: {}", fHUDHeight);
                spdlog::info("Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
                spdlog::info("Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
                spdlog::info("----------");
            });
    }
    else if (!ApplyResolutionScanResult)
    {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectFOVFix()
{
    if (bFOVFix)
    {
        // Gameplay FOV
        // Gameplay uses it's own camera component class called JackPlayerCameraComponent
        uint8_t* GameplayFOVScanResult = Memory::PatternScan(baseModule, "F3 41 ?? ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? 48 ?? ?? FF ?? ??");
        if (GameplayFOVScanResult)
        {
            spdlog::info("Gameplay FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)GameplayFOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid GameplayFOVMidHook{};
            GameplayFOVMidHook = safetyhook::create_mid(GameplayFOVScanResult + 0x6,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm1.f32[0] = atanf(tanf(ctx.xmm1.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                    ctx.xmm1.f32[0] += fAdditionalFOV;
                });
        }
        else if (!GameplayFOVScanResult)
        {
            spdlog::error("Gameplay FOV: Pattern scan failed.");
        }

        // Cutscene FOV
        uint8_t* CutsceneFOVScanResult = Memory::PatternScan(baseModule, "74 ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? EB ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ??");
        if (CutsceneFOVScanResult)
        {
            spdlog::info("Cutscene FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CutsceneFOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid CutsceneFOVMidHook{};
            CutsceneFOVMidHook = safetyhook::create_mid(CutsceneFOVScanResult + 0x1C,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                });
        }
        else if (!CutsceneFOVScanResult)
        {
            spdlog::error("Cutscene FOV: Pattern scan failed.");
        }
    }

    if (bAspectFix)
    {
        // Aspect Ratio
        uint8_t* GameplayAspectRatioScanResult = Memory::PatternScan(baseModule, "89 ?? ?? 8B ?? ?? ?? ?? 00 33 ?? ?? 83 ?? 01 31 ?? ?? 0F ?? ?? ?? ?? ?? 00");
        uint8_t* CutsceneAspectRatioScanResult = Memory::PatternScan(baseModule, "89 ?? ?? 8B ?? ?? 33 ?? ?? ?? ?? 00 83 ?? 01 31 ?? ?? 8B ?? ??");
        if (GameplayAspectRatioScanResult && CutsceneAspectRatioScanResult)
        {
            spdlog::info("Gameplay Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)GameplayAspectRatioScanResult - (uintptr_t)baseModule);
            static SafetyHookMid GameplayAspectRatioMidHook{};
            GameplayAspectRatioMidHook = safetyhook::create_mid(GameplayAspectRatioScanResult,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)&fAspectRatio;
                });

            spdlog::info("Cutscene Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CutsceneAspectRatioScanResult - (uintptr_t)baseModule);
            static SafetyHookMid CutsceneAspectRatioMidHook{};
            CutsceneAspectRatioMidHook = safetyhook::create_mid(CutsceneAspectRatioScanResult,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)&fAspectRatio;
                });            
        }
        else if (!GameplayAspectRatioScanResult || !CutsceneAspectRatioScanResult)
        {
            spdlog::error("Aspect Ratio: Pattern scan failed.");
        }

        // Damage Numbers
        // APlayerController::execProjectWorldLocationToScreen
        uint8_t* DamageNumbersScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? 0F ?? ?? 66 0F ?? ?? 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? ??");
        if (DamageNumbersScanResult)
        {
            spdlog::info("Damage Numbers: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)DamageNumbersScanResult - (uintptr_t)baseModule);

            static SafetyHookMid DamageNumbersMidHook{};
            DamageNumbersMidHook = safetyhook::create_mid(DamageNumbersScanResult + 0xE,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm1.f32[0] = fHUDWidthOffset;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = fHUDHeightOffset;
                    }
                });
        }
        else if (!DamageNumbersScanResult)
        {
            spdlog::error("Damage Numbers: Pattern scan failed.");
        }

        /*
        // 2D mode
        uint8_t* Canvas2DModeScanResult = Memory::PatternScan(baseModule, "41 ?? 00 05 00 00 48 ?? ?? 48 ?? ?? E8 ?? ?? ?? ??") + 0x6;
        uint8_t* World2DModeScanResult = Memory::PatternScan(baseModule, "B9 00 05 00 00 0F ?? ?? ?? ?? ?? ?? 0F ?? ??") + 0x5;
        uint8_t* Cam2DAspectRatioScanResult = Memory::PatternScan(baseModule, "89 ?? ?? 8B ?? ?? ?? ?? ?? 8B ?? ?? 83 ?? 02 83 ?? 04");
        if (Canvas2DModeScanResult && World2DModeScanResult && Cam2DAspectRatioScanResult)
        {
            spdlog::info("2D Mode: Canvas: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)Canvas2DModeScanResult - (uintptr_t)baseModule);
            spdlog::info("2D Mode: World Size: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)World2DModeScanResult - (uintptr_t)baseModule);
            spdlog::info("2D Mode: Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)Cam2DAspectRatioScanResult - (uintptr_t)baseModule);

            // Canvas Render Target 2D
            static SafetyHookMid Canvas2DModeMidHook{};
            Canvas2DModeMidHook = safetyhook::create_mid(Canvas2DModeScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.r8 = (int)720 * fAspectRatio;
                        ctx.r9 = (int)720;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.r8 = (int)1280;
                        ctx.r9 = (int)1280 / fAspectRatio;
                    }
                });

            // World size
            static SafetyHookMid World2DModeMidHook{};
            World2DModeMidHook = safetyhook::create_mid(World2DModeScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.rcx = (int)720 * fAspectRatio;
                        ctx.rdx = (int)720;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.rcx = (int)1280;
                        ctx.rdx = (int)1280 / fAspectRatio;
                    }
                });

            // Aspect ratio
            static SafetyHookMid Cam2DAspectRatioMidHook{};
            Cam2DAspectRatioMidHook = safetyhook::create_mid(Cam2DAspectRatioScanResult + 0x21,
                [](SafetyHookContext& ctx)
                {
                    ctx.rcx = 0;
                });
        }
        else if (!Canvas2DModeScanResult || !World2DModeScanResult)
        {
            spdlog::error("2D Mode: Pattern scan failed.");
        }
        */
    }
}

void HUDFix()
{
    // Set loading screen background texture to screen size.
    uint8_t* LoadingScreenScanResult = Memory::PatternScan(baseModule, "F3 41 ?? ?? ?? ?? ?? ?? 00 F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? 3D 55 05 00 00 75 ??");
    if (LoadingScreenScanResult)
    {
        spdlog::info("Loading Screen: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)LoadingScreenScanResult - (uintptr_t)baseModule);

        static SafetyHookMid LoadingScreenMidHook{};
        LoadingScreenMidHook = safetyhook::create_mid(LoadingScreenScanResult + 0x9,
            [](SafetyHookContext& ctx)
            {
                ctx.xmm1.f32[0] = (float)iCustomResX;
                ctx.xmm2.f32[0] = (float)iCustomResY;
            });
    }
    else if (!LoadingScreenScanResult)
    {
        spdlog::error("Loading Screen: Pattern scan failed.");
    }

    if (bHUDFix)
    {
        // HUD size
        uint8_t* HUDSizeScanResult = Memory::PatternScan(baseModule, "F3 0F ?? ?? ?? ?? F3 0F ?? ?? ?? ?? F3 0F ?? ?? ?? ?? F3 0F ?? ?? ?? ?? 74 ?? 41 ?? ?? ?? ?? ?? 00 FF ?? 48 ??");
        if (HUDSizeScanResult)
        {
            spdlog::info("HUD Size: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDSizeScanResult - (uintptr_t)baseModule);

            static SafetyHookMid HUDSizeMidHook{};
            HUDSizeMidHook = safetyhook::create_mid(HUDSizeScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = (ctx.xmm1.f32[0] - (float)1920) / 2;
                        ctx.xmm1.f32[0] = (float)1920;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = (ctx.xmm0.f32[0] - (float)1080) / 2;
                        ctx.xmm0.f32[0] = (float)1080;
                    }
                });
        }
        else if (!HUDSizeScanResult)
        {
            spdlog::error("HUD Size: Pattern scan failed.");
        }

        // Interaction markers
        // UGameplayStatics::execProjectWorldToScreenWithDeviceZ
        uint8_t* InteractionMarkersScanResult = Memory::PatternScan(baseModule, "66 0F ?? ?? ?? ?? ?? ?? 00 0F ?? ?? F3 0F ?? ?? 66 0F ?? ?? ?? ?? ?? ?? 00 0F ?? ??");
        if (InteractionMarkersScanResult)
        {
            spdlog::info("Interaction Markers: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)InteractionMarkersScanResult - (uintptr_t)baseModule);

            static SafetyHookMid InteractionMarkersWidthOffsetMidHook{};
            InteractionMarkersWidthOffsetMidHook = safetyhook::create_mid(InteractionMarkersScanResult + 0xC,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = (float)fHUDWidthOffset;
                    }
                });

            static SafetyHookMid InteractionMarkersHeightOffsetMidHook{};
            InteractionMarkersHeightOffsetMidHook = safetyhook::create_mid(InteractionMarkersScanResult + 0x1C,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = (float)fHUDHeightOffset;
                    }
                });
        }
        else if (!InteractionMarkersScanResult)
        {
            spdlog::error("Interaction Markers: Pattern scan failed.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    ResolutionFix();
    AspectFOVFix();
    HUDFix();
    return true;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle)
        {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST); // set our Main thread priority higher than the games thread
            CloseHandle(mainHandle);
        }
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

