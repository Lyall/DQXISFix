#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_Command_002_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSakusenYoyaku_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue2;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackKeys                                     K2Node_CustomEvent_InKeyType;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsPressed;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue3;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSakusenYoyaku_ReturnValue2;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJackUMGItemBase*>               K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class UJackUMGItemBase*>               K2Node_MakeArray_Array2;                           // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void(EJackKeys InKeyType, bool bIsPressed)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackHUD*                               CallFunc_GetHUD_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUIStickToButtonBindState          CallFunc_AllocLeftStickToButtonBindState_OutStickToButtonState; // 0x0080(0x0005)(NoDestructor)
	bool                                          CallFunc_AllocLeftStickToButtonBindState_ReturnValue; // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackHUD*                               CallFunc_GetHUD_ReturnValue2;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern) == 0x000008, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern) == 0x0000B0, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetAccessorBattle_ReturnValue) == 0x000008, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetAccessorBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetSakusenYoyaku_ReturnValue) == 0x000010, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetSakusenYoyaku_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetAccessorBattle_ReturnValue2) == 0x000018, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetAccessorBattle_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_CustomEvent_InKeyType) == 0x000020, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_CustomEvent_InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_CustomEvent_bIsPressed) == 0x000021, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_CustomEvent_bIsPressed' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetAccessorBattle_ReturnValue3) == 0x000028, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetAccessorBattle_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetSakusenYoyaku_ReturnValue2) == 0x000031, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetSakusenYoyaku_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_MakeArray_Array2) == 0x000048, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000068, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetHUD_ReturnValue) == 0x000070, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetUMGManager_ReturnValue2) == 0x000078, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_AllocLeftStickToButtonBindState_OutStickToButtonState) == 0x000080, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_AllocLeftStickToButtonBindState_OutStickToButtonState' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_AllocLeftStickToButtonBindState_ReturnValue) == 0x000085, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_AllocLeftStickToButtonBindState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, CallFunc_GetHUD_ReturnValue2) == 0x000088, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::CallFunc_GetHUD_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_CustomEvent_EventTag) == 0x000090, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_SwitchName_CmpSuccess) == 0x000098, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x0000A0, "Member 'WBP_Menu_Battle_Command_002_modern_C_ExecuteUbergraph_WBP_Menu_Battle_Command_002_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.WidgetActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_WidgetActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.WidgetKeyEventDelegate
// 0x0002 (0x0002 - 0x0000)
struct WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate final
{
public:
	EJackKeys                                     InKeyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPressed;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate) == 0x000001, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate) == 0x000002, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate, InKeyType) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate::InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate, bIsPressed) == 0x000001, "Member 'WBP_Menu_Battle_Command_002_modern_C_WidgetKeyEventDelegate::bIsPressed' has a wrong offset!");

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.SetMukouColor
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Battle_Command_002_modern_C_SetMukouColor final
{
public:
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetUMGPresetColor_ReturnValue;            // 0x0008(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_SetMukouColor) == 0x000008, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_SetMukouColor");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_SetMukouColor) == 0x000018, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_SetMukouColor");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_SetMukouColor, CallFunc_GetUMGManager_ReturnValue) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_SetMukouColor::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_SetMukouColor, CallFunc_GetUMGPresetColor_ReturnValue) == 0x000008, "Member 'WBP_Menu_Battle_Command_002_modern_C_SetMukouColor::CallFunc_GetUMGPresetColor_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.CreateMenu
// 0x0030 (0x0030 - 0x0000)
struct WBP_Menu_Battle_Command_002_modern_C_CreateMenu final
{
public:
	TArray<class UJackUMGItemData*>               MenuItemDataList;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EJackCharacter>                        CallFunc_GetFriendJoinedAfterList_ReturnValue;     // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu) == 0x000008, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_CreateMenu");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu) == 0x000030, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_CreateMenu");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu, MenuItemDataList) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_CreateMenu::MenuItemDataList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu, CallFunc_GetAccessorMembers_ReturnValue) == 0x000010, "Member 'WBP_Menu_Battle_Command_002_modern_C_CreateMenu::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu, CallFunc_GetFriendJoinedAfterList_ReturnValue) == 0x000018, "Member 'WBP_Menu_Battle_Command_002_modern_C_CreateMenu::CallFunc_GetFriendJoinedAfterList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_Menu_Battle_Command_002_modern_C_CreateMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_CreateMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_Menu_Battle_Command_002_modern_C_CreateMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Battle_Command_002_modern.WBP_Menu_Battle_Command_002_modern_C.AddMenuCommand
// 0x0058 (0x0058 - 0x0000)
struct WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand final
{
public:
	TArray<class UJackUMGItemData*>               TargetArray;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FName                                   InItemId;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemData*                       NewLocalVar_1;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemData*                       CallFunc_CreateItemData_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetUMGMenuTextFromTextId_ReturnValue;     // 0x0040(0x0018)()
};
static_assert(alignof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand) == 0x000008, "Wrong alignment on WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand");
static_assert(sizeof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand) == 0x000058, "Wrong size on WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, TargetArray) == 0x000000, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::TargetArray' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, InItemId) == 0x000010, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::InItemId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, NewLocalVar_1) == 0x000018, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, CallFunc_CreateItemData_ReturnValue) == 0x000020, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::CallFunc_CreateItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, CallFunc_GetUMGManager_ReturnValue) == 0x000030, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, CallFunc_MakeLiteralName_ReturnValue) == 0x000038, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand, CallFunc_GetUMGMenuTextFromTextId_ReturnValue) == 0x000040, "Member 'WBP_Menu_Battle_Command_002_modern_C_AddMenuCommand::CallFunc_GetUMGMenuTextFromTextId_ReturnValue' has a wrong offset!");

}

