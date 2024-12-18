#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_List_005_modern

#include "Basic.hpp"

#include "WBP_Menu_Tuyosa_List_005_modern_classes.hpp"
#include "WBP_Menu_Tuyosa_List_005_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Tuyosa_List_005_modern.WBP_Menu_Tuyosa_List_005_modern_C.ExecuteUbergraph_WBP_Menu_Tuyosa_List_005_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tuyosa_List_005_modern_C::ExecuteUbergraph_WBP_Menu_Tuyosa_List_005_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tuyosa_List_005_modern_C", "ExecuteUbergraph_WBP_Menu_Tuyosa_List_005_modern");

	Params::WBP_Menu_Tuyosa_List_005_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_005_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tuyosa_List_005_modern.WBP_Menu_Tuyosa_List_005_modern_C.MovePositionWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          StartWidget                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OffsetY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tuyosa_List_005_modern_C::MovePositionWidget(const class UWidget*& StartWidget, float OffsetY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tuyosa_List_005_modern_C", "MovePositionWidget");

	Params::WBP_Menu_Tuyosa_List_005_modern_C_MovePositionWidget Parms{};

	Parms.StartWidget = StartWidget;
	Parms.OffsetY = OffsetY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Tuyosa_List_005_modern.WBP_Menu_Tuyosa_List_005_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Tuyosa_List_005_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tuyosa_List_005_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Tuyosa_List_005_modern.WBP_Menu_Tuyosa_List_005_modern_C.MovePositionWidgetIfNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          StartWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OffsetY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Tuyosa_List_005_modern_C::MovePositionWidgetIfNeeded(bool Condition, class UWidget*& StartWidget, float OffsetY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Tuyosa_List_005_modern_C", "MovePositionWidgetIfNeeded");

	Params::WBP_Menu_Tuyosa_List_005_modern_C_MovePositionWidgetIfNeeded Parms{};

	Parms.Condition = Condition;
	Parms.StartWidget = StartWidget;
	Parms.OffsetY = OffsetY;

	UObject::ProcessEvent(Func, &Parms);

	StartWidget = Parms.StartWidget;
}

}

