#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UMGMapController

#include "Basic.hpp"

#include "BP_UMGMapController_classes.hpp"
#include "BP_UMGMapController_parameters.hpp"


namespace SDK
{

// Function BP_UMGMapController.BP_UMGMapController_C.ExecuteUbergraph_BP_UMGMapController
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGMapController_C::ExecuteUbergraph_BP_UMGMapController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "ExecuteUbergraph_BP_UMGMapController");

	Params::BP_UMGMapController_C_ExecuteUbergraph_BP_UMGMapController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGMapController.BP_UMGMapController_C.OnEmptyPointerTargets
// (Event, Public, BlueprintEvent)

void UBP_UMGMapController_C::OnEmptyPointerTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "OnEmptyPointerTargets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UMGMapController.BP_UMGMapController_C.OnUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAssetLoadingNow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UMGMapController_C::OnUpdate(float DeltaTime, bool bAssetLoadingNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "OnUpdate");

	Params::BP_UMGMapController_C_OnUpdate Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.bAssetLoadingNow = bAssetLoadingNow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UMGMapController.BP_UMGMapController_C.GetMapSymbolType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackMapSymbol                          MapSymbol                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGMapController_C::GetMapSymbolType(class AActor* NPC, EJackMapSymbol* MapSymbol)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "GetMapSymbolType");

	Params::BP_UMGMapController_C_GetMapSymbolType Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

	if (MapSymbol != nullptr)
		*MapSymbol = Parms.MapSymbol;
}


// Function BP_UMGMapController.BP_UMGMapController_C.GetMapSymbolByShopComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_COMP_Shop_C*                  ShopComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackMapSymbol                          MapSymbol                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGMapController_C::GetMapSymbolByShopComponent(class UBP_COMP_Shop_C* ShopComponent, EJackMapSymbol* MapSymbol)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "GetMapSymbolByShopComponent");

	Params::BP_UMGMapController_C_GetMapSymbolByShopComponent Parms{};

	Parms.ShopComponent = ShopComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (MapSymbol != nullptr)
		*MapSymbol = Parms.MapSymbol;
}


// Function BP_UMGMapController.BP_UMGMapController_C.GetMapSymbolByFacilityComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_COMP_FacilityBase_C*          FacilityComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackMapSymbol                          MapSymbol                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UMGMapController_C::GetMapSymbolByFacilityComponent(class UBP_COMP_FacilityBase_C* FacilityComponent, EJackMapSymbol* MapSymbol)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "GetMapSymbolByFacilityComponent");

	Params::BP_UMGMapController_C_GetMapSymbolByFacilityComponent Parms{};

	Parms.FacilityComponent = FacilityComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (MapSymbol != nullptr)
		*MapSymbol = Parms.MapSymbol;
}


// Function BP_UMGMapController.BP_UMGMapController_C.DetermineMapSymbolVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackMiniMapTargetComponent*      Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UMGMapController_C::DetermineMapSymbolVisible(class UJackMiniMapTargetComponent* Component, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "DetermineMapSymbolVisible");

	Params::BP_UMGMapController_C_DetermineMapSymbolVisible Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function BP_UMGMapController.BP_UMGMapController_C.IsMapTextImageItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_UMGMapController_C::IsMapTextImageItem(class UWidget* Widget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "IsMapTextImageItem");

	Params::BP_UMGMapController_C_IsMapTextImageItem Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UMGMapController.BP_UMGMapController_C.GetMapSymbolTypeListForMapMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EJackWorldMapState                      WorldMapState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EJackMapSymbol>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EJackMapSymbol> UBP_UMGMapController_C::GetMapSymbolTypeListForMapMode(EJackWorldMapState WorldMapState) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "GetMapSymbolTypeListForMapMode");

	Params::BP_UMGMapController_C_GetMapSymbolTypeListForMapMode Parms{};

	Parms.WorldMapState = WorldMapState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UMGMapController.BP_UMGMapController_C.IsBoukenGuideVisibilityToggleEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_UMGMapController_C::IsBoukenGuideVisibilityToggleEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "IsBoukenGuideVisibilityToggleEnabled");

	Params::BP_UMGMapController_C_IsBoukenGuideVisibilityToggleEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UMGMapController.BP_UMGMapController_C.IsMapSymbolVisibilityToggleEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_UMGMapController_C::IsMapSymbolVisibilityToggleEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "IsMapSymbolVisibilityToggleEnabled");

	Params::BP_UMGMapController_C_IsMapSymbolVisibilityToggleEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UMGMapController.BP_UMGMapController_C.IsShipAvailable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_UMGMapController_C::IsShipAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UMGMapController_C", "IsShipAvailable");

	Params::BP_UMGMapController_C_IsShipAvailable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
