#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RoomControl

#include "Basic.hpp"

#include "BP_RoomControl_classes.hpp"
#include "BP_RoomControl_parameters.hpp"


namespace SDK
{

// Function BP_RoomControl.BP_RoomControl_C.BndEvt__BrushComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              bpp__OverlappedComponent__pf                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              bpp__OtherComp__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   bpp__OtherBodyIndex__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bpp__bFromSweep__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       bpp__SweepResult__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::BndEvt__BrushComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const struct FHitResult& bpp__SweepResult__pf__const)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "BndEvt__BrushComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_RoomControl_C_BndEvt__BrushComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.bpp__OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	Parms.bpp__OtherActor__pf = bpp__OtherActor__pf;
	Parms.bpp__OtherComp__pf = bpp__OtherComp__pf;
	Parms.bpp__OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	Parms.bpp__bFromSweep__pf = bpp__bFromSweep__pf;
	Parms.bpp__SweepResult__pf__const = std::move(bpp__SweepResult__pf__const);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.BndEvt__BrushComponent_K2Node_ComponentBoundEvent_273_ComponentEndOverlapSignature__DelegateSignature
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*              bpp__OverlappedComponent__pf                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              bpp__OtherComp__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   bpp__OtherBodyIndex__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::BndEvt__BrushComponent_K2Node_ComponentBoundEvent_273_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "BndEvt__BrushComponent_K2Node_ComponentBoundEvent_273_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_RoomControl_C_BndEvt__BrushComponent_K2Node_ComponentBoundEvent_273_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.bpp__OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	Parms.bpp__OtherActor__pf = bpp__OtherActor__pf;
	Parms.bpp__OtherComp__pf = bpp__OtherComp__pf;
	Parms.bpp__OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ChangeIndoorCamera
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::ChangeIndoorCamera(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ChangeIndoorCamera");

	Params::BP_RoomControl_C_ChangeIndoorCamera Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.CheckInRoom
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::CheckInRoom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "CheckInRoom");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ClearNowIndoorCameraChange
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::ClearNowIndoorCameraChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ClearNowIndoorCameraChange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.DelayIndoorCamera
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::DelayIndoorCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "DelayIndoorCamera");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.Enable Post
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::Enable_Post(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "Enable Post");

	Params::BP_RoomControl_C_Enable_Post Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ExecuteUbergraph_BP_RoomControl_0
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::ExecuteUbergraph_BP_RoomControl_0(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ExecuteUbergraph_BP_RoomControl_0");

	Params::BP_RoomControl_C_ExecuteUbergraph_BP_RoomControl_0 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ExecuteUbergraph_BP_RoomControl_10
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::ExecuteUbergraph_BP_RoomControl_10(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ExecuteUbergraph_BP_RoomControl_10");

	Params::BP_RoomControl_C_ExecuteUbergraph_BP_RoomControl_10 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ExecuteUbergraph_BP_RoomControl_6
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::ExecuteUbergraph_BP_RoomControl_6(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ExecuteUbergraph_BP_RoomControl_6");

	Params::BP_RoomControl_C_ExecuteUbergraph_BP_RoomControl_6 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.GetRoomFlag
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    bpp__NowInRoom__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::GetRoomFlag(bool* bpp__NowInRoom__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "GetRoomFlag");

	Params::BP_RoomControl_C_GetRoomFlag Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__NowInRoom__pf != nullptr)
		*bpp__NowInRoom__pf = Parms.bpp__NowInRoom__pf;
}


// Function BP_RoomControl.BP_RoomControl_C.GuestHidden
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__NewHidden__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::GuestHidden(bool bpp__NewHidden__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "GuestHidden");

	Params::BP_RoomControl_C_GuestHidden Parms{};

	Parms.bpp__NewHidden__pf = bpp__NewHidden__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.IsTimeStopperEnable
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    bpp__Enabled__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::IsTimeStopperEnable(bool* bpp__Enabled__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "IsTimeStopperEnable");

	Params::BP_RoomControl_C_IsTimeStopperEnable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Enabled__pf != nullptr)
		*bpp__Enabled__pf = Parms.bpp__Enabled__pf;
}


