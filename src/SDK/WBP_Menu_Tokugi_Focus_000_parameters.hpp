#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tokugi_Focus_000

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JackGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000
// 0x0140 (0x0140 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Event_Position2;                            // 0x0010(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Scale;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Event_BgScroll2;                            // 0x001C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_TokugiPanel_Item_C> K2Node_Event_CancelEventListener;                  // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackCharacter                                K2Node_Event_CharacterType;                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_TokugiPanel_Item_C> K2Node_Event_Listener;                             // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            K2Node_Event_Sender;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Arg2;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_Arg;                                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGTokugiPanelData*                K2Node_Event_PanelData;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemData*                       K2Node_Event_ItemData;                             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGTokugiPanelAnimData            K2Node_Event_AnimData;                             // 0x0078(0x0040)()
	class FName                                   K2Node_Event_Message;                              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Event_Position;                             // 0x00C0(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DisplayScale;                         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoundSet*                       CallFunc_GetSoundSet_ReturnValue;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoundSet*                       CallFunc_GetSoundSet_ReturnValue2;                 // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Event_BgScroll;                             // 0x00F0(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x00F8(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0100(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0108(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0110(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0120(0x001C)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000) == 0x000140, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, EntryPoint) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Position2) == 0x000010, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Position2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Scale) == 0x000018, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Scale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_BgScroll2) == 0x00001C, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_BgScroll2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_CancelEventListener) == 0x000028, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_CancelEventListener' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_CharacterType) == 0x000038, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_CharacterType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Listener) == 0x000040, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Listener' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Sender) == 0x000050, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Sender' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Arg2) == 0x000058, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Arg2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Arg) == 0x000060, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Arg' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_PanelData) == 0x000068, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_PanelData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_ItemData) == 0x000070, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_AnimData) == 0x000078, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_AnimData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Message) == 0x0000B8, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Position) == 0x0000C0, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Position' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_DisplayScale) == 0x0000C8, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_DisplayScale' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_GetUMGManager_ReturnValue) == 0x0000D0, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_GetSoundSet_ReturnValue) == 0x0000D8, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_GetSoundSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_GetUMGManager_ReturnValue2) == 0x0000E0, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_GetSoundSet_ReturnValue2) == 0x0000E8, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_GetSoundSet_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_BgScroll) == 0x0000F0, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_BgScroll' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0000F8, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000100, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000108, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_MakeVector2D_ReturnValue) == 0x000110, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_Event_Animation) == 0x000118, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, K2Node_MakeStruct_WidgetTransform) == 0x000120, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00013C, "Member 'WBP_Menu_Tokugi_Focus_000_C_ExecuteUbergraph_WBP_Menu_Tokugi_Focus_000::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetBackGroundScroll
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll final
{
public:
	struct FVector2D                              BgScroll_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll) == 0x000004, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll, BgScroll_0) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetBackGroundScroll::BgScroll_0' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetDisplayScale
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale final
{
public:
	float                                         DisplayScale;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale) == 0x000004, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale) == 0x000004, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale, DisplayScale) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetDisplayScale::DisplayScale' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetDrawPos
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetDrawPos final
{
public:
	struct FVector2D                              Position_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetDrawPos) == 0x000004, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetDrawPos");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetDrawPos) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetDrawPos");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetDrawPos, Position_0) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetDrawPos::Position_0' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SendTokugiPanelMessage
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage final
{
public:
	class FName                                   Message;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage, Message) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SendTokugiPanelMessage::Message' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.PlayAnimData
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_PlayAnimData final
{
public:
	struct FJackUMGTokugiPanelAnimData            AnimData;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimData) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_PlayAnimData");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimData) == 0x000040, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_PlayAnimData");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimData, AnimData) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_PlayAnimData::AnimData' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetCharacterItemData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData final
{
public:
	class UJackUMGItemData*                       ItemData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData, ItemData) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetCharacterItemData::ItemData' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetPanelData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetPanelData final
{
public:
	class UJackUMGTokugiPanelData*                PanelData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetPanelData) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetPanelData");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetPanelData) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetPanelData");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetPanelData, PanelData) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetPanelData::PanelData' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.PlayAnimationNameArg
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg final
{
public:
	class FName                                   Arg;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg, Arg) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_PlayAnimationNameArg::Arg' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.PlayAnimationIntArg
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg final
{
public:
	int32                                         Arg;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg) == 0x000004, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg) == 0x000004, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg, Arg) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_PlayAnimationIntArg::Arg' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.OnEndAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_OnEndAnim final
{
public:
	class UUserWidget*                            Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_OnEndAnim) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_OnEndAnim");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_OnEndAnim) == 0x000008, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_OnEndAnim");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_OnEndAnim, Sender) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_OnEndAnim::Sender' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetEndAnimEventListener
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener final
{
public:
	TScriptInterface<class IBP_IF_TokugiPanel_Item_C> Listener;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener) == 0x000010, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener, Listener) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetEndAnimEventListener::Listener' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetBattleResultMode
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode final
{
public:
	EJackCharacter                                CharacterType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode) == 0x000001, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode) == 0x000001, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode, CharacterType) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetBattleResultMode::CharacterType' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetCancelEventListener
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener final
{
public:
	TScriptInterface<class IBP_IF_TokugiPanel_Item_C> CancelEventListener;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener) == 0x000008, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener) == 0x000010, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener, CancelEventListener) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetCancelEventListener::CancelEventListener' has a wrong offset!");

// Function WBP_Menu_Tokugi_Focus_000.WBP_Menu_Tokugi_Focus_000_C.SetDisplayData
// 0x0014 (0x0014 - 0x0000)
struct WBP_Menu_Tokugi_Focus_000_C_SetDisplayData final
{
public:
	struct FVector2D                              Position_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BgScroll_0;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayData) == 0x000004, "Wrong alignment on WBP_Menu_Tokugi_Focus_000_C_SetDisplayData");
static_assert(sizeof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayData) == 0x000014, "Wrong size on WBP_Menu_Tokugi_Focus_000_C_SetDisplayData");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayData, Position_0) == 0x000000, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetDisplayData::Position_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayData, Scale_0) == 0x000008, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetDisplayData::Scale_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tokugi_Focus_000_C_SetDisplayData, BgScroll_0) == 0x00000C, "Member 'WBP_Menu_Tokugi_Focus_000_C_SetDisplayData::BgScroll_0' has a wrong offset!");

}

