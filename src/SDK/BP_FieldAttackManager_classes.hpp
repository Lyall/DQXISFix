#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FieldAttackManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FieldAttackManager.BP_FieldAttackManager_C
// 0x0000 (0x00D0 - 0x00D0)
class UBP_FieldAttackManager_C final : public UJackFieldAttackManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FieldAttackManager_C">();
	}
	static class UBP_FieldAttackManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FieldAttackManager_C>();
	}
};
static_assert(alignof(UBP_FieldAttackManager_C) == 0x000008, "Wrong alignment on UBP_FieldAttackManager_C");
static_assert(sizeof(UBP_FieldAttackManager_C) == 0x0000D0, "Wrong size on UBP_FieldAttackManager_C");

}
