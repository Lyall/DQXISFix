#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FacilityManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FacilityManager.BP_FacilityManager_C
// 0x0000 (0x0070 - 0x0070)
class UBP_FacilityManager_C final : public UJackFacilityManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FacilityManager_C">();
	}
	static class UBP_FacilityManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FacilityManager_C>();
	}
};
static_assert(alignof(UBP_FacilityManager_C) == 0x000008, "Wrong alignment on UBP_FacilityManager_C");
static_assert(sizeof(UBP_FacilityManager_C) == 0x000070, "Wrong size on UBP_FacilityManager_C");

}
