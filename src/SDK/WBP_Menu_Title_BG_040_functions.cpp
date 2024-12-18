#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_BG_040

#include "Basic.hpp"

#include "WBP_Menu_Title_BG_040_classes.hpp"
#include "WBP_Menu_Title_BG_040_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Title_BG_040.WBP_Menu_Title_BG_040_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Title_BG_040_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_040_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Title_BG_040.WBP_Menu_Title_BG_040_C.ExecuteUbergraph_WBP_Menu_Title_BG_040
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_040_C::ExecuteUbergraph_WBP_Menu_Title_BG_040(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_040_C", "ExecuteUbergraph_WBP_Menu_Title_BG_040");

	Params::WBP_Menu_Title_BG_040_C_ExecuteUbergraph_WBP_Menu_Title_BG_040 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_040.WBP_Menu_Title_BG_040_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_040_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_040_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Title_BG_040_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}

