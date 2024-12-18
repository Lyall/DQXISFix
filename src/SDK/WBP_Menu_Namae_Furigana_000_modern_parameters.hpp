#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Furigana_000_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackMessageArgumentData>       Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowLatentMessageEndResult* CallFunc_WaitMessageEndFromBP_Result;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FJackMessageArgumentData>       Temp_struct_Variable2;                             // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void(class FName EventName, class UJackUMGItemBase* InItemBase)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpenSerifuWindow_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       K2Node_CustomEvent_InItemBase;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowController*         K2Node_CustomEvent_Sender;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_CurrentTextID;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectDialogIndex;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorSaveData*               CallFunc_GetAccessorSaveData_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern) == 0x0000B0, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, Temp_struct_Variable) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue) == 0x000028, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, CallFunc_WaitMessageEndFromBP_Result) == 0x000030, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::CallFunc_WaitMessageEndFromBP_Result' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, Temp_struct_Variable2) == 0x000038, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000048, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2) == 0x000058, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CreateDelegate_OutputDelegate3) == 0x000060, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_EventTag) == 0x000070, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, CallFunc_IsOpenSerifuWindow_ReturnValue) == 0x000078, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::CallFunc_IsOpenSerifuWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000079, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_EventName) == 0x000080, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_InItemBase) == 0x000088, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_InItemBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_Sender) == 0x000090, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_CurrentTextID) == 0x000098, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_CurrentTextID' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_CustomEvent_SelectDialogIndex) == 0x0000A0, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_CustomEvent_SelectDialogIndex' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_SwitchName2_CmpSuccess) == 0x0000A4, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, K2Node_SwitchInteger_CmpSuccess) == 0x0000A5, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern, CallFunc_GetAccessorSaveData_ReturnValue) == 0x0000A8, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Furigana_000_modern::CallFunc_GetAccessorSaveData_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.SelectYN
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_SelectYN final
{
public:
	class UJackUMGSerifuWindowController*         Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurrentTextID;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectDialogIndex;                                 // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_SelectYN) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_SelectYN");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_SelectYN) == 0x000018, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_SelectYN");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SelectYN, Sender) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SelectYN::Sender' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SelectYN, CurrentTextID) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SelectYN::CurrentTextID' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SelectYN, SelectDialogIndex) == 0x000010, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SelectYN::SelectDialogIndex' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.OnItemListControl
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       InItemBase;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl) == 0x000010, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl, EventName) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl::EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl, InItemBase) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_OnItemListControl::InItemBase' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.BPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_BPActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.GotoTheNextMenu
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu final
{
public:
	class UJackUMGSerifuWindowController*         CallFunc_CloseSerifuWindow_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_AddUMGMenuWidget_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu) == 0x000018, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu, CallFunc_CloseSerifuWindow_ReturnValue) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu::CallFunc_CloseSerifuWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu, CallFunc_AddUMGMenuWidget_ReturnValue) == 0x000010, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoTheNextMenu::CallFunc_AddUMGMenuWidget_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.GotoThePreviousMenu
// 0x0030 (0x0030 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu final
{
public:
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_GetUMGWidgetFromName_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Namae_Mode_Select_000_modern_C* K2Node_DynamicCast_AsWBP_Menu_Namae_Mode_Select_000_Modern; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGSerifuWindowController*         CallFunc_CloseSerifuWindow_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu) == 0x000030, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, CallFunc_GetUMGManager_ReturnValue) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, CallFunc_GetUMGManager_ReturnValue2) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, CallFunc_GetUMGWidgetFromName_ReturnValue) == 0x000010, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::CallFunc_GetUMGWidgetFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, K2Node_DynamicCast_AsWBP_Menu_Namae_Mode_Select_000_Modern) == 0x000018, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::K2Node_DynamicCast_AsWBP_Menu_Namae_Mode_Select_000_Modern' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu, CallFunc_CloseSerifuWindow_ReturnValue) == 0x000028, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GotoThePreviousMenu::CallFunc_CloseSerifuWindow_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.GetBoukenMode
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode final
{
public:
	int32                                         OutMode;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorCommon*                 CallFunc_GetAccessorCommon_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode) == 0x000010, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode, OutMode) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode::OutMode' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode, CallFunc_GetAccessorCommon_ReturnValue) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_GetBoukenMode::CallFunc_GetAccessorCommon_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.SetBoukenMode
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode final
{
public:
	int32                                         InMode;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorCommon*                 CallFunc_GetAccessorCommon_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode) == 0x000010, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode, InMode) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode::InMode' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode, CallFunc_GetAccessorCommon_ReturnValue) == 0x000008, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SetBoukenMode::CallFunc_GetAccessorCommon_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Namae_Furigana_000_modern.WBP_Menu_Namae_Furigana_000_modern_C.SetHudStepNumber
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber final
{
public:
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber) == 0x000008, "Wrong alignment on WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber");
static_assert(sizeof(WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber) == 0x000008, "Wrong size on WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber");
static_assert(offsetof(WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber, CallFunc_GetUMGManager_ReturnValue) == 0x000000, "Member 'WBP_Menu_Namae_Furigana_000_modern_C_SetHudStepNumber::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");

}

