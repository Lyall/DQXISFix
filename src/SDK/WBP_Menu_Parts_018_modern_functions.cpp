#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_018_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_018_modern_classes.hpp"
#include "WBP_Menu_Parts_018_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_018_modern.WBP_Menu_Parts_018_modern_C.ExecuteUbergraph_WBP_Menu_Parts_018_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_018_modern_C::ExecuteUbergraph_WBP_Menu_Parts_018_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_018_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_018_modern");

	Params::WBP_Menu_Parts_018_modern_C_ExecuteUbergraph_WBP_Menu_Parts_018_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_018_modern.WBP_Menu_Parts_018_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_018_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_018_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_018_modern.WBP_Menu_Parts_018_modern_C.NotificationItemBase
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemData*                 InItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_018_modern_C::NotificationItemBase(const class FName& NotifyTag, class UJackUMGItemData* InItemData, class UObject* Object, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_018_modern_C", "NotificationItemBase");

	Params::WBP_Menu_Parts_018_modern_C_NotificationItemBase Parms{};

	Parms.NotifyTag = NotifyTag;
	Parms.InItemData = InItemData;
	Parms.Object = Object;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_018_modern.WBP_Menu_Parts_018_modern_C.UpdateContainerDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_018_modern_C::UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_018_modern_C", "UpdateContainerDelegate");

	Params::WBP_Menu_Parts_018_modern_C_UpdateContainerDelegate Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}

}
