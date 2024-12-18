#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PairingProfile_001_modern

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Menu_PairingProfile_001_modern.WBP_Menu_PairingProfile_001_modern_C.ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern
// 0x0068 (0x0068 - 0x0000)
struct WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsNeedPairing)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsNeedPairing;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRemovedUserTextId_ReturnValue;         // 0x0038(0x0018)()
	class FText                                   CallFunc_GetRemovedUserCaptionTextId_ReturnValue;  // 0x0050(0x0018)()
};
static_assert(alignof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern) == 0x000008, "Wrong alignment on WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern");
static_assert(sizeof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern) == 0x000068, "Wrong size on WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, K2Node_CustomEvent_EventTag) == 0x000028, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, K2Node_CustomEvent_IsNeedPairing) == 0x000030, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::K2Node_CustomEvent_IsNeedPairing' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, K2Node_SwitchName_CmpSuccess) == 0x000031, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, CallFunc_GetRemovedUserTextId_ReturnValue) == 0x000038, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::CallFunc_GetRemovedUserTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern, CallFunc_GetRemovedUserCaptionTextId_ReturnValue) == 0x000050, "Member 'WBP_Menu_PairingProfile_001_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern::CallFunc_GetRemovedUserCaptionTextId_ReturnValue' has a wrong offset!");

// Function WBP_Menu_PairingProfile_001_modern.WBP_Menu_PairingProfile_001_modern_C.PairingInputDelegateEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent final
{
public:
	bool                                          IsNeedPairing;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent) == 0x000001, "Wrong alignment on WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent");
static_assert(sizeof(WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent) == 0x000001, "Wrong size on WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent, IsNeedPairing) == 0x000000, "Member 'WBP_Menu_PairingProfile_001_modern_C_PairingInputDelegateEvent::IsNeedPairing' has a wrong offset!");

// Function WBP_Menu_PairingProfile_001_modern.WBP_Menu_PairingProfile_001_modern_C.WidgetBPAction
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction) == 0x000008, "Wrong alignment on WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction");
static_assert(sizeof(WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction) == 0x000008, "Wrong size on WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction");
static_assert(offsetof(WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction, EventTag) == 0x000000, "Member 'WBP_Menu_PairingProfile_001_modern_C_WidgetBPAction::EventTag' has a wrong offset!");

}

