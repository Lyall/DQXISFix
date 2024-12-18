#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_BG_037

#include "Basic.hpp"

#include "WBP_Menu_Title_BG_037_classes.hpp"
#include "WBP_Menu_Title_BG_037_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Title_BG_037.WBP_Menu_Title_BG_037_C.ExecuteUbergraph_WBP_Menu_Title_BG_037
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_037_C::ExecuteUbergraph_WBP_Menu_Title_BG_037(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_037_C", "ExecuteUbergraph_WBP_Menu_Title_BG_037");

	Params::WBP_Menu_Title_BG_037_C_ExecuteUbergraph_WBP_Menu_Title_BG_037 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_037.WBP_Menu_Title_BG_037_C.PlayAnim033
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlaybackSpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_037_C::PlayAnim033(float Duration, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_037_C", "PlayAnim033");

	Params::WBP_Menu_Title_BG_037_C_PlayAnim033 Parms{};

	Parms.Duration = Duration;
	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Title_BG_037.WBP_Menu_Title_BG_037_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Title_BG_037_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_037_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Title_BG_037.WBP_Menu_Title_BG_037_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Title_BG_037_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Title_BG_037_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Title_BG_037_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}

