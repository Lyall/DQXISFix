#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureBoxArrangedBase

#include "Basic.hpp"

#include "BP_TreasureBoxArrangedBase_classes.hpp"
#include "BP_TreasureBoxArrangedBase_parameters.hpp"


namespace SDK
{

// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.DisableTresureBox
// (Native, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::DisableTresureBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "DisableTresureBox");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.EnableTreasureBox
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    bpp__Change__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBoxArrangedBase_C::EnableTreasureBox(bool* bpp__Change__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "EnableTreasureBox");

	Params::BP_TreasureBoxArrangedBase_C_EnableTreasureBox Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Change__pf != nullptr)
		*bpp__Change__pf = Parms.bpp__Change__pf;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.GetInpasuResultTextId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             bpp__OutTextId__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBoxArrangedBase_C::GetInpasuResultTextId(class FName* bpp__OutTextId__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "GetInpasuResultTextId");

	Params::BP_TreasureBoxArrangedBase_C_GetInpasuResultTextId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__OutTextId__pf != nullptr)
		*bpp__OutTextId__pf = Parms.bpp__OutTextId__pf;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.OnGenerateDebugInfoString
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ABP_TreasureBoxArrangedBase_C::OnGenerateDebugInfoString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "OnGenerateDebugInfoString");

	Params::BP_TreasureBoxArrangedBase_C_OnGenerateDebugInfoString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.OnOpenMoveEnd
// (Native, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::OnOpenMoveEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "OnOpenMoveEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.OnOpenMoveStart
// (Native, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::OnOpenMoveStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "OnOpenMoveStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.OnWinEventBattle
// (Native, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::OnWinEventBattle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "OnWinEventBattle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABP_TreasureBoxArrangedBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.RefreshTreasureBox
// (Native, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::RefreshTreasureBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "RefreshTreasureBox");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBoxArrangedBase.BP_TreasureBoxArrangedBase_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_TreasureBoxArrangedBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxArrangedBase_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
