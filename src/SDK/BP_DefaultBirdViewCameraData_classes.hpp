#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultBirdViewCameraData

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultBirdViewCameraData.BP_DefaultBirdViewCameraData_C
// 0x0000 (0x0358 - 0x0358)
class UBP_DefaultBirdViewCameraData_C final : public UJackPlayerCameraData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultBirdViewCameraData_C">();
	}
	static class UBP_DefaultBirdViewCameraData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DefaultBirdViewCameraData_C>();
	}
};
static_assert(alignof(UBP_DefaultBirdViewCameraData_C) == 0x000008, "Wrong alignment on UBP_DefaultBirdViewCameraData_C");
static_assert(sizeof(UBP_DefaultBirdViewCameraData_C) == 0x000358, "Wrong size on UBP_DefaultBirdViewCameraData_C");

}
