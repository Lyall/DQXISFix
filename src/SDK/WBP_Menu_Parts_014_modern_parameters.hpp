#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_014_modern

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.ExecuteUbergraph_WBP_Menu_Parts_014_modern
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x0010(0x0018)()
	TDelegate<void(struct FJackUMGItemContainer& ItemContainer)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGSaveDataContainer*              K2Node_CustomEvent_Data;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGItemContainer                  K2Node_CustomEvent_ItemContainer;                  // 0x0040(0x0050)()
	class UJackUMGSaveDataContainer*              K2Node_DynamicCast_AsJack_UMGSave_Data_Container;  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern) == 0x000008, "Wrong alignment on WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern");
static_assert(sizeof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern) == 0x0000A0, "Wrong size on WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x000010, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_CustomEvent_Data) == 0x000038, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_CustomEvent_ItemContainer) == 0x000040, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_CustomEvent_ItemContainer' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_DynamicCast_AsJack_UMGSave_Data_Container) == 0x000090, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_DynamicCast_AsJack_UMGSave_Data_Container' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern, K2Node_SwitchName_CmpSuccess) == 0x000099, "Member 'WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.CustomEvent_0
// 0x0050 (0x0050 - 0x0000)
struct WBP_Menu_Parts_014_modern_C_CustomEvent_0 final
{
public:
	struct FJackUMGItemContainer                  ItemContainer;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Menu_Parts_014_modern_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Parts_014_modern_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Parts_014_modern_C_CustomEvent_0) == 0x000050, "Wrong size on WBP_Menu_Parts_014_modern_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CustomEvent_0, ItemContainer) == 0x000000, "Member 'WBP_Menu_Parts_014_modern_C_CustomEvent_0::ItemContainer' has a wrong offset!");

// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Parts_014_modern_C_SetData final
{
public:
	class UJackUMGSaveDataContainer*              Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_014_modern_C_SetData) == 0x000008, "Wrong alignment on WBP_Menu_Parts_014_modern_C_SetData");
static_assert(sizeof(WBP_Menu_Parts_014_modern_C_SetData) == 0x000008, "Wrong size on WBP_Menu_Parts_014_modern_C_SetData");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_SetData, Data) == 0x000000, "Member 'WBP_Menu_Parts_014_modern_C_SetData::Data' has a wrong offset!");

// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.CheckSaveData
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_Menu_Parts_014_modern_C_CheckSaveData final
{
public:
	class UJackUMGSaveDataContainer*              Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue2;           // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue3;           // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue4;           // 0x0060(0x0018)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackTextMacroReplaceManager*           CallFunc_GetTextMacroReplaceManager_ReturnValue;   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MacroReplaceList_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue5;           // 0x0098(0x0018)()
	int32                                         CallFunc_GetDataIndex_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x00C0(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_014_modern_C_CheckSaveData) == 0x000008, "Wrong alignment on WBP_Menu_Parts_014_modern_C_CheckSaveData");
static_assert(sizeof(WBP_Menu_Parts_014_modern_C_CheckSaveData) == 0x0000E0, "Wrong size on WBP_Menu_Parts_014_modern_C_CheckSaveData");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, Data) == 0x000000, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_StringToText_ReturnValue2) == 0x000030, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_StringToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_StringToText_ReturnValue3) == 0x000048, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_StringToText_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_StringToText_ReturnValue4) == 0x000060, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_StringToText_ReturnValue4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_GetTextMacroReplaceManager_ReturnValue) == 0x000080, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_GetTextMacroReplaceManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_MacroReplaceList_ReturnValue) == 0x000088, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_MacroReplaceList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Conv_StringToText_ReturnValue5) == 0x000098, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Conv_StringToText_ReturnValue5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_GetDataIndex_ReturnValue) == 0x0000B0, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_GetDataIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_GetUMGManager_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x0000C0, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, Temp_byte_Variable) == 0x0000D8, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, Temp_byte_Variable2) == 0x0000D9, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, Temp_bool_Variable) == 0x0000DA, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_014_modern_C_CheckSaveData, K2Node_Select_Default) == 0x0000DB, "Member 'WBP_Menu_Parts_014_modern_C_CheckSaveData::K2Node_Select_Default' has a wrong offset!");

}
