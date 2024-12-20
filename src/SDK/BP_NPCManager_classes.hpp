#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// DynamicClass BP_NPCManager.BP_NPCManager_C
// 0x0008 (0x06C0 - 0x06B8)
class ABP_NPCManager_C final : public AJackScheduledNPCManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_NPCManager_C">();
	}
	static class ABP_NPCManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCManager_C>();
	}
};
static_assert(alignof(ABP_NPCManager_C) == 0x000008, "Wrong alignment on ABP_NPCManager_C");
static_assert(sizeof(ABP_NPCManager_C) == 0x0006C0, "Wrong size on ABP_NPCManager_C");
static_assert(offsetof(ABP_NPCManager_C, DefaultSceneRoot) == 0x0006B8, "Member 'ABP_NPCManager_C::DefaultSceneRoot' has a wrong offset!");

}

