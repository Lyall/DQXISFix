#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleFieldWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleFieldWall.BP_BattleFieldWall_C
// 0x0018 (0x03B0 - 0x0398)
class ABP_BattleFieldWall_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class UJackNavModifierComponent*              JackNavModifier;                                   // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BattleFieldWall(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleFieldWall_C">();
	}
	static class ABP_BattleFieldWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleFieldWall_C>();
	}
};
static_assert(alignof(ABP_BattleFieldWall_C) == 0x000008, "Wrong alignment on ABP_BattleFieldWall_C");
static_assert(sizeof(ABP_BattleFieldWall_C) == 0x0003B0, "Wrong size on ABP_BattleFieldWall_C");
static_assert(offsetof(ABP_BattleFieldWall_C, UberGraphFrame) == 0x000398, "Member 'ABP_BattleFieldWall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattleFieldWall_C, JackNavModifier) == 0x0003A0, "Member 'ABP_BattleFieldWall_C::JackNavModifier' has a wrong offset!");
static_assert(offsetof(ABP_BattleFieldWall_C, Cube) == 0x0003A8, "Member 'ABP_BattleFieldWall_C::Cube' has a wrong offset!");

}
