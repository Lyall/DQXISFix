#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcAttachmentAnimation

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NpcAttachmentAnimation.BP_NpcAttachmentAnimation_C.ExecuteUbergraph_BP_NpcAttachmentAnimation
// 0x0008 (0x0008 - 0x0000)
struct BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bNewHiddenInGame;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation) == 0x000004, "Wrong alignment on BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation");
static_assert(sizeof(BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation) == 0x000008, "Wrong size on BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation");
static_assert(offsetof(BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation, EntryPoint) == 0x000000, "Member 'BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation, K2Node_Event_bNewHiddenInGame) == 0x000004, "Member 'BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation::K2Node_Event_bNewHiddenInGame' has a wrong offset!");
static_assert(offsetof(BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_NpcAttachmentAnimation_C_ExecuteUbergraph_BP_NpcAttachmentAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_NpcAttachmentAnimation.BP_NpcAttachmentAnimation_C.OnHiddenInGameChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged final
{
public:
	bool                                          bNewHiddenInGame;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged) == 0x000001, "Wrong alignment on BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged");
static_assert(sizeof(BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged) == 0x000001, "Wrong size on BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged");
static_assert(offsetof(BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged, bNewHiddenInGame) == 0x000000, "Member 'BP_NpcAttachmentAnimation_C_OnHiddenInGameChanged::bNewHiddenInGame' has a wrong offset!");

}
