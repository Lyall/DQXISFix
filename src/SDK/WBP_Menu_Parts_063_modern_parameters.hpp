#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_063_modern

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_063_modern.WBP_Menu_Parts_063_modern_C.ExecuteUbergraph_WBP_Menu_Parts_063_modern
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern) == 0x000004, "Wrong alignment on WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern");
static_assert(sizeof(WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern) == 0x000004, "Wrong size on WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern");
static_assert(offsetof(WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_063_modern_C_ExecuteUbergraph_WBP_Menu_Parts_063_modern::EntryPoint' has a wrong offset!");

// Function WBP_Menu_Parts_063_modern.WBP_Menu_Parts_063_modern_C.SetOddEffect
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) WBP_Menu_Parts_063_modern_C_SetOddEffect final
{
public:
	class FName                                   InOddEffectId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSlideValue;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetOddEffectId_Debuff;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_063_modern_C_SetOddEffect) == 0x000008, "Wrong alignment on WBP_Menu_Parts_063_modern_C_SetOddEffect");
static_assert(sizeof(WBP_Menu_Parts_063_modern_C_SetOddEffect) == 0x000010, "Wrong size on WBP_Menu_Parts_063_modern_C_SetOddEffect");
static_assert(offsetof(WBP_Menu_Parts_063_modern_C_SetOddEffect, InOddEffectId) == 0x000000, "Member 'WBP_Menu_Parts_063_modern_C_SetOddEffect::InOddEffectId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_063_modern_C_SetOddEffect, InSlideValue) == 0x000008, "Member 'WBP_Menu_Parts_063_modern_C_SetOddEffect::InSlideValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_063_modern_C_SetOddEffect, CallFunc_SetOddEffectId_Debuff) == 0x00000C, "Member 'WBP_Menu_Parts_063_modern_C_SetOddEffect::CallFunc_SetOddEffectId_Debuff' has a wrong offset!");

}
