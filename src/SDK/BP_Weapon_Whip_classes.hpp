#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_Whip

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Weapon_Whip.BP_Weapon_Whip_C
// 0x0000 (0x0408 - 0x0408)
class ABP_Weapon_Whip_C final : public AJackWeaponSK
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Weapon_Whip_C">();
	}
	static class ABP_Weapon_Whip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Weapon_Whip_C>();
	}
};
static_assert(alignof(ABP_Weapon_Whip_C) == 0x000008, "Wrong alignment on ABP_Weapon_Whip_C");
static_assert(sizeof(ABP_Weapon_Whip_C) == 0x000408, "Wrong size on ABP_Weapon_Whip_C");

}

