#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleFieldCollision

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.ExecuteUbergraph_BP_BattleFieldCollision
// 0x0080 (0x0080 - 0x0000)
struct BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0010(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackBattleManager*                     CallFunc_GetBattleManager_ReturnValue2;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInfinityBattleField_ReturnValue;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue3;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CalcDecalColorA_ColorA;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackBattleManager*                     CallFunc_GetBattleManager_ReturnValue3;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNigeruEnable_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0054(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision) == 0x000008, "Wrong alignment on BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision");
static_assert(sizeof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision) == 0x000080, "Wrong size on BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, EntryPoint) == 0x000000, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Add_VectorVector_ReturnValue) == 0x000010, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_GetBattleManager_ReturnValue) == 0x000020, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, K2Node_Event_EndPlayReason) == 0x000028, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_GetBattleManager_ReturnValue2) == 0x000030, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_GetBattleManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_IsInfinityBattleField_ReturnValue) == 0x000039, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_IsInfinityBattleField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_IsValid_ReturnValue2) == 0x00003A, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Not_PreBool_ReturnValue) == 0x00003B, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_BooleanAND_ReturnValue2) == 0x00003C, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_BooleanAND_ReturnValue3) == 0x00003D, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_BooleanAND_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_CalcDecalColorA_ColorA) == 0x000040, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_CalcDecalColorA_ColorA' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_GetBattleManager_ReturnValue3) == 0x000048, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_GetBattleManager_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_IsNigeruEnable_ReturnValue) == 0x000050, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_IsNigeruEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_SelectColor_ReturnValue) == 0x000054, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000064, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'BP_BattleFieldCollision_C_ExecuteUbergraph_BP_BattleFieldCollision::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleFieldCollision_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFieldCollision_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_BattleFieldCollision_C_ReceiveEndPlay");
static_assert(sizeof(BP_BattleFieldCollision_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_BattleFieldCollision_C_ReceiveEndPlay");
static_assert(offsetof(BP_BattleFieldCollision_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_BattleFieldCollision_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleFieldCollision_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFieldCollision_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BattleFieldCollision_C_ReceiveTick");
static_assert(sizeof(BP_BattleFieldCollision_C_ReceiveTick) == 0x000004, "Wrong size on BP_BattleFieldCollision_C_ReceiveTick");
static_assert(offsetof(BP_BattleFieldCollision_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BattleFieldCollision_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.CreateWall
// 0x0140 (0x0140 - 0x0000)
struct BP_BattleFieldCollision_C_CreateWall final
{
public:
	int32                                         DivisionCount;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BattleFieldLocation_0;                             // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BattleFieldRadius_0;                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DecalEnable;                                       // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegSin_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue3;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0048(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0058(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0064(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0070(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue2;                 // 0x007C(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0xC];                                       // 0x0094(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BattleFieldWall_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x00F4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue2;               // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            CallFunc_FinishSpawningActor_ReturnValue2;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFieldCollision_C_CreateWall) == 0x000010, "Wrong alignment on BP_BattleFieldCollision_C_CreateWall");
static_assert(sizeof(BP_BattleFieldCollision_C_CreateWall) == 0x000140, "Wrong size on BP_BattleFieldCollision_C_CreateWall");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, DivisionCount) == 0x000000, "Member 'BP_BattleFieldCollision_C_CreateWall::DivisionCount' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, BattleFieldLocation_0) == 0x000004, "Member 'BP_BattleFieldCollision_C_CreateWall::BattleFieldLocation_0' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, BattleFieldRadius_0) == 0x000010, "Member 'BP_BattleFieldCollision_C_CreateWall::BattleFieldRadius_0' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, DecalEnable) == 0x000014, "Member 'BP_BattleFieldCollision_C_CreateWall::DecalEnable' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, Temp_int_Variable) == 0x000028, "Member 'BP_BattleFieldCollision_C_CreateWall::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_DegSin_ReturnValue) == 0x00002C, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_DegSin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x000030, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x000034, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Divide_FloatFloat_ReturnValue2) == 0x000038, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Divide_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x00003C, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Multiply_FloatFloat_ReturnValue4) == 0x000040, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Multiply_FloatFloat_ReturnValue4' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Divide_FloatFloat_ReturnValue3) == 0x000044, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Divide_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeRotator_ReturnValue) == 0x000048, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000054, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_GetForwardVector_ReturnValue) == 0x000058, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeVector_ReturnValue) == 0x000064, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000070, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeRotator_ReturnValue2) == 0x00007C, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeRotator_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D8, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E0, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000E8, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_Array_Add_ReturnValue) == 0x0000F0, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeVector_ReturnValue2) == 0x0000F4, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_MakeTransform_ReturnValue2) == 0x000100, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_MakeTransform_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2) == 0x000130, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CreateWall, CallFunc_FinishSpawningActor_ReturnValue2) == 0x000138, "Member 'BP_BattleFieldCollision_C_CreateWall::CallFunc_FinishSpawningActor_ReturnValue2' has a wrong offset!");

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.SetHiddenDecal
// 0x0002 (0x0002 - 0x0000)
struct BP_BattleFieldCollision_C_SetHiddenDecal final
{
public:
	bool                                          bHidden_0;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleFieldCollision_C_SetHiddenDecal) == 0x000001, "Wrong alignment on BP_BattleFieldCollision_C_SetHiddenDecal");
static_assert(sizeof(BP_BattleFieldCollision_C_SetHiddenDecal) == 0x000002, "Wrong size on BP_BattleFieldCollision_C_SetHiddenDecal");
static_assert(offsetof(BP_BattleFieldCollision_C_SetHiddenDecal, bHidden_0) == 0x000000, "Member 'BP_BattleFieldCollision_C_SetHiddenDecal::bHidden_0' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_SetHiddenDecal, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_BattleFieldCollision_C_SetHiddenDecal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleFieldCollision.BP_BattleFieldCollision_C.CalcDecalColorA
// 0x0024 (0x0024 - 0x0000)
struct BP_BattleFieldCollision_C_CalcDecalColorA final
{
public:
	float                                         ColorA;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLengthPlayerToBattleFieldCenter_Length; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeToRange_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue3;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleFieldCollision_C_CalcDecalColorA) == 0x000004, "Wrong alignment on BP_BattleFieldCollision_C_CalcDecalColorA");
static_assert(sizeof(BP_BattleFieldCollision_C_CalcDecalColorA) == 0x000024, "Wrong size on BP_BattleFieldCollision_C_CalcDecalColorA");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, ColorA) == 0x000000, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::ColorA' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_GetLengthPlayerToBattleFieldCenter_Length) == 0x000008, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_GetLengthPlayerToBattleFieldCenter_Length' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_Subtract_FloatFloat_ReturnValue2) == 0x00000C, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_Subtract_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_NormalizeToRange_ReturnValue) == 0x000010, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_FClamp_ReturnValue) == 0x000014, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_Subtract_FloatFloat_ReturnValue3) == 0x000018, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_Subtract_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleFieldCollision_C_CalcDecalColorA, CallFunc_Add_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_BattleFieldCollision_C_CalcDecalColorA::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}
