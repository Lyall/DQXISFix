#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_BG_034

#include "Basic.hpp"

#include "WBP_Menu_Title_BG_034_classes.hpp"
#include "WBP_Menu_Title_BG_034_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Title_BG_034.WBP_Menu_Title_BG_034_C.ExecuteUbergraph_WBP_Menu_Title_BG_034
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_034_C::ExecuteUbergraph_WBP_Menu_Title_BG_034(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_034_C", "ExecuteUbergraph_WBP_Menu_Title_BG_034");

	Params::WBP_Menu_Title_BG_034_C_ExecuteUbergraph_WBP_Menu_Title_BG_034 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_034.WBP_Menu_Title_BG_034_C.PlayAnim034
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_034_C::PlayAnim034(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_034_C", "PlayAnim034");

	Params::WBP_Menu_Title_BG_034_C_PlayAnim034 Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_034.WBP_Menu_Title_BG_034_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Title_BG_034_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_034_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Title_BG_034.WBP_Menu_Title_BG_034_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_034_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_034_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Title_BG_034_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}
