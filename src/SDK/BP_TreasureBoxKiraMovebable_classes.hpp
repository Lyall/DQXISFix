#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureBoxKiraMovebable

#include "Basic.hpp"

#include "BP_TreasureBox_Kira_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// DynamicClass BP_TreasureBoxKiraMovebable.BP_TreasureBoxKiraMovebable_C
// 0x00D0 (0x1038 - 0x0F68)
class ABP_TreasureBoxKiraMovebable_C final : public ABP_TreasureBox_Kira_C
{
public:
	TArray<float>                                 ParabolaParam;                                     // 0x0F68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         EndSec;                                            // 0x0F78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Start;                                             // 0x0F7C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                End;                                               // 0x0F88(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NowSec;                                            // 0x0F94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayStartDownSec;                                 // 0x0F98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CallFunc_CreateNowLocation_Location;               // 0x0F9C(0x000C)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0FA8(0x0088)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x1030(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1034[0x4];                                     // 0x1034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CreateNowLocation(float bpp__NowSec__pf, struct FVector* bpp__Location__pf);
	void GetZ(float bpp__InputPin__pf, float* bpp__Z__pf);
	void MakeRandomRotator(const struct FRotator& bpp__RotCenter__pf, const struct FRotator& bpp__RotHalfRange__pf, struct FRotator* bpp__Rotator__pf);
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void SetMoveParam(TArray<float>* bpp__ParabolaParamZ__pf, const struct FVector& bpp__Start__pf, const struct FVector& bpp__End__pf, float bpp__DelaySec__pf);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_TreasureBoxKiraMovebable_C">();
	}
	static class ABP_TreasureBoxKiraMovebable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBoxKiraMovebable_C>();
	}
};
static_assert(alignof(ABP_TreasureBoxKiraMovebable_C) == 0x000008, "Wrong alignment on ABP_TreasureBoxKiraMovebable_C");
static_assert(sizeof(ABP_TreasureBoxKiraMovebable_C) == 0x001038, "Wrong size on ABP_TreasureBoxKiraMovebable_C");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, ParabolaParam) == 0x000F68, "Member 'ABP_TreasureBoxKiraMovebable_C::ParabolaParam' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, EndSec) == 0x000F78, "Member 'ABP_TreasureBoxKiraMovebable_C::EndSec' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, Start) == 0x000F7C, "Member 'ABP_TreasureBoxKiraMovebable_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, End) == 0x000F88, "Member 'ABP_TreasureBoxKiraMovebable_C::End' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, NowSec) == 0x000F94, "Member 'ABP_TreasureBoxKiraMovebable_C::NowSec' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, DelayStartDownSec) == 0x000F98, "Member 'ABP_TreasureBoxKiraMovebable_C::DelayStartDownSec' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, CallFunc_CreateNowLocation_Location) == 0x000F9C, "Member 'ABP_TreasureBoxKiraMovebable_C::CallFunc_CreateNowLocation_Location' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000FA8, "Member 'ABP_TreasureBoxKiraMovebable_C::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxKiraMovebable_C, K2Node_Event_DeltaSeconds) == 0x001030, "Member 'ABP_TreasureBoxKiraMovebable_C::K2Node_Event_DeltaSeconds' has a wrong offset!");

}

