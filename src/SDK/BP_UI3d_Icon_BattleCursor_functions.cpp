#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI3d_Icon_BattleCursor

#include "Basic.hpp"

#include "BP_UI3d_Icon_BattleCursor_classes.hpp"
#include "BP_UI3d_Icon_BattleCursor_parameters.hpp"


namespace SDK
{

// Function BP_UI3d_Icon_BattleCursor.BP_UI3d_Icon_BattleCursor_C.ExecuteUbergraph_BP_UI3d_Icon_BattleCursor
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI3d_Icon_BattleCursor_C::ExecuteUbergraph_BP_UI3d_Icon_BattleCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI3d_Icon_BattleCursor_C", "ExecuteUbergraph_BP_UI3d_Icon_BattleCursor");

	Params::BP_UI3d_Icon_BattleCursor_C_ExecuteUbergraph_BP_UI3d_Icon_BattleCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI3d_Icon_BattleCursor.BP_UI3d_Icon_BattleCursor_C.HideCursor
// (BlueprintCallable, BlueprintEvent)

void ABP_UI3d_Icon_BattleCursor_C::HideCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI3d_Icon_BattleCursor_C", "HideCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI3d_Icon_BattleCursor.BP_UI3d_Icon_BattleCursor_C.ShowAngryIcon
// (BlueprintCallable, BlueprintEvent)

void ABP_UI3d_Icon_BattleCursor_C::ShowAngryIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI3d_Icon_BattleCursor_C", "ShowAngryIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI3d_Icon_BattleCursor.BP_UI3d_Icon_BattleCursor_C.ShowBattleCursor
// (BlueprintCallable, BlueprintEvent)

void ABP_UI3d_Icon_BattleCursor_C::ShowBattleCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI3d_Icon_BattleCursor_C", "ShowBattleCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI3d_Icon_BattleCursor.BP_UI3d_Icon_BattleCursor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI3d_Icon_BattleCursor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI3d_Icon_BattleCursor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
