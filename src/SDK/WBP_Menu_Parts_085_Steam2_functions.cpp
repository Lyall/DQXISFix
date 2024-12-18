#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_085_Steam2

#include "Basic.hpp"

#include "WBP_Menu_Parts_085_Steam2_classes.hpp"
#include "WBP_Menu_Parts_085_Steam2_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_085_Steam2.WBP_Menu_Parts_085_Steam2_C.ExecuteUbergraph_WBP_Menu_Parts_085_Steam2
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_085_Steam2_C::ExecuteUbergraph_WBP_Menu_Parts_085_Steam2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam2_C", "ExecuteUbergraph_WBP_Menu_Parts_085_Steam2");

	Params::WBP_Menu_Parts_085_Steam2_C_ExecuteUbergraph_WBP_Menu_Parts_085_Steam2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_085_Steam2.WBP_Menu_Parts_085_Steam2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_085_Steam2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_085_Steam2.WBP_Menu_Parts_085_Steam2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_085_Steam2_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam2_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_085_Steam2.WBP_Menu_Parts_085_Steam2_C.AdjustItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LeavCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_085_Steam2_C::AdjustItem(int32 LeavCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_085_Steam2_C", "AdjustItem");

	Params::WBP_Menu_Parts_085_Steam2_C_AdjustItem Parms{};

	Parms.LeavCount = LeavCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

