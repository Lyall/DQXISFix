#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayParticleEffectWithParameter

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_PlayParticleEffectWithParameter.AnimNotify_PlayParticleEffectWithParameter_C
// 0x0000 (0x0090 - 0x0090)
class UAnimNotify_PlayParticleEffectWithParameter_C final : public UJackAnimNotify_PlayParticleEffect
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayParticleEffectWithParameter_C">();
	}
	static class UAnimNotify_PlayParticleEffectWithParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayParticleEffectWithParameter_C>();
	}
};
static_assert(alignof(UAnimNotify_PlayParticleEffectWithParameter_C) == 0x000008, "Wrong alignment on UAnimNotify_PlayParticleEffectWithParameter_C");
static_assert(sizeof(UAnimNotify_PlayParticleEffectWithParameter_C) == 0x000090, "Wrong size on UAnimNotify_PlayParticleEffectWithParameter_C");

}
