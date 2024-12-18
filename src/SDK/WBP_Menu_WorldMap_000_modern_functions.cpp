#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_000_modern

#include "Basic.hpp"

#include "WBP_Menu_WorldMap_000_modern_classes.hpp"
#include "WBP_Menu_WorldMap_000_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.ExecuteUbergraph_WBP_Menu_WorldMap_000_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::ExecuteUbergraph_WBP_Menu_WorldMap_000_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "ExecuteUbergraph_WBP_Menu_WorldMap_000_modern");

	Params::WBP_Menu_WorldMap_000_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_000_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnEmptyPointerTargetsEvent
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::OnEmptyPointerTargetsEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnEmptyPointerTargetsEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.StickEventR
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::StickEventR(const struct FVector2D& Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "StickEventR");

	Params::WBP_Menu_WorldMap_000_modern_C_StickEventR Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdateWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::UpdateWidget(float DeltaTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdateWidget");

	Params::WBP_Menu_WorldMap_000_modern_C_UpdateWidget Parms{};

	Parms.DeltaTime_0 = DeltaTime_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.StickEventL
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::StickEventL(const struct FVector2D& Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "StickEventL");

	Params::WBP_Menu_WorldMap_000_modern_C_StickEventL Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnDetailedKeyEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// EJackKeys                               Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Released                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::OnDetailedKeyEvent(EJackKeys Key, bool Pressed, bool Released)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnDetailedKeyEvent");

	Params::WBP_Menu_WorldMap_000_modern_C_OnDetailedKeyEvent Parms{};

	Parms.Key = Key;
	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.AnimDelegate
// (BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::AnimDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "AnimDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnConstructWidget
// (Event, Protected, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::OnConstructWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnConstructWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_WorldMap_000_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "Tick");

	Params::WBP_Menu_WorldMap_000_modern_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.Open
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdateFloorSpinnerStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::UpdateFloorSpinnerStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdateFloorSpinnerStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OpenBoukenGuide
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::OpenBoukenGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OpenBoukenGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetMapBasePaper
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::SetMapBasePaper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetMapBasePaper");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetLocationName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::SetLocationName(const class FString& LocationName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetLocationName");

	Params::WBP_Menu_WorldMap_000_modern_C_SetLocationName Parms{};

	Parms.LocationName = std::move(LocationName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnKeyChangeFloor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::OnKeyChangeFloor(EJackKeys Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnKeyChangeFloor");

	Params::WBP_Menu_WorldMap_000_modern_C_OnKeyChangeFloor Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.ProcButtonHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Press                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Release                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::ProcButtonHold(EJackKeys Key, bool Press, bool Release)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "ProcButtonHold");

	Params::WBP_Menu_WorldMap_000_modern_C_ProcButtonHold Parms{};

	Parms.Key = Key;
	Parms.Press = Press;
	Parms.Release = Release;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.CalcMapUVWH
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     MapUVWH                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::CalcMapUVWH(struct FLinearColor* MapUVWH)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "CalcMapUVWH");

	Params::WBP_Menu_WorldMap_000_modern_C_CalcMapUVWH Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MapUVWH != nullptr)
		*MapUVWH = std::move(Parms.MapUVWH);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnKeyChangeZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWithButtonAnimation                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::OnKeyChangeZoom(bool bWithButtonAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnKeyChangeZoom");

	Params::WBP_Menu_WorldMap_000_modern_C_OnKeyChangeZoom Parms{};

	Parms.bWithButtonAnimation = bWithButtonAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdateZoomScrollMarker
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::UpdateZoomScrollMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdateZoomScrollMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetScrollMarkerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Marker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bScrollable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::SetScrollMarkerVisibility(class UUserWidget* Marker, bool bScrollable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetScrollMarkerVisibility");

	Params::WBP_Menu_WorldMap_000_modern_C_SetScrollMarkerVisibility Parms{};

	Parms.Marker = Marker;
	Parms.bScrollable = bScrollable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::Update(float DeltaTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "Update");

	Params::WBP_Menu_WorldMap_000_modern_C_Update Parms{};

	Parms.DeltaTime_0 = DeltaTime_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.BindStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLeftStick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bRightStick                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::BindStick(bool bLeftStick, bool bRightStick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "BindStick");

	Params::WBP_Menu_WorldMap_000_modern_C_BindStick Parms{};

	Parms.bLeftStick = bLeftStick;
	Parms.bRightStick = bRightStick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UnbindStick
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::UnbindStick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UnbindStick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OpenLocalMapMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::OpenLocalMapMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OpenLocalMapMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdateMapSymbolTypesToDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackWorldMapState                      State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::UpdateMapSymbolTypesToDisplay(EJackWorldMapState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdateMapSymbolTypesToDisplay");

	Params::WBP_Menu_WorldMap_000_modern_C_UpdateMapSymbolTypesToDisplay Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdatePointer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::UpdatePointer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdatePointer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnEmptyPointerTargets
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::OnEmptyPointerTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnEmptyPointerTargets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.GetEmptyPointer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Menu_WorldMap_Cursor_000_C*  PointerWBP                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::GetEmptyPointer(class UWBP_Menu_WorldMap_Cursor_000_C** PointerWBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "GetEmptyPointer");

	Params::WBP_Menu_WorldMap_000_modern_C_GetEmptyPointer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PointerWBP != nullptr)
		*PointerWBP = Parms.PointerWBP;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.GetTargettingPointer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UniqueNo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_WorldMap_Cursor_000_C*  PointerWBP                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::GetTargettingPointer(int32 UniqueNo, class UWBP_Menu_WorldMap_Cursor_000_C** PointerWBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "GetTargettingPointer");

	Params::WBP_Menu_WorldMap_000_modern_C_GetTargettingPointer Parms{};

	Parms.UniqueNo = UniqueNo;

	UObject::ProcessEvent(Func, &Parms);

	if (PointerWBP != nullptr)
		*PointerWBP = Parms.PointerWBP;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.DisplayFloorMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGMapFloorInfo*             FloorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::DisplayFloorMap(class UJackUMGMapFloorInfo* FloorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "DisplayFloorMap");

	Params::WBP_Menu_WorldMap_000_modern_C_DisplayFloorMap Parms{};

	Parms.FloorInfo = FloorInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.CloseRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::CloseRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "CloseRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.OnOpenRuraMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::OnOpenRuraMenu(bool bOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "OnOpenRuraMenu");

	Params::WBP_Menu_WorldMap_000_modern_C_OnOpenRuraMenu Parms{};

	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.CreateMID
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWBP_Menu_WorldMap_000_modern_C::CreateMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "CreateMID");

	Params::WBP_Menu_WorldMap_000_modern_C_CreateMID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.RequestToDisplayMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapVolumeID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::RequestToDisplayMap(class FName MapVolumeID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "RequestToDisplayMap");

	Params::WBP_Menu_WorldMap_000_modern_C_RequestToDisplayMap Parms{};

	Parms.MapVolumeID = MapVolumeID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.GetMapTextDrawCanvas
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCanvasPanel* UWBP_Menu_WorldMap_000_modern_C::GetMapTextDrawCanvas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "GetMapTextDrawCanvas");

	Params::WBP_Menu_WorldMap_000_modern_C_GetMapTextDrawCanvas Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.CreateMapSymbolMID
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWBP_Menu_WorldMap_000_modern_C::CreateMapSymbolMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "CreateMapSymbolMID");

	Params::WBP_Menu_WorldMap_000_modern_C_CreateMapSymbolMID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.MapSymbolVisibleChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::MapSymbolVisibleChanged(class UObject* Sender, bool bVisible, class UObject* Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "MapSymbolVisibleChanged");

	Params::WBP_Menu_WorldMap_000_modern_C_MapSymbolVisibleChanged Parms{};

	Parms.Sender = Sender;
	Parms.bVisible = bVisible;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.BindHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUnbind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::BindHandler(bool bUnbind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "BindHandler");

	Params::WBP_Menu_WorldMap_000_modern_C_BindHandler Parms{};

	Parms.bUnbind = bUnbind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.GetRenderTargetName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UWBP_Menu_WorldMap_000_modern_C::GetRenderTargetName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "GetRenderTargetName");

	Params::WBP_Menu_WorldMap_000_modern_C_GetRenderTargetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdateFloorChangeCaptionVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::UpdateFloorChangeCaptionVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdateFloorChangeCaptionVisible");

	Params::WBP_Menu_WorldMap_000_modern_C_UpdateFloorChangeCaptionVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.AsyncLoadFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequesterID_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::AsyncLoadFinished(int32 RequesterID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "AsyncLoadFinished");

	Params::WBP_Menu_WorldMap_000_modern_C_AsyncLoadFinished Parms{};

	Parms.RequesterID_0 = RequesterID_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetRequesterAndUpdateLocationTitle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequesterID_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGMapResourceRequester*     Requester                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::SetRequesterAndUpdateLocationTitle(int32 RequesterID_0, class UJackUMGMapResourceRequester** Requester)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetRequesterAndUpdateLocationTitle");

	Params::WBP_Menu_WorldMap_000_modern_C_SetRequesterAndUpdateLocationTitle Parms{};

	Parms.RequesterID_0 = RequesterID_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Requester != nullptr)
		*Requester = Parms.Requester;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetMapMaterialTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       MapOpenTexture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       MapMaskTexture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       JourneyTexture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_WorldMap_000_modern_C::SetMapMaterialTexture(class UTexture2D* MapOpenTexture, class UTexture2D* MapMaskTexture, class UTexture2D* JourneyTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetMapMaterialTexture");

	Params::WBP_Menu_WorldMap_000_modern_C_SetMapMaterialTexture Parms{};

	Parms.MapOpenTexture = MapOpenTexture;
	Parms.MapMaskTexture = MapMaskTexture;
	Parms.JourneyTexture = JourneyTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.KeyEventHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::KeyEventHandler(EJackKeys Key, bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "KeyEventHandler");

	Params::WBP_Menu_WorldMap_000_modern_C_KeyEventHandler Parms{};

	Parms.Key = Key;
	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.DisplayCurrentMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::DisplayCurrentMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "DisplayCurrentMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.UpdatePCMarkerColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::UpdatePCMarkerColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "UpdatePCMarkerColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.IsChangingFloorEnabled
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_WorldMap_000_modern_C::IsChangingFloorEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "IsChangingFloorEnabled");

	Params::WBP_Menu_WorldMap_000_modern_C_IsChangingFloorEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.SetupBoukenGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_WorldMap_000_modern_C::SetupBoukenGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "SetupBoukenGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C.IsPCMarkerVisible
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_Menu_WorldMap_000_modern_C::IsPCMarkerVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_WorldMap_000_modern_C", "IsPCMarkerVisible");

	Params::WBP_Menu_WorldMap_000_modern_C_IsPCMarkerVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

