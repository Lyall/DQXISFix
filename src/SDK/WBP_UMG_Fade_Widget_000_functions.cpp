#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UMG_Fade_Widget_000

#include "Basic.hpp"

#include "WBP_UMG_Fade_Widget_000_classes.hpp"
#include "WBP_UMG_Fade_Widget_000_parameters.hpp"


namespace SDK
{

// Function WBP_UMG_Fade_Widget_000.WBP_UMG_Fade_Widget_000_C.ExecuteUbergraph_WBP_UMG_Fade_Widget_000
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UMG_Fade_Widget_000_C::ExecuteUbergraph_WBP_UMG_Fade_Widget_000(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UMG_Fade_Widget_000_C", "ExecuteUbergraph_WBP_UMG_Fade_Widget_000");

	Params::WBP_UMG_Fade_Widget_000_C_ExecuteUbergraph_WBP_UMG_Fade_Widget_000 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UMG_Fade_Widget_000.WBP_UMG_Fade_Widget_000_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UMG_Fade_Widget_000_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UMG_Fade_Widget_000_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UMG_Fade_Widget_000.WBP_UMG_Fade_Widget_000_C.SetFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             WidgetName_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeAlpha                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     FadeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UMG_Fade_Widget_000_C::SetFade(class FName WidgetName_0, int32 ZOrder, float FadeAlpha, const struct FLinearColor& FadeColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UMG_Fade_Widget_000_C", "SetFade");

	Params::WBP_UMG_Fade_Widget_000_C_SetFade Parms{};

	Parms.WidgetName_0 = WidgetName_0;
	Parms.ZOrder = ZOrder;
	Parms.FadeAlpha = FadeAlpha;
	Parms.FadeColor = std::move(FadeColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UMG_Fade_Widget_000.WBP_UMG_Fade_Widget_000_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UMG_Fade_Widget_000_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UMG_Fade_Widget_000_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

