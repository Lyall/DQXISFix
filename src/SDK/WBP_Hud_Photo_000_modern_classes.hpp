#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Photo_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Photo_000_modern.WBP_Hud_Photo_000_modern_C
// 0x01C8 (0x05C8 - 0x0400)
class UWBP_Hud_Photo_000_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOutAnim;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       PhotoAnim;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_01;                                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_02;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Icon;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CaptionPanel;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CaptionPanel_0;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_0;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HomeButton;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PauseWindow;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PhotoFlame;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFlame_00;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFlame_01;                                     // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBg;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewImage;                                      // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PreviewPanel;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RTButton;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SatueiImage_00;                                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SatueiImage_01;                                    // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SatueiPanel_01;                                    // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SatueiPanel_xbox;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Satsuei;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SS;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Uikesu;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TextListPanel;                                     // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Paets_Text_Icon_080_00;                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Paets_Text_Icon_080_01;                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Paets_Text_Icon_080_02;                   // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Paets_Text_Icon_080_03;                   // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Paets_Text_Icon_080_04;                   // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Parts_Text_Icon_080_05;                   // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Parts_Text_Icon_080_06;                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* WBP_Menu_Parts_Text_Icon_080_07;                   // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ybutton;                                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EJackPhotoModeEmote                           EmoteType;                                         // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRelocate;                                        // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A[0x2];                                      // 0x053A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeSeconds;                                       // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_Icon_080_modern_C* PushButton;                                        // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKeyDisable;                                      // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549[0x7];                                      // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CaptionTextId;                                     // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         EmoteIndex;                                        // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EmoteIndex_Hoimi;                                  // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EmoteIndex_Mera;                                   // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EmoteIndex_Hyado;                                  // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackPhotoModeEmote                           PrevEmoteType;                                     // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AJackCharacter*>                 PhotoModeCharacter;                                // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CharaPositionResetLength;                          // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LookAtMode;                                        // 0x058C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInputDisable;                                    // 0x058D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_58E[0x2];                                      // 0x058E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RelocationCount;                                   // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AlignmentType;                                     // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstRelocation;                                 // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              IsHideHud;                                         // 0x0599(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59A[0x6];                                      // 0x059A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             EnterButtonIcon;                                   // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             EnterButtonReverce;                                // 0x05A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             EnterButtonNormal;                                 // 0x05B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             EmoteCancelButtonSwitch;                           // 0x05B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             EmoteCancelButtonPS4;                              // 0x05C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_Photo_000_modern(int32 EntryPoint);
	void ExecCapture();
	void CharacterPositionReset(EJackCharacter Character);
	void CustomEvent_1(bool bIsOpen, int32 InSelectedIndex);
	void CustomEvent_0(EJackPhotoModeEvent EventType);
	void OnKeyEvent(EJackKeys InKeyType, bool bIsPressed);
	void WidgetBPActionDelegate(class FName EventTag);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	bool IsSmallPhotoMode();
	void PlayUISoundCommon();
	class UJackPhotoModeManager* GetPhotoModeManager();
	void HideHUD(bool bIsHide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Photo_000_modern_C">();
	}
	static class UWBP_Hud_Photo_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Photo_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Photo_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Photo_000_modern_C");
