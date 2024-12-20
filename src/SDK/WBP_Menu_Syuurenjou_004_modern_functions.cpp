#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Syuurenjou_004_modern

#include "Basic.hpp"

#include "WBP_Menu_Syuurenjou_004_modern_classes.hpp"
#include "WBP_Menu_Syuurenjou_004_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Syuurenjou_004_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Syuurenjou_004_modern_C::ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern");

	Params::WBP_Menu_Syuurenjou_004_modern_C_ExecuteUbergraph_WBP_Menu_Syuurenjou_004_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.OnInFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Syuurenjou_004_modern_C::OnInFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "OnInFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.PlayCheckInAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Syuurenjou_004_modern_C::PlayCheckInAnim(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "PlayCheckInAnim");

	Params::WBP_Menu_Syuurenjou_004_modern_C_PlayCheckInAnim Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGSyuurenjouItemData*       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Syuurenjou_004_modern_C::SetData(class UJackUMGSyuurenjouItemData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "SetData");

	Params::WBP_Menu_Syuurenjou_004_modern_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.SetSyuurenjouData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackDataTableSyuurenjou         Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Menu_Syuurenjou_004_modern_C::SetSyuurenjouData(const struct FJackDataTableSyuurenjou& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "SetSyuurenjouData");

	Params::WBP_Menu_Syuurenjou_004_modern_C_SetSyuurenjouData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Syuurenjou_004_modern.WBP_Menu_Syuurenjou_004_modern_C.ShowCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Syuurenjou_004_modern_C::ShowCheck(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Syuurenjou_004_modern_C", "ShowCheck");

	Params::WBP_Menu_Syuurenjou_004_modern_C_ShowCheck Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

