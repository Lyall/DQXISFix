#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_List_000_modern

#include "Basic.hpp"

#include "WBP_Menu_WorldMap_List_000_modern_classes.hpp"
#include "WBP_Menu_WorldMap_List_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenRuraMenuEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenRuraMenuEvent__DelegateSignature(bool bOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenRuraMenuEvent__DelegateSignature");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenRuraMenuEvent__DelegateSignature Parms{};

	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.ExecuteUbergraph_WBP_Menu_WorldMap_List_000_modern
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_List_000_modern_C::ExecuteUbergraph_WBP_Menu_WorldMap_List_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "ExecuteUbergraph_WBP_Menu_WorldMap_List_000_modern");

	Params::WBP_Menu_WorldMap_List_000_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_List_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OnOpenRuraMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OnOpenRuraMenu(bool bOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OnOpenRuraMenu");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OnOpenRuraMenu Parms{};

	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_List_000_modern_C::CustomEvent_0(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "CustomEvent_0");

	Params::WBP_Menu_WorldMap_List_000_modern_C_CustomEvent_0 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_WorldMap_List_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenWorldMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDiractRuraMenuMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackWorldMapOpenReason                 OpenReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenWorldMap(bool IsFocus, bool bDiractRuraMenuMode, EJackWorldMapOpenReason OpenReason, bool* bIsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenWorldMap");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenWorldMap Parms{};

	Parms.IsFocus = IsFocus;
	Parms.bDiractRuraMenuMode = bDiractRuraMenuMode;
	Parms.OpenReason = OpenReason;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOk != nullptr)
		*bIsOk = Parms.bIsOk;
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenQuestList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenQuestList(bool* bIsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenQuestList");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenQuestList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOk != nullptr)
		*bIsOk = Parms.bIsOk;
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenKiraList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenKiraList(bool* bIsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenKiraList");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenKiraList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOk != nullptr)
		*bIsOk = Parms.bIsOk;
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OnItemListEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_List_000_modern_C::OnItemListEvent(class FName EventName, class UJackUMGItemBase* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OnItemListEvent");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OnItemListEvent Parms{};

	Parms.EventName = EventName;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.UpdateMenuStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_List_000_modern_C::UpdateMenuStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "UpdateMenuStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenRuraMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenRuraMenu(bool* bIsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenRuraMenu");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenRuraMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOk != nullptr)
		*bIsOk = Parms.bIsOk;
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenNeighborMapList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenNeighborMapList(bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenNeighborMapList");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenNeighborMapList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.RequestToDisplayCurrentMap
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_List_000_modern_C::RequestToDisplayCurrentMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "RequestToDisplayCurrentMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_List_000_modern.WBP_Menu_WorldMap_List_000_modern_C.OpenMonsterList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_List_000_modern_C::OpenMonsterList(bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_List_000_modern_C", "OpenMonsterList");

	Params::WBP_Menu_WorldMap_List_000_modern_C_OpenMonsterList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}

}
