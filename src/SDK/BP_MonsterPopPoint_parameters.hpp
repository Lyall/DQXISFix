#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterPopPoint

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MonsterPopPoint.BP_MonsterPopPoint_C.ExecuteUbergraph_BP_MonsterPopPoint
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestToPop_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint) == 0x000004, "Wrong alignment on BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint");
static_assert(sizeof(BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint) == 0x000008, "Wrong size on BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint");
static_assert(offsetof(BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint, EntryPoint) == 0x000000, "Member 'BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint, CallFunc_RequestToPop_ReturnValue) == 0x000004, "Member 'BP_MonsterPopPoint_C_ExecuteUbergraph_BP_MonsterPopPoint::CallFunc_RequestToPop_ReturnValue' has a wrong offset!");

// Function BP_MonsterPopPoint.BP_MonsterPopPoint_C.UserConstructionScript
// 0x0210 (0x0210 - 0x0000)
struct BP_MonsterPopPoint_C_UserConstructionScript final
{
public:
	class FName                                   DisplayMonsterId;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameWorld_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetMonsterDeployHeadId_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackDataTableMonster                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0108)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12B[0x5];                                      // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackMonsterCharacter*                  CallFunc_LoadMonsterClass_ReturnValue;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0178(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue2;       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MonsterPopPoint_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_MonsterPopPoint_C_UserConstructionScript");
static_assert(sizeof(BP_MonsterPopPoint_C_UserConstructionScript) == 0x000210, "Wrong size on BP_MonsterPopPoint_C_UserConstructionScript");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, DisplayMonsterId) == 0x000000, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::DisplayMonsterId' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_IsGameWorld_ReturnValue) == 0x000008, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_IsGameWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_GetMonsterDeployHeadId_ReturnValue) == 0x000010, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_GetMonsterDeployHeadId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000128, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_NotEqual_NameName_ReturnValue) == 0x000129, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x00012A, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_LoadMonsterClass_ReturnValue) == 0x000130, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_LoadMonsterClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue2) == 0x000138, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000139, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000140, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000170, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000178, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_UserConstructionScript, CallFunc_NotEqual_ObjectObject_ReturnValue2) == 0x000200, "Member 'BP_MonsterPopPoint_C_UserConstructionScript::CallFunc_NotEqual_ObjectObject_ReturnValue2' has a wrong offset!");

// Function BP_MonsterPopPoint.BP_MonsterPopPoint_C.IsNecessaryToPop
// 0x0004 (0x0004 - 0x0000)
struct BP_MonsterPopPoint_C_IsNecessaryToPop final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue2;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MonsterPopPoint_C_IsNecessaryToPop) == 0x000001, "Wrong alignment on BP_MonsterPopPoint_C_IsNecessaryToPop");
static_assert(sizeof(BP_MonsterPopPoint_C_IsNecessaryToPop) == 0x000004, "Wrong size on BP_MonsterPopPoint_C_IsNecessaryToPop");
static_assert(offsetof(BP_MonsterPopPoint_C_IsNecessaryToPop, ReturnValue) == 0x000000, "Member 'BP_MonsterPopPoint_C_IsNecessaryToPop::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_IsNecessaryToPop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000001, "Member 'BP_MonsterPopPoint_C_IsNecessaryToPop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_IsNecessaryToPop, CallFunc_LessEqual_IntInt_ReturnValue2) == 0x000002, "Member 'BP_MonsterPopPoint_C_IsNecessaryToPop::CallFunc_LessEqual_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_IsNecessaryToPop, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_MonsterPopPoint_C_IsNecessaryToPop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MonsterPopPoint.BP_MonsterPopPoint_C.OverrideMonsterDeployTable
// 0x0010 (0x0010 - 0x0000)
struct BP_MonsterPopPoint_C_OverrideMonsterDeployTable final
{
public:
	class UDataTable*                             InTableAsset;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          bResult;                                           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable) == 0x000008, "Wrong alignment on BP_MonsterPopPoint_C_OverrideMonsterDeployTable");
static_assert(sizeof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable) == 0x000010, "Wrong size on BP_MonsterPopPoint_C_OverrideMonsterDeployTable");
static_assert(offsetof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable, InTableAsset) == 0x000000, "Member 'BP_MonsterPopPoint_C_OverrideMonsterDeployTable::InTableAsset' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable, ReturnValue) == 0x000008, "Member 'BP_MonsterPopPoint_C_OverrideMonsterDeployTable::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable, bResult) == 0x000009, "Member 'BP_MonsterPopPoint_C_OverrideMonsterDeployTable::bResult' has a wrong offset!");
static_assert(offsetof(BP_MonsterPopPoint_C_OverrideMonsterDeployTable, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00000A, "Member 'BP_MonsterPopPoint_C_OverrideMonsterDeployTable::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

