#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_BG_021

#include "Basic.hpp"

#include "WBP_Menu_Title_BG_021_classes.hpp"
#include "WBP_Menu_Title_BG_021_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Title_BG_021.WBP_Menu_Title_BG_021_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Title_BG_021_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_021_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Title_BG_021.WBP_Menu_Title_BG_021_C.ExecuteUbergraph_WBP_Menu_Title_BG_021
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_021_C::ExecuteUbergraph_WBP_Menu_Title_BG_021(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_021_C", "ExecuteUbergraph_WBP_Menu_Title_BG_021");

	Params::WBP_Menu_Title_BG_021_C_ExecuteUbergraph_WBP_Menu_Title_BG_021 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_021.WBP_Menu_Title_BG_021_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_021_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_021_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Title_BG_021_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}

