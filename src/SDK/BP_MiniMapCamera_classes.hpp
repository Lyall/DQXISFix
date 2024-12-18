#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MiniMapCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MiniMapCamera.BP_MiniMapCamera_C
// 0x0020 (0x08F0 - 0x08D0)
class ABP_MiniMapCamera_C final : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08D0(0x0008)(Transient, DuplicateTransient)
	class UJackMiniMapTargetComponent*            JackMiniMapTarget;                                 // 0x08D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UJackMiniMapCameraComponent*            JackMiniMapCamera;                                 // 0x08E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MiniMapCamera(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MiniMapCamera_C">();
	}
	static class ABP_MiniMapCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MiniMapCamera_C>();
	}
};
static_assert(alignof(ABP_MiniMapCamera_C) == 0x000010, "Wrong alignment on ABP_MiniMapCamera_C");
static_assert(sizeof(ABP_MiniMapCamera_C) == 0x0008F0, "Wrong size on ABP_MiniMapCamera_C");
static_assert(offsetof(ABP_MiniMapCamera_C, UberGraphFrame) == 0x0008D0, "Member 'ABP_MiniMapCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCamera_C, JackMiniMapTarget) == 0x0008D8, "Member 'ABP_MiniMapCamera_C::JackMiniMapTarget' has a wrong offset!");
static_assert(offsetof(ABP_MiniMapCamera_C, JackMiniMapCamera) == 0x0008E0, "Member 'ABP_MiniMapCamera_C::JackMiniMapCamera' has a wrong offset!");

}

