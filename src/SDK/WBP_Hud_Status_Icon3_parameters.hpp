#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_Icon3

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Status_Icon3.WBP_Hud_Status_Icon3_C.ExecuteUbergraph_WBP_Hud_Status_Icon3
// 0x0048 (0x0048 - 0x0000)
struct WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x003C)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetOddEffectId_Debuff;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3) == 0x000004, "Wrong alignment on WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3");
static_assert(sizeof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3) == 0x000048, "Wrong size on WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3, EntryPoint) == 0x000000, "Member 'WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3, K2Node_Event_InDeltaTime) == 0x000040, "Member 'WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3, CallFunc_SetOddEffectId_Debuff) == 0x000044, "Member 'WBP_Hud_Status_Icon3_C_ExecuteUbergraph_WBP_Hud_Status_Icon3::CallFunc_SetOddEffectId_Debuff' has a wrong offset!");

// Function WBP_Hud_Status_Icon3.WBP_Hud_Status_Icon3_C.Tick
// 0x0040 (0x0040 - 0x0000)
struct WBP_Hud_Status_Icon3_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x003C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Icon3_C_Tick) == 0x000004, "Wrong alignment on WBP_Hud_Status_Icon3_C_Tick");
static_assert(sizeof(WBP_Hud_Status_Icon3_C_Tick) == 0x000040, "Wrong size on WBP_Hud_Status_Icon3_C_Tick");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Hud_Status_Icon3_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_Tick, InDeltaTime) == 0x00003C, "Member 'WBP_Hud_Status_Icon3_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Hud_Status_Icon3.WBP_Hud_Status_Icon3_C.SetAlpha
// 0x0004 (0x0004 - 0x0000)
struct WBP_Hud_Status_Icon3_C_SetAlpha final
{
public:
	float                                         InAlpha;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Icon3_C_SetAlpha) == 0x000004, "Wrong alignment on WBP_Hud_Status_Icon3_C_SetAlpha");
static_assert(sizeof(WBP_Hud_Status_Icon3_C_SetAlpha) == 0x000004, "Wrong size on WBP_Hud_Status_Icon3_C_SetAlpha");
static_assert(offsetof(WBP_Hud_Status_Icon3_C_SetAlpha, InAlpha) == 0x000000, "Member 'WBP_Hud_Status_Icon3_C_SetAlpha::InAlpha' has a wrong offset!");

}
