#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CsWindControl

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CsWindControl.BP_CsWindControl_C.ExecuteUbergraph_BP_CsWindControl
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_CSID7;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CSID6;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CSID5;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CSID4;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CSID3;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CSID2;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_CSID;                                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl) == 0x000008, "Wrong alignment on BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl");
static_assert(sizeof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl) == 0x000048, "Wrong size on BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, EntryPoint) == 0x000000, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID7) == 0x000008, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID7' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID6) == 0x000010, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID6' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID5) == 0x000018, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID5' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID4) == 0x000020, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID4' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID3) == 0x000028, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID3' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID2) == 0x000030, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID2' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl, K2Node_Event_CSID) == 0x000040, "Member 'BP_CsWindControl_C_ExecuteUbergraph_BP_CsWindControl::K2Node_Event_CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.EndCutSceneBeforeUnload
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_EndCutSceneBeforeUnload final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_EndCutSceneBeforeUnload) == 0x000008, "Wrong alignment on BP_CsWindControl_C_EndCutSceneBeforeUnload");
static_assert(sizeof(BP_CsWindControl_C_EndCutSceneBeforeUnload) == 0x000008, "Wrong size on BP_CsWindControl_C_EndCutSceneBeforeUnload");
static_assert(offsetof(BP_CsWindControl_C_EndCutSceneBeforeUnload, CSID) == 0x000000, "Member 'BP_CsWindControl_C_EndCutSceneBeforeUnload::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CsWindControl_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CsWindControl_C_ReceiveTick");
static_assert(sizeof(BP_CsWindControl_C_ReceiveTick) == 0x000004, "Wrong size on BP_CsWindControl_C_ReceiveTick");
static_assert(offsetof(BP_CsWindControl_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CsWindControl_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.StartCutSceneCharacterSettingAfter
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_StartCutSceneCharacterSettingAfter final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_StartCutSceneCharacterSettingAfter) == 0x000008, "Wrong alignment on BP_CsWindControl_C_StartCutSceneCharacterSettingAfter");
static_assert(sizeof(BP_CsWindControl_C_StartCutSceneCharacterSettingAfter) == 0x000008, "Wrong size on BP_CsWindControl_C_StartCutSceneCharacterSettingAfter");
static_assert(offsetof(BP_CsWindControl_C_StartCutSceneCharacterSettingAfter, CSID) == 0x000000, "Member 'BP_CsWindControl_C_StartCutSceneCharacterSettingAfter::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.EndCutSceneFadInBefore
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_EndCutSceneFadInBefore final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_EndCutSceneFadInBefore) == 0x000008, "Wrong alignment on BP_CsWindControl_C_EndCutSceneFadInBefore");
static_assert(sizeof(BP_CsWindControl_C_EndCutSceneFadInBefore) == 0x000008, "Wrong size on BP_CsWindControl_C_EndCutSceneFadInBefore");
static_assert(offsetof(BP_CsWindControl_C_EndCutSceneFadInBefore, CSID) == 0x000000, "Member 'BP_CsWindControl_C_EndCutSceneFadInBefore::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.StartCutSceneFadeOutAfter
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_StartCutSceneFadeOutAfter final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_StartCutSceneFadeOutAfter) == 0x000008, "Wrong alignment on BP_CsWindControl_C_StartCutSceneFadeOutAfter");
static_assert(sizeof(BP_CsWindControl_C_StartCutSceneFadeOutAfter) == 0x000008, "Wrong size on BP_CsWindControl_C_StartCutSceneFadeOutAfter");
static_assert(offsetof(BP_CsWindControl_C_StartCutSceneFadeOutAfter, CSID) == 0x000000, "Member 'BP_CsWindControl_C_StartCutSceneFadeOutAfter::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.StartCutsceneBeforeLoad
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_StartCutsceneBeforeLoad final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_StartCutsceneBeforeLoad) == 0x000008, "Wrong alignment on BP_CsWindControl_C_StartCutsceneBeforeLoad");
static_assert(sizeof(BP_CsWindControl_C_StartCutsceneBeforeLoad) == 0x000008, "Wrong size on BP_CsWindControl_C_StartCutsceneBeforeLoad");
static_assert(offsetof(BP_CsWindControl_C_StartCutsceneBeforeLoad, CSID) == 0x000000, "Member 'BP_CsWindControl_C_StartCutsceneBeforeLoad::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.EndCutScene
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_EndCutScene final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_EndCutScene) == 0x000008, "Wrong alignment on BP_CsWindControl_C_EndCutScene");
static_assert(sizeof(BP_CsWindControl_C_EndCutScene) == 0x000008, "Wrong size on BP_CsWindControl_C_EndCutScene");
static_assert(offsetof(BP_CsWindControl_C_EndCutScene, CSID) == 0x000000, "Member 'BP_CsWindControl_C_EndCutScene::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.StartCutScene
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) BP_CsWindControl_C_StartCutScene final
{
public:
	class FName                                   CSID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_StartCutScene) == 0x000008, "Wrong alignment on BP_CsWindControl_C_StartCutScene");
