#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PairingProfile_000_modern

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_PairingProfile_000_modern.WBP_Menu_PairingProfile_000_modern_C.ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern
// 0x0080 (0x0080 - 0x0000)
struct WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsNeedPairing)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameDisplayNameXbox_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsNeedPairing;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUMGWidgetFromName_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUIPlatformType                           CallFunc_GetUIPlatformType_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern) == 0x000008, "Wrong alignment on WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern");
static_assert(sizeof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern) == 0x000080, "Wrong size on WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, Temp_bool_Variable) == 0x000028, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, Temp_byte_Variable) == 0x000029, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, Temp_byte_Variable2) == 0x00002A, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, CallFunc_GetGameDisplayNameXbox_ReturnValue) == 0x000030, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::CallFunc_GetGameDisplayNameXbox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_CustomEvent_IsNeedPairing) == 0x000040, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_CustomEvent_IsNeedPairing' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_CustomEvent_EventTag) == 0x000060, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000068, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000070, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, CallFunc_IsUMGWidgetFromName_ReturnValue) == 0x000078, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::CallFunc_IsUMGWidgetFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, CallFunc_GetUIPlatformType_ReturnValue) == 0x000079, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::CallFunc_GetUIPlatformType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_Select_Default) == 0x00007A, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern, K2Node_SwitchEnum_CmpSuccess) == 0x00007B, "Member 'WBP_Menu_PairingProfile_000_modern_C_ExecuteUbergraph_WBP_Menu_PairingProfile_000_modern::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Menu_PairingProfile_000_modern.WBP_Menu_PairingProfile_000_modern_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_PairingProfile_000_modern_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Menu_PairingProfile_000_modern.WBP_Menu_PairingProfile_000_modern_C.PairingDelegateEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent final
{
public:
	bool                                          IsNeedPairing;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent) == 0x000001, "Wrong alignment on WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent");
static_assert(sizeof(WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent) == 0x000001, "Wrong size on WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent");
static_assert(offsetof(WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent, IsNeedPairing) == 0x000000, "Member 'WBP_Menu_PairingProfile_000_modern_C_PairingDelegateEvent::IsNeedPairing' has a wrong offset!");

}
