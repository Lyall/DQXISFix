#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_Icon2

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Status_Icon2.WBP_Hud_Status_Icon2_C
// 0x0080 (0x0548 - 0x04C8)
class UWBP_Hud_Status_Icon2_C final : public UJackUMGHudStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           RootPanel;                                         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon_Plate_C*           Status_Plate_00;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon_Plate_C*           Status_Plate_01;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon_Plate_C*           Status_Plate_02;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon3_C*                StatusIcon3_0;                                     // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon3_C*                StatusIcon3_1;                                     // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon3_C*                StatusIcon3_2;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Hud_Status_Icon3_C*>        Debuff_Icon;                                       // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWBP_Hud_Status_Icon_Plate_C*>   Debuff_Plate;                                      // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         BadLoopCountOld;                                   // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BadLoopCount;                                      // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Length;                                            // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534[0x4];                                      // 0x0534(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackUMGOddEffectStatus>        BadStatus;                                         // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Hud_Status_Icon2(int32 EntryPoint);
	void SetBadJoutaiIjouList(const TArray<struct FJackUMGOddEffectStatus>& OddEffectList);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ArrayInitialize();
	void HiddenDebuff();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Status_Icon2_C">();
	}
	static class UWBP_Hud_Status_Icon2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Status_Icon2_C>();
	}
};
static_assert(alignof(UWBP_Hud_Status_Icon2_C) == 0x000008, "Wrong alignment on UWBP_Hud_Status_Icon2_C");
static_assert(sizeof(UWBP_Hud_Status_Icon2_C) == 0x000548, "Wrong size on UWBP_Hud_Status_Icon2_C");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_Hud_Status_Icon2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, RootPanel) == 0x0004D0, "Member 'UWBP_Hud_Status_Icon2_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Status_Plate_00) == 0x0004D8, "Member 'UWBP_Hud_Status_Icon2_C::Status_Plate_00' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Status_Plate_01) == 0x0004E0, "Member 'UWBP_Hud_Status_Icon2_C::Status_Plate_01' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Status_Plate_02) == 0x0004E8, "Member 'UWBP_Hud_Status_Icon2_C::Status_Plate_02' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, StatusIcon3_0) == 0x0004F0, "Member 'UWBP_Hud_Status_Icon2_C::StatusIcon3_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, StatusIcon3_1) == 0x0004F8, "Member 'UWBP_Hud_Status_Icon2_C::StatusIcon3_1' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, StatusIcon3_2) == 0x000500, "Member 'UWBP_Hud_Status_Icon2_C::StatusIcon3_2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Debuff_Icon) == 0x000508, "Member 'UWBP_Hud_Status_Icon2_C::Debuff_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Debuff_Plate) == 0x000518, "Member 'UWBP_Hud_Status_Icon2_C::Debuff_Plate' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, BadLoopCountOld) == 0x000528, "Member 'UWBP_Hud_Status_Icon2_C::BadLoopCountOld' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, BadLoopCount) == 0x00052C, "Member 'UWBP_Hud_Status_Icon2_C::BadLoopCount' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, Length) == 0x000530, "Member 'UWBP_Hud_Status_Icon2_C::Length' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_Icon2_C, BadStatus) == 0x000538, "Member 'UWBP_Hud_Status_Icon2_C::BadStatus' has a wrong offset!");

}

