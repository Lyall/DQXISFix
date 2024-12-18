#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZenkeiCSInitializeWaitVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZenkeiCSInitializeWaitVolume.BP_ZenkeiCSInitializeWaitVolume_C
// 0x0030 (0x03C8 - 0x0398)
class ABP_ZenkeiCSInitializeWaitVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AJackScheduledNPC*>              TargetNpcActor;                                    // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Radius;                                            // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ZenkeiCSInitializeWaitVolume(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ConvZenkeiTag(class FName CSID, class FName* ConvTag);
	void IsInCameraZenkei(class AActor* Actor, float AngleDegree);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZenkeiCSInitializeWaitVolume_C">();
	}
	static class ABP_ZenkeiCSInitializeWaitVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZenkeiCSInitializeWaitVolume_C>();
	}
};
static_assert(alignof(ABP_ZenkeiCSInitializeWaitVolume_C) == 0x000008, "Wrong alignment on ABP_ZenkeiCSInitializeWaitVolume_C");
static_assert(sizeof(ABP_ZenkeiCSInitializeWaitVolume_C) == 0x0003C8, "Wrong size on ABP_ZenkeiCSInitializeWaitVolume_C");
static_assert(offsetof(ABP_ZenkeiCSInitializeWaitVolume_C, UberGraphFrame) == 0x000398, "Member 'ABP_ZenkeiCSInitializeWaitVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ZenkeiCSInitializeWaitVolume_C, Sphere) == 0x0003A0, "Member 'ABP_ZenkeiCSInitializeWaitVolume_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ZenkeiCSInitializeWaitVolume_C, TextRender) == 0x0003A8, "Member 'ABP_ZenkeiCSInitializeWaitVolume_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_ZenkeiCSInitializeWaitVolume_C, TargetNpcActor) == 0x0003B0, "Member 'ABP_ZenkeiCSInitializeWaitVolume_C::TargetNpcActor' has a wrong offset!");
static_assert(offsetof(ABP_ZenkeiCSInitializeWaitVolume_C, Radius) == 0x0003C0, "Member 'ABP_ZenkeiCSInitializeWaitVolume_C::Radius' has a wrong offset!");

}

