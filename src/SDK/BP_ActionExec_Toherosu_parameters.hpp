#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionExec_Toherosu

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.ExecuteUbergraph_BP_ActionExec_Toherosu
// 0x0110 (0x0110 - 0x0000)
struct BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackSerifuAutomationFlags             Temp_struct_Variable;                              // 0x0004(0x0005)(NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackGamePlayer*                        CallFunc_GetJackGamePlayer_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue3;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsToherosuFail_IsFail;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackGameCharacter*                     CallFunc_GetCasterGameCharacter_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageArgumentData               K2Node_MakeStruct_JackMessageArgumentData;         // 0x0048(0x0048)()
	struct FJackMessageArgumentData               CallFunc_MakeJackMessageArgumentDataAtGameCharacter_ReturnValue; // 0x0090(0x0048)()
	TArray<struct FJackMessageArgumentData>       K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsToherosuFail_IsFail2;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue2;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetToherosuSerifId_NewParam;              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu) == 0x000008, "Wrong alignment on BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu");
static_assert(sizeof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu) == 0x000110, "Wrong size on BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, EntryPoint) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, Temp_struct_Variable) == 0x000004, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetJackGamePlayer_ReturnValue) == 0x000010, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetJackGamePlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetJackPlayerCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetJackPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetUMGManager_ReturnValue) == 0x000020, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetUMGManager_ReturnValue2) == 0x000028, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetUMGManager_ReturnValue3) == 0x000030, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetUMGManager_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_IsToherosuFail_IsFail) == 0x000038, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_IsToherosuFail_IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetCasterGameCharacter_ReturnValue) == 0x000040, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetCasterGameCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, K2Node_MakeStruct_JackMessageArgumentData) == 0x000048, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::K2Node_MakeStruct_JackMessageArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_MakeJackMessageArgumentDataAtGameCharacter_ReturnValue) == 0x000090, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_MakeJackMessageArgumentDataAtGameCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, K2Node_MakeArray_Array) == 0x0000D8, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_IsToherosuFail_IsFail2) == 0x0000F8, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_IsToherosuFail_IsFail2' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetJackPlayerCharacter_ReturnValue2) == 0x000100, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetJackPlayerCharacter_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu, CallFunc_GetToherosuSerifId_NewParam) == 0x000108, "Member 'BP_ActionExec_Toherosu_C_ExecuteUbergraph_BP_ActionExec_Toherosu::CallFunc_GetToherosuSerifId_NewParam' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.GetInpasuResultTextId
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionExec_Toherosu_C_GetInpasuResultTextId final
{
public:
	class FName                                   OutTextId;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackLDT_TextDataGame                  K2Node_MakeStruct_JackLDT_TextDataGame;            // 0x0008(0x0010)(NoDestructor)
	class UJackInteractiveActorComponent*         CallFunc_GetFocusedInteractiveActorComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TreasureBoxArrangedBase_C*          K2Node_DynamicCast_AsBP_Treasure_Box_Arranged_Base; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetInpasuResultTextId_OutTextId;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId) == 0x000008, "Wrong alignment on BP_ActionExec_Toherosu_C_GetInpasuResultTextId");
static_assert(sizeof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId) == 0x000040, "Wrong size on BP_ActionExec_Toherosu_C_GetInpasuResultTextId");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, OutTextId) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::OutTextId' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, K2Node_MakeStruct_JackLDT_TextDataGame) == 0x000008, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::K2Node_MakeStruct_JackLDT_TextDataGame' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, CallFunc_GetFocusedInteractiveActorComponent_ReturnValue) == 0x000018, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::CallFunc_GetFocusedInteractiveActorComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, K2Node_DynamicCast_AsBP_Treasure_Box_Arranged_Base) == 0x000028, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::K2Node_DynamicCast_AsBP_Treasure_Box_Arranged_Base' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetInpasuResultTextId, CallFunc_GetInpasuResultTextId_OutTextId) == 0x000038, "Member 'BP_ActionExec_Toherosu_C_GetInpasuResultTextId::CallFunc_GetInpasuResultTextId_OutTextId' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.IsFocusedActionCursor
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionExec_Toherosu_C_IsFocusedActionCursor final
{
public:
	bool                                          bFocused;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackInteractiveActorComponent*         CallFunc_GetFocusedInteractiveActorComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllowUsingInpasu_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor) == 0x000008, "Wrong alignment on BP_ActionExec_Toherosu_C_IsFocusedActionCursor");
