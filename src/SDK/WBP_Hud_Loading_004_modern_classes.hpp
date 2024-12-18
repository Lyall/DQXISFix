#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Loading_004_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Loading_004_modern.WBP_Hud_Loading_004_modern_C
// 0x0078 (0x03E8 - 0x0370)
class UWBP_Hud_Loading_004_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Back_Ground;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Saving_Icon;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Saving_Icon_2;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsStartAnim;                                       // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x3];                                      // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TextAnimTimer;                                     // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextAnimCount;                                     // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           TextAnimName;                                      // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          IsPresentMode;                                     // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Hud_Loading_004_modern(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomEvent_0(class FName EventTag);
	void Construct();
	void SetAnimationIn();
	void SetCaption(class FName TextID);
	void SetPresentMode(bool IsPresent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Loading_004_modern_C">();
	}
	static class UWBP_Hud_Loading_004_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Loading_004_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Loading_004_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Loading_004_modern_C");
static_assert(sizeof(UWBP_Hud_Loading_004_modern_C) == 0x0003E8, "Wrong size on UWBP_Hud_Loading_004_modern_C");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Hud_Loading_004_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Out) == 0x000378, "Member 'UWBP_Hud_Loading_004_modern_C::Out' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, In) == 0x000380, "Member 'UWBP_Hud_Loading_004_modern_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Loop) == 0x000388, "Member 'UWBP_Hud_Loading_004_modern_C::Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Back_Ground) == 0x000390, "Member 'UWBP_Hud_Loading_004_modern_C::Back_Ground' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Base) == 0x000398, "Member 'UWBP_Hud_Loading_004_modern_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, RootPanel) == 0x0003A0, "Member 'UWBP_Hud_Loading_004_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Saving_Icon) == 0x0003A8, "Member 'UWBP_Hud_Loading_004_modern_C::Saving_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, Saving_Icon_2) == 0x0003B0, "Member 'UWBP_Hud_Loading_004_modern_C::Saving_Icon_2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, WBP_Menu_Parts_000) == 0x0003B8, "Member 'UWBP_Hud_Loading_004_modern_C::WBP_Menu_Parts_000' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, IsStartAnim) == 0x0003C0, "Member 'UWBP_Hud_Loading_004_modern_C::IsStartAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, TextAnimTimer) == 0x0003C4, "Member 'UWBP_Hud_Loading_004_modern_C::TextAnimTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, TextAnimCount) == 0x0003C8, "Member 'UWBP_Hud_Loading_004_modern_C::TextAnimCount' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, TextAnimName) == 0x0003D0, "Member 'UWBP_Hud_Loading_004_modern_C::TextAnimName' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Loading_004_modern_C, IsPresentMode) == 0x0003E0, "Member 'UWBP_Hud_Loading_004_modern_C::IsPresentMode' has a wrong offset!");

}

