#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_ActionCursor_Arrow_001

#include "Basic.hpp"

#include "WBP_Hud_ActionCursor_Arrow_001_classes.hpp"
#include "WBP_Hud_ActionCursor_Arrow_001_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_ActionCursor_Arrow_001_C::ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_ActionCursor_Arrow_001_C", "ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001");

	Params::WBP_Hud_ActionCursor_Arrow_001_C_ExecuteUbergraph_WBP_Hud_ActionCursor_Arrow_001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hud_ActionCursor_Arrow_001_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_ActionCursor_Arrow_001_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_ActionCursor_Arrow_001_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_ActionCursor_Arrow_001_C", "OnAnimationFinished");

	Params::WBP_Hud_ActionCursor_Arrow_001_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMG3DWidgetData*             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_ActionCursor_Arrow_001_C::UpdateData(class UJackUMG3DWidgetData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_ActionCursor_Arrow_001_C", "UpdateData");

	Params::WBP_Hud_ActionCursor_Arrow_001_C_UpdateData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_ActionCursor_Arrow_001.WBP_Hud_ActionCursor_Arrow_001_C.UpdateIconData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMG3DWidgetData*             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_ActionCursor_Arrow_001_C::UpdateIconData(class UJackUMG3DWidgetData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_ActionCursor_Arrow_001_C", "UpdateIconData");

	Params::WBP_Hud_ActionCursor_Arrow_001_C_UpdateIconData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

