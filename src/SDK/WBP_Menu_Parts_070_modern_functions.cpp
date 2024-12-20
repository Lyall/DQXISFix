#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_070_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_070_modern_classes.hpp"
#include "WBP_Menu_Parts_070_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.ExecuteUbergraph_WBP_Menu_Parts_070_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_070_modern_C::ExecuteUbergraph_WBP_Menu_Parts_070_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_070_modern");

	Params::WBP_Menu_Parts_070_modern_C_ExecuteUbergraph_WBP_Menu_Parts_070_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.SetSelectedFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Parts_070_modern_C::SetSelectedFlag(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "SetSelectedFlag");

	Params::WBP_Menu_Parts_070_modern_C_SetSelectedFlag Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.SetOnCursorFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOnCursor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Parts_070_modern_C::SetOnCursorFlag(bool bIsOnCursor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "SetOnCursorFlag");

	Params::WBP_Menu_Parts_070_modern_C_SetOnCursorFlag Parms{};

	Parms.bIsOnCursor = bIsOnCursor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackGameCharacter*               GameCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_070_modern_C::SetData(class UJackGameCharacter* GameCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "SetData");

	Params::WBP_Menu_Parts_070_modern_C_SetData Parms{};

	Parms.GameCharacter = GameCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_070_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_070_modern.WBP_Menu_Parts_070_modern_C.SetButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_070_modern_C::SetButton(EJackKeys InKeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_070_modern_C", "SetButton");

	Params::WBP_Menu_Parts_070_modern_C_SetButton Parms{};

	Parms.InKeyType = InKeyType;

	UObject::ProcessEvent(Func, &Parms);
}

}

