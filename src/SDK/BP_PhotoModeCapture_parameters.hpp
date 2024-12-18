#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhotoModeCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PhotoModeCapture.BP_PhotoModeCapture_C.ExecuteUbergraph_BP_PhotoModeCapture
// 0x0660 (0x0660 - 0x0000)
struct BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackPlayerCameraManager*               CallFunc_GetJackPlayerCameraManager_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0010(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x001C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   CallFunc_GetCapturePostProcessSettings_ReturnValue; // 0x0030(0x0500)()
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0530(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x05B8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AJackGameMode*                          CallFunc_GetJackGameMode_ReturnValue;              // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackPhotoModeManager*                  CallFunc_GetPhotoModeManager_ReturnValue;          // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCaptureRequested_ReturnValue;           // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture) == 0x000010, "Wrong alignment on BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture");
static_assert(sizeof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture) == 0x000660, "Wrong size on BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, EntryPoint) == 0x000000, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetJackPlayerCameraManager_ReturnValue) == 0x000008, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetJackPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetCameraRotation_ReturnValue) == 0x000010, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetCameraLocation_ReturnValue) == 0x00001C, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetCapturePostProcessSettings_ReturnValue) == 0x000030, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetCapturePostProcessSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000530, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0005B8, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetJackGameMode_ReturnValue) == 0x000640, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetJackGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_GetPhotoModeManager_ReturnValue) == 0x000648, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_GetPhotoModeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture, CallFunc_IsCaptureRequested_ReturnValue) == 0x000650, "Member 'BP_PhotoModeCapture_C_ExecuteUbergraph_BP_PhotoModeCapture::CallFunc_IsCaptureRequested_ReturnValue' has a wrong offset!");

// Function BP_PhotoModeCapture.BP_PhotoModeCapture_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PhotoModeCapture_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PhotoModeCapture_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PhotoModeCapture_C_ReceiveTick");
static_assert(sizeof(BP_PhotoModeCapture_C_ReceiveTick) == 0x000004, "Wrong size on BP_PhotoModeCapture_C_ReceiveTick");
static_assert(offsetof(BP_PhotoModeCapture_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PhotoModeCapture_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

