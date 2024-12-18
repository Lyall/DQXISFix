#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Setumei_003_modern

#include "Basic.hpp"

#include "WBP_Menu_WorldMap_Setumei_003_modern_classes.hpp"
#include "WBP_Menu_WorldMap_Setumei_003_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_WorldMap_Setumei_003_modern.WBP_Menu_WorldMap_Setumei_003_modern_C.ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_Setumei_003_modern_C::ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Setumei_003_modern_C", "ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern");

	Params::WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_Setumei_003_modern.WBP_Menu_WorldMap_Setumei_003_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_WorldMap_Setumei_003_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Setumei_003_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_Setumei_003_modern.WBP_Menu_WorldMap_Setumei_003_modern_C.SetCondition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EJackMapSymbol>                  TimeCondition                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EJackMapSymbol>                  WeatherCondition                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    bHasPickedUp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bHasCondition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_Setumei_003_modern_C::SetCondition(TArray<EJackMapSymbol>& TimeCondition, TArray<EJackMapSymbol>& WeatherCondition, bool bHasPickedUp, bool* bHasCondition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Setumei_003_modern_C", "SetCondition");

	Params::WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition Parms{};

	Parms.TimeCondition = std::move(TimeCondition);
	Parms.WeatherCondition = std::move(WeatherCondition);
	Parms.bHasPickedUp = bHasPickedUp;

	UObject::ProcessEvent(Func, &Parms);

	TimeCondition = std::move(Parms.TimeCondition);
	WeatherCondition = std::move(Parms.WeatherCondition);

	if (bHasCondition != nullptr)
		*bHasCondition = Parms.bHasCondition;
}

}

