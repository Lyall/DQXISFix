#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_091_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_091_modern_classes.hpp"
#include "WBP_Menu_Parts_091_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_091_modern.WBP_Menu_Parts_091_modern_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_091_modern_C::OnChangeValue__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_091_modern_C", "OnChangeValue__DelegateSignature");

	Params::WBP_Menu_Parts_091_modern_C_OnChangeValue__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_091_modern.WBP_Menu_Parts_091_modern_C.ExecuteUbergraph_WBP_Menu_Parts_091_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_091_modern_C::ExecuteUbergraph_WBP_Menu_Parts_091_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_091_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_091_modern");

	Params::WBP_Menu_Parts_091_modern_C_ExecuteUbergraph_WBP_Menu_Parts_091_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_091_modern.WBP_Menu_Parts_091_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_091_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_091_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_091_modern.WBP_Menu_Parts_091_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_091_modern_C::CustomEvent_0(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_091_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Parts_091_modern_C_CustomEvent_0 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_091_modern.WBP_Menu_Parts_091_modern_C.SakusenTextIdSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value_1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value_2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value_3                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_091_modern_C::SakusenTextIdSetting(class FName TitleText, class FName Value_1, class FName Value_2, class FName Value_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_091_modern_C", "SakusenTextIdSetting");

	Params::WBP_Menu_Parts_091_modern_C_SakusenTextIdSetting Parms{};

	Parms.TitleText = TitleText;
	Parms.Value_1 = Value_1;
	Parms.Value_2 = Value_2;
	Parms.Value_3 = Value_3;

	UObject::ProcessEvent(Func, &Parms);
}

}

