#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavArea_Base

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NavArea_Base.BP_NavArea_Base_C
// 0x0000 (0x0050 - 0x0050)
class UBP_NavArea_Base_C : public UJackNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NavArea_Base_C">();
	}
	static class UBP_NavArea_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NavArea_Base_C>();
	}
};
static_assert(alignof(UBP_NavArea_Base_C) == 0x000008, "Wrong alignment on UBP_NavArea_Base_C");
static_assert(sizeof(UBP_NavArea_Base_C) == 0x000050, "Wrong size on UBP_NavArea_Base_C");

}
