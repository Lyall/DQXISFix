#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FieldPlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FieldPlayerController.BP_FieldPlayerController_C
// 0x0018 (0x0B40 - 0x0B28)
class ABP_FieldPlayerController_C final : public AJackFieldPlayerController
{
public:
	uint8                                         Pad_B28[0x8];                                      // 0x0B28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(Transient, DuplicateTransient)
	class UJackActionCursorControllerComponent*   JackActionCursorController;                        // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FieldPlayerController(int32 EntryPoint);
	void OnDisplayActionGuide();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetActionGuideHelpCondition(bool bDisable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FieldPlayerController_C">();
	}
	static class ABP_FieldPlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FieldPlayerController_C>();
	}
};
static_assert(alignof(ABP_FieldPlayerController_C) == 0x000008, "Wrong alignment on ABP_FieldPlayerController_C");
static_assert(sizeof(ABP_FieldPlayerController_C) == 0x000B40, "Wrong size on ABP_FieldPlayerController_C");
static_assert(offsetof(ABP_FieldPlayerController_C, UberGraphFrame) == 0x000B30, "Member 'ABP_FieldPlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FieldPlayerController_C, JackActionCursorController) == 0x000B38, "Member 'ABP_FieldPlayerController_C::JackActionCursorController' has a wrong offset!");

}
