#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LazyMessageManager

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.ExecuteUbergraph_BP_LazyMessageManager
// 0x0088 (0x0088 - 0x0000)
struct BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_AchieveId;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_OpenMenu_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_TextId;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FJackMessageArgumentData>       K2Node_Event_Args;                                 // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue;  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_RowName;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowLatentMessageEndResult* CallFunc_WaitMessageEndFromBP_Result;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTaughtTabiNoKokoroe_ReturnValue;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorCommon*                 CallFunc_ViewTabiNoKokoroe_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFading_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackPlayableCharacter*                 K2Node_DynamicCast_AsJack_Playable_Character;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasLazyMessage_ReturnValue;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNoFallWait_ReturnValue;                 // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager) == 0x000008, "Wrong alignment on BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager");
static_assert(sizeof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager) == 0x000088, "Wrong size on BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, EntryPoint) == 0x000000, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_Event_AchieveId) == 0x000010, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_Event_AchieveId' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_OpenMenu_ReturnValue) == 0x000018, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_OpenMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_Event_TextId) == 0x000028, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_Event_TextId' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_Event_Args) == 0x000030, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_Event_Args' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue) == 0x000040, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_Event_RowName) == 0x000048, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_Event_RowName' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_WaitMessageEndFromBP_Result) == 0x000050, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_WaitMessageEndFromBP_Result' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_IsTaughtTabiNoKokoroe_ReturnValue) == 0x000058, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_IsTaughtTabiNoKokoroe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_ViewTabiNoKokoroe_ReturnValue) == 0x000060, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_ViewTabiNoKokoroe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_GetJackPlayerCharacter_ReturnValue) == 0x000068, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_GetJackPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_IsEnableFading_ReturnValue) == 0x000070, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_IsEnableFading_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_DynamicCast_AsJack_Playable_Character) == 0x000078, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_DynamicCast_AsJack_Playable_Character' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_HasLazyMessage_ReturnValue) == 0x000081, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_HasLazyMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager, CallFunc_IsNoFallWait_ReturnValue) == 0x000082, "Member 'BP_LazyMessageManager_C_ExecuteUbergraph_BP_LazyMessageManager::CallFunc_IsNoFallWait_ReturnValue' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.OnViewTabiNoKokoroe
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_LazyMessageManager_C_OnViewTabiNoKokoroe final
{
public:
	class FName                                   RowName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LazyMessageManager_C_OnViewTabiNoKokoroe) == 0x000008, "Wrong alignment on BP_LazyMessageManager_C_OnViewTabiNoKokoroe");
