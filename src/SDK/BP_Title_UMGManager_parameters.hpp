#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Title_UMGManager

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.ExecuteUbergraph_BP_Title_UMGManager
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_Event_Sender2;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint4;                          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackSaveLoadResult                           K2Node_Event_CheckRusult;                          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGWidgetBase*                     K2Node_Event_Widget;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_WidgetName;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ZOrder;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_FadeAlpha;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_FadeColor;                            // 0x0038(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_DynamicCast_AsBP_IF_Save_Data_Check;        // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UMG_Fade_Widget_000_C*             K2Node_DynamicCast_AsWBP_UMG_Fade_Widget_000;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_DynamicCast_AsBP_IF_Save_Data_Check2;       // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_Event_Sender;                               // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint3;                          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint2;                          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint;                           // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckResult                   K2Node_Event_Result;                               // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager) == 0x000008, "Wrong alignment on BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager");
static_assert(sizeof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager) == 0x0000A0, "Wrong size on BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, EntryPoint) == 0x000000, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_Sender2) == 0x000008, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_Sender2' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_CheckPoint4) == 0x000018, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_CheckPoint4' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_CheckRusult) == 0x000019, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_CheckRusult' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_Widget) == 0x000020, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_WidgetName) == 0x000028, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_WidgetName' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_ZOrder) == 0x000030, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_ZOrder' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_FadeAlpha) == 0x000034, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_FadeAlpha' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_FadeColor) == 0x000038, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_FadeColor' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_AsBP_IF_Save_Data_Check) == 0x000048, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_AsBP_IF_Save_Data_Check' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_AsWBP_UMG_Fade_Widget_000) == 0x000060, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_AsWBP_UMG_Fade_Widget_000' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_bSuccess2) == 0x000068, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_AsBP_IF_Save_Data_Check2) == 0x000070, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_AsBP_IF_Save_Data_Check2' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_DynamicCast_bSuccess3) == 0x000080, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_Sender) == 0x000088, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_Sender' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_CheckPoint3) == 0x000098, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_CheckPoint3' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_CheckPoint2) == 0x000099, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_CheckPoint2' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_CheckPoint) == 0x00009A, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_CheckPoint' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager, K2Node_Event_Result) == 0x00009B, "Member 'BP_Title_UMGManager_C_ExecuteUbergraph_BP_Title_UMGManager::K2Node_Event_Result' has a wrong offset!");

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.OnFinishSaveDataCheck
// 0x0002 (0x0002 - 0x0000)
struct BP_Title_UMGManager_C_OnFinishSaveDataCheck final
{
public:
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckResult                   Result;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_OnFinishSaveDataCheck) == 0x000001, "Wrong alignment on BP_Title_UMGManager_C_OnFinishSaveDataCheck");
static_assert(sizeof(BP_Title_UMGManager_C_OnFinishSaveDataCheck) == 0x000002, "Wrong size on BP_Title_UMGManager_C_OnFinishSaveDataCheck");
static_assert(offsetof(BP_Title_UMGManager_C_OnFinishSaveDataCheck, CheckPoint) == 0x000000, "Member 'BP_Title_UMGManager_C_OnFinishSaveDataCheck::CheckPoint' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_OnFinishSaveDataCheck, Result) == 0x000001, "Member 'BP_Title_UMGManager_C_OnFinishSaveDataCheck::Result' has a wrong offset!");

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.OnDisplayMessageFromSaveDataCheck
// 0x0001 (0x0001 - 0x0000)
struct BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck final
{
public:
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck) == 0x000001, "Wrong alignment on BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck");
static_assert(sizeof(BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck) == 0x000001, "Wrong size on BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck");
static_assert(offsetof(BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck, CheckPoint) == 0x000000, "Member 'BP_Title_UMGManager_C_OnDisplayMessageFromSaveDataCheck::CheckPoint' has a wrong offset!");

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.ExecuteSaveDataCheck
// 0x0018 (0x0018 - 0x0000)
struct BP_Title_UMGManager_C_ExecuteSaveDataCheck final
{
public:
	TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_ExecuteSaveDataCheck) == 0x000008, "Wrong alignment on BP_Title_UMGManager_C_ExecuteSaveDataCheck");
static_assert(sizeof(BP_Title_UMGManager_C_ExecuteSaveDataCheck) == 0x000018, "Wrong size on BP_Title_UMGManager_C_ExecuteSaveDataCheck");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteSaveDataCheck, Sender) == 0x000000, "Member 'BP_Title_UMGManager_C_ExecuteSaveDataCheck::Sender' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteSaveDataCheck, CheckPoint) == 0x000010, "Member 'BP_Title_UMGManager_C_ExecuteSaveDataCheck::CheckPoint' has a wrong offset!");

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.SetFadeWidget
// 0x0028 (0x0028 - 0x0000)
struct BP_Title_UMGManager_C_SetFadeWidget final
{
public:
	class UJackUMGWidgetBase*                     Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WidgetName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeAlpha;                                         // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FadeColor;                                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_SetFadeWidget) == 0x000008, "Wrong alignment on BP_Title_UMGManager_C_SetFadeWidget");
static_assert(sizeof(BP_Title_UMGManager_C_SetFadeWidget) == 0x000028, "Wrong size on BP_Title_UMGManager_C_SetFadeWidget");
static_assert(offsetof(BP_Title_UMGManager_C_SetFadeWidget, Widget) == 0x000000, "Member 'BP_Title_UMGManager_C_SetFadeWidget::Widget' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_SetFadeWidget, WidgetName) == 0x000008, "Member 'BP_Title_UMGManager_C_SetFadeWidget::WidgetName' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_SetFadeWidget, ZOrder) == 0x000010, "Member 'BP_Title_UMGManager_C_SetFadeWidget::ZOrder' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_SetFadeWidget, FadeAlpha) == 0x000014, "Member 'BP_Title_UMGManager_C_SetFadeWidget::FadeAlpha' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_SetFadeWidget, FadeColor) == 0x000018, "Member 'BP_Title_UMGManager_C_SetFadeWidget::FadeColor' has a wrong offset!");

// Function BP_Title_UMGManager.BP_Title_UMGManager_C.ExecuteSaveDataCheckResult
// 0x0018 (0x0018 - 0x0000)
struct BP_Title_UMGManager_C_ExecuteSaveDataCheckResult final
{
public:
	TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackSaveLoadResult                           CheckRusult;                                       // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Title_UMGManager_C_ExecuteSaveDataCheckResult) == 0x000008, "Wrong alignment on BP_Title_UMGManager_C_ExecuteSaveDataCheckResult");
static_assert(sizeof(BP_Title_UMGManager_C_ExecuteSaveDataCheckResult) == 0x000018, "Wrong size on BP_Title_UMGManager_C_ExecuteSaveDataCheckResult");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteSaveDataCheckResult, Sender) == 0x000000, "Member 'BP_Title_UMGManager_C_ExecuteSaveDataCheckResult::Sender' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteSaveDataCheckResult, CheckPoint) == 0x000010, "Member 'BP_Title_UMGManager_C_ExecuteSaveDataCheckResult::CheckPoint' has a wrong offset!");
static_assert(offsetof(BP_Title_UMGManager_C_ExecuteSaveDataCheckResult, CheckRusult) == 0x000011, "Member 'BP_Title_UMGManager_C_ExecuteSaveDataCheckResult::CheckRusult' has a wrong offset!");

}
