#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_XYMoveBase

#include "Basic.hpp"

#include "BP_XYMoveBase_classes.hpp"
#include "BP_XYMoveBase_parameters.hpp"


namespace SDK
{

// DelegateFunction BP_XYMoveBase.BP_XYMoveBase_C.PlayableSplineMovementModeDelegate__DelegateSignature
// (Public, Delegate)

void ABP_XYMoveBase_C::PlayableSplineMovementModeDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "PlayableSplineMovementModeDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.BndEvt__PlaceLeftTrigger_K2Node_ComponentBoundEvent_282_ComponentBeginOverlapSignature__DelegateSignature
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              bpp__OverlappedComponent__pf                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              bpp__OtherComp__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   bpp__OtherBodyIndex__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bpp__bFromSweep__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       bpp__SweepResult__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::BndEvt__PlaceLeftTrigger_K2Node_ComponentBoundEvent_282_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const struct FHitResult& bpp__SweepResult__pf__const)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "BndEvt__PlaceLeftTrigger_K2Node_ComponentBoundEvent_282_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_XYMoveBase_C_BndEvt__PlaceLeftTrigger_K2Node_ComponentBoundEvent_282_ComponentBeginOverlapSignature__DelegateSignature Parms{};

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


// Function BP_XYMoveBase.BP_XYMoveBase_C.BndEvt__PlaceRightTrigger_K2Node_ComponentBoundEvent_291_ComponentBeginOverlapSignature__DelegateSignature
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              bpp__OverlappedComponent__pf                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              bpp__OtherComp__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   bpp__OtherBodyIndex__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bpp__bFromSweep__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       bpp__SweepResult__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::BndEvt__PlaceRightTrigger_K2Node_ComponentBoundEvent_291_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const struct FHitResult& bpp__SweepResult__pf__const)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "BndEvt__PlaceRightTrigger_K2Node_ComponentBoundEvent_291_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_XYMoveBase_C_BndEvt__PlaceRightTrigger_K2Node_ComponentBoundEvent_291_ComponentBeginOverlapSignature__DelegateSignature Parms{};

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


