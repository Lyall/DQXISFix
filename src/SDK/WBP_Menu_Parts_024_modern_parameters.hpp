#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_024_modern

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.ExecuteUbergraph_WBP_Menu_Parts_024_modern
// 0x0028 (0x0028 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x0010(0x0018)()
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern) == 0x000028, "Wrong size on WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x000010, "Member 'WBP_Menu_Parts_024_modern_C_ExecuteUbergraph_WBP_Menu_Parts_024_modern::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.SetValue
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_SetValue final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetAsciiDecText_ReturnValue;              // 0x0010(0x0018)()
	class FText                                   CallFunc_Get2ByteDecText_ReturnValue;              // 0x0028(0x0018)()
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_SetValue) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_SetValue");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_SetValue) == 0x000040, "Wrong size on WBP_Menu_Parts_024_modern_C_SetValue");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValue, InValue) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_SetValue::InValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValue, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_SetValue::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValue, CallFunc_GetAsciiDecText_ReturnValue) == 0x000010, "Member 'WBP_Menu_Parts_024_modern_C_SetValue::CallFunc_GetAsciiDecText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValue, CallFunc_Get2ByteDecText_ReturnValue) == 0x000028, "Member 'WBP_Menu_Parts_024_modern_C_SetValue::CallFunc_Get2ByteDecText_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.SetupValue
// 0x0060 (0x0060 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_SetupValue final
{
public:
	class FName                                   InUnitTextId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFig;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewLocalVar_0;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisibleUnit;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPanelSize_ReturnValue;                 // 0x001C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x0048(0x0018)()
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_SetupValue) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_SetupValue");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_SetupValue) == 0x000060, "Wrong size on WBP_Menu_Parts_024_modern_C_SetupValue");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, InUnitTextId) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::InUnitTextId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, InFig) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::InFig' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, NewLocalVar_0) == 0x00000C, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, IsVisibleUnit) == 0x000010, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::IsVisibleUnit' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_byte_Variable) == 0x000011, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_NotEqual_NameName_ReturnValue) == 0x000012, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000013, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_bool_Variable) == 0x000014, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_bool_Variable2) == 0x000016, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_BooleanAND_ReturnValue) == 0x000017, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_byte_Variable2) == 0x000018, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_GetPanelSize_ReturnValue) == 0x00001C, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_GetPanelSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, K2Node_Select_Default) == 0x000024, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_BreakVector2D_X) == 0x000028, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_BreakVector2D_Y) == 0x00002C, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_bool_Variable3) == 0x000038, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_Array_Contains_ReturnValue) == 0x000039, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_BooleanAND_ReturnValue2) == 0x00003A, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, K2Node_Select2_Default) == 0x00003B, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_byte_Variable3) == 0x00003C, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, Temp_byte_Variable4) == 0x00003D, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, K2Node_Select3_Default) == 0x00003E, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_GetUMGManager_ReturnValue) == 0x000040, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetupValue, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x000048, "Member 'WBP_Menu_Parts_024_modern_C_SetupValue::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.SetValueWithSetup
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) WBP_Menu_Parts_024_modern_C_SetValueWithSetup final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InUnitTextId;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFig;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_SetValueWithSetup) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_SetValueWithSetup");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_SetValueWithSetup) == 0x000018, "Wrong size on WBP_Menu_Parts_024_modern_C_SetValueWithSetup");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValueWithSetup, InValue) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_SetValueWithSetup::InValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValueWithSetup, InUnitTextId) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_SetValueWithSetup::InUnitTextId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValueWithSetup, InFig) == 0x000010, "Member 'WBP_Menu_Parts_024_modern_C_SetValueWithSetup::InFig' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.NoSell
// 0x0009 (0x0009 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_NoSell final
{
public:
	bool                                          IsNoSell;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_NoSell) == 0x000001, "Wrong alignment on WBP_Menu_Parts_024_modern_C_NoSell");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_NoSell) == 0x000009, "Wrong size on WBP_Menu_Parts_024_modern_C_NoSell");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, IsNoSell) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::IsNoSell' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_bool_Variable) == 0x000001, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_byte_Variable) == 0x000002, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_byte_Variable2) == 0x000003, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_bool_Variable2) == 0x000004, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, K2Node_Select_Default) == 0x000005, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_byte_Variable3) == 0x000006, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, Temp_byte_Variable4) == 0x000007, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_NoSell, K2Node_Select2_Default) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_NoSell::K2Node_Select2_Default' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.Set2Value
// 0x0048 (0x0048 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_Set2Value final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UnitTextId;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x0018(0x0018)()
	class FText                                   CallFunc_GetAsciiDecText2Value_ReturnValue;        // 0x0030(0x0018)()
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_Set2Value) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_Set2Value");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_Set2Value) == 0x000048, "Wrong size on WBP_Menu_Parts_024_modern_C_Set2Value");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, Value) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::Value' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, ValueMax) == 0x000004, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::ValueMax' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, UnitTextId) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::UnitTextId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, CallFunc_GetUMGManager_ReturnValue) == 0x000010, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x000018, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_Set2Value, CallFunc_GetAsciiDecText2Value_ReturnValue) == 0x000030, "Member 'WBP_Menu_Parts_024_modern_C_Set2Value::CallFunc_GetAsciiDecText2Value_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.SetValueFromTextId
// 0x0020 (0x0020 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_SetValueFromTextId final
{
public:
	class FName                                   InValue;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTextFromTextId_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_SetValueFromTextId) == 0x000008, "Wrong alignment on WBP_Menu_Parts_024_modern_C_SetValueFromTextId");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_SetValueFromTextId) == 0x000020, "Wrong size on WBP_Menu_Parts_024_modern_C_SetValueFromTextId");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValueFromTextId, InValue) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_SetValueFromTextId::InValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetValueFromTextId, CallFunc_GetTextFromTextId_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_024_modern_C_SetValueFromTextId::CallFunc_GetTextFromTextId_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_024_modern.WBP_Menu_Parts_024_modern_C.SetSign
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_024_modern_C_SetSign final
{
public:
	bool                                          IsSign_0;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_024_modern_C_SetSign) == 0x000001, "Wrong alignment on WBP_Menu_Parts_024_modern_C_SetSign");
static_assert(sizeof(WBP_Menu_Parts_024_modern_C_SetSign) == 0x000001, "Wrong size on WBP_Menu_Parts_024_modern_C_SetSign");
static_assert(offsetof(WBP_Menu_Parts_024_modern_C_SetSign, IsSign_0) == 0x000000, "Member 'WBP_Menu_Parts_024_modern_C_SetSign::IsSign_0' has a wrong offset!");

}

