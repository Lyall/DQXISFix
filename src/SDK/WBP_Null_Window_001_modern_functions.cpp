#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Null_Window_001_modern

#include "Basic.hpp"

#include "WBP_Null_Window_001_modern_classes.hpp"
#include "WBP_Null_Window_001_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Null_Window_001_modern.WBP_Null_Window_001_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Null_Window_001_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Null_Window_001_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Null_Window_001_modern.WBP_Null_Window_001_modern_C.ExecuteUbergraph_WBP_Null_Window_001_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Null_Window_001_modern_C::ExecuteUbergraph_WBP_Null_Window_001_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Null_Window_001_modern_C", "ExecuteUbergraph_WBP_Null_Window_001_modern");

	Params::WBP_Null_Window_001_modern_C_ExecuteUbergraph_WBP_Null_Window_001_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
