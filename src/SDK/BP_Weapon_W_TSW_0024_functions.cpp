#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_W_TSW_0024

#include "Basic.hpp"

#include "BP_Weapon_W_TSW_0024_classes.hpp"
#include "BP_Weapon_W_TSW_0024_parameters.hpp"


namespace SDK
{

// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.ExecuteUbergraph_BP_Weapon_W_TSW_0024
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_W_TSW_0024_C::ExecuteUbergraph_BP_Weapon_W_TSW_0024(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_W_TSW_0024_C", "ExecuteUbergraph_BP_Weapon_W_TSW_0024");

	Params::BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.DeactivateEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_W_TSW_0024_C::DeactivateEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_W_TSW_0024_C", "DeactivateEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.SpawnEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_W_TSW_0024_C::SpawnEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_W_TSW_0024_C", "SpawnEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_W_TSW_0024_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_W_TSW_0024_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.ApplyMaterialParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Weapon_W_TSW_0024_C::ApplyMaterialParameters(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_W_TSW_0024_C", "ApplyMaterialParameters");

	Params::BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

