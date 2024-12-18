#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Soubi_List_000_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern
// 0x0088 (0x0088 - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventName, class UJackUMGItemBase* InItemBase)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EJackKeys InKeyType, bool bIsPressed)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       K2Node_CustomEvent_InItemBase;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackKeys                                     K2Node_CustomEvent_InKeyType;                      // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsPressed;                     // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_CharachterCapture_C> K2Node_DynamicCast_AsBP_IF_Charachter_Capture;     // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern) == 0x000008, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern) == 0x000088, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CustomEvent_EventName) == 0x000048, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CustomEvent_InItemBase) == 0x000050, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CustomEvent_InItemBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CustomEvent_EventTag) == 0x000058, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000060, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_SwitchName2_CmpSuccess) == 0x000061, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CustomEvent_InKeyType) == 0x000062, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CustomEvent_InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_CustomEvent_bIsPressed) == 0x000063, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_CustomEvent_bIsPressed' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_SwitchEnum_CmpSuccess) == 0x000064, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_DynamicCast_AsBP_IF_Charachter_Capture) == 0x000068, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_DynamicCast_AsBP_IF_Charachter_Capture' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern, CallFunc_GetAccessorMembers_ReturnValue) == 0x000080, "Member 'WBP_Menu_Soubi_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Soubi_List_000_modern::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.WidgetKeyEvent
// 0x0002 (0x0002 - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent final
{
public:
	EJackKeys                                     InKeyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPressed;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent) == 0x000001, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent) == 0x000002, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent, InKeyType) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent::InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent, bIsPressed) == 0x000001, "Member 'WBP_Menu_Soubi_List_000_modern_C_WidgetKeyEvent::bIsPressed' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.OnItemListControl
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_OnItemListControl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       InItemBase;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_OnItemListControl) == 0x000008, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_OnItemListControl");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_OnItemListControl) == 0x000010, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_OnItemListControl");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_OnItemListControl, EventName) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_OnItemListControl::EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_OnItemListControl, InItemBase) == 0x000008, "Member 'WBP_Menu_Soubi_List_000_modern_C_OnItemListControl::InItemBase' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.SetSelectedCharcter
// 0x0060 (0x0060 - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter final
{
public:
	class UJackUMGAccessorItem*                   CallFunc_GetAccessorItem_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGItemContainer                  CallFunc_GetItemContainerFromSelected_ReturnValue; // 0x0008(0x0050)()
	EJackItem_Bag                                 CallFunc_CharTypeToBagType_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter) == 0x000008, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter) == 0x000060, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, CallFunc_GetAccessorItem_ReturnValue) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::CallFunc_GetAccessorItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, CallFunc_GetItemContainerFromSelected_ReturnValue) == 0x000008, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::CallFunc_GetItemContainerFromSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, CallFunc_CharTypeToBagType_ReturnValue) == 0x000058, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::CallFunc_CharTypeToBagType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, CallFunc_Conv_IntToByte_ReturnValue) == 0x000059, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, K2Node_SwitchName_CmpSuccess) == 0x00005A, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter, CallFunc_GetValidValue_ReturnValue) == 0x00005B, "Member 'WBP_Menu_Soubi_List_000_modern_C_SetSelectedCharcter::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.AddSelectedCharIndex
// 0x001C (0x001C - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex final
{
public:
	int32                                         IsAddIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue2;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex) == 0x000004, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex) == 0x00001C, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, IsAddIndex) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::IsAddIndex' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Less_IntInt_ReturnValue) == 0x00000D, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Subtract_IntInt_ReturnValue2) == 0x000014, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Subtract_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Menu_Soubi_List_000_modern_C_AddSelectedCharIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Soubi_List_000_modern.WBP_Menu_Soubi_List_000_modern_C.UpdateList
// 0x0030 (0x0030 - 0x0000)
struct WBP_Menu_Soubi_List_000_modern_C_UpdateList final
{
public:
	class UJackUMGAccessorItem*                   CallFunc_GetAccessorItem_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBagListBackground_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMultipleCharacters_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue2;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Soubi_List_000_modern_C_UpdateList) == 0x000008, "Wrong alignment on WBP_Menu_Soubi_List_000_modern_C_UpdateList");
static_assert(sizeof(WBP_Menu_Soubi_List_000_modern_C_UpdateList) == 0x000030, "Wrong size on WBP_Menu_Soubi_List_000_modern_C_UpdateList");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_GetAccessorItem_ReturnValue) == 0x000000, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_GetAccessorItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_GetAccessorMembers_ReturnValue) == 0x000010, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_GetBagListBackground_ReturnValue) == 0x000018, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_GetBagListBackground_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_IsMultipleCharacters_ReturnValue) == 0x000020, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_IsMultipleCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000024, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Soubi_List_000_modern_C_UpdateList, CallFunc_GetAccessorMembers_ReturnValue2) == 0x000028, "Member 'WBP_Menu_Soubi_List_000_modern_C_UpdateList::CallFunc_GetAccessorMembers_ReturnValue2' has a wrong offset!");

}

