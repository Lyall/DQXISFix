#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Name_000_modern

#include "Basic.hpp"

#include "WBP_Hud_Name_000_modern_classes.hpp"
#include "WBP_Hud_Name_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.ExecuteUbergraph_WBP_Hud_Name_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Name_000_modern_C::ExecuteUbergraph_WBP_Hud_Name_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "ExecuteUbergraph_WBP_Hud_Name_000_modern");

	Params::WBP_Hud_Name_000_modern_C_ExecuteUbergraph_WBP_Hud_Name_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.ChangePhotoModeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsPhotoMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Hud_Name_000_modern_C::ChangePhotoModeDelegate_Event_0(bool bIsPhotoMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "ChangePhotoModeDelegate_Event_0");

	Params::WBP_Hud_Name_000_modern_C_ChangePhotoModeDelegate_Event_0 Parms{};

	Parms.bIsPhotoMode = bIsPhotoMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hud_Name_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.HideFukidasi
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hud_Name_000_modern_C::HideFukidasi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "HideFukidasi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMG3DWidgetData*             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Name_000_modern_C::SetData(class UJackUMG3DWidgetData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "SetData");

	Params::WBP_Hud_Name_000_modern_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_Name_000_modern.WBP_Hud_Name_000_modern_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMG3DWidgetData*             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_Name_000_modern_C::Update(class UJackUMG3DWidgetData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_Name_000_modern_C", "Update");

	Params::WBP_Hud_Name_000_modern_C_Update Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}
