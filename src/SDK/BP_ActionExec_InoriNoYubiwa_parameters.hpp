#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionExec_InoriNoYubiwa

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionExec_InoriNoYubiwa.BP_ActionExec_InoriNoYubiwa_C.ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsumeAction_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBattleParameterInoriNoYubiwaProb_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInBattle_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackMessageArgumentData>       CallFunc_GetMessageArgs_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	class FName                                   CallFunc_GetFieldActionMessageTextId_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowController*         CallFunc_GetSerifuWindowController_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa) == 0x000008, "Wrong alignment on BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa");
static_assert(sizeof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa) == 0x000068, "Wrong size on BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, EntryPoint) == 0x000000, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_IsConsumeAction_ReturnValue) == 0x000004, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_IsConsumeAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, K2Node_Event_EndPlayReason) == 0x000018, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetBattleManager_ReturnValue) == 0x000020, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetBattleParameterInoriNoYubiwaProb_ReturnValue) == 0x000028, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetBattleParameterInoriNoYubiwaProb_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_IsInBattle_ReturnValue) == 0x00002C, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_IsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_RandomFloat_ReturnValue) == 0x000030, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_Less_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetMessageArgs_ReturnValue) == 0x000038, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetMessageArgs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetFieldActionMessageTextId_ReturnValue) == 0x000048, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetFieldActionMessageTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetUMGManager_ReturnValue) == 0x000050, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue) == 0x000058, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa, CallFunc_GetSerifuWindowController_ReturnValue) == 0x000060, "Member 'BP_ActionExec_InoriNoYubiwa_C_ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa::CallFunc_GetSerifuWindowController_ReturnValue' has a wrong offset!");

// Function BP_ActionExec_InoriNoYubiwa.BP_ActionExec_InoriNoYubiwa_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay");
static_assert(sizeof(BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_ActionExec_InoriNoYubiwa_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_ActionExec_InoriNoYubiwa.BP_ActionExec_InoriNoYubiwa_C.GetItemData
// 0x02A0 (0x02A0 - 0x0000)
struct BP_ActionExec_InoriNoYubiwa_C_GetItemData final
{
public:
	EJackItem_Bag                                 BagType;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DouguId;                                           // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackActionPlayParam                   CallFunc_GetActionPlayParamBP_ReturnValue;         // 0x0010(0x0290)()
};
static_assert(alignof(BP_ActionExec_InoriNoYubiwa_C_GetItemData) == 0x000010, "Wrong alignment on BP_ActionExec_InoriNoYubiwa_C_GetItemData");
static_assert(sizeof(BP_ActionExec_InoriNoYubiwa_C_GetItemData) == 0x0002A0, "Wrong size on BP_ActionExec_InoriNoYubiwa_C_GetItemData");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_GetItemData, BagType) == 0x000000, "Member 'BP_ActionExec_InoriNoYubiwa_C_GetItemData::BagType' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_GetItemData, DouguId) == 0x000004, "Member 'BP_ActionExec_InoriNoYubiwa_C_GetItemData::DouguId' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_InoriNoYubiwa_C_GetItemData, CallFunc_GetActionPlayParamBP_ReturnValue) == 0x000010, "Member 'BP_ActionExec_InoriNoYubiwa_C_GetItemData::CallFunc_GetActionPlayParamBP_ReturnValue' has a wrong offset!");

}

