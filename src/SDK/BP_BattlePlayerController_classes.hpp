#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattlePlayerController

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattlePlayerController.BP_BattlePlayerController_C
// 0x0000 (0x0CD0 - 0x0CD0)
class ABP_BattlePlayerController_C final : public AJackBattlePlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattlePlayerController_C">();
	}
	static class ABP_BattlePlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattlePlayerController_C>();
	}
};
static_assert(alignof(ABP_BattlePlayerController_C) == 0x000008, "Wrong alignment on ABP_BattlePlayerController_C");
static_assert(sizeof(ABP_BattlePlayerController_C) == 0x000CD0, "Wrong size on ABP_BattlePlayerController_C");

}

