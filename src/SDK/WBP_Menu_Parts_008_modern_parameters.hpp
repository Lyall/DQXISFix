#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_008_modern

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JackGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.ExecuteUbergraph_WBP_Menu_Parts_008_modern
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FJackUMGItemContainer& ItemContainer)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FJackUMGItemContainer                  K2Node_CustomEvent_ItemContainer;                  // 0x0018(0x0050)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0068(0x003C)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern) == 0x000008, "Wrong alignment on WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern) == 0x0000B0, "Wrong size on WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, K2Node_CustomEvent_ItemContainer) == 0x000018, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::K2Node_CustomEvent_ItemContainer' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, K2Node_Event_MyGeometry) == 0x000068, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, K2Node_Event_InDeltaTime) == 0x0000A4, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern, K2Node_SwitchName_CmpSuccess) == 0x0000A8, "Member 'WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.Tick
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x003C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_Tick) == 0x000004, "Wrong alignment on WBP_Menu_Parts_008_modern_C_Tick");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_Tick) == 0x000040, "Wrong size on WBP_Menu_Parts_008_modern_C_Tick");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_Tick, InDeltaTime) == 0x00003C, "Member 'WBP_Menu_Parts_008_modern_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.CustomEvent_0
// 0x0050 (0x0050 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_CustomEvent_0 final
{
public:
	struct FJackUMGItemContainer                  ItemContainer;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Parts_008_modern_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_CustomEvent_0) == 0x000050, "Wrong size on WBP_Menu_Parts_008_modern_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_CustomEvent_0, ItemContainer) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_CustomEvent_0::ItemContainer' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.SetButtonAndCaption
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_SetButtonAndCaption final
{
public:
	EJackKeys                                     InKeyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InTextId;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImagePanel;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable2;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable3;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable4;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable5;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable6;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable7;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable8;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable9;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable10;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable11;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable12;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable13;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable14;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable15;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable16;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable17;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable18;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetCommonButtonIcon_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable19;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x00D0(0x0018)()
	EJackKeys                                     Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_Select_Default;                             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption) == 0x000008, "Wrong alignment on WBP_Menu_Parts_008_modern_C_SetButtonAndCaption");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption) == 0x0000F8, "Wrong size on WBP_Menu_Parts_008_modern_C_SetButtonAndCaption");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, InKeyType) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, InTextId) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::InTextId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, ImagePanel) == 0x000010, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::ImagePanel' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable) == 0x000018, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable2) == 0x000020, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable3) == 0x000028, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable4) == 0x000030, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable5) == 0x000038, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable6) == 0x000040, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable7) == 0x000048, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable7' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable8) == 0x000050, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable8' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable9) == 0x000058, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable9' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable10) == 0x000060, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable10' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable11) == 0x000068, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable11' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable12) == 0x000070, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable12' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable13) == 0x000078, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable13' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable14) == 0x000080, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable14' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable15) == 0x000088, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable15' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable16) == 0x000090, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable16' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable17) == 0x000098, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable17' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable18) == 0x0000A0, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable18' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000A8, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, CallFunc_GetUMGManager_ReturnValue) == 0x0000B0, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, CallFunc_GetCommonButtonIcon_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::CallFunc_GetCommonButtonIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_object_Variable19) == 0x0000C0, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_object_Variable19' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, CallFunc_GetUMGManager_ReturnValue2) == 0x0000C8, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x0000D0, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, Temp_byte_Variable) == 0x0000E8, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetButtonAndCaption, K2Node_Select_Default) == 0x0000F0, "Member 'WBP_Menu_Parts_008_modern_C_SetButtonAndCaption::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.PlayButtonAnim
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_PlayButtonAnim final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_PlayButtonAnim) == 0x000001, "Wrong alignment on WBP_Menu_Parts_008_modern_C_PlayButtonAnim");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_PlayButtonAnim) == 0x000001, "Wrong size on WBP_Menu_Parts_008_modern_C_PlayButtonAnim");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_PlayButtonAnim, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_PlayButtonAnim::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.SetMukouColorButton
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_SetMukouColorButton final
{
public:
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetUMGPresetColor_ReturnValue;            // 0x0008(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_SetMukouColorButton) == 0x000008, "Wrong alignment on WBP_Menu_Parts_008_modern_C_SetMukouColorButton");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_SetMukouColorButton) == 0x000018, "Wrong size on WBP_Menu_Parts_008_modern_C_SetMukouColorButton");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetMukouColorButton, CallFunc_GetUMGManager_ReturnValue) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_SetMukouColorButton::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_SetMukouColorButton, CallFunc_GetUMGPresetColor_ReturnValue) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_SetMukouColorButton::CallFunc_GetUMGPresetColor_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.GetSortCaptionTextId
// 0x0060 (0x0060 - 0x0000)
struct alignas(0x08) WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId final
{
public:
	EJackUMGItemSortType                          Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Output_Get;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGItemSortType                          Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable2;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable3;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable4;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable5;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable6;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable7;                               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable8;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId) == 0x000008, "Wrong alignment on WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId) == 0x000060, "Wrong size on WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Selection) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Selection' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Output_Get) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Output_Get' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_byte_Variable) == 0x000010, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable) == 0x000018, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable2) == 0x000020, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable3) == 0x000028, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable4) == 0x000030, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable5) == 0x000038, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable6) == 0x000040, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable7) == 0x000048, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable7' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, Temp_name_Variable8) == 0x000050, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::Temp_name_Variable8' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId, K2Node_Select_Default) == 0x000058, "Member 'WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.UpdateAnim
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_UpdateAnim final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OtherButtonScale;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FaceButtonScale;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimFactor;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_UpdateAnim) == 0x000004, "Wrong alignment on WBP_Menu_Parts_008_modern_C_UpdateAnim");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_UpdateAnim) == 0x000018, "Wrong size on WBP_Menu_Parts_008_modern_C_UpdateAnim");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, DeltaTime) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, OtherButtonScale) == 0x000004, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::OtherButtonScale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, FaceButtonScale) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::FaceButtonScale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, AnimFactor) == 0x00000C, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::AnimFactor' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnim, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnim::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.UpdateAnimMain
// 0x0058 (0x0058 - 0x0000)
struct WBP_Menu_Parts_008_modern_C_UpdateAnimMain final
{
public:
	float                                         Timer;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WorkTimer;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OtherButtonScale;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FaceButtonScale;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimFactor;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue2;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue3;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue4;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue2;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0048(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue2;                // 0x0050(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain) == 0x000004, "Wrong alignment on WBP_Menu_Parts_008_modern_C_UpdateAnimMain");
static_assert(sizeof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain) == 0x000058, "Wrong size on WBP_Menu_Parts_008_modern_C_UpdateAnimMain");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, Timer) == 0x000000, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::Timer' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, WorkTimer) == 0x000004, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::WorkTimer' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, OtherButtonScale) == 0x000008, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::OtherButtonScale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, FaceButtonScale) == 0x00000C, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::FaceButtonScale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, AnimFactor) == 0x000010, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::AnimFactor' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, Temp_float_Variable) == 0x000014, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, Temp_float_Variable2) == 0x000018, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00001C, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Ease_ReturnValue) == 0x000020, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Ease_ReturnValue2) == 0x00002C, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Ease_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Ease_ReturnValue3) == 0x000030, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Ease_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Ease_ReturnValue4) == 0x000034, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Ease_ReturnValue4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Divide_FloatFloat_ReturnValue2) == 0x000038, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Divide_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Less_FloatFloat_ReturnValue) == 0x00003C, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_FClamp_ReturnValue2) == 0x000040, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_FClamp_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000044, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_MakeVector2D_ReturnValue) == 0x000048, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Parts_008_modern_C_UpdateAnimMain, CallFunc_MakeVector2D_ReturnValue2) == 0x000050, "Member 'WBP_Menu_Parts_008_modern_C_UpdateAnimMain::CallFunc_MakeVector2D_ReturnValue2' has a wrong offset!");

}

