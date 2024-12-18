#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_G031_E001_2

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_G031_E001_2.BP_G031_E001_2_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_G031_E001_2_C final : public AJackPropActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_G031_E001_2_C">();
	}
	static class ABP_G031_E001_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_G031_E001_2_C>();
	}
};
static_assert(alignof(ABP_G031_E001_2_C) == 0x000008, "Wrong alignment on ABP_G031_E001_2_C");
static_assert(sizeof(ABP_G031_E001_2_C) == 0x0003B8, "Wrong size on ABP_G031_E001_2_C");
static_assert(offsetof(ABP_G031_E001_2_C, StaticMesh) == 0x0003B0, "Member 'ABP_G031_E001_2_C::StaticMesh' has a wrong offset!");

}

