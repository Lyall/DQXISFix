#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_WHP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_WHP.ABP_WHP_C
// 0x0160 (0x0D40 - 0x0BE0)
class UABP_WHP_C final : public UJackAnimInstance
{
public:
	uint8                                         Pad_BD8[0x8];                                      // 0x0BD8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BE0(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_CBD6398F49B5C2C9321D1C817C2E770A; // 0x0BE8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5DE7C3ED423D0BEC7CDC70AAC6B49DF9; // 0x0C30(0x0068)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_35A833BB47A84DFC33D044B023A087CF; // 0x0C98(0x0068)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_3C89E0BA49BF5D27702696AE21278FF7; // 0x0D00(0x0038)()

public:
	void ExecuteUbergraph_ABP_WHP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_WHP_C">();
	}
	static class UABP_WHP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_WHP_C>();
	}
};
static_assert(alignof(UABP_WHP_C) == 0x000010, "Wrong alignment on UABP_WHP_C");
static_assert(sizeof(UABP_WHP_C) == 0x000D40, "Wrong size on UABP_WHP_C");
static_assert(offsetof(UABP_WHP_C, UberGraphFrame) == 0x000BE0, "Member 'UABP_WHP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_WHP_C, AnimGraphNode_Root_CBD6398F49B5C2C9321D1C817C2E770A) == 0x000BE8, "Member 'UABP_WHP_C::AnimGraphNode_Root_CBD6398F49B5C2C9321D1C817C2E770A' has a wrong offset!");
static_assert(offsetof(UABP_WHP_C, AnimGraphNode_Slot_5DE7C3ED423D0BEC7CDC70AAC6B49DF9) == 0x000C30, "Member 'UABP_WHP_C::AnimGraphNode_Slot_5DE7C3ED423D0BEC7CDC70AAC6B49DF9' has a wrong offset!");
static_assert(offsetof(UABP_WHP_C, AnimGraphNode_Slot_35A833BB47A84DFC33D044B023A087CF) == 0x000C98, "Member 'UABP_WHP_C::AnimGraphNode_Slot_35A833BB47A84DFC33D044B023A087CF' has a wrong offset!");
static_assert(offsetof(UABP_WHP_C, AnimGraphNode_LocalRefPose_3C89E0BA49BF5D27702696AE21278FF7) == 0x000D00, "Member 'UABP_WHP_C::AnimGraphNode_LocalRefPose_3C89E0BA49BF5D27702696AE21278FF7' has a wrong offset!");

}
