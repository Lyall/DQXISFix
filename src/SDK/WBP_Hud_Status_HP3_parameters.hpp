#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_HP3

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Status_HP3.WBP_Hud_Status_HP3_C.ExecuteUbergraph_WBP_Hud_Status_HP3
// 0x0058 (0x0058 - 0x0000)
struct WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index, int32 ColorNum)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ColorNum;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackUMGItemData*>               CallFunc_GetHudStatusList_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         K2Node_CustomEvent_Now;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Max;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          K2Node_CustomEvent_ColorType;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3) == 0x000008, "Wrong alignment on WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3");
static_assert(sizeof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3) == 0x000058, "Wrong size on WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, EntryPoint) == 0x000000, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CustomEvent_Index) == 0x000018, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CustomEvent_ColorNum) == 0x00001C, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CustomEvent_ColorNum' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, CallFunc_GetUMGManager_ReturnValue) == 0x000020, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, CallFunc_GetAccessorMembers_ReturnValue) == 0x000028, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, CallFunc_GetHudStatusList_ReturnValue) == 0x000030, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::CallFunc_GetHudStatusList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CustomEvent_Now) == 0x000040, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CustomEvent_Now' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CustomEvent_Max) == 0x000044, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CustomEvent_Max' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, K2Node_CustomEvent_ColorType) == 0x000048, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::K2Node_CustomEvent_ColorType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00004C, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'WBP_Hud_Status_HP3_C_ExecuteUbergraph_WBP_Hud_Status_HP3::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Hud_Status_HP3.WBP_Hud_Status_HP3_C.InitValueHudStatusHp
// 0x000C (0x000C - 0x0000)
struct WBP_Hud_Status_HP3_C_InitValueHudStatusHp final
{
public:
	int32                                         Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          ColorType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_HP3_C_InitValueHudStatusHp) == 0x000004, "Wrong alignment on WBP_Hud_Status_HP3_C_InitValueHudStatusHp");
static_assert(sizeof(WBP_Hud_Status_HP3_C_InitValueHudStatusHp) == 0x00000C, "Wrong size on WBP_Hud_Status_HP3_C_InitValueHudStatusHp");
static_assert(offsetof(WBP_Hud_Status_HP3_C_InitValueHudStatusHp, Now) == 0x000000, "Member 'WBP_Hud_Status_HP3_C_InitValueHudStatusHp::Now' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_InitValueHudStatusHp, Max) == 0x000004, "Member 'WBP_Hud_Status_HP3_C_InitValueHudStatusHp::Max' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_InitValueHudStatusHp, ColorType) == 0x000008, "Member 'WBP_Hud_Status_HP3_C_InitValueHudStatusHp::ColorType' has a wrong offset!");

// Function WBP_Hud_Status_HP3.WBP_Hud_Status_HP3_C.ValueChangeDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorNum;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event) == 0x000004, "Wrong alignment on WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event");
static_assert(sizeof(WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event) == 0x000008, "Wrong size on WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event, Index_0) == 0x000000, "Member 'WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event, ColorNum) == 0x000004, "Member 'WBP_Hud_Status_HP3_C_ValueChangeDelegate_Event::ColorNum' has a wrong offset!");

}
