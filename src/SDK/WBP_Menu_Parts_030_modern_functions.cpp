#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_030_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_030_modern_classes.hpp"
#include "WBP_Menu_Parts_030_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_030_modern.WBP_Menu_Parts_030_modern_C.ExecuteUbergraph_WBP_Menu_Parts_030_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_030_modern_C::ExecuteUbergraph_WBP_Menu_Parts_030_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_030_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_030_modern");

	Params::WBP_Menu_Parts_030_modern_C_ExecuteUbergraph_WBP_Menu_Parts_030_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_030_modern.WBP_Menu_Parts_030_modern_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_030_modern_C::SetLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_030_modern_C", "SetLevel");

	Params::WBP_Menu_Parts_030_modern_C_SetLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_030_modern.WBP_Menu_Parts_030_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_030_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_030_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_030_modern.WBP_Menu_Parts_030_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HPRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_030_modern_C::SetData(int32 Level, float HPRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_030_modern_C", "SetData");

	Params::WBP_Menu_Parts_030_modern_C_SetData Parms{};

	Parms.Level = Level;
	Parms.HPRate = HPRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

