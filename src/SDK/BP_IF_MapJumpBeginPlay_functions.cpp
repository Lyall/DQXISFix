#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_MapJumpBeginPlay

#include "Basic.hpp"

#include "BP_IF_MapJumpBeginPlay_classes.hpp"


namespace SDK
{

// Function BP_IF_MapJumpBeginPlay.BP_IF_MapJumpBeginPlay_C.MapJumpBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_MapJumpBeginPlay_C::MapJumpBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_MapJumpBeginPlay_C", "MapJumpBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_MapJumpBeginPlay.BP_IF_MapJumpBeginPlay_C.MapJumpEndPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_MapJumpBeginPlay_C::MapJumpEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_MapJumpBeginPlay_C", "MapJumpEndPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

