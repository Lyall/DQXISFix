#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Common_ScrollContent_006_modern

#include "Basic.hpp"

#include "WBP_Menu_Common_ScrollContent_006_modern_classes.hpp"
#include "WBP_Menu_Common_ScrollContent_006_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Common_ScrollContent_006_modern.WBP_Menu_Common_ScrollContent_006_modern_C.ExecuteUbergraph_WBP_Menu_Common_ScrollContent_006_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Common_ScrollContent_006_modern_C::ExecuteUbergraph_WBP_Menu_Common_ScrollContent_006_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_ScrollContent_006_modern_C", "ExecuteUbergraph_WBP_Menu_Common_ScrollContent_006_modern");

	Params::WBP_Menu_Common_ScrollContent_006_modern_C_ExecuteUbergraph_WBP_Menu_Common_ScrollContent_006_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_ScrollContent_006_modern.WBP_Menu_Common_ScrollContent_006_modern_C.SetBattleMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBattleMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Common_ScrollContent_006_modern_C::SetBattleMode(bool bBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_ScrollContent_006_modern_C", "SetBattleMode");

	Params::WBP_Menu_Common_ScrollContent_006_modern_C_SetBattleMode Parms{};

	Parms.bBattleMode = bBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_ScrollContent_006_modern.WBP_Menu_Common_ScrollContent_006_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Common_ScrollContent_006_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_ScrollContent_006_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

