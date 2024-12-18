#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalizationManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LocalizationManager.BP_LocalizationManager_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_LocalizationManager_C final : public UJackLocalizationManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocalizationManager_C">();
	}
	static class UBP_LocalizationManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LocalizationManager_C>();
	}
};
static_assert(alignof(UBP_LocalizationManager_C) == 0x000008, "Wrong alignment on UBP_LocalizationManager_C");
static_assert(sizeof(UBP_LocalizationManager_C) == 0x0000A0, "Wrong size on UBP_LocalizationManager_C");

}

