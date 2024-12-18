#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIMapManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIMapManager.BP_UIMapManager_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_UIMapManager_C final : public UJackUIMapManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIMapManager_C">();
	}
	static class UBP_UIMapManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIMapManager_C>();
	}
};
static_assert(alignof(UBP_UIMapManager_C) == 0x000008, "Wrong alignment on UBP_UIMapManager_C");
static_assert(sizeof(UBP_UIMapManager_C) == 0x0000B8, "Wrong size on UBP_UIMapManager_C");

}

