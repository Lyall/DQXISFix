#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_W_DGR_0028

#include "Basic.hpp"

#include "BP_EffectWeaponSMBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Weapon_W_DGR_0028.BP_Weapon_W_DGR_0028_C
// 0x0010 (0x0438 - 0x0428)
class ABP_Weapon_W_DGR_0028_C final : public ABP_EffectWeaponSMBase_C
{
public:
	class UParticleSystem*                        PetalEffect;                                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PetalEffectSocketName;                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SpawnPetalEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Weapon_W_DGR_0028_C">();
	}
	static class ABP_Weapon_W_DGR_0028_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Weapon_W_DGR_0028_C>();
	}
};
static_assert(alignof(ABP_Weapon_W_DGR_0028_C) == 0x000008, "Wrong alignment on ABP_Weapon_W_DGR_0028_C");
static_assert(sizeof(ABP_Weapon_W_DGR_0028_C) == 0x000438, "Wrong size on ABP_Weapon_W_DGR_0028_C");
static_assert(offsetof(ABP_Weapon_W_DGR_0028_C, PetalEffect) == 0x000428, "Member 'ABP_Weapon_W_DGR_0028_C::PetalEffect' has a wrong offset!");
static_assert(offsetof(ABP_Weapon_W_DGR_0028_C, PetalEffectSocketName) == 0x000430, "Member 'ABP_Weapon_W_DGR_0028_C::PetalEffectSocketName' has a wrong offset!");

}
