#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BCAI_Friend

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BCAI_Friend.BP_BCAI_Friend_C
// 0x0010 (0x04A8 - 0x0498)
class ABP_BCAI_Friend_C final : public AJackBattleCommandAI_Friend
{
public:
	class UBP_COMP_BCAI_Friend_C*                 BP_COMP_BCAI_Friend;                               // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	struct FJackBattleCommandAI_ExecTurnCommandResult ExecTurnCommand();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BCAI_Friend_C">();
	}
	static class ABP_BCAI_Friend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BCAI_Friend_C>();
	}
};
static_assert(alignof(ABP_BCAI_Friend_C) == 0x000008, "Wrong alignment on ABP_BCAI_Friend_C");
static_assert(sizeof(ABP_BCAI_Friend_C) == 0x0004A8, "Wrong size on ABP_BCAI_Friend_C");
static_assert(offsetof(ABP_BCAI_Friend_C, BP_COMP_BCAI_Friend) == 0x000498, "Member 'ABP_BCAI_Friend_C::BP_COMP_BCAI_Friend' has a wrong offset!");
static_assert(offsetof(ABP_BCAI_Friend_C, DefaultSceneRoot) == 0x0004A0, "Member 'ABP_BCAI_Friend_C::DefaultSceneRoot' has a wrong offset!");

}
