#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Senreki_Quest_Window_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Senreki_Quest_Window_000_modern_classes.hpp"
#include "WBP_Menu_Senreki_Quest_Window_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Quest_Window_000_modern_C::ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Quest_Window_000_modern_C", "ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern");

	Params::WBP_Menu_Senreki_Quest_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Quest_Window_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Senreki_Quest_Window_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Quest_Window_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Quest_Window_000_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Quest_Window_000_modern_C", "OnItemListControl");

	Params::WBP_Menu_Senreki_Quest_Window_000_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Quest_Window_000_modern.WBP_Menu_Senreki_Quest_Window_000_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Quest_Window_000_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Quest_Window_000_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Senreki_Quest_Window_000_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}

