#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureBox_Battle

#include "Basic.hpp"

#include "BP_TreasureBox_Battle_classes.hpp"
#include "BP_TreasureBox_Battle_parameters.hpp"


namespace SDK
{

// Function BP_TreasureBox_Battle.BP_TreasureBox_Battle_C.ExecuteUbergraph_BP_TreasureBox_Battle
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBox_Battle_C::ExecuteUbergraph_BP_TreasureBox_Battle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Battle_C", "ExecuteUbergraph_BP_TreasureBox_Battle");

	Params::BP_TreasureBox_Battle_C_ExecuteUbergraph_BP_TreasureBox_Battle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBox_Battle.BP_TreasureBox_Battle_C.OnReceiveMessage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBox_Battle_C::OnReceiveMessage_Event(const class FString& Message, class AActor* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Battle_C", "OnReceiveMessage_Event");

	Params::BP_TreasureBox_Battle_C_OnReceiveMessage_Event Parms{};

	Parms.Message = std::move(Message);
	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBox_Battle.BP_TreasureBox_Battle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TreasureBox_Battle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Battle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBox_Battle.BP_TreasureBox_Battle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureBox_Battle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBox_Battle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
