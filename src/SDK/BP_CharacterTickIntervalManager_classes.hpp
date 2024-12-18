#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterTickIntervalManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// DynamicClass BP_CharacterTickIntervalManager.BP_CharacterTickIntervalManager_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_CharacterTickIntervalManager_C final : public AJackCharacterTickIntervalManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_CharacterTickIntervalManager_C">();
	}
	static class ABP_CharacterTickIntervalManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterTickIntervalManager_C>();
	}
};
static_assert(alignof(ABP_CharacterTickIntervalManager_C) == 0x000008, "Wrong alignment on ABP_CharacterTickIntervalManager_C");
static_assert(sizeof(ABP_CharacterTickIntervalManager_C) == 0x0003F0, "Wrong size on ABP_CharacterTickIntervalManager_C");
static_assert(offsetof(ABP_CharacterTickIntervalManager_C, DefaultSceneRoot) == 0x0003E8, "Member 'ABP_CharacterTickIntervalManager_C::DefaultSceneRoot' has a wrong offset!");

}

