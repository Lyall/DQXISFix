#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeChangePost_Indoor

#include "Basic.hpp"

#include "BP_TimeChangePost_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeChangePost_Indoor.BP_TimeChangePost_Indoor_C
// 0x0000 (0x0770 - 0x0770)
class ABP_TimeChangePost_Indoor_C final : public ABP_TimeChangePost_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeChangePost_Indoor_C">();
	}
	static class ABP_TimeChangePost_Indoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TimeChangePost_Indoor_C>();
	}
};
static_assert(alignof(ABP_TimeChangePost_Indoor_C) == 0x000010, "Wrong alignment on ABP_TimeChangePost_Indoor_C");
static_assert(sizeof(ABP_TimeChangePost_Indoor_C) == 0x000770, "Wrong size on ABP_TimeChangePost_Indoor_C");

}
