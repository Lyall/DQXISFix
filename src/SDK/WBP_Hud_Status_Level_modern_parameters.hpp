#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_Level_modern

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Status_Level_modern.WBP_Hud_Status_Level_modern_C.ExecuteUbergraph_WBP_Hud_Status_Level_modern
// 0x0010 (0x0010 - 0x0000)
struct WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGHudStatusMode                         K2Node_Event_InType;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Value0;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Value1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern");
static_assert(sizeof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern) == 0x000010, "Wrong size on WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern, EntryPoint) == 0x000000, "Member 'WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern, K2Node_Event_InType) == 0x000004, "Member 'WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern, K2Node_Event_Value0) == 0x000008, "Member 'WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern::K2Node_Event_Value0' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern, K2Node_Event_Value1) == 0x00000C, "Member 'WBP_Hud_Status_Level_modern_C_ExecuteUbergraph_WBP_Hud_Status_Level_modern::K2Node_Event_Value1' has a wrong offset!");

// Function WBP_Hud_Status_Level_modern.WBP_Hud_Status_Level_modern_C.SetStatusValue
// 0x000C (0x000C - 0x0000)
struct WBP_Hud_Status_Level_modern_C_SetStatusValue final
{
public:
	EJackUMGHudStatusMode                         InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value0;                                            // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value1;                                            // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level_modern_C_SetStatusValue) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level_modern_C_SetStatusValue");
static_assert(sizeof(WBP_Hud_Status_Level_modern_C_SetStatusValue) == 0x00000C, "Wrong size on WBP_Hud_Status_Level_modern_C_SetStatusValue");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_SetStatusValue, InType) == 0x000000, "Member 'WBP_Hud_Status_Level_modern_C_SetStatusValue::InType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_SetStatusValue, Value0) == 0x000004, "Member 'WBP_Hud_Status_Level_modern_C_SetStatusValue::Value0' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_SetStatusValue, Value1) == 0x000008, "Member 'WBP_Hud_Status_Level_modern_C_SetStatusValue::Value1' has a wrong offset!");

// Function WBP_Hud_Status_Level_modern.WBP_Hud_Status_Level_modern_C.Set_Color_Texture
// 0x0018 (0x0018 - 0x0000)
struct WBP_Hud_Status_Level_modern_C_Set_Color_Texture final
{
public:
	int32                                         Now_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture) == 0x000004, "Wrong alignment on WBP_Hud_Status_Level_modern_C_Set_Color_Texture");
static_assert(sizeof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture) == 0x000018, "Wrong size on WBP_Hud_Status_Level_modern_C_Set_Color_Texture");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture, Now_Value) == 0x000000, "Member 'WBP_Hud_Status_Level_modern_C_Set_Color_Texture::Now_Value' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture, CallFunc_Divide_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Hud_Status_Level_modern_C_Set_Color_Texture::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Hud_Status_Level_modern_C_Set_Color_Texture::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_Hud_Status_Level_modern_C_Set_Color_Texture::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_Level_modern_C_Set_Color_Texture, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'WBP_Hud_Status_Level_modern_C_Set_Color_Texture::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}
