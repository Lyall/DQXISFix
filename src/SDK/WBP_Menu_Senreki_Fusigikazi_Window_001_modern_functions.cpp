#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Senreki_Fusigikazi_Window_001_modern

#include "Basic.hpp"

#include "WBP_Menu_Senreki_Fusigikazi_Window_001_modern_classes.hpp"
#include "WBP_Menu_Senreki_Fusigikazi_Window_001_modern_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.ExecuteUbergraph_WBP_Menu_Senreki_Fusigikazi_Window_001_modern
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::ExecuteUbergraph_WBP_Menu_Senreki_Fusigikazi_Window_001_modern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "ExecuteUbergraph_WBP_Menu_Senreki_Fusigikazi_Window_001_modern");

	Params::WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C_ExecuteUbergraph_WBP_Menu_Senreki_Fusigikazi_Window_001_modern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.OnItemListControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJackUMGItemBase*                 InItemBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "OnItemListControl");

	Params::WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C_OnItemListControl Parms{};

	Parms.EventName = EventName;
	Parms.InItemBase = InItemBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::CustomEvent_0(class FName EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "CustomEvent_0");

	Params::WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C_CustomEvent_0 Parms{};

	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SelectCategoryList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     CategoryList_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SelectCategoryList(class UCanvasPanel** CategoryList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SelectCategoryList");

	Params::WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C_SelectCategoryList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryList_0 != nullptr)
		*CategoryList_0 = Parms.CategoryList_0;
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SetCategoryNumber
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SetCategoryNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SetCategoryNumber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SetTextToClassification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SetTextToClassification(class FName InTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SetTextToClassification");

	Params::WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C_SetTextToClassification Parms{};

	Parms.InTextId = InTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SetTextColorBuki
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SetTextColorBuki()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SetTextColorBuki");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SetTextColorBougu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SetTextColorBougu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SetTextColorBougu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Menu_Senreki_Fusigikazi_Window_001_modern.WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C.SetTextColorAccessory
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Menu_Senreki_Fusigikazi_Window_001_modern_C::SetTextColorAccessory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Senreki_Fusigikazi_Window_001_modern_C", "SetTextColorAccessory");

	UObject::ProcessEvent(Func, nullptr);
}

}
