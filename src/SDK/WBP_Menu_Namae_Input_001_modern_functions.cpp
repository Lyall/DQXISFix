#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Input_001_modern

#include "Basic.hpp"

#include "WBP_Menu_Namae_Input_001_modern_classes.hpp"
#include "WBP_Menu_Namae_Input_001_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.ExecuteUbergraph_WBP_Menu_Namae_Input_001_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::ExecuteUbergraph_WBP_Menu_Namae_Input_001_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "ExecuteUbergraph_WBP_Menu_Namae_Input_001_modern");

	Params::WBP_Menu_Namae_Input_001_modern_C_ExecuteUbergraph_WBP_Menu_Namae_Input_001_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Menu_Namae_Input_001_modern_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_Menu_Namae_Input_001_modern_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_Menu_Namae_Input_001_modern_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.ExecuteSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "ExecuteSaveDataCheck");

	Params::WBP_Menu_Namae_Input_001_modern_C_ExecuteSaveDataCheck Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.OnFinishSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackUMGSaveDataCheckResult             Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "OnFinishSaveDataCheck");

	Params::WBP_Menu_Namae_Input_001_modern_C_OnFinishSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJackUMGSerifuWindowController*   Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CurrentTextID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectDialogIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::CustomEvent_0(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Namae_Input_001_modern_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.CurrentTextID = CurrentTextID;
	Parms.SelectDialogIndex = SelectDialogIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.ExecuteSaveDataCheckResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_IF_SaveDataCheck_C>Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EJackSaveLoadResult                     CheckRusult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "ExecuteSaveDataCheckResult");

	Params::WBP_Menu_Namae_Input_001_modern_C_ExecuteSaveDataCheckResult Parms{};

	Parms.Sender = Sender;
	Parms.CheckPoint = CheckPoint;
	Parms.CheckRusult = CheckRusult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.OnDisplayMessageFromSaveDataCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackUMGSaveDataCheckPoint              CheckPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "OnDisplayMessageFromSaveDataCheck");

	Params::WBP_Menu_Namae_Input_001_modern_C_OnDisplayMessageFromSaveDataCheck Parms{};

	Parms.CheckPoint = CheckPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "Tick");

	Params::WBP_Menu_Namae_Input_001_modern_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.WidgetKeyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackKeys                               InKeyType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Namae_Input_001_modern_C::WidgetKeyEvent(EJackKeys InKeyType, bool bIsPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "WidgetKeyEvent");

	Params::WBP_Menu_Namae_Input_001_modern_C_WidgetKeyEvent Parms{};

	Parms.InKeyType = InKeyType;
	Parms.bIsPressed = bIsPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.WidgetBPActionDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::WidgetBPActionDelegate(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "WidgetBPActionDelegate");

	Params::WBP_Menu_Namae_Input_001_modern_C_WidgetBPActionDelegate Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Namae_Input_001_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "OnItemListControl");

	Params::WBP_Menu_Namae_Input_001_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.ClearName
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::ClearName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "ClearName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.CloseIme
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::CloseIme()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "CloseIme");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.OpenIme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsStopTick                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Namae_Input_001_modern_C::OpenIme(bool* IsStopTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "OpenIme");

	Params::WBP_Menu_Namae_Input_001_modern_C_OpenIme Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsStopTick != nullptr)
		*IsStopTick = Parms.IsStopTick;
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.SetAkarusaGamen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::SetAkarusaGamen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "SetAkarusaGamen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.DispName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::DispName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "DispName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.InvalidationButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::InvalidationButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "InvalidationButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Namae_Input_001_modern.WBP_Menu_Namae_Input_001_modern_C.SetTextBoxStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Namae_Input_001_modern_C::SetTextBoxStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Namae_Input_001_modern_C", "SetTextBoxStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}

