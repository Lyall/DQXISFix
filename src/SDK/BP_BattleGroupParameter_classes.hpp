#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleGroupParameter

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleGroupParameter.BP_BattleGroupParameter_C
// 0x0000 (0x01D8 - 0x01D8)
class UBP_BattleGroupParameter_C final : public UJackBattleGroupParameter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleGroupParameter_C">();
	}
	static class UBP_BattleGroupParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleGroupParameter_C>();
	}
};
static_assert(alignof(UBP_BattleGroupParameter_C) == 0x000008, "Wrong alignment on UBP_BattleGroupParameter_C");
static_assert(sizeof(UBP_BattleGroupParameter_C) == 0x0001D8, "Wrong size on UBP_BattleGroupParameter_C");

}
