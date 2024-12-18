#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Present_List_000_modern

#include "Basic.hpp"

#include "WBP_Menu_Present_List_000_modern_classes.hpp"
#include "WBP_Menu_Present_List_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.ExecuteUbergraph_WBP_Menu_Present_List_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::ExecuteUbergraph_WBP_Menu_Present_List_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "ExecuteUbergraph_WBP_Menu_Present_List_000_modern");

	Params::WBP_Menu_Present_List_000_modern_C_ExecuteUbergraph_WBP_Menu_Present_List_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "Tick");

	Params::WBP_Menu_Present_List_000_modern_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Present_List_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "OnItemListControl");

	Params::WBP_Menu_Present_List_000_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::CustomEvent_0(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Present_List_000_modern_C_CustomEvent_0 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.RemoveMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_Menu_Parts_000_modern_C*>ItemArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWBP_Menu_Parts_000_modern_C*     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::RemoveMenu(TArray<class UWBP_Menu_Parts_000_modern_C*>& ItemArray, class UWBP_Menu_Parts_000_modern_C*& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "RemoveMenu");

	Params::WBP_Menu_Present_List_000_modern_C_RemoveMenu Parms{};

	Parms.ItemArray = std::move(ItemArray);
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	ItemArray = std::move(Parms.ItemArray);
	Target = Parms.Target;
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.SetInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Present_List_000_modern_C::SetInfoText(class FName InSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "SetInfoText");

	Params::WBP_Menu_Present_List_000_modern_C_SetInfoText Parms{};

	Parms.InSelected = InSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Present_List_000_modern.WBP_Menu_Present_List_000_modern_C.InitFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Present_List_000_modern_C::InitFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Present_List_000_modern_C", "InitFlag");

	UObject::ProcessEvent(Func, nullptr);
}

}

