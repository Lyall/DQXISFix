#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCameraManager

#include "Basic.hpp"

#include "BP_PlayerCameraManager_classes.hpp"
#include "BP_PlayerCameraManager_parameters.hpp"


namespace SDK
{

// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.ExecuteUbergraph_BP_PlayerCameraManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCameraManager_C::ExecuteUbergraph_BP_PlayerCameraManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCameraManager_C", "ExecuteUbergraph_BP_PlayerCameraManager");

	Params::BP_PlayerCameraManager_C_ExecuteUbergraph_BP_PlayerCameraManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.OnCameraLightDisableChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bDisable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCameraManager_C::OnCameraLightDisableChanged(bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCameraManager_C", "OnCameraLightDisableChanged");

	Params::BP_PlayerCameraManager_C_OnCameraLightDisableChanged Parms{};

	Parms.bDisable = bDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCameraManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCameraManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCameraManager.BP_PlayerCameraManager_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CameraTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewCameraLocation                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewCameraRotation                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
// float                                   NewCameraFOV                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_PlayerCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCameraManager_C", "BlueprintUpdateCamera");

	Params::BP_PlayerCameraManager_C_BlueprintUpdateCamera Parms{};

	Parms.CameraTarget = CameraTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = std::move(Parms.NewCameraLocation);

	if (NewCameraRotation != nullptr)
		*NewCameraRotation = std::move(Parms.NewCameraRotation);

	if (NewCameraFOV != nullptr)
		*NewCameraFOV = Parms.NewCameraFOV;

	return Parms.ReturnValue;
}

}

