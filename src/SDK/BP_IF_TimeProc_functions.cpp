#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_TimeProc

#include "Basic.hpp"

#include "BP_IF_TimeProc_classes.hpp"
#include "BP_IF_TimeProc_parameters.hpp"


namespace SDK
{

// Function BP_IF_TimeProc.BP_IF_TimeProc_C.DayNightChangeCameraEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_TimeProc_C::DayNightChangeCameraEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_TimeProc_C", "DayNightChangeCameraEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_TimeProc.BP_IF_TimeProc_C.DayNightChangeCameraStart
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_TimeProc_C::DayNightChangeCameraStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_TimeProc_C", "DayNightChangeCameraStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_TimeProc.BP_IF_TimeProc_C.SetTimeZoneProc
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bpp__Night__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_TimeProc_C::SetTimeZoneProc(bool bpp__Night__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_TimeProc_C", "SetTimeZoneProc");

	Params::BP_IF_TimeProc_C_SetTimeZoneProc Parms{};

	Parms.bpp__Night__pf = bpp__Night__pf;

	UObject::ProcessEvent(Func, &Parms);
}

}

