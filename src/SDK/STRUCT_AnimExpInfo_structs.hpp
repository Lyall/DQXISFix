#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STRUCT_AnimExpInfo

#include "Basic.hpp"

#include "ENUM_BoneControlBodyParts_structs.hpp"
#include "STRUCT_AnimExpressionBonesName_structs.hpp"


namespace SDK
{

// ScriptStruct STRUCT_AnimExpInfo.STRUCT_AnimExpInfo
// 0x0020 (0x0020 - 0x0000)
struct FSTRUCT_AnimExpInfo final
{
public:
	TArray<ENUM_BoneControlBodyParts>             BoneControlBodyParts_3_9FE0C47A453A3BB81085ABB6F890D697; // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSTRUCT_AnimExpressionBonesName> AnimExpBonesName_8_CD5F3EB74169F395AC17399790EDB89B; // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSTRUCT_AnimExpInfo) == 0x000008, "Wrong alignment on FSTRUCT_AnimExpInfo");
static_assert(sizeof(FSTRUCT_AnimExpInfo) == 0x000020, "Wrong size on FSTRUCT_AnimExpInfo");
static_assert(offsetof(FSTRUCT_AnimExpInfo, BoneControlBodyParts_3_9FE0C47A453A3BB81085ABB6F890D697) == 0x000000, "Member 'FSTRUCT_AnimExpInfo::BoneControlBodyParts_3_9FE0C47A453A3BB81085ABB6F890D697' has a wrong offset!");
static_assert(offsetof(FSTRUCT_AnimExpInfo, AnimExpBonesName_8_CD5F3EB74169F395AC17399790EDB89B) == 0x000010, "Member 'FSTRUCT_AnimExpInfo::AnimExpBonesName_8_CD5F3EB74169F395AC17399790EDB89B' has a wrong offset!");

}