static_assert(sizeof(BP_CsWindControl_C_StartCutScene) == 0x000008, "Wrong size on BP_CsWindControl_C_StartCutScene");
static_assert(offsetof(BP_CsWindControl_C_StartCutScene, CSID) == 0x000000, "Member 'BP_CsWindControl_C_StartCutScene::CSID' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.CsWindInitialize
// 0x0018 (0x0018 - 0x0000)
struct BP_CsWindControl_C_CsWindInitialize final
{
public:
	class UJackWeatherAffectComponent*            CallFunc_GetPlayerWeatherAffectComponent_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_COMP_WeatherAffect_C*               K2Node_DynamicCast_AsBP_COMP_Weather_Affect;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CsWindControl_C_CsWindInitialize) == 0x000008, "Wrong alignment on BP_CsWindControl_C_CsWindInitialize");
static_assert(sizeof(BP_CsWindControl_C_CsWindInitialize) == 0x000018, "Wrong size on BP_CsWindControl_C_CsWindInitialize");
static_assert(offsetof(BP_CsWindControl_C_CsWindInitialize, CallFunc_GetPlayerWeatherAffectComponent_ReturnValue) == 0x000000, "Member 'BP_CsWindControl_C_CsWindInitialize::CallFunc_GetPlayerWeatherAffectComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_CsWindInitialize, K2Node_DynamicCast_AsBP_COMP_Weather_Affect) == 0x000008, "Member 'BP_CsWindControl_C_CsWindInitialize::K2Node_DynamicCast_AsBP_COMP_Weather_Affect' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_CsWindInitialize, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_CsWindControl_C_CsWindInitialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_CsWindInitialize, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'BP_CsWindControl_C_CsWindInitialize::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.SetWeatherRate
// 0x000C (0x000C - 0x0000)
struct BP_CsWindControl_C_SetWeatherRate final
{
public:
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CsWindControl_C_SetWeatherRate) == 0x000004, "Wrong alignment on BP_CsWindControl_C_SetWeatherRate");
static_assert(sizeof(BP_CsWindControl_C_SetWeatherRate) == 0x00000C, "Wrong size on BP_CsWindControl_C_SetWeatherRate");
static_assert(offsetof(BP_CsWindControl_C_SetWeatherRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000000, "Member 'BP_CsWindControl_C_SetWeatherRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_SetWeatherRate, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x000004, "Member 'BP_CsWindControl_C_SetWeatherRate::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_CsWindControl_C_SetWeatherRate, CallFunc_Multiply_FloatFloat_ReturnValue3) == 0x000008, "Member 'BP_CsWindControl_C_SetWeatherRate::CallFunc_Multiply_FloatFloat_ReturnValue3' has a wrong offset!");

// Function BP_CsWindControl.BP_CsWindControl_C.ResetWind
// 0x0001 (0x0001 - 0x0000)
struct BP_CsWindControl_C_ResetWind final
{
public:
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CsWindControl_C_ResetWind) == 0x000001, "Wrong alignment on BP_CsWindControl_C_ResetWind");
static_assert(sizeof(BP_CsWindControl_C_ResetWind) == 0x000001, "Wrong size on BP_CsWindControl_C_ResetWind");
static_assert(offsetof(BP_CsWindControl_C_ResetWind, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000000, "Member 'BP_CsWindControl_C_ResetWind::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

