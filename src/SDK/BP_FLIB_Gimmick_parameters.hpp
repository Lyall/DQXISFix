#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_Gimmick

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_FLIB_Gimmick.BP_FLIB_Gimmick_C.RespawnSetting2ndScenarioTreasure
// 0x0190 (0x0190 - 0x0000)
struct BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FJackDataTableItemGettable_TreasureBox CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackDataTableItemGettable_TreasureBox CallFunc_GetDataTableRowFromName_OutRow2;          // 0x00E8(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue2;     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue2;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGameFlagInt_ReturnValue;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure) == 0x000008, "Wrong alignment on BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure");
static_assert(sizeof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure) == 0x000190, "Wrong size on BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, __WorldContext) == 0x000000, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Conv_NameToString_ReturnValue) == 0x000040, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Replace_ReturnValue) == 0x000050, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetDataTableRowFromName_OutRow2) == 0x0000E8, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetDataTableRowFromName_OutRow2' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetDataTableRowFromName_ReturnValue2) == 0x000160, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetDataTableRowFromName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_Conv_NameToString_ReturnValue2) == 0x000168, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_Conv_NameToString_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000178, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_FindSubstring_ReturnValue) == 0x00017C, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000180, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_GetGameFlagInt_ReturnValue) == 0x000184, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_GetGameFlagInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000188, "Member 'BP_FLIB_Gimmick_C_RespawnSetting2ndScenarioTreasure::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_FLIB_Gimmick.BP_FLIB_Gimmick_C.SetCompleteInteractionWithTag
// 0x0060 (0x0060 - 0x0000)
struct BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestartInteraction;                                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TempActors;                                        // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InteractiveBase_C*                  K2Node_DynamicCast_AsBP_Interactive_Base;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag) == 0x000008, "Wrong alignment on BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag");
static_assert(sizeof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag) == 0x000060, "Wrong size on BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, Tag) == 0x000000, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::Tag' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, RestartInteraction) == 0x000008, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::RestartInteraction' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, __WorldContext) == 0x000010, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, TempActors) == 0x000018, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::TempActors' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, CallFunc_GetAllActorsWithTag_OutActors) == 0x000028, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, K2Node_DynamicCast_AsBP_Interactive_Base) == 0x000050, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::K2Node_DynamicCast_AsBP_Interactive_Base' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_FLIB_Gimmick_C_SetCompleteInteractionWithTag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_FLIB_Gimmick.BP_FLIB_Gimmick_C.SetHorseCallLimitationForScenario
// 0x0010 (0x0010 - 0x0000)
struct BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario) == 0x000008, "Wrong alignment on BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario");
static_assert(sizeof(BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario) == 0x000010, "Wrong size on BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario, Enable) == 0x000000, "Member 'BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario::Enable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario, __WorldContext) == 0x000008, "Member 'BP_FLIB_Gimmick_C_SetHorseCallLimitationForScenario::__WorldContext' has a wrong offset!");

// Function BP_FLIB_Gimmick.BP_FLIB_Gimmick_C.StartUmaRace
// 0x0070 (0x0070 - 0x0000)
struct BP_FLIB_Gimmick_C_StartUmaRace final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TempName;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUmaRaceRank                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackMiniGameManager*                   CallFunc_GetMiniGameManager_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUmaRaceAccessor*                   CallFunc_GetUmaRaceAccessor_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUmaRaceRank                              CallFunc_GetSelectRank_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable2;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable3;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable4;                               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable5;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable6;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoteEventByLevel_Result;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FLIB_Gimmick_C_StartUmaRace) == 0x000008, "Wrong alignment on BP_FLIB_Gimmick_C_StartUmaRace");
static_assert(sizeof(BP_FLIB_Gimmick_C_StartUmaRace) == 0x000070, "Wrong size on BP_FLIB_Gimmick_C_StartUmaRace");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, __WorldContext) == 0x000000, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, TempName) == 0x000008, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::TempName' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_byte_Variable) == 0x000010, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, CallFunc_GetMiniGameManager_ReturnValue) == 0x000018, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::CallFunc_GetMiniGameManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable) == 0x000020, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, CallFunc_GetUmaRaceAccessor_ReturnValue) == 0x000028, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::CallFunc_GetUmaRaceAccessor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, CallFunc_GetSelectRank_ReturnValue) == 0x000030, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::CallFunc_GetSelectRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable2) == 0x000038, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable2' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable3) == 0x000040, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable3' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable4) == 0x000048, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable4' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable5) == 0x000050, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable5' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, Temp_name_Variable6) == 0x000058, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::Temp_name_Variable6' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, K2Node_Select_Default) == 0x000060, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FLIB_Gimmick_C_StartUmaRace, CallFunc_RemoteEventByLevel_Result) == 0x000068, "Member 'BP_FLIB_Gimmick_C_StartUmaRace::CallFunc_RemoteEventByLevel_Result' has a wrong offset!");

}

