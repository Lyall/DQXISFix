#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_N014

#include "Basic.hpp"

#include "ABP_NPC_Base_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NPC_N014.ABP_NPC_N014_C
// 0x0000 (0x37140 - 0x37140)
class UABP_NPC_N014_C final : public UABP_NPC_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_N014_C">();
	}
	static class UABP_NPC_N014_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_N014_C>();
	}
};
static_assert(alignof(UABP_NPC_N014_C) == 0x000010, "Wrong alignment on UABP_NPC_N014_C");
static_assert(sizeof(UABP_NPC_N014_C) == 0x037140, "Wrong size on UABP_NPC_N014_C");

}
