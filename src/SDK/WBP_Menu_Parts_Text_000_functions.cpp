#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_Text_000

#include "Basic.hpp"

#include "WBP_Menu_Parts_Text_000_classes.hpp"
#include "WBP_Menu_Parts_Text_000_parameters.hpp"


namespace SDK
{

// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetValueAscii
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetValueAscii(int32 InValue, int32 InFig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetValueAscii");

	Params::WBP_Menu_Parts_Text_000_C_SetValueAscii Parms{};

	Parms.InValue = InValue;
	Parms.InFig = InFig;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetTextId(class FName InTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetTextId");

	Params::WBP_Menu_Parts_Text_000_C_SetTextId Parms{};

	Parms.InTextId = InTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetString");

	Params::WBP_Menu_Parts_Text_000_C_SetString Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetTxet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SetText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Menu_Parts_Text_000_C::SetTxet(const class FText& SetText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetTxet");

	Params::WBP_Menu_Parts_Text_000_C_SetTxet Parms{};

	Parms.SetText = std::move(SetText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetValue2Byte
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetValue2Byte(int32 InValue, int32 InFig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetValue2Byte");

	Params::WBP_Menu_Parts_Text_000_C_SetValue2Byte Parms{};

	Parms.InValue = InValue;
	Parms.InFig = InFig;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is2Byte                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsSign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Menu_Parts_Text_000_C::SetValue(int32 InValue, int32 InFig, bool Is2Byte, bool IsSign)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetValue");

	Params::WBP_Menu_Parts_Text_000_C_SetValue Parms{};

	Parms.InValue = InValue;
	Parms.InFig = InFig;
	Parms.Is2Byte = Is2Byte;
	Parms.IsSign = IsSign;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetValueFloat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             InUnitTextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetValueFloat(float InValue, bool IsSign, class FName InUnitTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetValueFloat");

	Params::WBP_Menu_Parts_Text_000_C_SetValueFloat Parms{};

	Parms.InValue = InValue;
	Parms.IsSign = IsSign;
	Parms.InUnitTextId = InUnitTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Menu_Parts_Text_000.WBP_Menu_Parts_Text_000_C.SetValueWithUnit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSign                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             InUnitTextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Parts_Text_000_C::SetValueWithUnit(int32 InValue, int32 InFig, bool IsSign, class FName InUnitTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Menu_Parts_Text_000_C", "SetValueWithUnit");

	Params::WBP_Menu_Parts_Text_000_C_SetValueWithUnit Parms{};

	Parms.InValue = InValue;
	Parms.InFig = InFig;
	Parms.IsSign = IsSign;
	Parms.InUnitTextId = InUnitTextId;

	UObject::ProcessEvent(Func, &Parms);
}

}
