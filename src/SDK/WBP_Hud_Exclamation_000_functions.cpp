#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Exclamation_000

#include "Basic.hpp"

#include "WBP_Hud_Exclamation_000_classes.hpp"
#include "WBP_Hud_Exclamation_000_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_Exclamation_000.WBP_Hud_Exclamation_000_C.ExecuteUbergraph_WBP_Hud_Exclamation_000
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Exclamation_000_C::ExecuteUbergraph_WBP_Hud_Exclamation_000(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Exclamation_000_C", "ExecuteUbergraph_WBP_Hud_Exclamation_000");

	Params::WBP_Hud_Exclamation_000_C_ExecuteUbergraph_WBP_Hud_Exclamation_000 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Exclamation_000.WBP_Hud_Exclamation_000_C.InitData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlay2dSe                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Hud_Exclamation_000_C::InitData(bool bPlay2dSe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Exclamation_000_C", "InitData");

	Params::WBP_Hud_Exclamation_000_C_InitData Parms{};

	Parms.bPlay2dSe = bPlay2dSe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Exclamation_000.WBP_Hud_Exclamation_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hud_Exclamation_000_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Exclamation_000_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
