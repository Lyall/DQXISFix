#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureBox_Battle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TreasureBoxBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TreasureBox_Battle.BP_TreasureBox_Battle_C
// 0x0008 (0x0F30 - 0x0F28)
class ABP_TreasureBox_Battle_C : public ABP_TreasureBoxBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F28(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_TreasureBox_Battle(int32 EntryPoint);
	void OnReceiveMessage_Event(const class FString& Message, class AActor* Sender);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureBox_Battle_C">();
	}
	static class ABP_TreasureBox_Battle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBox_Battle_C>();
	}
};
static_assert(alignof(ABP_TreasureBox_Battle_C) == 0x000008, "Wrong alignment on ABP_TreasureBox_Battle_C");
static_assert(sizeof(ABP_TreasureBox_Battle_C) == 0x000F30, "Wrong size on ABP_TreasureBox_Battle_C");
static_assert(offsetof(ABP_TreasureBox_Battle_C, UberGraphFrame) == 0x000F28, "Member 'ABP_TreasureBox_Battle_C::UberGraphFrame' has a wrong offset!");

}
