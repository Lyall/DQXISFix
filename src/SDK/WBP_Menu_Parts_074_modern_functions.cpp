#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_074_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_074_modern_classes.hpp"
#include "WBP_Menu_Parts_074_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_074_modern.WBP_Menu_Parts_074_modern_C.ExecuteUbergraph_WBP_Menu_Parts_074_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_074_modern_C::ExecuteUbergraph_WBP_Menu_Parts_074_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_074_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_074_modern");

	Params::WBP_Menu_Parts_074_modern_C_ExecuteUbergraph_WBP_Menu_Parts_074_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_074_modern.WBP_Menu_Parts_074_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_074_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_074_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_074_modern.WBP_Menu_Parts_074_modern_C.DrawItemBase
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGItemData*                 InItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_074_modern_C::DrawItemBase(class UJackUMGItemData* InItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_074_modern_C", "DrawItemBase");

	Params::WBP_Menu_Parts_074_modern_C_DrawItemBase Parms{};

	Parms.InItemData = InItemData;

	UObject::ProcessEvent(Func, &Parms);
}

}
