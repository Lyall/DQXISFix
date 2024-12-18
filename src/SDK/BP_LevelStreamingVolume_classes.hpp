#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelStreamingVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LevelStreamingVolume.BP_LevelStreamingVolume_C
// 0x0058 (0x0428 - 0x03D0)
class ABP_LevelStreamingVolume_C final : public AJackTriggerVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UBrushComponent*                        BrushOuter;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OuterScale;                                        // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loaded;                                            // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5[0x3];                                      // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LevelNames;                                        // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          NotUnLoad;                                         // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LoadAndVisible;                                    // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA[0x6];                                      // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActor;                                          // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Pending;                                           // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackLDT_CutSceneInfo>          IgnoreCSIDs;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          IsMapjumpingLoad;                                  // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPendingMode;                                     // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_LevelStreamingVolume(int32 EntryPoint);
	void BattleEnd();
	void LevelLoad();
	void ReceiveBeginPlay();
	void MapJumpBeginPlay();
	void BndEvt__BrushOuter_K2Node_ComponentBoundEvent_49_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_45_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MapJumpEndPlay();
	void UserConstructionScript();
	void BindBattle();
	void CheckIgnoreCS(bool* Result);
	void WaitStart(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelStreamingVolume_C">();
	}
	static class ABP_LevelStreamingVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelStreamingVolume_C>();
	}
};
static_assert(alignof(ABP_LevelStreamingVolume_C) == 0x000008, "Wrong alignment on ABP_LevelStreamingVolume_C");
static_assert(sizeof(ABP_LevelStreamingVolume_C) == 0x000428, "Wrong size on ABP_LevelStreamingVolume_C");
static_assert(offsetof(ABP_LevelStreamingVolume_C, UberGraphFrame) == 0x0003D0, "Member 'ABP_LevelStreamingVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, BrushOuter) == 0x0003D8, "Member 'ABP_LevelStreamingVolume_C::BrushOuter' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, OuterScale) == 0x0003E0, "Member 'ABP_LevelStreamingVolume_C::OuterScale' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, Loaded) == 0x0003E4, "Member 'ABP_LevelStreamingVolume_C::Loaded' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, LevelNames) == 0x0003E8, "Member 'ABP_LevelStreamingVolume_C::LevelNames' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, NotUnLoad) == 0x0003F8, "Member 'ABP_LevelStreamingVolume_C::NotUnLoad' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, LoadAndVisible) == 0x0003F9, "Member 'ABP_LevelStreamingVolume_C::LoadAndVisible' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, HitActor) == 0x000400, "Member 'ABP_LevelStreamingVolume_C::HitActor' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, Pending) == 0x000408, "Member 'ABP_LevelStreamingVolume_C::Pending' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, IgnoreCSIDs) == 0x000410, "Member 'ABP_LevelStreamingVolume_C::IgnoreCSIDs' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, IsMapjumpingLoad) == 0x000420, "Member 'ABP_LevelStreamingVolume_C::IsMapjumpingLoad' has a wrong offset!");
static_assert(offsetof(ABP_LevelStreamingVolume_C, IsPendingMode) == 0x000421, "Member 'ABP_LevelStreamingVolume_C::IsPendingMode' has a wrong offset!");

}

