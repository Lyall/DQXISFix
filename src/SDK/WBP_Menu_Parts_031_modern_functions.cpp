#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_031_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_031_modern_classes.hpp"
#include "WBP_Menu_Parts_031_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.ExecuteUbergraph_WBP_Menu_Parts_031_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_031_modern_C::ExecuteUbergraph_WBP_Menu_Parts_031_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "ExecuteUbergraph_WBP_Menu_Parts_031_modern");

	Params::WBP_Menu_Parts_031_modern_C_ExecuteUbergraph_WBP_Menu_Parts_031_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Parts_031_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.UpdateContainerDelegate_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_031_modern_C::UpdateContainerDelegate_Copy(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "UpdateContainerDelegate_Copy");

	Params::WBP_Menu_Parts_031_modern_C_UpdateContainerDelegate_Copy Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.UpdateOddEffectIcon
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Parts_031_modern_C::UpdateOddEffectIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "UpdateOddEffectIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.ShowOddEffectIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKyoukaiEffectEventType             EventType_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_031_modern_C::ShowOddEffectIcon(EJackKyoukaiEffectEventType EventType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "ShowOddEffectIcon");

	Params::WBP_Menu_Parts_031_modern_C_ShowOddEffectIcon Parms{};

	Parms.EventType_0 = EventType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C.SetVisibilityParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBuffVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InNumberVisibility                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Parts_031_modern_C::SetVisibilityParts(bool InBuffVisibility, bool InNumberVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_031_modern_C", "SetVisibilityParts");

	Params::WBP_Menu_Parts_031_modern_C_SetVisibilityParts Parms{};

	Parms.InBuffVisibility = InBuffVisibility;
	Parms.InNumberVisibility = InNumberVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

