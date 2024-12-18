#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BCAI_Monster_M564

#include "Basic.hpp"

#include "BP_BCAI_Monster_M564_classes.hpp"
#include "BP_BCAI_Monster_M564_parameters.hpp"


namespace SDK
{

// Function BP_BCAI_Monster_M564.BP_BCAI_Monster_M564_C.ExecuteUbergraph_BP_BCAI_Monster_M564
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BCAI_Monster_M564_C::ExecuteUbergraph_BP_BCAI_Monster_M564(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BCAI_Monster_M564_C", "ExecuteUbergraph_BP_BCAI_Monster_M564");

	Params::BP_BCAI_Monster_M564_C_ExecuteUbergraph_BP_BCAI_Monster_M564 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BCAI_Monster_M564.BP_BCAI_Monster_M564_C.OnRoundEndInterruptCheck_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Monster_M564_C::OnRoundEndInterruptCheck_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BCAI_Monster_M564_C", "OnRoundEndInterruptCheck_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BCAI_Monster_M564.BP_BCAI_Monster_M564_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BCAI_Monster_M564_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BCAI_Monster_M564_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BCAI_Monster_M564.BP_BCAI_Monster_M564_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Monster_M564_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BCAI_Monster_M564_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BCAI_Monster_M564.BP_BCAI_Monster_M564_C.Notify_OriNiTozikomeruExecute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackGameCharacter*               Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BCAI_Monster_M564_C::Notify_OriNiTozikomeruExecute(class UJackGameCharacter* Target, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BCAI_Monster_M564_C", "Notify_OriNiTozikomeruExecute");

	Params::BP_BCAI_Monster_M564_C_Notify_OriNiTozikomeruExecute Parms{};

	Parms.Target = Target;
	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

