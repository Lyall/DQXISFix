#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Scenario_Tensei_000_Modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "STRUCT_TitleBGMFadeTime_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Scenario_Tensei_000_Modern.WBP_Menu_Scenario_Tensei_000_modern_C.ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackMessageArgumentData>       Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FSTRUCT_TitleBGMFadeTime>       Temp_struct_Variable2;                             // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowLatentMessageEndResult* CallFunc_WaitMessageEndFromBP_Result;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorShop*                   CallFunc_GetAccessorShop_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetShopID_ReturnValue;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorShop*                   CallFunc_GetAccessorShop_ReturnValue2;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorShop*                   CallFunc_GetAccessorShop_ReturnValue3;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_GetUMGWidgetFromName_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UMG_Root_Widget_modern_C*          K2Node_DynamicCast_AsWBP_UMG_Root_Widget_Modern;   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_GetUMGWidgetFromName_ReturnValue2;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackMessageArgumentData>       Temp_struct_Variable3;                             // 0x00A0(0x0010)(ZeroConstructor, ReferenceParm)
	class UJackUMGSerifuWindowController*         CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowLatentMessageEndResult* CallFunc_WaitMessageEndFromBP_Result2;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSerifuWindowController*         CallFunc_CloseSerifuWindow_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern) == 0x000008, "Wrong alignment on WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern");
static_assert(sizeof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern) == 0x0000D8, "Wrong size on WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, Temp_struct_Variable) == 0x000008, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, Temp_struct_Variable2) == 0x000018, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue) == 0x000028, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_WaitMessageEndFromBP_Result) == 0x000030, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_WaitMessageEndFromBP_Result' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, K2Node_CustomEvent_EventTag) == 0x000038, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetAccessorShop_ReturnValue) == 0x000040, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetAccessorShop_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000048, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetShopID_ReturnValue) == 0x000050, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetShopID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetAccessorShop_ReturnValue2) == 0x000058, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetAccessorShop_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000060, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetAccessorShop_ReturnValue3) == 0x000068, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetAccessorShop_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetUMGWidgetFromName_ReturnValue) == 0x000070, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetUMGWidgetFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, K2Node_DynamicCast_AsWBP_UMG_Root_Widget_Modern) == 0x000078, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::K2Node_DynamicCast_AsWBP_UMG_Root_Widget_Modern' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetUMGManager_ReturnValue2) == 0x000088, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_GetUMGWidgetFromName_ReturnValue2) == 0x000090, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_GetUMGWidgetFromName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000098, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, Temp_struct_Variable3) == 0x0000A0, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2) == 0x0000B0, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_DisplaySerifuWindowAtTextID_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_WaitMessageEndFromBP_Result2) == 0x0000B8, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_WaitMessageEndFromBP_Result2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, CallFunc_CloseSerifuWindow_ReturnValue) == 0x0000C0, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::CallFunc_CloseSerifuWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_ExecuteUbergraph_WBP_Menu_Scenario_Tensei_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_Menu_Scenario_Tensei_000_Modern.WBP_Menu_Scenario_Tensei_000_modern_C.CustomEvent_1
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1 final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1) == 0x000008, "Wrong alignment on WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1");
static_assert(sizeof(WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1) == 0x000008, "Wrong size on WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1");
static_assert(offsetof(WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1, EventTag) == 0x000000, "Member 'WBP_Menu_Scenario_Tensei_000_modern_C_CustomEvent_1::EventTag' has a wrong offset!");

}

