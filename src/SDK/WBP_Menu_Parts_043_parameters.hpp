#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_043

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_043.WBP_Menu_Parts_043_C.ExecuteUbergraph_WBP_Menu_Parts_043
// 0x0070 (0x0070 - 0x0000)
struct WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FJackUMGItemContainer& ItemContainer)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGItemContainer                  K2Node_CustomEvent_ItemContainer;                  // 0x0020(0x0050)()
};
static_assert(alignof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043) == 0x000008, "Wrong alignment on WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043");
static_assert(sizeof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043) == 0x000070, "Wrong size on WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043");
static_assert(offsetof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043, K2Node_SwitchName_CmpSuccess) == 0x000018, "Member 'WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043, K2Node_CustomEvent_ItemContainer) == 0x000020, "Member 'WBP_Menu_Parts_043_C_ExecuteUbergraph_WBP_Menu_Parts_043::K2Node_CustomEvent_ItemContainer' has a wrong offset!");

// Function WBP_Menu_Parts_043.WBP_Menu_Parts_043_C.CustomEvent_0
// 0x0050 (0x0050 - 0x0000)
struct WBP_Menu_Parts_043_C_CustomEvent_0 final
{
public:
	struct FJackUMGItemContainer                  ItemContainer;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Menu_Parts_043_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Parts_043_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Parts_043_C_CustomEvent_0) == 0x000050, "Wrong size on WBP_Menu_Parts_043_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Parts_043_C_CustomEvent_0, ItemContainer) == 0x000000, "Member 'WBP_Menu_Parts_043_C_CustomEvent_0::ItemContainer' has a wrong offset!");

// Function WBP_Menu_Parts_043.WBP_Menu_Parts_043_C.SetButton
// 0x0108 (0x0108 - 0x0000)
struct WBP_Menu_Parts_043_C_SetButton final
{
public:
	EJackKeys                                     InKeyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable2;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable3;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable4;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable5;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable6;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable7;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable8;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable9;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable10;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable11;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable12;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable13;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable14;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable15;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable16;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable17;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable18;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable19;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable20;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable21;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable22;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable23;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable24;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable25;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable26;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable27;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable28;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable29;                            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackKeys                                     Temp_byte_Variable;                                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_043_C_SetButton) == 0x000008, "Wrong alignment on WBP_Menu_Parts_043_C_SetButton");
static_assert(sizeof(WBP_Menu_Parts_043_C_SetButton) == 0x000108, "Wrong size on WBP_Menu_Parts_043_C_SetButton");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, InKeyType) == 0x000000, "Member 'WBP_Menu_Parts_043_C_SetButton::InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable) == 0x000008, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable2) == 0x000010, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable3) == 0x000018, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable4) == 0x000020, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable5) == 0x000028, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable6) == 0x000030, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable7) == 0x000038, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable7' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable8) == 0x000040, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable8' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable9) == 0x000048, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable9' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable10) == 0x000050, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable10' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable11) == 0x000058, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable11' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable12) == 0x000060, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable12' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable13) == 0x000068, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable13' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable14) == 0x000070, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable14' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable15) == 0x000078, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable15' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable16) == 0x000080, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable16' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable17) == 0x000088, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable17' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable18) == 0x000090, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable18' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable19) == 0x000098, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable19' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable20) == 0x0000A0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable20' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable21) == 0x0000A8, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable21' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable22) == 0x0000B0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable22' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable23) == 0x0000B8, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable23' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable24) == 0x0000C0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable24' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable25) == 0x0000C8, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable25' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable26) == 0x0000D0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable26' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable27) == 0x0000D8, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable27' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable28) == 0x0000E0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable28' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_object_Variable29) == 0x0000E8, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_object_Variable29' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, Temp_byte_Variable) == 0x0000F0, "Member 'WBP_Menu_Parts_043_C_SetButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, K2Node_Select_Default) == 0x0000F8, "Member 'WBP_Menu_Parts_043_C_SetButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_043_C_SetButton, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000100, "Member 'WBP_Menu_Parts_043_C_SetButton::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
