#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_085_Steam

#include "Basic.hpp"

#include "WBP_Menu_Parts_085_Steam_classes.hpp"
#include "WBP_Menu_Parts_085_Steam_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_085_Steam.WBP_Menu_Parts_085_Steam_C.ExecuteUbergraph_WBP_Menu_Parts_085_Steam
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_085_Steam_C::ExecuteUbergraph_WBP_Menu_Parts_085_Steam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam_C", "ExecuteUbergraph_WBP_Menu_Parts_085_Steam");

	Params::WBP_Menu_Parts_085_Steam_C_ExecuteUbergraph_WBP_Menu_Parts_085_Steam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_085_Steam.WBP_Menu_Parts_085_Steam_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_085_Steam_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_085_Steam.WBP_Menu_Parts_085_Steam_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_085_Steam_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_085_Steam.WBP_Menu_Parts_085_Steam_C.AdjustItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LeavCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_085_Steam_C::AdjustItem(int32 LeavCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam_C", "AdjustItem");

	Params::WBP_Menu_Parts_085_Steam_C_AdjustItem Parms{};

	Parms.LeavCount = LeavCount;

	UObject::ProcessEvent(Func, &Parms);
}

}
