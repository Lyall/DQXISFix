#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectWeaponSMBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectWeaponSMBase.BP_EffectWeaponSMBase_C
// 0x0040 (0x0428 - 0x03E8)
class ABP_EffectWeaponSMBase_C : public AJackWeaponSM
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>       SpawnedEffects;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJackEffects>                   SheatheEffects;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          bOpened;                                           // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       DeactivetedEffects;                                // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_EffectWeaponSMBase(int32 EntryPoint);
	void OnWeaponOpen();
	void OnWeaponClose();
	void OnWeaponHidden(bool bNewHidden);
	void UserConstructionScript();
	void SpawnEffects();
	void DeactivateEffects();
	void SetHiddenEffects(bool NewHidden);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectWeaponSMBase_C">();
	}
	static class ABP_EffectWeaponSMBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EffectWeaponSMBase_C>();
	}
};
static_assert(alignof(ABP_EffectWeaponSMBase_C) == 0x000008, "Wrong alignment on ABP_EffectWeaponSMBase_C");
static_assert(sizeof(ABP_EffectWeaponSMBase_C) == 0x000428, "Wrong size on ABP_EffectWeaponSMBase_C");
static_assert(offsetof(ABP_EffectWeaponSMBase_C, UberGraphFrame) == 0x0003E8, "Member 'ABP_EffectWeaponSMBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EffectWeaponSMBase_C, SpawnedEffects) == 0x0003F0, "Member 'ABP_EffectWeaponSMBase_C::SpawnedEffects' has a wrong offset!");
static_assert(offsetof(ABP_EffectWeaponSMBase_C, SheatheEffects) == 0x000400, "Member 'ABP_EffectWeaponSMBase_C::SheatheEffects' has a wrong offset!");
static_assert(offsetof(ABP_EffectWeaponSMBase_C, bOpened) == 0x000410, "Member 'ABP_EffectWeaponSMBase_C::bOpened' has a wrong offset!");
static_assert(offsetof(ABP_EffectWeaponSMBase_C, DeactivetedEffects) == 0x000418, "Member 'ABP_EffectWeaponSMBase_C::DeactivetedEffects' has a wrong offset!");

}
