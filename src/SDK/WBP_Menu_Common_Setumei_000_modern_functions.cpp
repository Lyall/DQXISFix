#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Common_Setumei_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Common_Setumei_000_modern_classes.hpp"
#include "WBP_Menu_Common_Setumei_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.ExecuteUbergraph_WBP_Menu_Common_Setumei_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Common_Setumei_000_modern_C::ExecuteUbergraph_WBP_Menu_Common_Setumei_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "ExecuteUbergraph_WBP_Menu_Common_Setumei_000_modern");

	Params::WBP_Menu_Common_Setumei_000_modern_C_ExecuteUbergraph_WBP_Menu_Common_Setumei_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.SetWindowSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        WidgetSize_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Common_Setumei_000_modern_C::SetWindowSize(const struct FVector2D& WidgetSize_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "SetWindowSize");

	Params::WBP_Menu_Common_Setumei_000_modern_C_SetWindowSize Parms{};

	Parms.WidgetSize_0 = std::move(WidgetSize_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.Setup84ModeWithSnap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGWidgetBase*               InTargetWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGSnapType                        InSnapType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Common_Setumei_000_modern_C::Setup84ModeWithSnap(class UJackUMGWidgetBase* InTargetWidget, EJackUMGSnapType InSnapType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "Setup84ModeWithSnap");

	Params::WBP_Menu_Common_Setumei_000_modern_C_Setup84ModeWithSnap Parms{};

	Parms.InTargetWidget = InTargetWidget;
	Parms.InSnapType = InSnapType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Common_Setumei_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.SetCaptionData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Caption                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Menu_Common_Setumei_000_modern_C::SetCaptionData(const class FString& Caption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "SetCaptionData");

	Params::WBP_Menu_Common_Setumei_000_modern_C_SetCaptionData Parms{};

	Parms.Caption = std::move(Caption);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TextID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Common_Setumei_000_modern_C::SetData(class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "SetData");

	Params::WBP_Menu_Common_Setumei_000_modern_C_SetData Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Common_Setumei_000_modern.WBP_Menu_Common_Setumei_000_modern_C.Setup8_4Mode
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Common_Setumei_000_modern_C::Setup8_4Mode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Common_Setumei_000_modern_C", "Setup8_4Mode");

	UObject::ProcessEvent(Func, nullptr);
}

}
