#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultBackPlayerViewData

#include "Basic.hpp"

#include "BP_DefaultPlayerViewCameraData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultBackPlayerViewData.BP_DefaultBackPlayerViewData_C
// 0x0000 (0x0358 - 0x0358)
class UBP_DefaultBackPlayerViewData_C final : public UBP_DefaultPlayerViewCameraData_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultBackPlayerViewData_C">();
	}
	static class UBP_DefaultBackPlayerViewData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DefaultBackPlayerViewData_C>();
	}
};
static_assert(alignof(UBP_DefaultBackPlayerViewData_C) == 0x000008, "Wrong alignment on UBP_DefaultBackPlayerViewData_C");
static_assert(sizeof(UBP_DefaultBackPlayerViewData_C) == 0x000358, "Wrong size on UBP_DefaultBackPlayerViewData_C");

}

