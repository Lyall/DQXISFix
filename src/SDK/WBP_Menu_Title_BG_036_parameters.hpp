#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_BG_036

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Title_BG_036.WBP_Menu_Title_BG_036_C.ExecuteUbergraph_WBP_Menu_Title_BG_036
// 0x0020 (0x0020 - 0x0000)
struct WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Duration;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_PlaybackSpeed;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036) == 0x000008, "Wrong alignment on WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036");
static_assert(sizeof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036) == 0x000020, "Wrong size on WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036, EntryPoint) == 0x000000, "Member 'WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036, K2Node_CustomEvent_EventTag) == 0x000010, "Member 'WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036, K2Node_CustomEvent_Duration) == 0x000018, "Member 'WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036, K2Node_CustomEvent_PlaybackSpeed) == 0x00001C, "Member 'WBP_Menu_Title_BG_036_C_ExecuteUbergraph_WBP_Menu_Title_BG_036::K2Node_CustomEvent_PlaybackSpeed' has a wrong offset!");

// Function WBP_Menu_Title_BG_036.WBP_Menu_Title_BG_036_C.PlayAnim032
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Title_BG_036_C_PlayAnim032 final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlaybackSpeed;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Title_BG_036_C_PlayAnim032) == 0x000004, "Wrong alignment on WBP_Menu_Title_BG_036_C_PlayAnim032");
static_assert(sizeof(WBP_Menu_Title_BG_036_C_PlayAnim032) == 0x000008, "Wrong size on WBP_Menu_Title_BG_036_C_PlayAnim032");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_PlayAnim032, Duration) == 0x000000, "Member 'WBP_Menu_Title_BG_036_C_PlayAnim032::Duration' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_PlayAnim032, PlaybackSpeed) == 0x000004, "Member 'WBP_Menu_Title_BG_036_C_PlayAnim032::PlaybackSpeed' has a wrong offset!");

// Function WBP_Menu_Title_BG_036.WBP_Menu_Title_BG_036_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Title_BG_036_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

}
