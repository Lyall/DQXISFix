#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Shortcut_List_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Shortcut_List_000_modern_classes.hpp"
#include "WBP_Menu_Shortcut_List_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.ExecuteUbergraph_WBP_Menu_Shortcut_List_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Shortcut_List_000_modern_C::ExecuteUbergraph_WBP_Menu_Shortcut_List_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "ExecuteUbergraph_WBP_Menu_Shortcut_List_000_modern");

	Params::WBP_Menu_Shortcut_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Shortcut_List_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.OnKeyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Shortcut_List_000_modern_C::OnKeyEvent(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "OnKeyEvent");

	Params::WBP_Menu_Shortcut_List_000_modern_C_OnKeyEvent Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCustomFlow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Shortcut_List_000_modern_C::CustomEvent_0(bool bIsCustomFlow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Shortcut_List_000_modern_C_CustomEvent_0 Parms{};

	Parms.bIsCustomFlow = bIsCustomFlow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Shortcut_List_000_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "OnItemListControl");

	Params::WBP_Menu_Shortcut_List_000_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Shortcut_List_000_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Shortcut_List_000_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Shortcut_List_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.SetShortcutCommandActiveAboutItemId
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TextID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Shortcut_List_000_modern_C::SetShortcutCommandActiveAboutItemId(class FName ItemID, class FName TextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "SetShortcutCommandActiveAboutItemId");

	Params::WBP_Menu_Shortcut_List_000_modern_C_SetShortcutCommandActiveAboutItemId Parms{};

	Parms.ItemID = ItemID;
	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.SetInfoText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Shortcut_List_000_modern_C::SetInfoText(class FName Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "SetInfoText");

	Params::WBP_Menu_Shortcut_List_000_modern_C_SetInfoText Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.CloseMiniMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Shortcut_List_000_modern_C::CloseMiniMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "CloseMiniMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Shortcut_List_000_modern.WBP_Menu_Shortcut_List_000_modern_C.OpenMiniMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Shortcut_List_000_modern_C::OpenMiniMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Shortcut_List_000_modern_C", "OpenMiniMap");

	UObject::ProcessEvent(Func, nullptr);
}

}

