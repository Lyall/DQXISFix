#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugNPCHeight

#include "Basic.hpp"

#include "BP_DebugNPCHeight_classes.hpp"
#include "BP_DebugNPCHeight_parameters.hpp"


namespace SDK
{

// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.ExecuteUbergraph_BP_DebugNPCHeight
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNPCHeight_C::ExecuteUbergraph_BP_DebugNPCHeight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "ExecuteUbergraph_BP_DebugNPCHeight");

	Params::BP_DebugNPCHeight_C_ExecuteUbergraph_BP_DebugNPCHeight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.FixedLocationChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BoolValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DebugNPCHeight_C::FixedLocationChange(bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "FixedLocationChange");

	Params::BP_DebugNPCHeight_C_FixedLocationChange Parms{};

	Parms.BoolValue = BoolValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.IllegalZChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BoolValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DebugNPCHeight_C::IllegalZChange(bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "IllegalZChange");

	Params::BP_DebugNPCHeight_C_IllegalZChange Parms{};

	Parms.BoolValue = BoolValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugNPCHeight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNPCHeight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "ReceiveTick");

	Params::BP_DebugNPCHeight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugNPCHeight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugNPCHeight.BP_DebugNPCHeight_C.GetFixedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_NPC_Base_C*                   NPC_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FixedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DebugNPCHeight_C::GetFixedLocation(class ABP_NPC_Base_C* NPC_0, bool* FixedLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNPCHeight_C", "GetFixedLocation");

	Params::BP_DebugNPCHeight_C_GetFixedLocation Parms{};

	Parms.NPC_0 = NPC_0;

	UObject::ProcessEvent(Func, &Parms);

	if (FixedLocation != nullptr)
		*FixedLocation = Parms.FixedLocation;
}

}
