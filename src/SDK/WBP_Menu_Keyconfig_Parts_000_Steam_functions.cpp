#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Keyconfig_Parts_000_Steam

#include "Basic.hpp"

#include "WBP_Menu_Keyconfig_Parts_000_Steam_classes.hpp"
#include "WBP_Menu_Keyconfig_Parts_000_Steam_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.ExecuteUbergraph_WBP_Menu_Keyconfig_Parts_000_Steam
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::ExecuteUbergraph_WBP_Menu_Keyconfig_Parts_000_Steam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "ExecuteUbergraph_WBP_Menu_Keyconfig_Parts_000_Steam");

	Params::WBP_Menu_Keyconfig_Parts_000_Steam_C_ExecuteUbergraph_WBP_Menu_Keyconfig_Parts_000_Steam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.UpdateContainerDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackUMGItemContainer            ItemContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "UpdateContainerDelegate");

	Params::WBP_Menu_Keyconfig_Parts_000_Steam_C_UpdateContainerDelegate Parms{};

	Parms.ItemContainer = std::move(ItemContainer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.SetKeyListColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::SetKeyListColor(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "SetKeyListColor");

	Params::WBP_Menu_Keyconfig_Parts_000_Steam_C_SetKeyListColor Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.SetTextureAndCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::SetTextureAndCaption(class UTexture2D* InTexture, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "SetTextureAndCaption");

	Params::WBP_Menu_Keyconfig_Parts_000_Steam_C_SetTextureAndCaption Parms{};

	Parms.InTexture = InTexture;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.SetButtonTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::SetButtonTexture(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "SetButtonTexture");

	Params::WBP_Menu_Keyconfig_Parts_000_Steam_C_SetButtonTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Parts_000_Steam.WBP_Menu_Keyconfig_Parts_000_Steam_C.SetLoopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Parts_000_Steam_C::SetLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Parts_000_Steam_C", "SetLoopAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

