#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleFieldGenerator_BlockingVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleFieldGenerator_BlockingVolume.BP_BattleFieldGenerator_BlockingVolume_C
// 0x0010 (0x03F0 - 0x03E0)
class ABP_BattleFieldGenerator_BlockingVolume_C final : public AJackBattleFieldGenerator_BlockingVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 PreserveAreaClass;                                 // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BattleFieldGenerator_BlockingVolume(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetBlockingEnable(bool BlockingEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleFieldGenerator_BlockingVolume_C">();
	}
	static class ABP_BattleFieldGenerator_BlockingVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleFieldGenerator_BlockingVolume_C>();
	}
};
static_assert(alignof(ABP_BattleFieldGenerator_BlockingVolume_C) == 0x000008, "Wrong alignment on ABP_BattleFieldGenerator_BlockingVolume_C");
static_assert(sizeof(ABP_BattleFieldGenerator_BlockingVolume_C) == 0x0003F0, "Wrong size on ABP_BattleFieldGenerator_BlockingVolume_C");
static_assert(offsetof(ABP_BattleFieldGenerator_BlockingVolume_C, UberGraphFrame) == 0x0003E0, "Member 'ABP_BattleFieldGenerator_BlockingVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattleFieldGenerator_BlockingVolume_C, PreserveAreaClass) == 0x0003E8, "Member 'ABP_BattleFieldGenerator_BlockingVolume_C::PreserveAreaClass' has a wrong offset!");

}
