#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PL_Title

#include "Basic.hpp"

#include "PL_Title_classes.hpp"
#include "PL_Title_parameters.hpp"


namespace SDK
{

// Function PL_Title.PL_Title_C.ExecuteUbergraph_PL_Title
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::ExecuteUbergraph_PL_Title(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "ExecuteUbergraph_PL_Title");

	Params::PL_Title_C_ExecuteUbergraph_PL_Title Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PL_Title.PL_Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APL_Title_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PL_Title.PL_Title_C.OnDisplayMessageFromSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "OnDisplayMessageFromSaveDataCheck");

	Params::PL_Title_C_OnDisplayMessageFromSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PL_Title.PL_Title_C.ExecuteSaveDataCheckResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackSaveLoadResult                     CheckRusult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "ExecuteSaveDataCheckResult");

	Params::PL_Title_C_ExecuteSaveDataCheckResult Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;
	Parms.CheckRusult = CheckRusult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PL_Title.PL_Title_C.OnFinishSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGSaveDataCheckResult             Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "OnFinishSaveDataCheck");

	Params::PL_Title_C_OnFinishSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PL_Title.PL_Title_C.ExecuteSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PL_Title_C", "ExecuteSaveDataCheck");

	Params::PL_Title_C_ExecuteSaveDataCheck Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
