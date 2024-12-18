#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_List_013_modern

#include "Basic.hpp"

#include "WBP_Menu_Battle_List_013_modern_classes.hpp"
#include "WBP_Menu_Battle_List_013_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.ExecuteUbergraph_WBP_Menu_Battle_List_013_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Battle_List_013_modern_C::ExecuteUbergraph_WBP_Menu_Battle_List_013_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "ExecuteUbergraph_WBP_Menu_Battle_List_013_modern");

	Params::WBP_Menu_Battle_List_013_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_013_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Battle_List_013_modern_C::CustomEvent_1(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "CustomEvent_1");

	Params::WBP_Menu_Battle_List_013_modern_C_CustomEvent_1 Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Battle_List_013_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Battle_List_013_modern_C::CustomEvent_0(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Battle_List_013_modern_C_CustomEvent_0 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.OnItemListControlEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Battle_List_013_modern_C::OnItemListControlEvent_Event_0(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "OnItemListControlEvent_Event_0");

	Params::WBP_Menu_Battle_List_013_modern_C_OnItemListControlEvent_Event_0 Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.SetupDouguAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Battle_List_013_modern_C::SetupDouguAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "SetupDouguAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.SetupJumonAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Battle_List_013_modern_C::SetupJumonAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "SetupJumonAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.SetupKougekiAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Battle_List_013_modern_C::SetupKougekiAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "SetupKougekiAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.SetupRenkeiAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RenkeiID_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RenkeiName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Battle_List_013_modern_C::SetupRenkeiAction(class FName RenkeiID_0, const class FText& RenkeiName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "SetupRenkeiAction");

	Params::WBP_Menu_Battle_List_013_modern_C_SetupRenkeiAction Parms{};

	Parms.RenkeiID_0 = RenkeiID_0;
	Parms.RenkeiName = std::move(RenkeiName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Battle_List_013_modern.WBP_Menu_Battle_List_013_modern_C.SetupTokugiAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Battle_List_013_modern_C::SetupTokugiAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Battle_List_013_modern_C", "SetupTokugiAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

