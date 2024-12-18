#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_014_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_014_modern_classes.hpp"
#include "WBP_Menu_Parts_014_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.ExecuteUbergraph_WBP_Menu_Parts_014_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_014_modern_C::ExecuteUbergraph_WBP_Menu_Parts_014_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_014_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_014_modern");

	Params::WBP_Menu_Parts_014_modern_C_ExecuteUbergraph_WBP_Menu_Parts_014_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_014_modern_C::CustomEvent_0(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_014_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Parts_014_modern_C_CustomEvent_0 Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGSaveDataContainer*        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_014_modern_C::SetData(class UJackUMGSaveDataContainer* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_014_modern_C", "SetData");

	Params::WBP_Menu_Parts_014_modern_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_014_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_014_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_014_modern.WBP_Menu_Parts_014_modern_C.CheckSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGSaveDataContainer*        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_014_modern_C::CheckSaveData(class UJackUMGSaveDataContainer* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_014_modern_C", "CheckSaveData");

	Params::WBP_Menu_Parts_014_modern_C_CheckSaveData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

