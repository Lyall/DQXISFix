#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionManager

#include "Basic.hpp"

#include "BP_ActionManager_classes.hpp"


namespace SDK
{

// Function BP_ActionManager.BP_ActionManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
