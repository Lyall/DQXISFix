#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayersTriggerVolume

#include "Basic.hpp"

#include "BP_PlayersTriggerVolume_classes.hpp"
#include "BP_PlayersTriggerVolume_parameters.hpp"


namespace SDK
{

// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.OnPossessPlayerControlAtBeginOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayersTriggerVolume_C*       VolumeActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackPlayerControlPossessor             Possessor_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayersTriggerVolume_C::OnPossessPlayerControlAtBeginOverlap__DelegateSignature(class AActor* OtherActor, class ABP_PlayersTriggerVolume_C* VolumeActor, EJackPlayerControlPossessor Possessor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "OnPossessPlayerControlAtBeginOverlap__DelegateSignature");

	Params::BP_PlayersTriggerVolume_C_OnPossessPlayerControlAtBeginOverlap__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.VolumeActor = VolumeActor;
	Parms.Possessor_0 = Possessor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.ExecuteUbergraph_BP_PlayersTriggerVolume
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayersTriggerVolume_C::ExecuteUbergraph_BP_PlayersTriggerVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "ExecuteUbergraph_BP_PlayersTriggerVolume");

	Params::BP_PlayersTriggerVolume_C_ExecuteUbergraph_BP_PlayersTriggerVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.BndEvt__BrushComponent_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayersTriggerVolume_C::BndEvt__BrushComponent_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "BndEvt__BrushComponent_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PlayersTriggerVolume_C_BndEvt__BrushComponent_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayersTriggerVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.IsEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayersTriggerVolume_C::IsEnable(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "IsEnable");

	Params::BP_PlayersTriggerVolume_C_IsEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function BP_PlayersTriggerVolume.BP_PlayersTriggerVolume_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayersTriggerVolume_C::SetEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayersTriggerVolume_C", "SetEnable");

	Params::BP_PlayersTriggerVolume_C_SetEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

