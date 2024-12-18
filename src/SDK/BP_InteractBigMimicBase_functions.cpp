#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractBigMimicBase

#include "Basic.hpp"

#include "BP_InteractBigMimicBase_classes.hpp"
#include "BP_InteractBigMimicBase_parameters.hpp"


namespace SDK
{

// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.BattleWinSetFlag
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    bpp__Ret__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::BattleWinSetFlag(bool* bpp__Ret__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "BattleWinSetFlag");

	Params::BP_InteractBigMimicBase_C_BattleWinSetFlag Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Ret__pf != nullptr)
		*bpp__Ret__pf = Parms.bpp__Ret__pf;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_107_ComponentInteractSignature__DelegateSignature
// (Native, Public)
// Parameters:
// class AActor*                           bpp__OtherActor__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_107_ComponentInteractSignature__DelegateSignature(class AActor* bpp__OtherActor__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_107_ComponentInteractSignature__DelegateSignature");

	Params::BP_InteractBigMimicBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_107_ComponentInteractSignature__DelegateSignature Parms{};

	Parms.bpp__OtherActor__pf = bpp__OtherActor__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.DestroyCheck
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    bpp__Destroy__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::DestroyCheck(bool* bpp__Destroy__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "DestroyCheck");

	Params::BP_InteractBigMimicBase_C_DestroyCheck Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Destroy__pf != nullptr)
		*bpp__Destroy__pf = Parms.bpp__Destroy__pf;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.ExecuteUbergraph_BP_InteractBigMimicBase_0
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::ExecuteUbergraph_BP_InteractBigMimicBase_0(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "ExecuteUbergraph_BP_InteractBigMimicBase_0");

	Params::BP_InteractBigMimicBase_C_ExecuteUbergraph_BP_InteractBigMimicBase_0 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.GetInpasuResultTextId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             bpp__OutTextId__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::GetInpasuResultTextId(class FName* bpp__OutTextId__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "GetInpasuResultTextId");

	Params::BP_InteractBigMimicBase_C_GetInpasuResultTextId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__OutTextId__pf != nullptr)
		*bpp__OutTextId__pf = Parms.bpp__OutTextId__pf;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABP_InteractBigMimicBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.SelfHidden
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bpp__NewHidden__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::SelfHidden(bool bpp__NewHidden__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "SelfHidden");

	Params::BP_InteractBigMimicBase_C_SelfHidden Parms{};

	Parms.bpp__NewHidden__pf = bpp__NewHidden__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.SetCurrentParam
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    bpp__Success__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_InteractBigMimicBase_C::SetCurrentParam(bool* bpp__Success__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "SetCurrentParam");

	Params::BP_InteractBigMimicBase_C_SetCurrentParam Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Success__pf != nullptr)
		*bpp__Success__pf = Parms.bpp__Success__pf;
}


// Function BP_InteractBigMimicBase.BP_InteractBigMimicBase_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_InteractBigMimicBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractBigMimicBase_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

