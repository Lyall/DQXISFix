#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Senreki_Quest_Window_000_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventName, class UJackUMGItemBase* InItemBase)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       K2Node_CustomEvent_InItemBase;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Parts_064_modern_C*           K2Node_DynamicCast_AsWBP_Menu_Parts_064_Modern;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorSenreki*                CallFunc_GetAccessorSenreki_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJackUMGItemData*>               CallFunc_GetQuestDataList_ItemDataList;            // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_GetQuestDataList_ClearCount;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackTextMacroReplaceManager*           CallFunc_GetTextMacroReplaceManager_ReturnValue;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FJackMessageArgumentData>       K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_MacroReplaceBP_ReturnValue;               // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern) == 0x000008, "Wrong alignment on WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern");
static_assert(sizeof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern) == 0x0000C0, "Wrong size on WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_CustomEvent_EventTag) == 0x000018, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000020, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_CustomEvent_EventName) == 0x000028, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_CustomEvent_InItemBase) == 0x000030, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_CustomEvent_InItemBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_DynamicCast_AsWBP_Menu_Parts_064_Modern) == 0x000038, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_DynamicCast_AsWBP_Menu_Parts_064_Modern' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_SwitchName2_CmpSuccess) == 0x000041, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetAccessorSenreki_ReturnValue) == 0x000048, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetAccessorSenreki_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetQuestDataList_ItemDataList) == 0x000058, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetQuestDataList_ItemDataList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetQuestDataList_ClearCount) == 0x000068, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetQuestDataList_ClearCount' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_Array_Length_ReturnValue2) == 0x00006C, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000070, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000078, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetUMGManager_ReturnValue2) == 0x000088, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GetTextMacroReplaceManager_ReturnValue) == 0x000090, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GetTextMacroReplaceManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, K2Node_MakeArray_Array) == 0x000098, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_MacroReplaceBP_ReturnValue) == 0x0000A8, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_MacroReplaceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.OnItemListControl
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       InItemBase;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl) == 0x000008, "Wrong alignment on WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl");
static_assert(sizeof(WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl) == 0x000010, "Wrong size on WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl, EventName) == 0x000000, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl::EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl, InItemBase) == 0x000008, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl::InItemBase' has a wrong offset!");

// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

}
