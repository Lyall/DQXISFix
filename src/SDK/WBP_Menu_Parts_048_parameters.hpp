#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_048

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.ExecuteUbergraph_WBP_Menu_Parts_048
// 0x0080 (0x0080 - 0x0000)
struct WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable4;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x001C(0x003C)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TestsWorldMapStates_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select2_Default;                            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048) == 0x000008, "Wrong alignment on WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048");
static_assert(sizeof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048) == 0x000080, "Wrong size on WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, Temp_bool_Variable) == 0x000004, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, Temp_bool_Variable2) == 0x000018, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, Temp_bool_Variable3) == 0x000019, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, Temp_bool_Variable4) == 0x00001A, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_Event_MyGeometry) == 0x00001C, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_CustomEvent_EventTag) == 0x000060, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_SwitchName_CmpSuccess) == 0x000068, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, CallFunc_GetUMGManager_ReturnValue) == 0x000070, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, CallFunc_TestsWorldMapStates_ReturnValue) == 0x000078, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::CallFunc_TestsWorldMapStates_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_Select_Default) == 0x000079, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048, K2Node_Select2_Default) == 0x00007A, "Member 'WBP_Menu_Parts_048_C_ExecuteUbergraph_WBP_Menu_Parts_048::K2Node_Select2_Default' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Parts_048_C_CustomEvent_0 final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_048_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Parts_048_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Parts_048_C_CustomEvent_0) == 0x000008, "Wrong size on WBP_Menu_Parts_048_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Parts_048_C_CustomEvent_0, EventTag) == 0x000000, "Member 'WBP_Menu_Parts_048_C_CustomEvent_0::EventTag' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.Tick
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Parts_048_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x003C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_048_C_Tick) == 0x000004, "Wrong alignment on WBP_Menu_Parts_048_C_Tick");
static_assert(sizeof(WBP_Menu_Parts_048_C_Tick) == 0x000040, "Wrong size on WBP_Menu_Parts_048_C_Tick");
static_assert(offsetof(WBP_Menu_Parts_048_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Menu_Parts_048_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_048_C_Tick, InDeltaTime) == 0x00003C, "Member 'WBP_Menu_Parts_048_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.SetUpArrowEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_048_C_SetUpArrowEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_SetUpArrowEnabled) == 0x000001, "Wrong alignment on WBP_Menu_Parts_048_C_SetUpArrowEnabled");
static_assert(sizeof(WBP_Menu_Parts_048_C_SetUpArrowEnabled) == 0x000001, "Wrong size on WBP_Menu_Parts_048_C_SetUpArrowEnabled");
static_assert(offsetof(WBP_Menu_Parts_048_C_SetUpArrowEnabled, bEnabled) == 0x000000, "Member 'WBP_Menu_Parts_048_C_SetUpArrowEnabled::bEnabled' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.SetDownArrowEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_048_C_SetDownArrowEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_SetDownArrowEnabled) == 0x000001, "Wrong alignment on WBP_Menu_Parts_048_C_SetDownArrowEnabled");
static_assert(sizeof(WBP_Menu_Parts_048_C_SetDownArrowEnabled) == 0x000001, "Wrong size on WBP_Menu_Parts_048_C_SetDownArrowEnabled");
static_assert(offsetof(WBP_Menu_Parts_048_C_SetDownArrowEnabled, bEnabled) == 0x000000, "Member 'WBP_Menu_Parts_048_C_SetDownArrowEnabled::bEnabled' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.SetSpinnerAvailable
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_048_C_SetSpinnerAvailable final
{
public:
	bool                                          bAvailable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_SetSpinnerAvailable) == 0x000001, "Wrong alignment on WBP_Menu_Parts_048_C_SetSpinnerAvailable");
static_assert(sizeof(WBP_Menu_Parts_048_C_SetSpinnerAvailable) == 0x000001, "Wrong size on WBP_Menu_Parts_048_C_SetSpinnerAvailable");
static_assert(offsetof(WBP_Menu_Parts_048_C_SetSpinnerAvailable, bAvailable) == 0x000000, "Member 'WBP_Menu_Parts_048_C_SetSpinnerAvailable::bAvailable' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.UpdateUpArrowEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_048_C_UpdateUpArrowEnabled final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_UpdateUpArrowEnabled) == 0x000001, "Wrong alignment on WBP_Menu_Parts_048_C_UpdateUpArrowEnabled");
static_assert(sizeof(WBP_Menu_Parts_048_C_UpdateUpArrowEnabled) == 0x000001, "Wrong size on WBP_Menu_Parts_048_C_UpdateUpArrowEnabled");
static_assert(offsetof(WBP_Menu_Parts_048_C_UpdateUpArrowEnabled, bVisible) == 0x000000, "Member 'WBP_Menu_Parts_048_C_UpdateUpArrowEnabled::bVisible' has a wrong offset!");

// Function WBP_Menu_Parts_048.WBP_Menu_Parts_048_C.UpdateDownArrowEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_048_C_UpdateDownArrowEnabled final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_048_C_UpdateDownArrowEnabled) == 0x000001, "Wrong alignment on WBP_Menu_Parts_048_C_UpdateDownArrowEnabled");
static_assert(sizeof(WBP_Menu_Parts_048_C_UpdateDownArrowEnabled) == 0x000001, "Wrong size on WBP_Menu_Parts_048_C_UpdateDownArrowEnabled");
static_assert(offsetof(WBP_Menu_Parts_048_C_UpdateDownArrowEnabled, bVisible) == 0x000000, "Member 'WBP_Menu_Parts_048_C_UpdateDownArrowEnabled::bVisible' has a wrong offset!");

}

