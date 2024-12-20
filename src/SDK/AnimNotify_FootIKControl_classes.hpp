#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_FootIKControl

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_FootIKControl.AnimNotify_FootIKControl_C
// 0x0008 (0x0050 - 0x0048)
class UAnimNotify_FootIKControl_C final : public UAnimNotify
{
public:
	bool                                          FootIKEnable;                                      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_FootIKControl_C">();
	}
	static class UAnimNotify_FootIKControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_FootIKControl_C>();
	}
};
static_assert(alignof(UAnimNotify_FootIKControl_C) == 0x000008, "Wrong alignment on UAnimNotify_FootIKControl_C");
static_assert(sizeof(UAnimNotify_FootIKControl_C) == 0x000050, "Wrong size on UAnimNotify_FootIKControl_C");
static_assert(offsetof(UAnimNotify_FootIKControl_C, FootIKEnable) == 0x000048, "Member 'UAnimNotify_FootIKControl_C::FootIKEnable' has a wrong offset!");

}

