#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_GetBoneControlInfo

#include "Basic.hpp"

#include "ENUM_CoordinateMeshSlot_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ENUM_CharacterBodyType_structs.hpp"


namespace SDK
{

// DynamicClass BP_IF_GetBoneControlInfo.BP_IF_GetBoneControlInfo_C
// 0x0000 (0x0038 - 0x0038)
class IBP_IF_GetBoneControlInfo_C final : public IInterface
{
public:
	void GetCharacterBodyType(ENUM_CharacterBodyType* bpp__Result__pf);
	void GetMeshByCoordinateSlotType(ENUM_CoordinateMeshSlot bpp__SlotType__pf, class USkeletalMeshComponent** bpp__SkeletalMeshComponent__pf);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_IF_GetBoneControlInfo_C">();
	}
	static class IBP_IF_GetBoneControlInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_IF_GetBoneControlInfo_C>();
	}
};
static_assert(alignof(IBP_IF_GetBoneControlInfo_C) == 0x000008, "Wrong alignment on IBP_IF_GetBoneControlInfo_C");
static_assert(sizeof(IBP_IF_GetBoneControlInfo_C) == 0x000038, "Wrong size on IBP_IF_GetBoneControlInfo_C");

}
