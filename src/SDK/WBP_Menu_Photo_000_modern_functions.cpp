#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Photo_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Photo_000_modern_classes.hpp"
#include "WBP_Menu_Photo_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.ExecuteUbergraph_WBP_Menu_Photo_000_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Photo_000_modern_C::ExecuteUbergraph_WBP_Menu_Photo_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "ExecuteUbergraph_WBP_Menu_Photo_000_modern");

	Params::WBP_Menu_Photo_000_modern_C_ExecuteUbergraph_WBP_Menu_Photo_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.PhotoModeBPDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackPhotoModeEvent                     EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Photo_000_modern_C::PhotoModeBPDelegate_Event_0(EJackPhotoModeEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "PhotoModeBPDelegate_Event_0");

	Params::WBP_Menu_Photo_000_modern_C_PhotoModeBPDelegate_Event_0 Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.OnKeyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Photo_000_modern_C::OnKeyEvent(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "OnKeyEvent");

	Params::WBP_Menu_Photo_000_modern_C_OnKeyEvent Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Photo_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Photo_000_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Photo_000_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Photo_000_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "OnItemListControl");

	Params::WBP_Menu_Photo_000_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.IsCharacterHiddenFromItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGItemData*                 NewParam1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Photo_000_modern_C::IsCharacterHiddenFromItemData(class UJackUMGItemData* NewParam1, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "IsCharacterHiddenFromItemData");

	Params::WBP_Menu_Photo_000_modern_C_IsCharacterHiddenFromItemData Parms{};

	Parms.NewParam1 = NewParam1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.IsCharacterHiddenFromCharacterType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackCharacter                          NewParam1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Photo_000_modern_C::IsCharacterHiddenFromCharacterType(EJackCharacter NewParam1, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "IsCharacterHiddenFromCharacterType");

	Params::WBP_Menu_Photo_000_modern_C_IsCharacterHiddenFromCharacterType Parms{};

	Parms.NewParam1 = NewParam1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_Menu_Photo_000_modern.WBP_Menu_Photo_000_modern_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Photo_000_modern_C::HideHUD(bool bIsHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Photo_000_modern_C", "HideHUD");

	Params::WBP_Menu_Photo_000_modern_C_HideHUD Parms{};

	Parms.bIsHide = bIsHide;

	UObject::ProcessEvent(Func, &Parms);
}

}
