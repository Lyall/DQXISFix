#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectWeaponSMBase

#include "Basic.hpp"

#include "BP_EffectWeaponSMBase_classes.hpp"
#include "BP_EffectWeaponSMBase_parameters.hpp"


namespace SDK
{

// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.ExecuteUbergraph_BP_EffectWeaponSMBase
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectWeaponSMBase_C::ExecuteUbergraph_BP_EffectWeaponSMBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "ExecuteUbergraph_BP_EffectWeaponSMBase");

	Params::BP_EffectWeaponSMBase_C_ExecuteUbergraph_BP_EffectWeaponSMBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.OnWeaponOpen
// (Event, Protected, BlueprintEvent)

void ABP_EffectWeaponSMBase_C::OnWeaponOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "OnWeaponOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.OnWeaponClose
// (Event, Protected, BlueprintEvent)

void ABP_EffectWeaponSMBase_C::OnWeaponClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "OnWeaponClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.OnWeaponHidden
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bNewHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EffectWeaponSMBase_C::OnWeaponHidden(bool bNewHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "OnWeaponHidden");

	Params::BP_EffectWeaponSMBase_C_OnWeaponHidden Parms{};

	Parms.bNewHidden = bNewHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectWeaponSMBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.SpawnEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EffectWeaponSMBase_C::SpawnEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "SpawnEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.DeactivateEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EffectWeaponSMBase_C::DeactivateEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "DeactivateEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C.SetHiddenEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewHidden                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EffectWeaponSMBase_C::SetHiddenEffects(bool NewHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectWeaponSMBase_C", "SetHiddenEffects");

	Params::BP_EffectWeaponSMBase_C_SetHiddenEffects Parms{};

	Parms.NewHidden = NewHidden;

	UObject::ProcessEvent(Func, &Parms);
}

}
