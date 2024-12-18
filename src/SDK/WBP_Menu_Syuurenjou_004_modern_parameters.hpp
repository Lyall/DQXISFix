#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Syuurenjou_004_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern
// 0x0160 (0x0160 - 0x0000)
struct WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackDataTableSyuurenjou               K2Node_Event_Data;                                 // 0x0008(0x0130)()
	class UJackUMGSyuurenjouItemData*             K2Node_CustomEvent_Data;                           // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex2;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemIndex;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorSyuurenjou*             CallFunc_GetAccessorSyuurenjou_ReturnValue;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSyuurenjouItemData*             CallFunc_CreateSyuurenjouItemData_ReturnValue;     // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern) == 0x000008, "Wrong alignment on WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern");
static_assert(sizeof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern) == 0x000160, "Wrong size on WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, K2Node_Event_Data) == 0x000008, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, K2Node_CustomEvent_Data) == 0x000138, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, K2Node_CustomEvent_ItemIndex2) == 0x000140, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::K2Node_CustomEvent_ItemIndex2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, K2Node_CustomEvent_ItemIndex) == 0x000144, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::K2Node_CustomEvent_ItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000148, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, CallFunc_GetAccessorSyuurenjou_ReturnValue) == 0x000150, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::CallFunc_GetAccessorSyuurenjou_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern, CallFunc_CreateSyuurenjouItemData_ReturnValue) == 0x000158, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern::CallFunc_CreateSyuurenjouItemData_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.PlayCheckInAnim
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim) == 0x000004, "Wrong alignment on WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim");
static_assert(sizeof(WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim) == 0x000004, "Wrong size on WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim, ItemIndex) == 0x000000, "Member 'WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim::ItemIndex' has a wrong offset!");

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Syuurenjou_004_modern_C_SetData final
{
public:
	class UJackUMGSyuurenjouItemData*             Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Syuurenjou_004_modern_C_SetData) == 0x000008, "Wrong alignment on WBP_Menu_Syuurenjou_004_modern_C_SetData");
static_assert(sizeof(WBP_Menu_Syuurenjou_004_modern_C_SetData) == 0x000008, "Wrong size on WBP_Menu_Syuurenjou_004_modern_C_SetData");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_SetData, Data) == 0x000000, "Member 'WBP_Menu_Syuurenjou_004_modern_C_SetData::Data' has a wrong offset!");

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.SetSyuurenjouData
// 0x0130 (0x0130 - 0x0000)
struct WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData final
{
public:
	struct FJackDataTableSyuurenjou               Data;                                              // 0x0000(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData) == 0x000008, "Wrong alignment on WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData");
static_assert(sizeof(WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData) == 0x000130, "Wrong size on WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData, Data) == 0x000000, "Member 'WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData::Data' has a wrong offset!");

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.ShowCheck
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Syuurenjou_004_modern_C_ShowCheck final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Syuurenjou_004_modern_C_ShowCheck) == 0x000004, "Wrong alignment on WBP_Menu_Syuurenjou_004_modern_C_ShowCheck");
static_assert(sizeof(WBP_Menu_Syuurenjou_004_modern_C_ShowCheck) == 0x000004, "Wrong size on WBP_Menu_Syuurenjou_004_modern_C_ShowCheck");
static_assert(offsetof(WBP_Menu_Syuurenjou_004_modern_C_ShowCheck, ItemIndex) == 0x000000, "Member 'WBP_Menu_Syuurenjou_004_modern_C_ShowCheck::ItemIndex' has a wrong offset!");

}