static_assert(sizeof(UWBP_Hud_Photo_000_modern_C) == 0x0005C8, "Wrong size on UWBP_Hud_Photo_000_modern_C");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Hud_Photo_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, FadeOutAnim) == 0x000408, "Member 'UWBP_Hud_Photo_000_modern_C::FadeOutAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PhotoAnim) == 0x000410, "Member 'UWBP_Hud_Photo_000_modern_C::PhotoAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Arrow) == 0x000418, "Member 'UWBP_Hud_Photo_000_modern_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Base_01) == 0x000420, "Member 'UWBP_Hud_Photo_000_modern_C::Base_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Base_02) == 0x000428, "Member 'UWBP_Hud_Photo_000_modern_C::Base_02' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Button_Icon) == 0x000430, "Member 'UWBP_Hud_Photo_000_modern_C::Button_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, CaptionPanel) == 0x000438, "Member 'UWBP_Hud_Photo_000_modern_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, CaptionPanel_0) == 0x000440, "Member 'UWBP_Hud_Photo_000_modern_C::CaptionPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Frame) == 0x000448, "Member 'UWBP_Hud_Photo_000_modern_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Frame_0) == 0x000450, "Member 'UWBP_Hud_Photo_000_modern_C::Frame_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, HomeButton) == 0x000458, "Member 'UWBP_Hud_Photo_000_modern_C::HomeButton' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PauseWindow) == 0x000460, "Member 'UWBP_Hud_Photo_000_modern_C::PauseWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PhotoFlame) == 0x000468, "Member 'UWBP_Hud_Photo_000_modern_C::PhotoFlame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PhotoFlame_00) == 0x000470, "Member 'UWBP_Hud_Photo_000_modern_C::PhotoFlame_00' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PhotoFlame_01) == 0x000478, "Member 'UWBP_Hud_Photo_000_modern_C::PhotoFlame_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PreviewBg) == 0x000480, "Member 'UWBP_Hud_Photo_000_modern_C::PreviewBg' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PreviewImage) == 0x000488, "Member 'UWBP_Hud_Photo_000_modern_C::PreviewImage' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PreviewPanel) == 0x000490, "Member 'UWBP_Hud_Photo_000_modern_C::PreviewPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, RootPanel) == 0x000498, "Member 'UWBP_Hud_Photo_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, RTButton) == 0x0004A0, "Member 'UWBP_Hud_Photo_000_modern_C::RTButton' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, SatueiImage_00) == 0x0004A8, "Member 'UWBP_Hud_Photo_000_modern_C::SatueiImage_00' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, SatueiImage_01) == 0x0004B0, "Member 'UWBP_Hud_Photo_000_modern_C::SatueiImage_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, SatueiPanel_01) == 0x0004B8, "Member 'UWBP_Hud_Photo_000_modern_C::SatueiPanel_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, SatueiPanel_xbox) == 0x0004C0, "Member 'UWBP_Hud_Photo_000_modern_C::SatueiPanel_xbox' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Text_Satsuei) == 0x0004C8, "Member 'UWBP_Hud_Photo_000_modern_C::Text_Satsuei' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Text_SS) == 0x0004D0, "Member 'UWBP_Hud_Photo_000_modern_C::Text_SS' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Text_Uikesu) == 0x0004D8, "Member 'UWBP_Hud_Photo_000_modern_C::Text_Uikesu' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, TextListPanel) == 0x0004E0, "Member 'UWBP_Hud_Photo_000_modern_C::TextListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Paets_Text_Icon_080_00) == 0x0004E8, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Paets_Text_Icon_080_00' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Paets_Text_Icon_080_01) == 0x0004F0, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Paets_Text_Icon_080_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Paets_Text_Icon_080_02) == 0x0004F8, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Paets_Text_Icon_080_02' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Paets_Text_Icon_080_03) == 0x000500, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Paets_Text_Icon_080_03' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Paets_Text_Icon_080_04) == 0x000508, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Paets_Text_Icon_080_04' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Parts_Text_Icon_080_05) == 0x000510, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Parts_Text_Icon_080_05' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Parts_Text_Icon_080_06) == 0x000518, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Parts_Text_Icon_080_06' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WBP_Menu_Parts_Text_Icon_080_07) == 0x000520, "Member 'UWBP_Hud_Photo_000_modern_C::WBP_Menu_Parts_Text_Icon_080_07' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, WindowFrame) == 0x000528, "Member 'UWBP_Hud_Photo_000_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, Ybutton) == 0x000530, "Member 'UWBP_Hud_Photo_000_modern_C::Ybutton' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteType) == 0x000538, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteType' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, IsRelocate) == 0x000539, "Member 'UWBP_Hud_Photo_000_modern_C::IsRelocate' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, FadeSeconds) == 0x00053C, "Member 'UWBP_Hud_Photo_000_modern_C::FadeSeconds' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PushButton) == 0x000540, "Member 'UWBP_Hud_Photo_000_modern_C::PushButton' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, IsKeyDisable) == 0x000548, "Member 'UWBP_Hud_Photo_000_modern_C::IsKeyDisable' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, CaptionTextId) == 0x000550, "Member 'UWBP_Hud_Photo_000_modern_C::CaptionTextId' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteIndex) == 0x000560, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteIndex_Hoimi) == 0x000564, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteIndex_Hoimi' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteIndex_Mera) == 0x000568, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteIndex_Mera' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteIndex_Hyado) == 0x00056C, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteIndex_Hyado' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PrevEmoteType) == 0x000570, "Member 'UWBP_Hud_Photo_000_modern_C::PrevEmoteType' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, PhotoModeCharacter) == 0x000578, "Member 'UWBP_Hud_Photo_000_modern_C::PhotoModeCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, CharaPositionResetLength) == 0x000588, "Member 'UWBP_Hud_Photo_000_modern_C::CharaPositionResetLength' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, LookAtMode) == 0x00058C, "Member 'UWBP_Hud_Photo_000_modern_C::LookAtMode' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, IsInputDisable) == 0x00058D, "Member 'UWBP_Hud_Photo_000_modern_C::IsInputDisable' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, RelocationCount) == 0x000590, "Member 'UWBP_Hud_Photo_000_modern_C::RelocationCount' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, AlignmentType) == 0x000594, "Member 'UWBP_Hud_Photo_000_modern_C::AlignmentType' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, IsFirstRelocation) == 0x000598, "Member 'UWBP_Hud_Photo_000_modern_C::IsFirstRelocation' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, IsHideHud) == 0x000599, "Member 'UWBP_Hud_Photo_000_modern_C::IsHideHud' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EnterButtonIcon) == 0x0005A0, "Member 'UWBP_Hud_Photo_000_modern_C::EnterButtonIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EnterButtonReverce) == 0x0005A8, "Member 'UWBP_Hud_Photo_000_modern_C::EnterButtonReverce' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EnterButtonNormal) == 0x0005B0, "Member 'UWBP_Hud_Photo_000_modern_C::EnterButtonNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteCancelButtonSwitch) == 0x0005B8, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteCancelButtonSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Photo_000_modern_C, EmoteCancelButtonPS4) == 0x0005C0, "Member 'UWBP_Hud_Photo_000_modern_C::EmoteCancelButtonPS4' has a wrong offset!");

}
