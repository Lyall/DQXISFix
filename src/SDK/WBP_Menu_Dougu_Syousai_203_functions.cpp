#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_203

#include "Basic.hpp"

#include "WBP_Menu_Dougu_Syousai_203_classes.hpp"
#include "WBP_Menu_Dougu_Syousai_203_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Dougu_Syousai_203.WBP_Menu_Dougu_Syousai_203_C.ExecuteUbergraph_WBP_Menu_Dougu_Syousai_203
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Dougu_Syousai_203_C::ExecuteUbergraph_WBP_Menu_Dougu_Syousai_203(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Dougu_Syousai_203_C", "ExecuteUbergraph_WBP_Menu_Dougu_Syousai_203");

	Params::WBP_Menu_Dougu_Syousai_203_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_203 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Dougu_Syousai_203.WBP_Menu_Dougu_Syousai_203_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Dougu_Syousai_203_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Dougu_Syousai_203_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Dougu_Syousai_203.WBP_Menu_Dougu_Syousai_203_C.DispItemFromSyousaiRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGItemSyousai*              InItemSyousaiRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Dougu_Syousai_203_C::DispItemFromSyousaiRef(class UJackUMGItemSyousai* InItemSyousaiRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Dougu_Syousai_203_C", "DispItemFromSyousaiRef");

	Params::WBP_Menu_Dougu_Syousai_203_C_DispItemFromSyousaiRef Parms{};

	Parms.InItemSyousaiRef = InItemSyousaiRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Dougu_Syousai_203.WBP_Menu_Dougu_Syousai_203_C.JackOnWidgetNotificationDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InEventTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGWidgetBase*               InCallWidgetBase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Dougu_Syousai_203_C::JackOnWidgetNotificationDelegate_Event_0(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Dougu_Syousai_203_C", "JackOnWidgetNotificationDelegate_Event_0");

	Params::WBP_Menu_Dougu_Syousai_203_C_JackOnWidgetNotificationDelegate_Event_0 Parms{};

	Parms.InEventTag = InEventTag;
	Parms.InCallWidgetBase = InCallWidgetBase;
	Parms.InObject = InObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

