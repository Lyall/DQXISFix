#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UMGManagerCommon

#include "Basic.hpp"

#include "BP_UMGManagerCommon_classes.hpp"
#include "BP_UMGManagerCommon_parameters.hpp"


namespace SDK
{

// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.ExecuteUbergraph_BP_UMGManagerCommon
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::ExecuteUbergraph_BP_UMGManagerCommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "ExecuteUbergraph_BP_UMGManagerCommon");

	Params::BP_UMGManagerCommon_C_ExecuteUbergraph_BP_UMGManagerCommon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.ExecuteSaveDataCheckResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackSaveLoadResult                     CheckRusult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "ExecuteSaveDataCheckResult");

	Params::BP_UMGManagerCommon_C_ExecuteSaveDataCheckResult Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;
	Parms.CheckRusult = CheckRusult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.ExecuteSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "ExecuteSaveDataCheck");

	Params::BP_UMGManagerCommon_C_ExecuteSaveDataCheck Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.SaveDataCheckResultMain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackSaveLoadResult                     SaveLoadResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::SaveDataCheckResultMain(EJackSaveLoadResult SaveLoadResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "SaveDataCheckResultMain");

	Params::BP_UMGManagerCommon_C_SaveDataCheckResultMain Parms{};

	Parms.SaveLoadResult = SaveLoadResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.OnFinishRestoreAsync_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackSaveLoadResult                     SaveLoadResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::OnFinishRestoreAsync_Event_0(EJackSaveLoadResult SaveLoadResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "OnFinishRestoreAsync_Event_0");

	Params::BP_UMGManagerCommon_C_OnFinishRestoreAsync_Event_0 Parms{};

	Parms.SaveLoadResult = SaveLoadResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.OnFinishCreateAsync_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackSaveLoadResult                     SaveLoadResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::OnFinishCreateAsync_Event_0(EJackSaveLoadResult SaveLoadResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "OnFinishCreateAsync_Event_0");

	Params::BP_UMGManagerCommon_C_OnFinishCreateAsync_Event_0 Parms{};

	Parms.SaveLoadResult = SaveLoadResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.OnDisplayMessageFromSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "OnDisplayMessageFromSaveDataCheck");

	Params::BP_UMGManagerCommon_C_OnDisplayMessageFromSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGManagerCommon.BP_UMGManagerCommon_C.OnFinishSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGSaveDataCheckResult             Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGManagerCommon_C::OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGManagerCommon_C", "OnFinishSaveDataCheck");

	Params::BP_UMGManagerCommon_C_OnFinishSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}

}
