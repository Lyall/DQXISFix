#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CutsceneChecker

#include "Basic.hpp"

#include "BP_CutsceneChecker_classes.hpp"
#include "BP_CutsceneChecker_parameters.hpp"


namespace SDK
{

// Function BP_CutsceneChecker.BP_CutsceneChecker_C.ExecuteUbergraph_BP_CutsceneChecker
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneChecker_C::ExecuteUbergraph_BP_CutsceneChecker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "ExecuteUbergraph_BP_CutsceneChecker");

	Params::BP_CutsceneChecker_C_ExecuteUbergraph_BP_CutsceneChecker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.CsLevelCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_CutsceneChecker_C::CsLevelCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "CsLevelCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutsceneChecker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneChecker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.CheckMatineeActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatineeActor*                    MatineeActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneChecker_C::CheckMatineeActor(class AMatineeActor* MatineeActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "CheckMatineeActor");

	Params::BP_CutsceneChecker_C_CheckMatineeActor Parms{};

	Parms.MatineeActor = MatineeActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.CheckNpc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AJackScheduledNPC*                NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneChecker_C::CheckNpc(class AJackScheduledNPC* NPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "CheckNpc");

	Params::BP_CutsceneChecker_C_CheckNpc Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.LastCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneChecker_C::LastCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "LastCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.CheckLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALight*                           Light                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneChecker_C::CheckLight(class ALight* Light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "CheckLight");

	Params::BP_CutsceneChecker_C_CheckLight Parms{};

	Parms.Light = Light;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CutsceneChecker.BP_CutsceneChecker_C.CheckStaticMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneChecker_C::CheckStaticMesh(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CutsceneChecker_C", "CheckStaticMesh");

	Params::BP_CutsceneChecker_C_CheckStaticMesh Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}
