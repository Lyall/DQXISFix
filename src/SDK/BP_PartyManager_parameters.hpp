#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PartyManager

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_PartyManager.BP_PartyManager_C.ExecuteUbergraph_BP_PartyManager
// 0x0050 (0x0050 - 0x0000)
struct BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Vehicle;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bMustTransferPossess;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackVehicleMonster*                    K2Node_DynamicCast_AsJack_Vehicle_Monster;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackMessageArgumentData>       Temp_struct_Variable;                              // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue;  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowLatentMessageEndResult* CallFunc_WaitMessageEndFromBP_Result;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager) == 0x000008, "Wrong alignment on BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager");
static_assert(sizeof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager) == 0x000050, "Wrong size on BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, EntryPoint) == 0x000000, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, K2Node_Event_Vehicle) == 0x000008, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::K2Node_Event_Vehicle' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, K2Node_Event_bMustTransferPossess) == 0x000010, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::K2Node_Event_bMustTransferPossess' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, K2Node_DynamicCast_AsJack_Vehicle_Monster) == 0x000018, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::K2Node_DynamicCast_AsJack_Vehicle_Monster' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, Temp_struct_Variable) == 0x000028, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, CallFunc_NotEqual_NameName_ReturnValue) == 0x000038, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue) == 0x000040, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager, CallFunc_WaitMessageEndFromBP_Result) == 0x000048, "Member 'BP_PartyManager_C_ExecuteUbergraph_BP_PartyManager::CallFunc_WaitMessageEndFromBP_Result' has a wrong offset!");

// Function BP_PartyManager.BP_PartyManager_C.OnVehicleSpawnMessage
// 0x0010 (0x0010 - 0x0000)
struct BP_PartyManager_C_OnVehicleSpawnMessage final
{
public:
	class AActor*                                 Vehicle;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMustTransferPossess;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PartyManager_C_OnVehicleSpawnMessage) == 0x000008, "Wrong alignment on BP_PartyManager_C_OnVehicleSpawnMessage");
static_assert(sizeof(BP_PartyManager_C_OnVehicleSpawnMessage) == 0x000010, "Wrong size on BP_PartyManager_C_OnVehicleSpawnMessage");
static_assert(offsetof(BP_PartyManager_C_OnVehicleSpawnMessage, Vehicle) == 0x000000, "Member 'BP_PartyManager_C_OnVehicleSpawnMessage::Vehicle' has a wrong offset!");
static_assert(offsetof(BP_PartyManager_C_OnVehicleSpawnMessage, bMustTransferPossess) == 0x000008, "Member 'BP_PartyManager_C_OnVehicleSpawnMessage::bMustTransferPossess' has a wrong offset!");

// Function BP_PartyManager.BP_PartyManager_C.SetGamePlayerCondition
// 0x0001 (0x0001 - 0x0000)
struct BP_PartyManager_C_SetGamePlayerCondition final
{
public:
	bool                                          bDisable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PartyManager_C_SetGamePlayerCondition) == 0x000001, "Wrong alignment on BP_PartyManager_C_SetGamePlayerCondition");
static_assert(sizeof(BP_PartyManager_C_SetGamePlayerCondition) == 0x000001, "Wrong size on BP_PartyManager_C_SetGamePlayerCondition");
static_assert(offsetof(BP_PartyManager_C_SetGamePlayerCondition, bDisable) == 0x000000, "Member 'BP_PartyManager_C_SetGamePlayerCondition::bDisable' has a wrong offset!");

}

