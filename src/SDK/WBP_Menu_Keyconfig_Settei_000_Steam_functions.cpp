#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Keyconfig_Settei_000_Steam

#include "Basic.hpp"

#include "WBP_Menu_Keyconfig_Settei_000_Steam_classes.hpp"
#include "WBP_Menu_Keyconfig_Settei_000_Steam_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ExecuteUbergraph_WBP_Menu_Keyconfig_Settei_000_Steam
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ExecuteUbergraph_WBP_Menu_Keyconfig_Settei_000_Steam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ExecuteUbergraph_WBP_Menu_Keyconfig_Settei_000_Steam");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_ExecuteUbergraph_WBP_Menu_Keyconfig_Settei_000_Steam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ChangedCancelYN
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGSerifuWindowController*   Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CurrentTextID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectDialogIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ChangedCancelYN(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ChangedCancelYN");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_ChangedCancelYN Parms{};

	Parms.Sender = Sender;
	Parms.CurrentTextID = CurrentTextID;
	Parms.SelectDialogIndex = SelectDialogIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.KeyEventDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::KeyEventDelegate(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "KeyEventDelegate");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_KeyEventDelegate Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::CustomEvent_1(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "CustomEvent_1");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_CustomEvent_1 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::CustomEvent(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "CustomEvent");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_CustomEvent Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        SlideTargetOrigin                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MaxSlideTargetSize                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MinSlideTargetSize                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetDebugTargetSize(bool bVisible, const struct FVector2D& SlideTargetOrigin, const struct FVector2D& MaxSlideTargetSize, const struct FVector2D& MinSlideTargetSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetDebugTargetSize");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetDebugTargetSize Parms{};

	Parms.bVisible = bVisible;
	Parms.SlideTargetOrigin = std::move(SlideTargetOrigin);
	Parms.MaxSlideTargetSize = std::move(MaxSlideTargetSize);
	Parms.MinSlideTargetSize = std::move(MinSlideTargetSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.HideDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::HideDebugTargetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "HideDebugTargetSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ShowDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ShowDebugTargetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ShowDebugTargetSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.HideDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::HideDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "HideDebugInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ShowDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ShowDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ShowDebugInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ResetCaptureCameraPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ResetCaptureCameraPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ResetCaptureCameraPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.InitText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::InitText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "InitText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetArray
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetCursorOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetCursorOffset(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetCursorOffset");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetCursorOffset Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.ReFocusWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInUp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::ReFocusWidget(bool IsInUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "ReFocusWidget");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_ReFocusWidget Parms{};

	Parms.IsInUp = IsInUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetIconTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetIconTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetGamePadButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   VisibleIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetGamePadButtonVisible(int32 VisibleIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetGamePadButtonVisible");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetGamePadButtonVisible Parms{};

	Parms.VisibleIndex = VisibleIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.PageChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::PageChange(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "PageChange");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_PageChange Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetKeyListColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetKeyListColor(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetKeyListColor");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetKeyListColor Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetSelectedTextureAndCaption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetSelectedTextureAndCaption(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetSelectedTextureAndCaption");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetSelectedTextureAndCaption Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.UpdateItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::UpdateItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "UpdateItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.SetFocusColor000
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::SetFocusColor000(bool IsFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "SetFocusColor000");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_SetFocusColor000 Parms{};

	Parms.IsFocus = IsFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Keyconfig_Settei_000_Steam.WBP_Menu_Keyconfig_Settei_000_Steam_C.IsNoChangedKeyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoChanges                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Keyconfig_Settei_000_Steam_C::IsNoChangedKeyList(bool* NoChanges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Keyconfig_Settei_000_Steam_C", "IsNoChangedKeyList");

	Params::WBP_Menu_Keyconfig_Settei_000_Steam_C_IsNoChangedKeyList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoChanges != nullptr)
		*NoChanges = Parms.NoChanges;
}

}
