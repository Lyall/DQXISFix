#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_ActionCursor_Arrow_001

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001
// 0x0080 (0x0080 - 0x0000)
struct WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMG3DWidgetData*                   K2Node_CustomEvent_Data2;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FinishedToPlayNext_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGActionCursorData*               K2Node_DynamicCast_AsJack_UMGAction_Cursor_Data;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMG3DWidgetData*                   K2Node_CustomEvent_Data;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGActionCursorBaseData*           K2Node_DynamicCast_AsJack_UMGAction_Cursor_Base_Data; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0054(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue2;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item2;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetAnimPlayer*               CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001");
static_assert(sizeof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001) == 0x000080, "Wrong size on WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, EntryPoint) == 0x000000, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_CustomEvent_Data2) == 0x000008, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_CustomEvent_Data2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_FinishedToPlayNext_ReturnValue) == 0x000010, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_FinishedToPlayNext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_DynamicCast_AsJack_UMGAction_Cursor_Data) == 0x000018, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_DynamicCast_AsJack_UMGAction_Cursor_Data' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_Event_Animation) == 0x000028, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_CustomEvent_Data) == 0x000030, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_DynamicCast_AsJack_UMGAction_Cursor_Base_Data) == 0x000038, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_DynamicCast_AsJack_UMGAction_Cursor_Base_Data' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_BreakVector_X) == 0x000044, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_BreakVector_Y) == 0x000048, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_BreakVector_Z) == 0x00004C, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000050, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_MakeVector2D_ReturnValue) == 0x000054, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, K2Node_SwitchEnum2_CmpSuccess) == 0x00005C, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_Conv_ByteToInt_ReturnValue2) == 0x000060, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_Conv_ByteToInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_Array_Get_Item) == 0x000068, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_Array_Get_Item2) == 0x000070, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001, CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue) == 0x000078, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001::CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue' has a wrong offset!");

// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished");
static_assert(sizeof(WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.UpdateData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_Arrow_001_C_UpdateData final
{
public:
	class UJackUMG3DWidgetData*                   Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateData) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_Arrow_001_C_UpdateData");
static_assert(sizeof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateData) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_Arrow_001_C_UpdateData");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateData, Data) == 0x000000, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_UpdateData::Data' has a wrong offset!");

// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.UpdateIconData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData final
{
public:
	class UJackUMG3DWidgetData*                   Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData");
static_assert(sizeof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData");
static_assert(offsetof(WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData, Data) == 0x000000, "Member 'WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData::Data' has a wrong offset!");

}
