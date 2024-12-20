#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_Level2_modern

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.ExecuteUbergraph_WBP_Hud_Status_Level2_modern
// 0x0098 (0x0098 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InLevel;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          K2Node_Event_InColorType;                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Name;                           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetUMGMenuStringFromTextId_ReturnValue;   // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Level;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          K2Node_CustomEvent_ColorType;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue2;           // 0x0058(0x0018)()
	class FString                                 K2Node_Event_InName;                               // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue3;           // 0x0080(0x0018)()
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern) == 0x000008, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern) == 0x000098, "Wrong size on WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, EntryPoint) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_Event_InLevel) == 0x000004, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_Event_InLevel' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_Event_InColorType) == 0x000008, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_Event_InColorType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_CustomEvent_Name) == 0x000010, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000038, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_GetUMGMenuStringFromTextId_ReturnValue) == 0x000040, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_GetUMGMenuStringFromTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_CustomEvent_Level) == 0x000050, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_CustomEvent_ColorType) == 0x000054, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_CustomEvent_ColorType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_Conv_StringToText_ReturnValue2) == 0x000058, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_Conv_StringToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, K2Node_Event_InName) == 0x000070, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::K2Node_Event_InName' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern, CallFunc_Conv_StringToText_ReturnValue3) == 0x000080, "Member 'WBP_Hud_Status_Level2_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level2_modern::CallFunc_Conv_StringToText_ReturnValue3' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.SetSubLevel
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_SetSubLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          InColorType;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_SetSubLevel) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_SetSubLevel");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_SetSubLevel) == 0x000008, "Wrong size on WBP_Hud_Status_Level2_modern_C_SetSubLevel");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetSubLevel, InLevel) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_SetSubLevel::InLevel' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetSubLevel, InColorType) == 0x000004, "Member 'WBP_Hud_Status_Level2_modern_C_SetSubLevel::InColorType' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.SetNameText
// 0x0010 (0x0010 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_SetNameText final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_SetNameText) == 0x000008, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_SetNameText");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_SetNameText) == 0x000010, "Wrong size on WBP_Hud_Status_Level2_modern_C_SetNameText");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetNameText, InName) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_SetNameText::InName' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.CustomEvent_2
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_CustomEvent_2 final
{
public:
	int32                                         Level_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          ColorType;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_CustomEvent_2) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_CustomEvent_2");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_CustomEvent_2) == 0x000008, "Wrong size on WBP_Hud_Status_Level2_modern_C_CustomEvent_2");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_CustomEvent_2, Level_0) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_CustomEvent_2::Level_0' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_CustomEvent_2, ColorType) == 0x000004, "Member 'WBP_Hud_Status_Level2_modern_C_CustomEvent_2::ColorType' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_CustomEvent_0 final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_CustomEvent_0");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_CustomEvent_0) == 0x000010, "Wrong size on WBP_Hud_Status_Level2_modern_C_CustomEvent_0");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_CustomEvent_0, Name_0) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_CustomEvent_0::Name_0' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.SetColor
// 0x000C (0x000C - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_SetColor final
{
public:
	int32                                         HP;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHP;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          CallFunc_GetTextColorTypeHP_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_SetColor) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_SetColor");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_SetColor) == 0x00000C, "Wrong size on WBP_Hud_Status_Level2_modern_C_SetColor");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetColor, HP) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_SetColor::HP' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetColor, MaxHP) == 0x000004, "Member 'WBP_Hud_Status_Level2_modern_C_SetColor::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetColor, CallFunc_GetTextColorTypeHP_ReturnValue) == 0x000008, "Member 'WBP_Hud_Status_Level2_modern_C_SetColor::CallFunc_GetTextColorTypeHP_ReturnValue' has a wrong offset!");

// Function WBP_Hud_Status_Level2_modern.WBP_Hud_Status_Level2_modern_C.SetTextSize
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Hud_Status_Level2_modern_C_SetTextSize final
{
public:
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0000(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo2;                  // 0x0058(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level2_modern_C_SetTextSize) == 0x000008, "Wrong alignment on WBP_Hud_Status_Level2_modern_C_SetTextSize");
static_assert(sizeof(WBP_Hud_Status_Level2_modern_C_SetTextSize) == 0x0000B0, "Wrong size on WBP_Hud_Status_Level2_modern_C_SetTextSize");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetTextSize, K2Node_MakeStruct_SlateFontInfo) == 0x000000, "Member 'WBP_Hud_Status_Level2_modern_C_SetTextSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level2_modern_C_SetTextSize, K2Node_MakeStruct_SlateFontInfo2) == 0x000058, "Member 'WBP_Hud_Status_Level2_modern_C_SetTextSize::K2Node_MakeStruct_SlateFontInfo2' has a wrong offset!");

}

