#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Mode_Select_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Namae_Mode_Select_000_modern.WBP_Menu_Namae_Mode_Select_000_modern_C
// 0x0078 (0x04E8 - 0x0470)
class UWBP_Menu_Namae_Mode_Select_000_modern_C final : public UJackUMGModeSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           TwoDMode;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ThreeDMode;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DummyList;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FadePanel;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_00;                                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sample_2D;                                         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sample_3D;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_2D;                                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_3D;                                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_modern;                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is2DMode;                                          // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TempTextID;                                        // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCancelBack;                                       // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Menu_Namae_Mode_Select_000_modern(int32 EntryPoint);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SelectYN(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex);
	void OnItemControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void KeyEventDelegate(EJackKeys InKeyType, bool bIsPressed);
	void BPActionDelegate(class FName EventTag);
	void SetSelectPosition();
	void GotoTheNextMenu();
	void GotoThePreviousMenu();
	void DisplayOn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Namae_Mode_Select_000_modern_C">();
	}
	static class UWBP_Menu_Namae_Mode_Select_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Namae_Mode_Select_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Namae_Mode_Select_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Namae_Mode_Select_000_modern_C");
static_assert(sizeof(UWBP_Menu_Namae_Mode_Select_000_modern_C) == 0x0004E8, "Wrong size on UWBP_Menu_Namae_Mode_Select_000_modern_C");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, UberGraphFrame) == 0x000470, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, TwoDMode) == 0x000478, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::TwoDMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, ThreeDMode) == 0x000480, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::ThreeDMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, DummyList) == 0x000488, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::DummyList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, FadePanel) == 0x000490, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::FadePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Glow_00) == 0x000498, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Glow_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, InvalidationBox_0) == 0x0004A0, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Sample_2D) == 0x0004A8, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Sample_2D' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Sample_3D) == 0x0004B0, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Sample_3D' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Text_2D) == 0x0004B8, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Text_2D' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Text_3D) == 0x0004C0, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Text_3D' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, WBP_Menu_Parts_000_modern) == 0x0004C8, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::WBP_Menu_Parts_000_modern' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, Is2DMode) == 0x0004D0, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::Is2DMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, TempTextID) == 0x0004D8, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::TempTextID' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Mode_Select_000_modern_C, bCancelBack) == 0x0004E0, "Member 'UWBP_Menu_Namae_Mode_Select_000_modern_C::bCancelBack' has a wrong offset!");

}
