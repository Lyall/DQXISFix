#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_008_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_008_modern_classes.hpp"
#include "WBP_Menu_Parts_008_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.ExecuteUbergraph_WBP_Menu_Parts_008_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::ExecuteUbergraph_WBP_Menu_Parts_008_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_008_modern");

	Params::WBP_Menu_Parts_008_modern_C_ExecuteUbergraph_WBP_Menu_Parts_008_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "Tick");

	Params::WBP_Menu_Parts_008_modern_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.AnimInit
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::AnimInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "AnimInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.PlayPushAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::PlayPushAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "PlayPushAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_008_modern_C::CustomEvent_0(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Parts_008_modern_C_CustomEvent_0 Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.SetButtonAndCaption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InTextId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::SetButtonAndCaption(EJackKeys InKeyType, class FName InTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "SetButtonAndCaption");

	Params::WBP_Menu_Parts_008_modern_C_SetButtonAndCaption Parms{};

	Parms.InKeyType = InKeyType;
	Parms.InTextId = InTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.PlayButtonAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::PlayButtonAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "PlayButtonAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.LoopButtonAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::LoopButtonAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "LoopButtonAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.StopButtonAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::StopButtonAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "StopButtonAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.SetMukouColorButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_008_modern_C::SetMukouColorButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "SetMukouColorButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.GetSortCaptionTextId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EJackUMGItemSortType                    Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Output_Get                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::GetSortCaptionTextId(EJackUMGItemSortType Selection, class FName* Output_Get)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "GetSortCaptionTextId");

	Params::WBP_Menu_Parts_008_modern_C_GetSortCaptionTextId Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.UpdateAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::UpdateAnim(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "UpdateAnim");

	Params::WBP_Menu_Parts_008_modern_C_UpdateAnim Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_008_modern.WBP_Menu_Parts_008_modern_C.UpdateAnimMain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Timer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_008_modern_C::UpdateAnimMain(float Timer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_008_modern_C", "UpdateAnimMain");

	Params::WBP_Menu_Parts_008_modern_C_UpdateAnimMain Parms{};

	Parms.Timer = Timer;

	UObject::ProcessEvent(Func, &Parms);
}

}