static_assert(sizeof(BP_LazyMessageManager_C_OnViewTabiNoKokoroe) == 0x000008, "Wrong size on BP_LazyMessageManager_C_OnViewTabiNoKokoroe");
static_assert(offsetof(BP_LazyMessageManager_C_OnViewTabiNoKokoroe, RowName) == 0x000000, "Member 'BP_LazyMessageManager_C_OnViewTabiNoKokoroe::RowName' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.OnViewStartMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_LazyMessageManager_C_OnViewStartMessage final
{
public:
	class FName                                   TextID;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FJackMessageArgumentData>       Args;                                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(BP_LazyMessageManager_C_OnViewStartMessage) == 0x000008, "Wrong alignment on BP_LazyMessageManager_C_OnViewStartMessage");
static_assert(sizeof(BP_LazyMessageManager_C_OnViewStartMessage) == 0x000018, "Wrong size on BP_LazyMessageManager_C_OnViewStartMessage");
static_assert(offsetof(BP_LazyMessageManager_C_OnViewStartMessage, TextID) == 0x000000, "Member 'BP_LazyMessageManager_C_OnViewStartMessage::TextID' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_OnViewStartMessage, Args) == 0x000008, "Member 'BP_LazyMessageManager_C_OnViewStartMessage::Args' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_LazyMessageManager_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LazyMessageManager_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_LazyMessageManager_C_ReceiveTick");
static_assert(sizeof(BP_LazyMessageManager_C_ReceiveTick) == 0x000004, "Wrong size on BP_LazyMessageManager_C_ReceiveTick");
static_assert(offsetof(BP_LazyMessageManager_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_LazyMessageManager_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.OnViewStartAchievement
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_LazyMessageManager_C_OnViewStartAchievement final
{
public:
	class FName                                   AchieveId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LazyMessageManager_C_OnViewStartAchievement) == 0x000008, "Wrong alignment on BP_LazyMessageManager_C_OnViewStartAchievement");
static_assert(sizeof(BP_LazyMessageManager_C_OnViewStartAchievement) == 0x000008, "Wrong size on BP_LazyMessageManager_C_OnViewStartAchievement");
static_assert(offsetof(BP_LazyMessageManager_C_OnViewStartAchievement, AchieveId) == 0x000000, "Member 'BP_LazyMessageManager_C_OnViewStartAchievement::AchieveId' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.SetGameCondition
// 0x0001 (0x0001 - 0x0000)
struct BP_LazyMessageManager_C_SetGameCondition final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LazyMessageManager_C_SetGameCondition) == 0x000001, "Wrong alignment on BP_LazyMessageManager_C_SetGameCondition");
static_assert(sizeof(BP_LazyMessageManager_C_SetGameCondition) == 0x000001, "Wrong size on BP_LazyMessageManager_C_SetGameCondition");
static_assert(offsetof(BP_LazyMessageManager_C_SetGameCondition, bOn) == 0x000000, "Member 'BP_LazyMessageManager_C_SetGameCondition::bOn' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.SetPlayerMoveCondition
// 0x0002 (0x0002 - 0x0000)
struct BP_LazyMessageManager_C_SetPlayerMoveCondition final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNoFallWait_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LazyMessageManager_C_SetPlayerMoveCondition) == 0x000001, "Wrong alignment on BP_LazyMessageManager_C_SetPlayerMoveCondition");
static_assert(sizeof(BP_LazyMessageManager_C_SetPlayerMoveCondition) == 0x000002, "Wrong size on BP_LazyMessageManager_C_SetPlayerMoveCondition");
static_assert(offsetof(BP_LazyMessageManager_C_SetPlayerMoveCondition, Condition) == 0x000000, "Member 'BP_LazyMessageManager_C_SetPlayerMoveCondition::Condition' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_SetPlayerMoveCondition, CallFunc_IsNoFallWait_ReturnValue) == 0x000001, "Member 'BP_LazyMessageManager_C_SetPlayerMoveCondition::CallFunc_IsNoFallWait_ReturnValue' has a wrong offset!");

// Function BP_LazyMessageManager.BP_LazyMessageManager_C.IsNoFallWait
// 0x0006 (0x0006 - 0x0000)
struct BP_LazyMessageManager_C_IsNoFallWait final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	EJackVehicle                                  CallFunc_GetPlayerRidingVehicleType_ReturnValue;   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackHeroCharacterForm                        CallFunc_GetHeroCharacterForm_ReturnValue;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LazyMessageManager_C_IsNoFallWait) == 0x000001, "Wrong alignment on BP_LazyMessageManager_C_IsNoFallWait");
static_assert(sizeof(BP_LazyMessageManager_C_IsNoFallWait) == 0x000006, "Wrong size on BP_LazyMessageManager_C_IsNoFallWait");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, ReturnValue) == 0x000000, "Member 'BP_LazyMessageManager_C_IsNoFallWait::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, CallFunc_GetPlayerRidingVehicleType_ReturnValue) == 0x000001, "Member 'BP_LazyMessageManager_C_IsNoFallWait::CallFunc_GetPlayerRidingVehicleType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, CallFunc_GetHeroCharacterForm_ReturnValue) == 0x000002, "Member 'BP_LazyMessageManager_C_IsNoFallWait::CallFunc_GetHeroCharacterForm_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'BP_LazyMessageManager_C_IsNoFallWait::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000004, "Member 'BP_LazyMessageManager_C_IsNoFallWait::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_LazyMessageManager_C_IsNoFallWait, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'BP_LazyMessageManager_C_IsNoFallWait::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
