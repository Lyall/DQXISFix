#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocationVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LocationVolume.BP_LocationVolume_C
// 0x0078 (0x0448 - 0x03D0)
class ABP_LocationVolume_C final : public AJackTriggerVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class ABP_MiniMapCamera_C*                    MiniMapCamera;                                     // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackLDT_UIMapInfo                     InVolumeID;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FJackLDT_UIMapInfo                     InVolumeID_SScenario;                              // 0x03F0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FJackLDT_UIMapInfo                     OutVolumeID;                                       // 0x0400(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FJackLDT_UIMapInfo                     OutVolumeID_SScenario;                             // 0x0410(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          InVolumeStartEnable;                               // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UnBound;                                           // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocationTitleOverride;                             // 0x0422(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423[0x5];                                      // 0x0423(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackLDT_UIMapInfo                     TempVolumeID;                                      // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          NowProc;                                           // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_439[0x3];                                      // 0x0439(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VolumePriority;                                    // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ClearMiniMapCamera;                                // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          MapInMapjump;                                      // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_LocationVolume(int32 EntryPoint);
	void MapJumpBeginPlay();
	void CallSetMinimapData(const struct FJackLDT_UIMapInfo& VolimeID, bool Out);
	void ReceiveBeginPlay();
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_99_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_96_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SetMinimapData(const struct FJackLDT_UIMapInfo& VolumeID, bool Out);
	void MapJumpEndPlay();
	void UserConstructionScript();
	void GetInVolume(struct FJackLDT_UIMapInfo* InVolumeID_0);
	void GetOutVolume(struct FJackLDT_UIMapInfo* OutVolumeID_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocationVolume_C">();
	}
	static class ABP_LocationVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LocationVolume_C>();
	}
};
static_assert(alignof(ABP_LocationVolume_C) == 0x000008, "Wrong alignment on ABP_LocationVolume_C");
static_assert(sizeof(ABP_LocationVolume_C) == 0x000448, "Wrong size on ABP_LocationVolume_C");
static_assert(offsetof(ABP_LocationVolume_C, UberGraphFrame) == 0x0003D0, "Member 'ABP_LocationVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, MiniMapCamera) == 0x0003D8, "Member 'ABP_LocationVolume_C::MiniMapCamera' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, InVolumeID) == 0x0003E0, "Member 'ABP_LocationVolume_C::InVolumeID' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, InVolumeID_SScenario) == 0x0003F0, "Member 'ABP_LocationVolume_C::InVolumeID_SScenario' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, OutVolumeID) == 0x000400, "Member 'ABP_LocationVolume_C::OutVolumeID' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, OutVolumeID_SScenario) == 0x000410, "Member 'ABP_LocationVolume_C::OutVolumeID_SScenario' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, InVolumeStartEnable) == 0x000420, "Member 'ABP_LocationVolume_C::InVolumeStartEnable' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, UnBound) == 0x000421, "Member 'ABP_LocationVolume_C::UnBound' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, LocationTitleOverride) == 0x000422, "Member 'ABP_LocationVolume_C::LocationTitleOverride' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, TempVolumeID) == 0x000428, "Member 'ABP_LocationVolume_C::TempVolumeID' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, NowProc) == 0x000438, "Member 'ABP_LocationVolume_C::NowProc' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, VolumePriority) == 0x00043C, "Member 'ABP_LocationVolume_C::VolumePriority' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, ClearMiniMapCamera) == 0x000440, "Member 'ABP_LocationVolume_C::ClearMiniMapCamera' has a wrong offset!");
static_assert(offsetof(ABP_LocationVolume_C, MapInMapjump) == 0x000441, "Member 'ABP_LocationVolume_C::MapInMapjump' has a wrong offset!");

}