// Function BP_XYMoveBase.BP_XYMoveBase_C.CustomEvent_0
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__PlayerActor__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__ControlActor__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::CustomEvent_0(class AActor* bpp__PlayerActor__pf, class AActor* bpp__ControlActor__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "CustomEvent_0");

	Params::BP_XYMoveBase_C_CustomEvent_0 Parms{};

	Parms.bpp__PlayerActor__pf = bpp__PlayerActor__pf;
	Parms.bpp__ControlActor__pf = bpp__ControlActor__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.CustomEvent_1
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__PlayerActor__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__ControlActor__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::CustomEvent_1(class AActor* bpp__PlayerActor__pf, class AActor* bpp__ControlActor__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "CustomEvent_1");

	Params::BP_XYMoveBase_C_CustomEvent_1 Parms{};

	Parms.bpp__PlayerActor__pf = bpp__PlayerActor__pf;
	Parms.bpp__ControlActor__pf = bpp__ControlActor__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.ExecuteUbergraph_BP_XYMoveBase_1
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::ExecuteUbergraph_BP_XYMoveBase_1(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "ExecuteUbergraph_BP_XYMoveBase_1");

	Params::BP_XYMoveBase_C_ExecuteUbergraph_BP_XYMoveBase_1 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.ExecuteUbergraph_BP_XYMoveBase_2
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::ExecuteUbergraph_BP_XYMoveBase_2(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "ExecuteUbergraph_BP_XYMoveBase_2");

	Params::BP_XYMoveBase_C_ExecuteUbergraph_BP_XYMoveBase_2 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.GetPlaceLeftInAnim
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*                     bpp__Montage__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::GetPlaceLeftInAnim(class UAnimMontage** bpp__Montage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "GetPlaceLeftInAnim");

	Params::BP_XYMoveBase_C_GetPlaceLeftInAnim Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = Parms.bpp__Montage__pf;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.GetPlaceLeftOutAnim
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*                     bpp__Montage__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::GetPlaceLeftOutAnim(class UAnimMontage** bpp__Montage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "GetPlaceLeftOutAnim");

	Params::BP_XYMoveBase_C_GetPlaceLeftOutAnim Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = Parms.bpp__Montage__pf;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.GetPlaceRightInAnim
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*                     bpp__Montage__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::GetPlaceRightInAnim(class UAnimMontage** bpp__Montage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "GetPlaceRightInAnim");

	Params::BP_XYMoveBase_C_GetPlaceRightInAnim Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = Parms.bpp__Montage__pf;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.GetPlaceRightOutAnim
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*                     bpp__Montage__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::GetPlaceRightOutAnim(class UAnimMontage** bpp__Montage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "GetPlaceRightOutAnim");

	Params::BP_XYMoveBase_C_GetPlaceRightOutAnim Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = Parms.bpp__Montage__pf;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnArriveBeginPoint_Event_0
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::OnArriveBeginPoint_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnArriveBeginPoint_Event_0");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnArrivedPoint
// (Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*                  bpp__Arrow__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     bpp__AnimMontage__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OnArrivedPoint(class USceneComponent* bpp__Arrow__pf, class UAnimMontage* bpp__AnimMontage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnArrivedPoint");

	Params::BP_XYMoveBase_C_OnArrivedPoint Parms{};

	Parms.bpp__Arrow__pf = bpp__Arrow__pf;
	Parms.bpp__AnimMontage__pf = bpp__AnimMontage__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnArriveEndPoint_Event_0
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::OnArriveEndPoint_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnArriveEndPoint_Event_0");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnArriveLeftPoint
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::OnArriveLeftPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnArriveLeftPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnArriveRightPoint
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::OnArriveRightPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnArriveRightPoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnBeginInteract
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__Actor__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UArrowComponent*                  bpp__Arrow__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*                  bpp__RopeEnd__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   bpp__OffsetHeight__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OnBeginInteract(class AActor* bpp__Actor__pf, class UArrowComponent* bpp__Arrow__pf, class USceneComponent* bpp__RopeEnd__pf, float bpp__OffsetHeight__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnBeginInteract");

	Params::BP_XYMoveBase_C_OnBeginInteract Parms{};

	Parms.bpp__Actor__pf = bpp__Actor__pf;
	Parms.bpp__Arrow__pf = bpp__Arrow__pf;
	Parms.bpp__RopeEnd__pf = bpp__RopeEnd__pf;
	Parms.bpp__OffsetHeight__pf = bpp__OffsetHeight__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnPlayEndAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__InteractActor__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OnPlayEndAnim(class AActor* bpp__InteractActor__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnPlayEndAnim");

	Params::BP_XYMoveBase_C_OnPlayEndAnim Parms{};

	Parms.bpp__InteractActor__pf = bpp__InteractActor__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OnPlayStartAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__InteractxActor__pfT                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OnPlayStartAnim(class AActor* bpp__InteractxActor__pfT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OnPlayStartAnim");

	Params::BP_XYMoveBase_C_OnPlayStartAnim Parms{};

	Parms.bpp__InteractxActor__pfT = bpp__InteractxActor__pfT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OverlapLeft
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__OtherxActor__pfT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OverlapLeft(class AActor* bpp__OtherxActor__pfT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OverlapLeft");

	Params::BP_XYMoveBase_C_OverlapLeft Parms{};

	Parms.bpp__OtherxActor__pfT = bpp__OtherxActor__pfT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.OverlapRight
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           bpp__OtherxActor__pfT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::OverlapRight(class AActor* bpp__OtherxActor__pfT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "OverlapRight");

	Params::BP_XYMoveBase_C_OverlapRight Parms{};

	Parms.bpp__OtherxActor__pfT = bpp__OtherxActor__pfT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.PlayRiderAnim
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     bpp__AnimMontage__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::PlayRiderAnim(class UAnimMontage* bpp__AnimMontage__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "PlayRiderAnim");

	Params::BP_XYMoveBase_C_PlayRiderAnim Parms{};

	Parms.bpp__AnimMontage__pf = bpp__AnimMontage__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.ResetCriffMoveCamera
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::ResetCriffMoveCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "ResetCriffMoveCamera");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.SetCapsuleControl
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__IsForceOverlap__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacter*                       bpp__Charcter__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::SetCapsuleControl(bool bpp__IsForceOverlap__pf, class ACharacter* bpp__Charcter__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "SetCapsuleControl");

	Params::BP_XYMoveBase_C_SetCapsuleControl Parms{};

	Parms.bpp__IsForceOverlap__pf = bpp__IsForceOverlap__pf;
	Parms.bpp__Charcter__pf = bpp__Charcter__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.SetCriffMoveCamera
// (Native, Public, BlueprintCallable)

void ABP_XYMoveBase_C::SetCriffMoveCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "SetCriffMoveCamera");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.SnapToClosetPoint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UJackPlayableSplineMovementMode*  bpp__JackPlayableSplineMovementMode__pf                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_XYMoveBase_C::SnapToClosetPoint(class UJackPlayableSplineMovementMode** bpp__JackPlayableSplineMovementMode__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "SnapToClosetPoint");

	Params::BP_XYMoveBase_C_SnapToClosetPoint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__JackPlayableSplineMovementMode__pf != nullptr)
		*bpp__JackPlayableSplineMovementMode__pf = Parms.bpp__JackPlayableSplineMovementMode__pf;
}


// Function BP_XYMoveBase.BP_XYMoveBase_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_XYMoveBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XYMoveBase_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

