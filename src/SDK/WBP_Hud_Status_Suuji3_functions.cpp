#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_Suuji3

#include "Basic.hpp"

#include "WBP_Hud_Status_Suuji3_classes.hpp"
#include "WBP_Hud_Status_Suuji3_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_Status_Suuji3.WBP_Hud_Status_Suuji3_C.ExecuteUbergraph_WBP_Hud_Status_Suuji3
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_Suuji3_C::ExecuteUbergraph_WBP_Hud_Status_Suuji3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_Suuji3_C", "ExecuteUbergraph_WBP_Hud_Status_Suuji3");

	Params::WBP_Hud_Status_Suuji3_C_ExecuteUbergraph_WBP_Hud_Status_Suuji3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_Suuji3.WBP_Hud_Status_Suuji3_C.InitValueHudStatusSuuji3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Now_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGTextColorSet                    ColorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_Suuji3_C::InitValueHudStatusSuuji3(int32 Now_0, int32 Max, EJackUMGTextColorSet ColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_Suuji3_C", "InitValueHudStatusSuuji3");

	Params::WBP_Hud_Status_Suuji3_C_InitValueHudStatusSuuji3 Parms{};

	Parms.Now_0 = Now_0;
	Parms.Max = Max;
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_Suuji3.WBP_Hud_Status_Suuji3_C.ValueChangeDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ColorNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_Suuji3_C::ValueChangeDelegate_Event(int32 Index_0, int32 ColorNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_Suuji3_C", "ValueChangeDelegate_Event");

	Params::WBP_Hud_Status_Suuji3_C_ValueChangeDelegate_Event Parms{};

	Parms.Index_0 = Index_0;
	Parms.ColorNum = ColorNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_Suuji3.WBP_Hud_Status_Suuji3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hud_Status_Suuji3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_Suuji3_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_Status_Suuji3.WBP_Hud_Status_Suuji3_C.SetColorTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Now_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_Suuji3_C::SetColorTexture(int32 Now_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_Suuji3_C", "SetColorTexture");

	Params::WBP_Hud_Status_Suuji3_C_SetColorTexture Parms{};

	Parms.Now_Value = Now_Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

