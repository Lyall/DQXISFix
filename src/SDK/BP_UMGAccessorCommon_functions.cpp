#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UMGAccessorCommon

#include "Basic.hpp"

#include "BP_UMGAccessorCommon_classes.hpp"
#include "BP_UMGAccessorCommon_parameters.hpp"


namespace SDK
{

// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.ExecuteUbergraph_BP_UMGAccessorCommon
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGAccessorCommon_C::ExecuteUbergraph_BP_UMGAccessorCommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "ExecuteUbergraph_BP_UMGAccessorCommon");

	Params::BP_UMGAccessorCommon_C_ExecuteUbergraph_BP_UMGAccessorCommon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.OnDisplayTabiNoKokoroe
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGAccessorCommon_C::OnDisplayTabiNoKokoroe(class FName Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "OnDisplayTabiNoKokoroe");

	Params::BP_UMGAccessorCommon_C_OnDisplayTabiNoKokoroe Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.OnOpenTokugiPanelAtBattleResult
// (Event, Protected, BlueprintEvent)
// Parameters:
// EJackCharacter                          CharacterType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGAccessorCommon_C::OnOpenTokugiPanelAtBattleResult(EJackCharacter CharacterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "OnOpenTokugiPanelAtBattleResult");

	Params::BP_UMGAccessorCommon_C_OnOpenTokugiPanelAtBattleResult Parms{};

	Parms.CharacterType = CharacterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.OnTutorialClose
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UMGAccessorCommon_C::OnTutorialClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "OnTutorialClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.SetCloseEventListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_Menu_Tutorial_C>EventListener                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UMGAccessorCommon_C::SetCloseEventListener(TScriptInterface<class IBP_IF_Menu_Tutorial_C> EventListener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "SetCloseEventListener");

	Params::BP_UMGAccessorCommon_C_SetCloseEventListener Parms{};

	Parms.EventListener = EventListener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGAccessorCommon.BP_UMGAccessorCommon_C.SetMainData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGAccessorCommon_C::SetMainData(class FName Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGAccessorCommon_C", "SetMainData");

	Params::BP_UMGAccessorCommon_C_SetMainData Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}

}
