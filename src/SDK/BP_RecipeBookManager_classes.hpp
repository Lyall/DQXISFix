#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RecipeBookManager

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RecipeBookManager.BP_RecipeBookManager_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_RecipeBookManager_C final : public UJackRecipeBookManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RecipeBookManager_C">();
	}
	static class UBP_RecipeBookManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RecipeBookManager_C>();
	}
};
static_assert(alignof(UBP_RecipeBookManager_C) == 0x000008, "Wrong alignment on UBP_RecipeBookManager_C");
static_assert(sizeof(UBP_RecipeBookManager_C) == 0x0000B8, "Wrong size on UBP_RecipeBookManager_C");

}
