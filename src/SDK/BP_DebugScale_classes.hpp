#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugScale

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugScale.BP_DebugScale_C
// 0x0048 (0x03E0 - 0x0398)
class ABP_DebugScale_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        YoisyoMin;                                         // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        YoisyoMax;                                         // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         UpperScaleLength;                                  // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FrontScaleLength;                                  // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         One5DoScaleLength;                                 // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           MText;                                             // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ScaleMode;                                         // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DebugScale(int32 EntryPoint);
	void SakaAngleCheck(float Angle, float Offset, bool Mirror);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugScale_C">();
	}
	static class ABP_DebugScale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugScale_C>();
	}
};
static_assert(alignof(ABP_DebugScale_C) == 0x000008, "Wrong alignment on ABP_DebugScale_C");
static_assert(sizeof(ABP_DebugScale_C) == 0x0003E0, "Wrong size on ABP_DebugScale_C");
static_assert(offsetof(ABP_DebugScale_C, UberGraphFrame) == 0x000398, "Member 'ABP_DebugScale_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, YoisyoMin) == 0x0003A0, "Member 'ABP_DebugScale_C::YoisyoMin' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, YoisyoMax) == 0x0003A8, "Member 'ABP_DebugScale_C::YoisyoMax' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_DebugScale_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, UpperScaleLength) == 0x0003B8, "Member 'ABP_DebugScale_C::UpperScaleLength' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, FrontScaleLength) == 0x0003BC, "Member 'ABP_DebugScale_C::FrontScaleLength' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, One5DoScaleLength) == 0x0003C0, "Member 'ABP_DebugScale_C::One5DoScaleLength' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, MText) == 0x0003C8, "Member 'ABP_DebugScale_C::MText' has a wrong offset!");
static_assert(offsetof(ABP_DebugScale_C, ScaleMode) == 0x0003D8, "Member 'ABP_DebugScale_C::ScaleMode' has a wrong offset!");

}

