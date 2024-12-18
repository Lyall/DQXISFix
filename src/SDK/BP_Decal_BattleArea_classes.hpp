#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decal_BattleArea

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Decal_BattleArea.BP_Decal_BattleArea_C
// 0x0000 (0x03A0 - 0x03A0)
class ABP_Decal_BattleArea_C final : public ADecalActor
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Decal_BattleArea_C">();
	}
	static class ABP_Decal_BattleArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Decal_BattleArea_C>();
	}
};
static_assert(alignof(ABP_Decal_BattleArea_C) == 0x000008, "Wrong alignment on ABP_Decal_BattleArea_C");
static_assert(sizeof(ABP_Decal_BattleArea_C) == 0x0003A0, "Wrong size on ABP_Decal_BattleArea_C");

}

