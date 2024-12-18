#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tutorial_Window_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Tutorial_Window_000_modern_classes.hpp"
#include "WBP_Menu_Tutorial_Window_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tutorial_Window_000_modern_C::ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_modern");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.SetIsLoading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLoading_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Tutorial_Window_000_modern_C::SetIsLoading(bool bIsLoading_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "SetIsLoading");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_SetIsLoading Parms{};

	Parms.bIsLoading_0 = bIsLoading_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.SetIsAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAnimation_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Tutorial_Window_000_modern_C::SetIsAnimation(bool bIsAnimation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "SetIsAnimation");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_SetIsAnimation Parms{};

	Parms.bIsAnimation_0 = bIsAnimation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.PlayInAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tutorial_Window_000_modern_C::PlayInAnim(class FName Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "PlayInAnim");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_PlayInAnim Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.SetCloseEventListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_Menu_Tutorial_C>EventListener                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Tutorial_Window_000_modern_C::SetCloseEventListener(TScriptInterface<class IBP_IF_Menu_Tutorial_C> EventListener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "SetCloseEventListener");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_SetCloseEventListener Parms{};

	Parms.EventListener = EventListener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.SetMainData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tutorial_Window_000_modern_C::SetMainData(class FName Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "SetMainData");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_SetMainData Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.SetPageData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGTabiNoKokoroePageData    Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Tutorial_Window_000_modern_C::SetPageData(const struct FJackUMGTabiNoKokoroePageData& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "SetPageData");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_SetPageData Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tutorial_Window_000_modern_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "OnAnimationFinished");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.OnCancel
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Tutorial_Window_000_modern_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "OnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.OnWidgetKeyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Tutorial_Window_000_modern_C::OnWidgetKeyEvent(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "OnWidgetKeyEvent");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_OnWidgetKeyEvent Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Tutorial_Window_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.OnTutorialClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Tutorial_Window_000_modern_C::OnTutorialClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "OnTutorialClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tutorial_Window_000_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tutorial_Window_000_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Tutorial_Window_000_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}

}

