#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_Renkei

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IF_Renkei.BP_IF_Renkei_C
// 0x0000 (0x0038 - 0x0038)
class IBP_IF_Renkei_C final : public IInterface
{
public:
	void RenkeiStart();
	void RenkeiEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IF_Renkei_C">();
	}
	static class IBP_IF_Renkei_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_IF_Renkei_C>();
	}
};
static_assert(alignof(IBP_IF_Renkei_C) == 0x000008, "Wrong alignment on IBP_IF_Renkei_C");
static_assert(sizeof(IBP_IF_Renkei_C) == 0x000038, "Wrong size on IBP_IF_Renkei_C");

}

