#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Saving_000

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Saving_000.WBP_Hud_Saving_000_C.ExecuteUbergraph_WBP_Hud_Saving_000
// 0x0020 (0x0020 - 0x0000)
struct WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue2;     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue3;     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000) == 0x000008, "Wrong alignment on WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000");
static_assert(sizeof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000) == 0x000020, "Wrong size on WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, EntryPoint) == 0x000000, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, K2Node_Event_Animation) == 0x000008, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, CallFunc_EqualEqual_ObjectObject_ReturnValue2) == 0x000011, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::CallFunc_EqualEqual_ObjectObject_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, CallFunc_EqualEqual_ObjectObject_ReturnValue3) == 0x000012, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::CallFunc_EqualEqual_ObjectObject_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000, CallFunc_GetUMGManager_ReturnValue) == 0x000018, "Member 'WBP_Hud_Saving_000_C_ExecuteUbergraph_WBP_Hud_Saving_000::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");

// Function WBP_Hud_Saving_000.WBP_Hud_Saving_000_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Saving_000_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Saving_000_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Hud_Saving_000_C_OnAnimationFinished");
static_assert(sizeof(WBP_Hud_Saving_000_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Hud_Saving_000_C_OnAnimationFinished");
static_assert(offsetof(WBP_Hud_Saving_000_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Hud_Saving_000_C_OnAnimationFinished::Animation' has a wrong offset!");

}
