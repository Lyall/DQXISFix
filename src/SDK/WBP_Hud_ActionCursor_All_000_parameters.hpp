#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_ActionCursor_All_000

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_ActionCursor_All_000.WBP_Hud_ActionCursor_All_000_C.ExecuteUbergraph_WBP_Hud_ActionCursor_All_000
// 0x0090 (0x0090 - 0x0000)
struct WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoModeActivated_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable2;                              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_CustomEvent_InAnimation2;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_CustomEvent_InAnimation;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsPhotoMode;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue2;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsPhotoMode)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGWidgetAnimPlayer*               CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x007C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FinishedToPlayNext_ReturnValue;           // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000");
static_assert(sizeof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000) == 0x000090, "Wrong size on WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, EntryPoint) == 0x000000, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, Temp_float_Variable) == 0x000010, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_GetAccessorBattle_ReturnValue) == 0x000018, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_GetAccessorBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_IsPhotoModeActivated_ReturnValue) == 0x000020, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_IsPhotoModeActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, Temp_float_Variable2) == 0x000024, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_Event_Animation) == 0x000028, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_CustomEvent_InAnimation2) == 0x000030, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_CustomEvent_InAnimation2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_CustomEvent_InAnimation) == 0x000038, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_CustomEvent_InAnimation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_GetUMGManager_ReturnValue2) == 0x000040, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_CustomEvent_bIsPhotoMode) == 0x000048, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_CustomEvent_bIsPhotoMode' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_GetAccessorBattle_ReturnValue2) == 0x000050, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_GetAccessorBattle_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, Temp_bool_Variable) == 0x000068, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue) == 0x000070, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_CreateUMGWidgetAnimPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_Select_Default) == 0x000078, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, K2Node_MakeStruct_LinearColor) == 0x00007C, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000, CallFunc_FinishedToPlayNext_ReturnValue) == 0x00008C, "Member 'WBP_Hud_ActionCursor_All_000_C_ExecuteUbergraph_WBP_Hud_ActionCursor_All_000::CallFunc_FinishedToPlayNext_ReturnValue' has a wrong offset!");

// Function WBP_Hud_ActionCursor_All_000.WBP_Hud_ActionCursor_All_000_C.ChangePhotoModeDelegate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0 final
{
public:
	bool                                          bIsPhotoMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0) == 0x000001, "Wrong alignment on WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0");
static_assert(sizeof(WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0) == 0x000001, "Wrong size on WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0, bIsPhotoMode) == 0x000000, "Member 'WBP_Hud_ActionCursor_All_000_C_ChangePhotoModeDelegate_Event_0::bIsPhotoMode' has a wrong offset!");

// Function WBP_Hud_ActionCursor_All_000.WBP_Hud_ActionCursor_All_000_C.HideAndStopAnimAll
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll final
{
public:
	class UWidgetAnimation*                       InAnimation_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll");
static_assert(sizeof(WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll, InAnimation_0) == 0x000000, "Member 'WBP_Hud_ActionCursor_All_000_C_HideAndStopAnimAll::InAnimation_0' has a wrong offset!");

// Function WBP_Hud_ActionCursor_All_000.WBP_Hud_ActionCursor_All_000_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished");
static_assert(sizeof(WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Hud_ActionCursor_All_000_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_Hud_ActionCursor_All_000.WBP_Hud_ActionCursor_All_000_C.StopAnimAll
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_ActionCursor_All_000_C_StopAnimAll final
{
public:
	class UWidgetAnimation*                       InAnimation_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_ActionCursor_All_000_C_StopAnimAll) == 0x000008, "Wrong alignment on WBP_Hud_ActionCursor_All_000_C_StopAnimAll");
static_assert(sizeof(WBP_Hud_ActionCursor_All_000_C_StopAnimAll) == 0x000008, "Wrong size on WBP_Hud_ActionCursor_All_000_C_StopAnimAll");
static_assert(offsetof(WBP_Hud_ActionCursor_All_000_C_StopAnimAll, InAnimation_0) == 0x000000, "Member 'WBP_Hud_ActionCursor_All_000_C_StopAnimAll::InAnimation_0' has a wrong offset!");

}

