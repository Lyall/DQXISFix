#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI3d_Kazi_Material

#include "Basic.hpp"

#include "WBP_UI3d_Kazi_Material_classes.hpp"
#include "WBP_UI3d_Kazi_Material_parameters.hpp"


namespace SDK
{

// Function WBP_UI3d_Kazi_Material.WBP_UI3d_Kazi_Material_C.ExecuteUbergraph_WBP_UI3d_Kazi_Material
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI3d_Kazi_Material_C::ExecuteUbergraph_WBP_UI3d_Kazi_Material(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI3d_Kazi_Material_C", "ExecuteUbergraph_WBP_UI3d_Kazi_Material");

	Params::WBP_UI3d_Kazi_Material_C_ExecuteUbergraph_WBP_UI3d_Kazi_Material Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI3d_Kazi_Material.WBP_UI3d_Kazi_Material_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI3d_Kazi_Material_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI3d_Kazi_Material_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI3d_Kazi_Material.WBP_UI3d_Kazi_Material_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMG3DWidgetData*             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI3d_Kazi_Material_C::SetData(class UJackUMG3DWidgetData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI3d_Kazi_Material_C", "SetData");

	Params::WBP_UI3d_Kazi_Material_C_SetData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