static_assert(sizeof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor) == 0x000018, "Wrong size on BP_ActionExec_Toherosu_C_IsFocusedActionCursor");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor, bFocused) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_IsFocusedActionCursor::bFocused' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor, CallFunc_GetFocusedInteractiveActorComponent_ReturnValue) == 0x000008, "Member 'BP_ActionExec_Toherosu_C_IsFocusedActionCursor::CallFunc_GetFocusedInteractiveActorComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor, CallFunc_IsAllowUsingInpasu_ReturnValue) == 0x000010, "Member 'BP_ActionExec_Toherosu_C_IsFocusedActionCursor::CallFunc_IsAllowUsingInpasu_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFocusedActionCursor, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'BP_ActionExec_Toherosu_C_IsFocusedActionCursor::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.GetToherosuSerifId
// 0x0048 (0x0048 - 0x0000)
struct BP_ActionExec_Toherosu_C_GetToherosuSerifId final
{
public:
	class FName                                   NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnsID;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackLDT_TextDataGame                  K2Node_MakeStruct_JackLDT_TextDataGame;            // 0x0010(0x0010)(NoDestructor)
	struct FJackLDT_TextDataGame                  K2Node_MakeStruct_JackLDT_TextDataGame2;           // 0x0020(0x0010)(NoDestructor)
	struct FJackLDT_TextDataGame                  K2Node_MakeStruct_JackLDT_TextDataGame3;           // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_IsFailCannotUse_IsFail;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFailStrangePower_IsFail;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_GetToherosuSerifId) == 0x000008, "Wrong alignment on BP_ActionExec_Toherosu_C_GetToherosuSerifId");
static_assert(sizeof(BP_ActionExec_Toherosu_C_GetToherosuSerifId) == 0x000048, "Wrong size on BP_ActionExec_Toherosu_C_GetToherosuSerifId");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, NewParam) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, AnsID) == 0x000008, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::AnsID' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, K2Node_MakeStruct_JackLDT_TextDataGame) == 0x000010, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::K2Node_MakeStruct_JackLDT_TextDataGame' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, K2Node_MakeStruct_JackLDT_TextDataGame2) == 0x000020, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::K2Node_MakeStruct_JackLDT_TextDataGame2' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, K2Node_MakeStruct_JackLDT_TextDataGame3) == 0x000030, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::K2Node_MakeStruct_JackLDT_TextDataGame3' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, CallFunc_IsFailCannotUse_IsFail) == 0x000040, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::CallFunc_IsFailCannotUse_IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_GetToherosuSerifId, CallFunc_IsFailStrangePower_IsFail) == 0x000041, "Member 'BP_ActionExec_Toherosu_C_GetToherosuSerifId::CallFunc_IsFailStrangePower_IsFail' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.IsToherosuFail
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionExec_Toherosu_C_IsToherosuFail final
{
public:
	bool                                          IsFail;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFailCannotUse_IsFail;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFailStrangePower_IsFail;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_IsToherosuFail) == 0x000001, "Wrong alignment on BP_ActionExec_Toherosu_C_IsToherosuFail");
static_assert(sizeof(BP_ActionExec_Toherosu_C_IsToherosuFail) == 0x000004, "Wrong size on BP_ActionExec_Toherosu_C_IsToherosuFail");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsToherosuFail, IsFail) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_IsToherosuFail::IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsToherosuFail, CallFunc_IsFailCannotUse_IsFail) == 0x000001, "Member 'BP_ActionExec_Toherosu_C_IsToherosuFail::CallFunc_IsFailCannotUse_IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsToherosuFail, CallFunc_IsFailStrangePower_IsFail) == 0x000002, "Member 'BP_ActionExec_Toherosu_C_IsToherosuFail::CallFunc_IsFailStrangePower_IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsToherosuFail, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'BP_ActionExec_Toherosu_C_IsToherosuFail::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.IsFailStrangePower
// 0x0003 (0x0003 - 0x0000)
struct BP_ActionExec_Toherosu_C_IsFailStrangePower final
{
public:
	bool                                          IsFail;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackPlayerControlCharacter                   CallFunc_GetFieldPlayerCharacterType_ReturnValue;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_IsFailStrangePower) == 0x000001, "Wrong alignment on BP_ActionExec_Toherosu_C_IsFailStrangePower");
static_assert(sizeof(BP_ActionExec_Toherosu_C_IsFailStrangePower) == 0x000003, "Wrong size on BP_ActionExec_Toherosu_C_IsFailStrangePower");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailStrangePower, IsFail) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_IsFailStrangePower::IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailStrangePower, CallFunc_GetFieldPlayerCharacterType_ReturnValue) == 0x000001, "Member 'BP_ActionExec_Toherosu_C_IsFailStrangePower::CallFunc_GetFieldPlayerCharacterType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailStrangePower, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_ActionExec_Toherosu_C_IsFailStrangePower::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C.IsFailCannotUse
// 0x0003 (0x0003 - 0x0000)
struct BP_ActionExec_Toherosu_C_IsFailCannotUse final
{
public:
	bool                                          IsFail;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackPlayerControlCharacter                   CallFunc_GetFieldPlayerCharacterType_ReturnValue;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActionExec_Toherosu_C_IsFailCannotUse) == 0x000001, "Wrong alignment on BP_ActionExec_Toherosu_C_IsFailCannotUse");
static_assert(sizeof(BP_ActionExec_Toherosu_C_IsFailCannotUse) == 0x000003, "Wrong size on BP_ActionExec_Toherosu_C_IsFailCannotUse");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailCannotUse, IsFail) == 0x000000, "Member 'BP_ActionExec_Toherosu_C_IsFailCannotUse::IsFail' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailCannotUse, CallFunc_GetFieldPlayerCharacterType_ReturnValue) == 0x000001, "Member 'BP_ActionExec_Toherosu_C_IsFailCannotUse::CallFunc_GetFieldPlayerCharacterType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionExec_Toherosu_C_IsFailCannotUse, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_ActionExec_Toherosu_C_IsFailCannotUse::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

