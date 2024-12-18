#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScheduledKira

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ScheduledKira.BP_ScheduledKira_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct BP_ScheduledKira_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0000(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScheduledKira_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_ScheduledKira_C_UserConstructionScript");
static_assert(sizeof(BP_ScheduledKira_C_UserConstructionScript) == 0x00000C, "Wrong size on BP_ScheduledKira_C_UserConstructionScript");
static_assert(offsetof(BP_ScheduledKira_C_UserConstructionScript, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000000, "Member 'BP_ScheduledKira_C_UserConstructionScript::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");

// Function BP_ScheduledKira.BP_ScheduledKira_C.OnSpawnKira
// 0x0080 (0x0080 - 0x0000)
struct BP_ScheduledKira_C_OnSpawnKira final
{
public:
	class FName                                   ItemID;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RespawnSaveFlagName;                               // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 KiraActor;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TreasureBox_Kira_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScheduledKira_C_OnSpawnKira) == 0x000010, "Wrong alignment on BP_ScheduledKira_C_OnSpawnKira");
static_assert(sizeof(BP_ScheduledKira_C_OnSpawnKira) == 0x000080, "Wrong size on BP_ScheduledKira_C_OnSpawnKira");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, ItemID) == 0x000000, "Member 'BP_ScheduledKira_C_OnSpawnKira::ItemID' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, ItemNum) == 0x000008, "Member 'BP_ScheduledKira_C_OnSpawnKira::ItemNum' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, Location) == 0x00000C, "Member 'BP_ScheduledKira_C_OnSpawnKira::Location' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, RespawnSaveFlagName) == 0x000018, "Member 'BP_ScheduledKira_C_OnSpawnKira::RespawnSaveFlagName' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, ReturnValue) == 0x000020, "Member 'BP_ScheduledKira_C_OnSpawnKira::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, KiraActor) == 0x000028, "Member 'BP_ScheduledKira_C_OnSpawnKira::KiraActor' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_ScheduledKira_C_OnSpawnKira::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BP_ScheduledKira_C_OnSpawnKira::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'BP_ScheduledKira_C_OnSpawnKira::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnSpawnKira, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000070, "Member 'BP_ScheduledKira_C_OnSpawnKira::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ScheduledKira.BP_ScheduledKira_C.OnRequestDestroy
// 0x0020 (0x0020 - 0x0000)
struct BP_ScheduledKira_C_OnRequestDestroy final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Accept;                                            // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TreasureBox_Kira_C*                 K2Node_DynamicCast_AsBP_Treasure_Box_Kira;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestDestroy_Accept;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScheduledKira_C_OnRequestDestroy) == 0x000008, "Wrong alignment on BP_ScheduledKira_C_OnRequestDestroy");
static_assert(sizeof(BP_ScheduledKira_C_OnRequestDestroy) == 0x000020, "Wrong size on BP_ScheduledKira_C_OnRequestDestroy");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, Actor) == 0x000000, "Member 'BP_ScheduledKira_C_OnRequestDestroy::Actor' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, ReturnValue) == 0x000008, "Member 'BP_ScheduledKira_C_OnRequestDestroy::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, Accept) == 0x000009, "Member 'BP_ScheduledKira_C_OnRequestDestroy::Accept' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, K2Node_DynamicCast_AsBP_Treasure_Box_Kira) == 0x000010, "Member 'BP_ScheduledKira_C_OnRequestDestroy::K2Node_DynamicCast_AsBP_Treasure_Box_Kira' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ScheduledKira_C_OnRequestDestroy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ScheduledKira_C_OnRequestDestroy, CallFunc_RequestDestroy_Accept) == 0x000019, "Member 'BP_ScheduledKira_C_OnRequestDestroy::CallFunc_RequestDestroy_Accept' has a wrong offset!");

}

