#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldWeather

#include "Basic.hpp"

#include "BP_WorldWeather_classes.hpp"
#include "BP_WorldWeather_parameters.hpp"


namespace SDK
{

// Function BP_WorldWeather.BP_WorldWeather_C.ExecuteUbergraph_BP_WorldWeather
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WorldWeather_C::ExecuteUbergraph_BP_WorldWeather(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldWeather_C", "ExecuteUbergraph_BP_WorldWeather");

	Params::BP_WorldWeather_C_ExecuteUbergraph_BP_WorldWeather Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorldWeather.BP_WorldWeather_C.OnTokugiWeatherReport
// (Event, Public, BlueprintEvent)

void UBP_WorldWeather_C::OnTokugiWeatherReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldWeather_C", "OnTokugiWeatherReport");

	UObject::ProcessEvent(Func, nullptr);
}

}
