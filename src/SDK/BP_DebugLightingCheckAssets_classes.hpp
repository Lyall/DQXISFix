#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugLightingCheckAssets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugLightingCheckAssets.BP_DebugLightingCheckAssets_C
// 0x0028 (0x03C0 - 0x0398)
class ABP_DebugLightingCheckAssets_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   LightingCheck;                                     // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DebugLightingCheckAssets(int32 EntryPoint);
	void ShowLightingCheckAssets(bool BoolValue);
	void ReceiveBeginPlay();
	void OnLoaded_95C78ACF4084D557EBFD96A5D91487E9(class UClass* Loaded);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugLightingCheckAssets_C">();
	}
	static class ABP_DebugLightingCheckAssets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugLightingCheckAssets_C>();
	}
};
static_assert(alignof(ABP_DebugLightingCheckAssets_C) == 0x000008, "Wrong alignment on ABP_DebugLightingCheckAssets_C");
static_assert(sizeof(ABP_DebugLightingCheckAssets_C) == 0x0003C0, "Wrong size on ABP_DebugLightingCheckAssets_C");
static_assert(offsetof(ABP_DebugLightingCheckAssets_C, UberGraphFrame) == 0x000398, "Member 'ABP_DebugLightingCheckAssets_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugLightingCheckAssets_C, DefaultSceneRoot) == 0x0003A0, "Member 'ABP_DebugLightingCheckAssets_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugLightingCheckAssets_C, LightingCheck) == 0x0003A8, "Member 'ABP_DebugLightingCheckAssets_C::LightingCheck' has a wrong offset!");

}
