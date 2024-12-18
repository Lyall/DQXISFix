#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugNpcSpawnAtPlayerPos

#include "Basic.hpp"

#include "BP_DebugNpcSpawnAtPlayerPos_classes.hpp"
#include "BP_DebugNpcSpawnAtPlayerPos_parameters.hpp"


namespace SDK
{

// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.ExecuteUbergraph_BP_DebugNpcSpawnAtPlayerPos
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::ExecuteUbergraph_BP_DebugNpcSpawnAtPlayerPos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "ExecuteUbergraph_BP_DebugNpcSpawnAtPlayerPos");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_ExecuteUbergraph_BP_DebugNpcSpawnAtPlayerPos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "ReceiveTick");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.SpawnNpcClassPlayerPos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::SpawnNpcClassPlayerPos(class UClass* Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "SpawnNpcClassPlayerPos");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_SpawnNpcClassPlayerPos Parms{};

	Parms.Class_0 = Class_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.OnLoaded_352392EB41DF982185180A9A5EDF2016
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::OnLoaded_352392EB41DF982185180A9A5EDF2016(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "OnLoaded_352392EB41DF982185180A9A5EDF2016");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_OnLoaded_352392EB41DF982185180A9A5EDF2016 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.InpActEvt_Add_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::InpActEvt_Add_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "InpActEvt_Add_K2Node_InputKeyEvent_2");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_InpActEvt_Add_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.OnLoaded_71EAC5FB4368E69B2B45BE93CB7F1A08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DebugNpcSpawnAtPlayerPos_C::OnLoaded_71EAC5FB4368E69B2B45BE93CB7F1A08(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "OnLoaded_71EAC5FB4368E69B2B45BE93CB7F1A08");

	Params::BP_DebugNpcSpawnAtPlayerPos_C_OnLoaded_71EAC5FB4368E69B2B45BE93CB7F1A08 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.OnEndNumberInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugNpcSpawnAtPlayerPos_C::OnEndNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "OnEndNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.OnStartNumberInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugNpcSpawnAtPlayerPos_C::OnStartNumberInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "OnStartNumberInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.OnEnter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugNpcSpawnAtPlayerPos_C::OnEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "OnEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DebugNpcSpawnAtPlayerPos.BP_DebugNpcSpawnAtPlayerPos_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugNpcSpawnAtPlayerPos_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DebugNpcSpawnAtPlayerPos_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

