#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Button_004_modern

#include "Basic.hpp"

#include "WBP_Menu_WorldMap_Button_004_modern_classes.hpp"
#include "WBP_Menu_WorldMap_Button_004_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_WorldMap_Button_004_modern.WBP_Menu_WorldMap_Button_004_modern_C.ExecuteUbergraph_WBP_Menu_WorldMap_Button_004_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_Button_004_modern_C::ExecuteUbergraph_WBP_Menu_WorldMap_Button_004_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Button_004_modern_C", "ExecuteUbergraph_WBP_Menu_WorldMap_Button_004_modern");

	Params::WBP_Menu_WorldMap_Button_004_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Button_004_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_Button_004_modern.WBP_Menu_WorldMap_Button_004_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_WorldMap_Button_004_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Button_004_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_Button_004_modern.WBP_Menu_WorldMap_Button_004_modern_C.SetButtonAndCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InTxetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_Button_004_modern_C::SetButtonAndCaption(EJackKeys InKeyType, class FName InTxetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_Button_004_modern_C", "SetButtonAndCaption");

	Params::WBP_Menu_WorldMap_Button_004_modern_C_SetButtonAndCaption Parms{};

	Parms.InKeyType = InKeyType;
	Parms.InTxetId = InTxetId;

	UObject::ProcessEvent(Func, &Parms);
}

}

