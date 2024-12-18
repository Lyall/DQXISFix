#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugStreamingCheckStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugStreamingCheckStatus.BP_DebugStreamingCheckStatus_C
// 0x00E8 (0x0480 - 0x0398)
class ABP_DebugStreamingCheckStatus_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_LevelVisibleVolume_C*>       TempVisibleVolumes;                                // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FString>                         TempLevels;                                        // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                         VisibledLevels;                                    // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_LevelVisibleVolume_C*>       TempOverlapingVolumes;                             // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          DispOverlapingVolumes;                             // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         UnvisibledLevel;                                   // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                           DispStringColor;                                   // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AJackMapStart*>                  TempMapStart;                                      // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_LocationVolume_C*>           TempLocationVolume;                                // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FString>                         HitVolume;                                         // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                 HitVolumePriority;                                 // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          UseSamePriority;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UnboundCount;                                      // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UnboundPriority;                                   // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UnboundVolume;                                     // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         TempHitUpper;                                      // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempHitLower;                                      // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HitResult;                                         // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_DebugStreamingCheckStatus(int32 EntryPoint);
	void MapJumpBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InpActEvt_L_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void MapJumpEndPlay();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugStreamingCheckStatus_C">();
	}
	static class ABP_DebugStreamingCheckStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugStreamingCheckStatus_C>();
	}
};
static_assert(alignof(ABP_DebugStreamingCheckStatus_C) == 0x000008, "Wrong alignment on ABP_DebugStreamingCheckStatus_C");
static_assert(sizeof(ABP_DebugStreamingCheckStatus_C) == 0x000480, "Wrong size on ABP_DebugStreamingCheckStatus_C");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UberGraphFrame) == 0x000398, "Member 'ABP_DebugStreamingCheckStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, DefaultSceneRoot) == 0x0003A0, "Member 'ABP_DebugStreamingCheckStatus_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempVisibleVolumes) == 0x0003A8, "Member 'ABP_DebugStreamingCheckStatus_C::TempVisibleVolumes' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempLevels) == 0x0003B8, "Member 'ABP_DebugStreamingCheckStatus_C::TempLevels' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, VisibledLevels) == 0x0003C8, "Member 'ABP_DebugStreamingCheckStatus_C::VisibledLevels' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempOverlapingVolumes) == 0x0003D8, "Member 'ABP_DebugStreamingCheckStatus_C::TempOverlapingVolumes' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, DispOverlapingVolumes) == 0x0003E8, "Member 'ABP_DebugStreamingCheckStatus_C::DispOverlapingVolumes' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UnvisibledLevel) == 0x0003F0, "Member 'ABP_DebugStreamingCheckStatus_C::UnvisibledLevel' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, DispStringColor) == 0x000400, "Member 'ABP_DebugStreamingCheckStatus_C::DispStringColor' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempMapStart) == 0x000410, "Member 'ABP_DebugStreamingCheckStatus_C::TempMapStart' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempLocationVolume) == 0x000420, "Member 'ABP_DebugStreamingCheckStatus_C::TempLocationVolume' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, HitVolume) == 0x000430, "Member 'ABP_DebugStreamingCheckStatus_C::HitVolume' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, HitVolumePriority) == 0x000440, "Member 'ABP_DebugStreamingCheckStatus_C::HitVolumePriority' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UseSamePriority) == 0x000450, "Member 'ABP_DebugStreamingCheckStatus_C::UseSamePriority' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UnboundCount) == 0x000454, "Member 'ABP_DebugStreamingCheckStatus_C::UnboundCount' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UnboundPriority) == 0x000458, "Member 'ABP_DebugStreamingCheckStatus_C::UnboundPriority' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, UnboundVolume) == 0x000460, "Member 'ABP_DebugStreamingCheckStatus_C::UnboundVolume' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempHitUpper) == 0x000470, "Member 'ABP_DebugStreamingCheckStatus_C::TempHitUpper' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, TempHitLower) == 0x000474, "Member 'ABP_DebugStreamingCheckStatus_C::TempHitLower' has a wrong offset!");
static_assert(offsetof(ABP_DebugStreamingCheckStatus_C, HitResult) == 0x000478, "Member 'ABP_DebugStreamingCheckStatus_C::HitResult' has a wrong offset!");

}

