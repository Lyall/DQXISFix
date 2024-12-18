#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleMemberChange

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleMemberChange.BP_BattleMemberChange_C
// 0x0008 (0x04C8 - 0x04C0)
class ABP_BattleMemberChange_C final : public AJackBattleMemberChange
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMemberChange_C">();
	}
	static class ABP_BattleMemberChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMemberChange_C>();
	}
};
static_assert(alignof(ABP_BattleMemberChange_C) == 0x000008, "Wrong alignment on ABP_BattleMemberChange_C");
static_assert(sizeof(ABP_BattleMemberChange_C) == 0x0004C8, "Wrong size on ABP_BattleMemberChange_C");
static_assert(offsetof(ABP_BattleMemberChange_C, DefaultSceneRoot) == 0x0004C0, "Member 'ABP_BattleMemberChange_C::DefaultSceneRoot' has a wrong offset!");

}

