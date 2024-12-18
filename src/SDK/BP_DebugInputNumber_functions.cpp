#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugInputNumber

#include "Basic.hpp"

#include "BP_DebugInputNumber_classes.hpp"
#include "BP_DebugInputNumber_parameters.hpp"


namespace SDK
{

// Function BP_DebugInputNumber.BP_DebugInputNumber_C.ChangeNumberLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::ChangeNumberLimit(int32 NewLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "ChangeNumberLimit");

	Params::BP_DebugInputNumber_C_ChangeNumberLimit Parms{};

	Parms.NewLimit = NewLimit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.EndNumberInput
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::EndNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "EndNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.ExecuteUbergraph_BP_DebugInputNumber
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::ExecuteUbergraph_BP_DebugInputNumber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "ExecuteUbergraph_BP_DebugInputNumber");

	Params::BP_DebugInputNumber_C_ExecuteUbergraph_BP_DebugInputNumber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_23");

	Params::BP_DebugInputNumber_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_23 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_Enter_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_Enter_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_Enter_K2Node_InputKeyEvent_25");

	Params::BP_DebugInputNumber_C_InpActEvt_Enter_K2Node_InputKeyEvent_25 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadEight_K2Node_InputKeyEvent_20");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_20 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadFive_K2Node_InputKeyEvent_17");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_17 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadFour_K2Node_InputKeyEvent_16");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_16 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadNine_K2Node_InputKeyEvent_21");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_21 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_14");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_14 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadSeven_K2Node_InputKeyEvent_19");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_19 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadSix_K2Node_InputKeyEvent_18");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_18 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadThree_K2Node_InputKeyEvent_15");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_15 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadTwo_K2Node_InputKeyEvent_22");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_22 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_NumPadZero_K2Node_InputKeyEvent_13");

	Params::BP_DebugInputNumber_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_13 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InpActEvt_Subtract_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InpActEvt_Subtract_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InpActEvt_Subtract_K2Node_InputKeyEvent_24");

	Params::BP_DebugInputNumber_C_InpActEvt_Subtract_K2Node_InputKeyEvent_24 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.InputNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugInputNumber_C::InputNumber(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "InputNumber");

	Params::BP_DebugInputNumber_C_InputNumber Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.NumberCharacterLimit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::NumberCharacterLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "NumberCharacterLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.OnEndNumberInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::OnEndNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "OnEndNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.OnEnter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::OnEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "OnEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.OnStartNumberInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::OnStartNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "OnStartNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.StartNumberInput
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::StartNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "StartNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugInputNumber.BP_DebugInputNumber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugInputNumber_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugInputNumber_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

