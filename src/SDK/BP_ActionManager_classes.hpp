#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionManager.BP_ActionManager_C
// 0x0008 (0x0450 - 0x0448)
class ABP_ActionManager_C final : public AJackActionManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionManager_C">();
	}
	static class ABP_ActionManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActionManager_C>();
	}
};
static_assert(alignof(ABP_ActionManager_C) == 0x000008, "Wrong alignment on ABP_ActionManager_C");
static_assert(sizeof(ABP_ActionManager_C) == 0x000450, "Wrong size on ABP_ActionManager_C");
static_assert(offsetof(ABP_ActionManager_C, DefaultSceneRoot) == 0x000448, "Member 'ABP_ActionManager_C::DefaultSceneRoot' has a wrong offset!");

}
