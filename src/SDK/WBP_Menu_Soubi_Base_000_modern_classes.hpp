#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Soubi_Base_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Soubi_Base_000_modern.WBP_Menu_Soubi_Base_000_modern_C
// 0x0090 (0x0400 - 0x0370)
class UWBP_Menu_Soubi_Base_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInCapture;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CloseAnim;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Stick_R_001;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Stick_R_002;                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Stick_ZR;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SoubiBg;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Caption_Slide;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Caption_Zoom;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Plus;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_CharacterCapture_000_C* WBP_Menu_Parts_CharacterCapture_000;               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EJackCharacter                                SelectedCharaType;                                 // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterName;                                     // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsCloseWindow;                                     // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExecOpenAnim;                                    // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Menu_Soubi_Base_000_modern(int32 EntryPoint);
	void StartClosingCapture();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void IsDisableCharactorControl(bool bIsDisableCharacterControl);
	void DoCloseSoubiWindow();
	void SetDebugTargetSize(bool bVisible, const struct FVector2D& SlideTargetOrigin, const struct FVector2D& MaxSlideTargetSize, const struct FVector2D& MinSlideTargetSize);
	void ResetCaptureCameraPosition();
	void HideDebugTargetSize();
	void HideDebugInfo();
	void ShowDebugTargetSize();
	void ShowDebugInfo();
	void Construct();
	void JackOnWidgetNotificationDelegate_Event_0(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject);
	void WidgetBPActionDelegate(class FName EventTag);
	void SetCharactor(EJackCharacter InCharaType);
	void UpdateCharacter();
	void PlayOpenCloseAnim(bool IsCloseAnim, float PlaybackSpeed, float* AnimEndTime);
	void DispSoubiList(TArray<class UWBP_Menu_Soubi_Item_000_modern_C*>& InItem000List, class UJackUMGSoubiList* InSoubiList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Soubi_Base_000_modern_C">();
	}
	static class UWBP_Menu_Soubi_Base_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Soubi_Base_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Soubi_Base_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Soubi_Base_000_modern_C");
static_assert(sizeof(UWBP_Menu_Soubi_Base_000_modern_C) == 0x000400, "Wrong size on UWBP_Menu_Soubi_Base_000_modern_C");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, FadeInCapture) == 0x000378, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::FadeInCapture' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, CloseAnim) == 0x000380, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::CloseAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, BG) == 0x000388, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Button_Stick_R_001) == 0x000390, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Button_Stick_R_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Button_Stick_R_002) == 0x000398, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Button_Stick_R_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Button_Stick_ZR) == 0x0003A0, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Button_Stick_ZR' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Image_0) == 0x0003A8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, SoubiBg) == 0x0003B0, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::SoubiBg' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Text_Caption_Slide) == 0x0003B8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Text_Caption_Slide' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Text_Caption_Zoom) == 0x0003C0, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Text_Caption_Zoom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, Text_Plus) == 0x0003C8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::Text_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, WBP_Menu_Parts_037) == 0x0003D0, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::WBP_Menu_Parts_037' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, WBP_Menu_Parts_CharacterCapture_000) == 0x0003D8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::WBP_Menu_Parts_CharacterCapture_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, SelectedCharaType) == 0x0003E0, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::SelectedCharaType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, CharacterName) == 0x0003E8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, IsCloseWindow) == 0x0003F8, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::IsCloseWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Soubi_Base_000_modern_C, IsExecOpenAnim) == 0x0003F9, "Member 'UWBP_Menu_Soubi_Base_000_modern_C::IsExecOpenAnim' has a wrong offset!");

}
