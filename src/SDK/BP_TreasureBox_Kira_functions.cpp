#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureBox_Kira

#include "Basic.hpp"

#include "BP_TreasureBox_Kira_classes.hpp"
#include "BP_TreasureBox_Kira_parameters.hpp"


namespace SDK
{

// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.ExecuteUbergraph_BP_TreasureBox_Kira_1
// (Final, Native, Public)
// Parameters:
// int32                                   bpp__EntryPoint__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBox_Kira_C::ExecuteUbergraph_BP_TreasureBox_Kira_1(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "ExecuteUbergraph_BP_TreasureBox_Kira_1");

	Params::BP_TreasureBox_Kira_C_ExecuteUbergraph_BP_TreasureBox_Kira_1 Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.FinishGetItem
// (Native, Public, BlueprintCallable)

void ABP_TreasureBox_Kira_C::FinishGetItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "FinishGetItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.OnGenerateDebugInfoString
// (Final, Native, Event, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ABP_TreasureBox_Kira_C::OnGenerateDebugInfoString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "OnGenerateDebugInfoString");

	Params::BP_TreasureBox_Kira_C_OnGenerateDebugInfoString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.OnOpen
// (Native, Public, BlueprintCallable)

void ABP_TreasureBox_Kira_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "OnOpen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.RequestDestroy
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    bpp__Accept__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBox_Kira_C::RequestDestroy(bool* bpp__Accept__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "RequestDestroy");

	Params::BP_TreasureBox_Kira_C_RequestDestroy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bpp__Accept__pf != nullptr)
		*bpp__Accept__pf = Parms.bpp__Accept__pf;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.RequestDestroySequence
// (Native, Public, BlueprintCallable)

void ABP_TreasureBox_Kira_C::RequestDestroySequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "RequestDestroySequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.SetGettableItemCommon
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             bpp__KIraID__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBox_Kira_C::SetGettableItemCommon(class FName bpp__KIraID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "SetGettableItemCommon");

	Params::BP_TreasureBox_Kira_C_SetGettableItemCommon Parms{};

	Parms.bpp__KIraID__pf = bpp__KIraID__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.SetGettableItemDirect
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             bpp__ItemID__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   bpp__ItemNum__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             bpp__RespawnSaveFlagName__pf                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABP_TreasureBox_Kira_C::SetGettableItemDirect(class FName bpp__ItemID__pf, int32 bpp__ItemNum__pf, class FName bpp__RespawnSaveFlagName__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "SetGettableItemDirect");

	Params::BP_TreasureBox_Kira_C_SetGettableItemDirect Parms{};

	Parms.bpp__ItemID__pf = bpp__ItemID__pf;
	Parms.bpp__ItemNum__pf = bpp__ItemNum__pf;
	Parms.bpp__RespawnSaveFlagName__pf = bpp__RespawnSaveFlagName__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BP_TreasureBox_Kira.BP_TreasureBox_Kira_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_TreasureBox_Kira_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Kira_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

