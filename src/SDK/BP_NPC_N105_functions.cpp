#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_N105

#include "Basic.hpp"

#include "BP_NPC_N105_classes.hpp"


namespace SDK
{

// Function BP_NPC_N105.BP_NPC_N105_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABP_NPC_N105_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_N105_C", "UserConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

