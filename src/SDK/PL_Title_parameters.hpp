#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PL_Title

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function PL_Title.PL_Title_C.ExecuteUbergraph_PL_Title
// 0x0050 (0x0050 - 0x0000)
struct PL_Title_C_ExecuteUbergraph_PL_Title final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_SpecificLevelRemoteEvent_ReturnValue;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_Event_Sender2;                              // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint4;                          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint3;                          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckResult                   K2Node_Event_Result;                               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_SaveDataCheck_C> K2Node_Event_Sender;                               // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint2;                          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackSaveLoadResult                           K2Node_Event_CheckRusult;                          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckPoint                    K2Node_Event_CheckPoint;                           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PL_Title_C_ExecuteUbergraph_PL_Title) == 0x000008, "Wrong alignment on PL_Title_C_ExecuteUbergraph_PL_Title");
static_assert(sizeof(PL_Title_C_ExecuteUbergraph_PL_Title) == 0x000050, "Wrong size on PL_Title_C_ExecuteUbergraph_PL_Title");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, EntryPoint) == 0x000000, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::EntryPoint' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_MakeArray_Array) == 0x000008, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, CallFunc_SpecificLevelRemoteEvent_ReturnValue) == 0x000018, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::CallFunc_SpecificLevelRemoteEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_Sender2) == 0x000020, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_Sender2' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_CheckPoint4) == 0x000030, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_CheckPoint4' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_CheckPoint3) == 0x000031, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_CheckPoint3' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_Result) == 0x000032, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_Sender) == 0x000038, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_Sender' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_CheckPoint2) == 0x000048, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_CheckPoint2' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_CheckRusult) == 0x000049, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_CheckRusult' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteUbergraph_PL_Title, K2Node_Event_CheckPoint) == 0x00004A, "Member 'PL_Title_C_ExecuteUbergraph_PL_Title::K2Node_Event_CheckPoint' has a wrong offset!");

// Function PL_Title.PL_Title_C.OnDisplayMessageFromSaveDataCheck
// 0x0001 (0x0001 - 0x0000)
struct PL_Title_C_OnDisplayMessageFromSaveDataCheck final
{
public:
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PL_Title_C_OnDisplayMessageFromSaveDataCheck) == 0x000001, "Wrong alignment on PL_Title_C_OnDisplayMessageFromSaveDataCheck");
static_assert(sizeof(PL_Title_C_OnDisplayMessageFromSaveDataCheck) == 0x000001, "Wrong size on PL_Title_C_OnDisplayMessageFromSaveDataCheck");
static_assert(offsetof(PL_Title_C_OnDisplayMessageFromSaveDataCheck, CheckPoint) == 0x000000, "Member 'PL_Title_C_OnDisplayMessageFromSaveDataCheck::CheckPoint' has a wrong offset!");

// Function PL_Title.PL_Title_C.ExecuteSaveDataCheckResult
// 0x0018 (0x0018 - 0x0000)
struct PL_Title_C_ExecuteSaveDataCheckResult final
{
public:
	TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackSaveLoadResult                           CheckRusult;                                       // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PL_Title_C_ExecuteSaveDataCheckResult) == 0x000008, "Wrong alignment on PL_Title_C_ExecuteSaveDataCheckResult");
static_assert(sizeof(PL_Title_C_ExecuteSaveDataCheckResult) == 0x000018, "Wrong size on PL_Title_C_ExecuteSaveDataCheckResult");
static_assert(offsetof(PL_Title_C_ExecuteSaveDataCheckResult, Sender) == 0x000000, "Member 'PL_Title_C_ExecuteSaveDataCheckResult::Sender' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteSaveDataCheckResult, CheckPoint) == 0x000010, "Member 'PL_Title_C_ExecuteSaveDataCheckResult::CheckPoint' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteSaveDataCheckResult, CheckRusult) == 0x000011, "Member 'PL_Title_C_ExecuteSaveDataCheckResult::CheckRusult' has a wrong offset!");

// Function PL_Title.PL_Title_C.OnFinishSaveDataCheck
// 0x0002 (0x0002 - 0x0000)
struct PL_Title_C_OnFinishSaveDataCheck final
{
public:
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckResult                   Result;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PL_Title_C_OnFinishSaveDataCheck) == 0x000001, "Wrong alignment on PL_Title_C_OnFinishSaveDataCheck");
static_assert(sizeof(PL_Title_C_OnFinishSaveDataCheck) == 0x000002, "Wrong size on PL_Title_C_OnFinishSaveDataCheck");
static_assert(offsetof(PL_Title_C_OnFinishSaveDataCheck, CheckPoint) == 0x000000, "Member 'PL_Title_C_OnFinishSaveDataCheck::CheckPoint' has a wrong offset!");
static_assert(offsetof(PL_Title_C_OnFinishSaveDataCheck, Result) == 0x000001, "Member 'PL_Title_C_OnFinishSaveDataCheck::Result' has a wrong offset!");

// Function PL_Title.PL_Title_C.ExecuteSaveDataCheck
// 0x0018 (0x0018 - 0x0000)
struct PL_Title_C_ExecuteSaveDataCheck final
{
public:
	TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    CheckPoint;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PL_Title_C_ExecuteSaveDataCheck) == 0x000008, "Wrong alignment on PL_Title_C_ExecuteSaveDataCheck");
static_assert(sizeof(PL_Title_C_ExecuteSaveDataCheck) == 0x000018, "Wrong size on PL_Title_C_ExecuteSaveDataCheck");
static_assert(offsetof(PL_Title_C_ExecuteSaveDataCheck, Sender) == 0x000000, "Member 'PL_Title_C_ExecuteSaveDataCheck::Sender' has a wrong offset!");
static_assert(offsetof(PL_Title_C_ExecuteSaveDataCheck, CheckPoint) == 0x000010, "Member 'PL_Title_C_ExecuteSaveDataCheck::CheckPoint' has a wrong offset!");

}
