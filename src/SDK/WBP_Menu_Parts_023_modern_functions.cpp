#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_023_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_023_modern_classes.hpp"
#include "WBP_Menu_Parts_023_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.ExecuteUbergraph_WBP_Menu_Parts_023_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_023_modern_C::ExecuteUbergraph_WBP_Menu_Parts_023_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_023_modern");

	Params::WBP_Menu_Parts_023_modern_C_ExecuteUbergraph_WBP_Menu_Parts_023_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackGameCharacter*               Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_023_modern_C::SetLevel(class UJackGameCharacter* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "SetLevel");

	Params::WBP_Menu_Parts_023_modern_C_SetLevel Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.InitLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGTextColorSet                    ColorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_023_modern_C::InitLevel(int32 Level, EJackUMGTextColorSet ColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "InitLevel");

	Params::WBP_Menu_Parts_023_modern_C_InitLevel Parms{};

	Parms.Level = Level;
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_023_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.SetGameCharacterData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackGameCharacter*               Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_023_modern_C::SetGameCharacterData(class UJackGameCharacter* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "SetGameCharacterData");

	Params::WBP_Menu_Parts_023_modern_C_SetGameCharacterData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C.UpdateContainerDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_023_modern_C::UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_023_modern_C", "UpdateContainerDelegate");

	Params::WBP_Menu_Parts_023_modern_C_UpdateContainerDelegate Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}

}
