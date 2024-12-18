#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMenuLoadingPerformance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugMenuLoadingPerformance.BP_DebugMenuLoadingPerformance_C
// 0x0020 (0x03B8 - 0x0398)
class ABP_DebugMenuLoadingPerformance_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         TempArray;                                         // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_DebugMenuLoadingPerformance(int32 EntryPoint);
	void CustomEvent_0_Copy();
	void SetCommandMenu(const class FString& Command, class UJackDebugMenuVariableMenu* ParentMenu);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetConsoleCommand();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugMenuLoadingPerformance_C">();
	}
	static class ABP_DebugMenuLoadingPerformance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugMenuLoadingPerformance_C>();
	}
};
static_assert(alignof(ABP_DebugMenuLoadingPerformance_C) == 0x000008, "Wrong alignment on ABP_DebugMenuLoadingPerformance_C");
static_assert(sizeof(ABP_DebugMenuLoadingPerformance_C) == 0x0003B8, "Wrong size on ABP_DebugMenuLoadingPerformance_C");
static_assert(offsetof(ABP_DebugMenuLoadingPerformance_C, UberGraphFrame) == 0x000398, "Member 'ABP_DebugMenuLoadingPerformance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugMenuLoadingPerformance_C, DefaultSceneRoot) == 0x0003A0, "Member 'ABP_DebugMenuLoadingPerformance_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugMenuLoadingPerformance_C, TempArray) == 0x0003A8, "Member 'ABP_DebugMenuLoadingPerformance_C::TempArray' has a wrong offset!");

}

