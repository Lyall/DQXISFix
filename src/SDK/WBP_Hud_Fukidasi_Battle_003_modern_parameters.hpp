#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Fukidasi_Battle_003_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern
// 0x0068 (0x0068 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsPhotoMode;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsPhotoMode)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGAccessorBattle*                 CallFunc_GetAccessorBattle_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoModeActivated_ReturnValue;         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_InString;                             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_FaceID;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue2;     // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue3;     // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpened_ReturnValue;                     // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern) == 0x000008, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern) == 0x000068, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, EntryPoint) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, Temp_bool_Variable) == 0x000004, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, Temp_float_Variable) == 0x000008, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, Temp_float_Variable2) == 0x00000C, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_CustomEvent_bIsPhotoMode) == 0x000010, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_CustomEvent_bIsPhotoMode' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_GetAccessorBattle_ReturnValue) == 0x000028, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_GetAccessorBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_Select_Default) == 0x000030, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_IsPhotoModeActivated_ReturnValue) == 0x000034, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_IsPhotoModeActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_Event_Animation) == 0x000038, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000040, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_Event_InString) == 0x000048, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_Event_InString' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, K2Node_Event_FaceID) == 0x000058, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::K2Node_Event_FaceID' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue2) == 0x000061, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue3) == 0x000062, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern, CallFunc_IsOpened_ReturnValue) == 0x000063, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecuteUbergraph_WBP_Hud_Fukidasi_Battle_003_modern::CallFunc_IsOpened_ReturnValue' has a wrong offset!");

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.SetStringAndFace
// 0x0018 (0x0018 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   FaceID;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace) == 0x000008, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace) == 0x000018, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace, InString) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace::InString' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace, FaceID) == 0x000010, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_SetStringAndFace::FaceID' has a wrong offset!");

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.ChangePhotoModeDelegate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0 final
{
public:
	bool                                          bIsPhotoMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0) == 0x000001, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0) == 0x000001, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0, bIsPhotoMode) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ChangePhotoModeDelegate_Event_0::bIsPhotoMode' has a wrong offset!");

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.ExecStringAndChara
// 0x0048 (0x0048 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara final
{
public:
	class FString                                 InStr;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   InFace;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UTexture2D*                             CallFunc_GetFukidasiFaceIcon_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara) == 0x000008, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara) == 0x000048, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, InStr) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::InStr' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, InFace) == 0x000010, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::InFace' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, CallFunc_GetBattleManager_ReturnValue) == 0x000018, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, CallFunc_GetFukidasiFaceIcon_ReturnValue) == 0x000038, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::CallFunc_GetFukidasiFaceIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_ExecStringAndChara::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Hud_Fukidasi_Battle_003_modern.WBP_Hud_Fukidasi_Battle_003_modern_C.GetCharacterDisplayText
// 0x0080 (0x0080 - 0x0000)
struct WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText final
{
public:
	EJackCharacter                                NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MonsterID;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DisplayName;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UJackMonsterDatabase*                   CallFunc_GetMonsterDatabase_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackGuestNpcGameCharacter*             CallFunc_GetGuestNPCCharacter_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetMonsterDisplayName_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UJackGameCharacter*                     CallFunc_GetGameCharacter_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue2;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue2;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText) == 0x000008, "Wrong alignment on WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText");
static_assert(sizeof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText) == 0x000080, "Wrong size on WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, NewParam) == 0x000000, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, MonsterID) == 0x000008, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::MonsterID' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, DisplayName) == 0x000010, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::DisplayName' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetMonsterDatabase_ReturnValue) == 0x000020, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetMonsterDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetGuestNPCCharacter_ReturnValue) == 0x000028, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetGuestNPCCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetMonsterDisplayName_ReturnValue) == 0x000030, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetMonsterDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000038, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_Conv_NameToString_ReturnValue) == 0x000040, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetDisplayName_ReturnValue) == 0x000050, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetGameCharacter_ReturnValue) == 0x000060, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetGameCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_NotEqual_ObjectObject_ReturnValue2) == 0x000068, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_NotEqual_ObjectObject_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText, CallFunc_GetDisplayName_ReturnValue2) == 0x000070, "Member 'WBP_Hud_Fukidasi_Battle_003_modern_C_GetCharacterDisplayText::CallFunc_GetDisplayName_ReturnValue2' has a wrong offset!");

}

