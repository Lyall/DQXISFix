#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelVisibleVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LevelVisibleVolume.BP_LevelVisibleVolume_C
// 0x0070 (0x0440 - 0x03D0)
class ABP_LevelVisibleVolume_C final : public AJackTriggerVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UBrushComponent*                        BrushOuter;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           LevelNames;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          Visible;                                           // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OuterScale;                                        // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceMode;                                         // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadWait;                                          // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA[0x6];                                      // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         TmpActors;                                         // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          NoBeginPlay;                                       // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActor;                                          // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDummyActor;                                      // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackLDT_CutSceneInfo>          IgnoreCSIDs;                                       // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          Pending;                                           // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotInVisible;                                      // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_LevelVisibleVolume(int32 EntryPoint);
	void BattleEndVisibleCheck();
	void BattleEnd();
	void ReceiveBeginPlay();
	void MapJumpBeginPlay();
	void BndEvt__BrushOuter_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_225_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MapJumpEndPlay();
	void UserConstructionScript();
	void SetForceVisible(bool Visible_0);
	void ResetForceVisble();
	void IsAllLevelVisible(bool* Visble);
	void LevelVisible(bool Visible_0);
	void IsAllLevelLoaded(bool LoadRequest, bool* IsLoaded, TArray<class FName>* RequestLevel);
	void Ban();
	void Uninhibited();
	void CheckLoadState(class FName LevelName, EJackCSMapLevelStatus State, bool* End);
	void CheckCutSceneAndVisible();
	void CheckIgnoreCS(bool* Result);
	void BindBattle();
	void CheckVisible(bool* Visible_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelVisibleVolume_C">();
	}
	static class ABP_LevelVisibleVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelVisibleVolume_C>();
	}
};
static_assert(alignof(ABP_LevelVisibleVolume_C) == 0x000008, "Wrong alignment on ABP_LevelVisibleVolume_C");
static_assert(sizeof(ABP_LevelVisibleVolume_C) == 0x000440, "Wrong size on ABP_LevelVisibleVolume_C");
static_assert(offsetof(ABP_LevelVisibleVolume_C, UberGraphFrame) == 0x0003D0, "Member 'ABP_LevelVisibleVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, BrushOuter) == 0x0003D8, "Member 'ABP_LevelVisibleVolume_C::BrushOuter' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, LevelNames) == 0x0003E0, "Member 'ABP_LevelVisibleVolume_C::LevelNames' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, Visible) == 0x0003F0, "Member 'ABP_LevelVisibleVolume_C::Visible' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, OuterScale) == 0x0003F4, "Member 'ABP_LevelVisibleVolume_C::OuterScale' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, ForceMode) == 0x0003F8, "Member 'ABP_LevelVisibleVolume_C::ForceMode' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, LoadWait) == 0x0003F9, "Member 'ABP_LevelVisibleVolume_C::LoadWait' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, TmpActors) == 0x000400, "Member 'ABP_LevelVisibleVolume_C::TmpActors' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, NoBeginPlay) == 0x000410, "Member 'ABP_LevelVisibleVolume_C::NoBeginPlay' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, HitActor) == 0x000418, "Member 'ABP_LevelVisibleVolume_C::HitActor' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, IsDummyActor) == 0x000420, "Member 'ABP_LevelVisibleVolume_C::IsDummyActor' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, IgnoreCSIDs) == 0x000428, "Member 'ABP_LevelVisibleVolume_C::IgnoreCSIDs' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, Pending) == 0x000438, "Member 'ABP_LevelVisibleVolume_C::Pending' has a wrong offset!");
static_assert(offsetof(ABP_LevelVisibleVolume_C, NotInVisible) == 0x000439, "Member 'ABP_LevelVisibleVolume_C::NotInVisible' has a wrong offset!");

}
