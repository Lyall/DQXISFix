#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_TokugiPanel_TouchPad

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IF_TokugiPanel_TouchPad.BP_IF_TokugiPanel_TouchPad_C
// 0x0000 (0x0038 - 0x0038)
class IBP_IF_TokugiPanel_TouchPad_C final : public IInterface
{
public:
	void BindTouchpadEvent();
	void UnbindTouchpadEvent();
	void ResetContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IF_TokugiPanel_TouchPad_C">();
	}
	static class IBP_IF_TokugiPanel_TouchPad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_IF_TokugiPanel_TouchPad_C>();
	}
};
static_assert(alignof(IBP_IF_TokugiPanel_TouchPad_C) == 0x000008, "Wrong alignment on IBP_IF_TokugiPanel_TouchPad_C");
static_assert(sizeof(IBP_IF_TokugiPanel_TouchPad_C) == 0x000038, "Wrong size on IBP_IF_TokugiPanel_TouchPad_C");

}
