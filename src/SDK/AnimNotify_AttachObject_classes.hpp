#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AttachObject

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_AttachObject.AnimNotify_AttachObject_C
// 0x0000 (0x0048 - 0x0048)
class UAnimNotify_AttachObject_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_AttachObject_C">();
	}
	static class UAnimNotify_AttachObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_AttachObject_C>();
	}
};
static_assert(alignof(UAnimNotify_AttachObject_C) == 0x000008, "Wrong alignment on UAnimNotify_AttachObject_C");
static_assert(sizeof(UAnimNotify_AttachObject_C) == 0x000048, "Wrong size on UAnimNotify_AttachObject_C");

}
