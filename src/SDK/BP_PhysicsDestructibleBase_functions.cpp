#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsDestructibleBase

#include "Basic.hpp"

#include "BP_PhysicsDestructibleBase_classes.hpp"
#include "BP_PhysicsDestructibleBase_parameters.hpp"


namespace SDK
{

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*              bpp__HitComponent__pf                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              bpp__OtherComp__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          bpp__NormalImpulse__pf                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       bpp__Hit__pf__const                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* bpp__HitComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, const struct FVector& bpp__NormalImpulse__pf, const struct FHitResult& bpp__Hit__pf__const)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature");

	Params::BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature Parms{};

	Parms.bpp__HitComponent__pf = bpp__HitComponent__pf;
	Parms.bpp__OtherActor__pf = bpp__OtherActor__pf;
	Parms.bpp__OtherComp__pf = bpp__OtherComp__pf;
	Parms.bpp__NormalImpulse__pf = std::move(bpp__NormalImpulse__pf);
	Parms.bpp__Hit__pf__const = std::move(bpp__Hit__pf__const);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.GetSoundVolumeFromVelocity
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   bpp__Volume__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::GetSoundVolumeFromVelocity(float* bpp__Volume__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "GetSoundVolumeFromVelocity");

	Params::BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Volume__pf != nullptr)
		*bpp__Volume__pf = Parms.bpp__Volume__pf;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.GetVelocityFromPlayer
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   bpp__VelocityRate__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           bpp__InputPin__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ABP_PhysicsDestructibleBase_C::GetVelocityFromPlayer(float bpp__VelocityRate__pf, class AActor* bpp__InputPin__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "GetVelocityFromPlayer");

	Params::BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer Parms{};

	Parms.bpp__VelocityRate__pf = bpp__VelocityRate__pf;
	Parms.bpp__InputPin__pf = bpp__InputPin__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.IsCanPlaySound
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          bpp__ImpulsePoint__pf                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bpp__Ok__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::IsCanPlaySound(const struct FVector& bpp__ImpulsePoint__pf, bool* bpp__Ok__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "IsCanPlaySound");

	Params::BP_PhysicsDestructibleBase_C_IsCanPlaySound Parms{};

	Parms.bpp__ImpulsePoint__pf = std::move(bpp__ImpulsePoint__pf);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Ok__pf != nullptr)
		*bpp__Ok__pf = Parms.bpp__Ok__pf;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.LimitMoveVelocity
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          bpp__Velocity__pf                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          bpp__ClampVelocity__pf                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::LimitMoveVelocity(const struct FVector& bpp__Velocity__pf, struct FVector* bpp__ClampVelocity__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "LimitMoveVelocity");

	Params::BP_PhysicsDestructibleBase_C_LimitMoveVelocity Parms{};

	Parms.bpp__Velocity__pf = std::move(bpp__Velocity__pf);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__ClampVelocity__pf != nullptr)
		*bpp__ClampVelocity__pf = std::move(Parms.bpp__ClampVelocity__pf);
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.LimitPhysicsVelocity
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              bpp__Primitive__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::LimitPhysicsVelocity(class UPrimitiveComponent* bpp__Primitive__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "LimitPhysicsVelocity");

	Params::BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity Parms{};

	Parms.bpp__Primitive__pf = bpp__Primitive__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.OnDestruct
// (Final, Native, Event, Public)

void ABP_PhysicsDestructibleBase_C::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "OnDestruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.OnHitPhysics
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          bpp__NormalxImpulse__pfT                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       bpp__Hit__pf                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::OnHitPhysics(class UObject* bpp__OtherActor__pf, const struct FVector& bpp__NormalxImpulse__pfT, struct FHitResult* bpp__Hit__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "OnHitPhysics");

	Params::BP_PhysicsDestructibleBase_C_OnHitPhysics Parms{};

	Parms.bpp__OtherActor__pf = bpp__OtherActor__pf;
	Parms.bpp__NormalxImpulse__pfT = std::move(bpp__NormalxImpulse__pfT);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Hit__pf != nullptr)
		*bpp__Hit__pf = std::move(Parms.bpp__Hit__pf);
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.OnTouchCollide
// (Final, Native, Event, Public)
// Parameters:
// struct FHitResult                       bpp__HitResult__pf                                     (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::OnTouchCollide(const struct FHitResult& bpp__HitResult__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "OnTouchCollide");

	Params::BP_PhysicsDestructibleBase_C_OnTouchCollide Parms{};

	Parms.bpp__HitResult__pf = std::move(bpp__HitResult__pf);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.PlaySoundLocationNotNull
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                       bpp__Sound__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   bpp__Volume__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_PhysicsDestructibleBase_C::PlaySoundLocationNotNull(class USoundBase* bpp__Sound__pf, float bpp__Volume__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "PlaySoundLocationNotNull");

	Params::BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull Parms{};

	Parms.bpp__Sound__pf = bpp__Sound__pf;
	Parms.bpp__Volume__pf = bpp__Volume__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_PhysicsDestructibleBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsDestructibleBase_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
