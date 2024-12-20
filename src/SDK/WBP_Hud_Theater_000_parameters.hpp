#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Theater_000

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Theater_000.WBP_Hud_Theater_000_C.ExecuteUbergraph_WBP_Hud_Theater_000
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InEventTag;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     K2Node_CustomEvent_InCallWidgetBase;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InObject;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGAnimSet                        CallFunc_GetUMGPresetAnimSet_ReturnValue;          // 0x0048(0x0038)(NoDestructor)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetAnimSet_ReturnValue;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGTheaterWindowSetting*           K2Node_DynamicCast_AsJack_UMGTheater_Window_Setting; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x009C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue2;                // 0x00A4(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000) == 0x000008, "Wrong alignment on WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000");
static_assert(sizeof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000) == 0x0000C0, "Wrong size on WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, EntryPoint) == 0x000000, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CustomEvent_EventTag) == 0x000008, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_SwitchName_CmpSuccess) == 0x000010, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_GetUMGManager_ReturnValue) == 0x000028, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CustomEvent_InEventTag) == 0x000030, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CustomEvent_InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CustomEvent_InCallWidgetBase) == 0x000038, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CustomEvent_InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CustomEvent_InObject) == 0x000040, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CustomEvent_InObject' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_GetUMGPresetAnimSet_ReturnValue) == 0x000048, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_GetUMGPresetAnimSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_DynamicCast_AsMaterial_Interface) == 0x000080, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_SetAnimSet_ReturnValue) == 0x000089, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_SetAnimSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00008A, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_DynamicCast_AsJack_UMGTheater_Window_Setting) == 0x000090, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_DynamicCast_AsJack_UMGTheater_Window_Setting' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_DynamicCast_bSuccess2) == 0x000098, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_MakeVector2D_ReturnValue) == 0x00009C, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, CallFunc_MakeVector2D_ReturnValue2) == 0x0000A4, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::CallFunc_MakeVector2D_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_SwitchName2_CmpSuccess) == 0x0000AC, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000, K2Node_CreateDelegate_OutputDelegate2) == 0x0000B0, "Member 'WBP_Hud_Theater_000_C_ExecuteUbergraph_WBP_Hud_Theater_000::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function WBP_Hud_Theater_000.WBP_Hud_Theater_000_C.SetMaterial
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Theater_000_C_SetMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Theater_000_C_SetMaterial) == 0x000008, "Wrong alignment on WBP_Hud_Theater_000_C_SetMaterial");
static_assert(sizeof(WBP_Hud_Theater_000_C_SetMaterial) == 0x000008, "Wrong size on WBP_Hud_Theater_000_C_SetMaterial");
static_assert(offsetof(WBP_Hud_Theater_000_C_SetMaterial, Material) == 0x000000, "Member 'WBP_Hud_Theater_000_C_SetMaterial::Material' has a wrong offset!");

// Function WBP_Hud_Theater_000.WBP_Hud_Theater_000_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Hud_Theater_000_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Theater_000_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Hud_Theater_000_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Hud_Theater_000_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Hud_Theater_000_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Hud_Theater_000_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Hud_Theater_000_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Hud_Theater_000.WBP_Hud_Theater_000_C.WidgetNotificationDelegate
// 0x0018 (0x0018 - 0x0000)
struct WBP_Hud_Theater_000_C_WidgetNotificationDelegate final
{
public:
	class FName                                   InEventTag;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     InCallWidgetBase;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InObject;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Theater_000_C_WidgetNotificationDelegate) == 0x000008, "Wrong alignment on WBP_Hud_Theater_000_C_WidgetNotificationDelegate");
static_assert(sizeof(WBP_Hud_Theater_000_C_WidgetNotificationDelegate) == 0x000018, "Wrong size on WBP_Hud_Theater_000_C_WidgetNotificationDelegate");
static_assert(offsetof(WBP_Hud_Theater_000_C_WidgetNotificationDelegate, InEventTag) == 0x000000, "Member 'WBP_Hud_Theater_000_C_WidgetNotificationDelegate::InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_WidgetNotificationDelegate, InCallWidgetBase) == 0x000008, "Member 'WBP_Hud_Theater_000_C_WidgetNotificationDelegate::InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Theater_000_C_WidgetNotificationDelegate, InObject) == 0x000010, "Member 'WBP_Hud_Theater_000_C_WidgetNotificationDelegate::InObject' has a wrong offset!");

}

