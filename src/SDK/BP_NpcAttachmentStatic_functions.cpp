#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcAttachmentStatic

#include "Basic.hpp"

#include "BP_NpcAttachmentStatic_classes.hpp"


namespace SDK
{

// Function BP_NpcAttachmentStatic.BP_NpcAttachmentStatic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NpcAttachmentStatic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcAttachmentStatic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