// Function BP_RoomControl.BP_RoomControl_C.MapJumpBeginPlay
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_RoomControl_C::MapJumpBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "MapJumpBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.MapJumpEndPlay
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_RoomControl_C::MapJumpEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "MapJumpEndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABP_RoomControl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.ResetTimeStopper
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::ResetTimeStopper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "ResetTimeStopper");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.RoomControlTimeStopper
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::RoomControlTimeStopper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "RoomControlTimeStopper");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.RoomOutTimeCheck
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::RoomOutTimeCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "RoomOutTimeCheck");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.Room Camera In
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::Room_Camera_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "Room Camera In");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.Room Camera Out
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::Room_Camera_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "Room Camera Out");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.Room Player In
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__Player__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::Room_Player_In(class AActor* bpp__Player__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "Room Player In");

	Params::BP_RoomControl_C_Room_Player_In Parms{};

	Parms.bpp__Player__pf = bpp__Player__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.Room Player Out
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__Player__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::Room_Player_Out(class AActor* bpp__Player__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "Room Player Out");

	Params::BP_RoomControl_C_Room_Player_Out Parms{};

	Parms.bpp__Player__pf = bpp__Player__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetAllDoorAutoCloseEnable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__AutoCloseEnable__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetAllDoorAutoCloseEnable(bool bpp__AutoCloseEnable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetAllDoorAutoCloseEnable");

	Params::BP_RoomControl_C_SetAllDoorAutoCloseEnable Parms{};

	Parms.bpp__AutoCloseEnable__pf = bpp__AutoCloseEnable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetEnableIndoorCamera
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetEnableIndoorCamera(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetEnableIndoorCamera");

	Params::BP_RoomControl_C_SetEnableIndoorCamera Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetEnableIndoorCameraInterpSec
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   bpp__InterpSec__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetEnableIndoorCameraInterpSec(float bpp__InterpSec__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetEnableIndoorCameraInterpSec");

	Params::BP_RoomControl_C_SetEnableIndoorCameraInterpSec Parms{};

	Parms.bpp__InterpSec__pf = bpp__InterpSec__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetEnableRuraArea
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetEnableRuraArea(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetEnableRuraArea");

	Params::BP_RoomControl_C_SetEnableRuraArea Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetEnableSafeArea
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetEnableSafeArea(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetEnableSafeArea");

	Params::BP_RoomControl_C_SetEnableSafeArea Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetEnableTimeStopper
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetEnableTimeStopper(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetEnableTimeStopper");

	Params::BP_RoomControl_C_SetEnableTimeStopper Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetRoomFlag
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__InRoom__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetRoomFlag(bool bpp__InRoom__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetRoomFlag");

	Params::BP_RoomControl_C_SetRoomFlag Parms{};

	Parms.bpp__InRoom__pf = bpp__InRoom__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetTimeStopper
// (Native, Public, BlueprintCallable)

void ABP_RoomControl_C::SetTimeStopper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetTimeStopper");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetWeatherEffectEnable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetWeatherEffectEnable(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetWeatherEffectEnable");

	Params::BP_RoomControl_C_SetWeatherEffectEnable Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.SetWindPause
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Pause__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::SetWindPause(bool bpp__Pause__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "SetWindPause");

	Params::BP_RoomControl_C_SetWindPause Parms{};

	Parms.bpp__Pause__pf = bpp__Pause__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_RoomControl_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.WeatherEffectEnable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Enable__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::WeatherEffectEnable(bool bpp__Enable__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "WeatherEffectEnable");

	Params::BP_RoomControl_C_WeatherEffectEnable Parms{};

	Parms.bpp__Enable__pf = bpp__Enable__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_RoomControl.BP_RoomControl_C.WindPasue
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__Pause__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_RoomControl_C::WindPasue(bool bpp__Pause__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RoomControl_C", "WindPasue");

	Params::BP_RoomControl_C_WindPasue Parms{};

	Parms.bpp__Pause__pf = bpp__Pause__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
