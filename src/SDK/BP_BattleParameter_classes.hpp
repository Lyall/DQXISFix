#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleParameter

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleParameter.BP_BattleParameter_C
// 0x0000 (0x06B0 - 0x06B0)
class UBP_BattleParameter_C final : public UJackBattleParameter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleParameter_C">();
	}
	static class UBP_BattleParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleParameter_C>();
	}
};
static_assert(alignof(UBP_BattleParameter_C) == 0x000008, "Wrong alignment on UBP_BattleParameter_C");
static_assert(sizeof(UBP_BattleParameter_C) == 0x0006B0, "Wrong size on UBP_BattleParameter_C");

}
