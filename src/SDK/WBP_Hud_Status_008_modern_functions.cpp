#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_008_modern

#include "Basic.hpp"

#include "WBP_Hud_Status_008_modern_classes.hpp"
#include "WBP_Hud_Status_008_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C.ExecuteUbergraph_WBP_Hud_Status_008_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_008_modern_C::ExecuteUbergraph_WBP_Hud_Status_008_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_008_modern_C", "ExecuteUbergraph_WBP_Hud_Status_008_modern");

	Params::WBP_Hud_Status_008_modern_C_ExecuteUbergraph_WBP_Hud_Status_008_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C.InitName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EJackUMGTextColorSet                    ColorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_008_modern_C::InitName(const class FString& Name_0, EJackUMGTextColorSet ColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_008_modern_C", "InitName");

	Params::WBP_Hud_Status_008_modern_C_InitName Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hud_Status_008_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_008_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C.InitLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGTextColorSet                    ColorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_008_modern_C::InitLevel(int32 Level, EJackUMGTextColorSet ColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_008_modern_C", "InitLevel");

	Params::WBP_Hud_Status_008_modern_C_InitLevel Parms{};

	Parms.Level = Level;
	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C.InitData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackGameCharacter*               Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Status_008_modern_C::InitData(class UJackGameCharacter* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Status_008_modern_C", "InitData");

	Params::WBP_Hud_Status_008_modern_C_InitData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}
