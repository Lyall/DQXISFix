#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RopeWalk

#include "Basic.hpp"

#include "BP_XYMoveBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RopeWalk.BP_RopeWalk_C
// 0x0000 (0x0860 - 0x0860)
class ABP_RopeWalk_C final : public ABP_XYMoveBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RopeWalk_C">();
	}
	static class ABP_RopeWalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RopeWalk_C>();
	}
};
static_assert(alignof(ABP_RopeWalk_C) == 0x000008, "Wrong alignment on ABP_RopeWalk_C");
static_assert(sizeof(ABP_RopeWalk_C) == 0x000860, "Wrong size on ABP_RopeWalk_C");

}

