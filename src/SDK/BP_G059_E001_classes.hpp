#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_G059_E001

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_G059_E001.BP_G059_E001_C
// 0x0010 (0x03C0 - 0x03B0)
class ABP_G059_E001_C final : public AJackPropActor
{
public:
	class USceneComponent*                        Scene;                                             // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_G059_E001_C">();
	}
	static class ABP_G059_E001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_G059_E001_C>();
	}
};
static_assert(alignof(ABP_G059_E001_C) == 0x000008, "Wrong alignment on ABP_G059_E001_C");
static_assert(sizeof(ABP_G059_E001_C) == 0x0003C0, "Wrong size on ABP_G059_E001_C");
static_assert(offsetof(ABP_G059_E001_C, Scene) == 0x0003B0, "Member 'ABP_G059_E001_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_G059_E001_C, StaticMesh) == 0x0003B8, "Member 'ABP_G059_E001_C::StaticMesh' has a wrong offset!");

}
