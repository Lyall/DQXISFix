#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleResultParameter

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleResultParameter.BP_BattleResultParameter_C
// 0x0000 (0x0070 - 0x0070)
class UBP_BattleResultParameter_C final : public UJackBattleResultParameter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleResultParameter_C">();
	}
	static class UBP_BattleResultParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleResultParameter_C>();
	}
};
static_assert(alignof(UBP_BattleResultParameter_C) == 0x000008, "Wrong alignment on UBP_BattleResultParameter_C");
static_assert(sizeof(UBP_BattleResultParameter_C) == 0x000070, "Wrong size on UBP_BattleResultParameter_C");

}
