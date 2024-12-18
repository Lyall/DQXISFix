#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GimmickRura

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_GimmickRura.BP_GimmickRura_C.ExecuteUbergraph_BP_GimmickRura
// 0x01A0 (0x01A0 - 0x0000)
struct BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackRuraFail                                 K2Node_Event_InFail;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InActor;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackRuraFail                                 K2Node_Event_InType2;                              // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackRuraFail                                 K2Node_Event_InType;                               // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue2;           // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue2;      // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackRuraPurpose                              K2Node_Event_InPurpose;                            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InJumpTag;                            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackLDT_MapStart                      K2Node_MakeStruct_JackLDT_MapStart;                // 0x0190(0x0010)(NoDestructor)
};
static_assert(alignof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura) == 0x000008, "Wrong alignment on BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura");
static_assert(sizeof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura) == 0x0001A0, "Wrong size on BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, EntryPoint) == 0x000000, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InFail) == 0x000004, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InFail' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000B0, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_GetJackPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_GetJackPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InActor) == 0x0000C8, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D0, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000E0, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000168, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InType2) == 0x000169, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InType2' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InType) == 0x00016A, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00016B, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_NotEqual_ByteByte_ReturnValue2) == 0x00016C, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_NotEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, CallFunc_GetJackPlayerCharacter_ReturnValue2) == 0x000170, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::CallFunc_GetJackPlayerCharacter_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InPurpose) == 0x000178, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InPurpose' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_InJumpTag) == 0x000180, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_InJumpTag' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_Event_DeltaSeconds) == 0x000188, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura, K2Node_MakeStruct_JackLDT_MapStart) == 0x000190, "Member 'BP_GimmickRura_C_ExecuteUbergraph_BP_GimmickRura::K2Node_MakeStruct_JackLDT_MapStart' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_GimmickRura_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_GimmickRura_C_ReceiveTick");
static_assert(sizeof(BP_GimmickRura_C_ReceiveTick) == 0x000004, "Wrong size on BP_GimmickRura_C_ReceiveTick");
static_assert(offsetof(BP_GimmickRura_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_GimmickRura_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.OnStartJumpNoAnimMontageStart
// 0x0001 (0x0001 - 0x0000)
struct BP_GimmickRura_C_OnStartJumpNoAnimMontageStart final
{
public:
	EJackRuraFail                                 InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_OnStartJumpNoAnimMontageStart) == 0x000001, "Wrong alignment on BP_GimmickRura_C_OnStartJumpNoAnimMontageStart");
static_assert(sizeof(BP_GimmickRura_C_OnStartJumpNoAnimMontageStart) == 0x000001, "Wrong size on BP_GimmickRura_C_OnStartJumpNoAnimMontageStart");
static_assert(offsetof(BP_GimmickRura_C_OnStartJumpNoAnimMontageStart, InType) == 0x000000, "Member 'BP_GimmickRura_C_OnStartJumpNoAnimMontageStart::InType' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.OnRiremitoJumpNoAnimMontageStart
// 0x0001 (0x0001 - 0x0000)
struct BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart final
{
public:
	EJackRuraFail                                 InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart) == 0x000001, "Wrong alignment on BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart");
static_assert(sizeof(BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart) == 0x000001, "Wrong size on BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart");
static_assert(offsetof(BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart, InType) == 0x000000, "Member 'BP_GimmickRura_C_OnRiremitoJumpNoAnimMontageStart::InType' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.OnDebugCheckOverlapActor
// 0x0008 (0x0008 - 0x0000)
struct BP_GimmickRura_C_OnDebugCheckOverlapActor final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_OnDebugCheckOverlapActor) == 0x000008, "Wrong alignment on BP_GimmickRura_C_OnDebugCheckOverlapActor");
static_assert(sizeof(BP_GimmickRura_C_OnDebugCheckOverlapActor) == 0x000008, "Wrong size on BP_GimmickRura_C_OnDebugCheckOverlapActor");
static_assert(offsetof(BP_GimmickRura_C_OnDebugCheckOverlapActor, InActor) == 0x000000, "Member 'BP_GimmickRura_C_OnDebugCheckOverlapActor::InActor' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.OnDebugCheck
// 0x0001 (0x0001 - 0x0000)
struct BP_GimmickRura_C_OnDebugCheck final
{
public:
	EJackRuraFail                                 InFail;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_OnDebugCheck) == 0x000001, "Wrong alignment on BP_GimmickRura_C_OnDebugCheck");
static_assert(sizeof(BP_GimmickRura_C_OnDebugCheck) == 0x000001, "Wrong size on BP_GimmickRura_C_OnDebugCheck");
static_assert(offsetof(BP_GimmickRura_C_OnDebugCheck, InFail) == 0x000000, "Member 'BP_GimmickRura_C_OnDebugCheck::InFail' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_GimmickRura_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.OnStartJump
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_GimmickRura_C_OnStartJump final
{
public:
	EJackRuraPurpose                              InPurpose;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InJumpTag;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GimmickRura_C_OnStartJump) == 0x000008, "Wrong alignment on BP_GimmickRura_C_OnStartJump");
static_assert(sizeof(BP_GimmickRura_C_OnStartJump) == 0x000010, "Wrong size on BP_GimmickRura_C_OnStartJump");
static_assert(offsetof(BP_GimmickRura_C_OnStartJump, InPurpose) == 0x000000, "Member 'BP_GimmickRura_C_OnStartJump::InPurpose' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_OnStartJump, InJumpTag) == 0x000008, "Member 'BP_GimmickRura_C_OnStartJump::InJumpTag' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.ResetPlayerMovementDefault
// 0x0020 (0x0020 - 0x0000)
struct BP_GimmickRura_C_ResetPlayerMovementDefault final
{
public:
	class AJackCharacter*                         CallFunc_GetJackPlayerCharacter_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackPlayableMovementComponent*         K2Node_DynamicCast_AsJack_Playable_Movement_Component; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickRura_C_ResetPlayerMovementDefault) == 0x000008, "Wrong alignment on BP_GimmickRura_C_ResetPlayerMovementDefault");
static_assert(sizeof(BP_GimmickRura_C_ResetPlayerMovementDefault) == 0x000020, "Wrong size on BP_GimmickRura_C_ResetPlayerMovementDefault");
static_assert(offsetof(BP_GimmickRura_C_ResetPlayerMovementDefault, CallFunc_GetJackPlayerCharacter_ReturnValue) == 0x000000, "Member 'BP_GimmickRura_C_ResetPlayerMovementDefault::CallFunc_GetJackPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ResetPlayerMovementDefault, CallFunc_GetMovementComponent_ReturnValue) == 0x000008, "Member 'BP_GimmickRura_C_ResetPlayerMovementDefault::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ResetPlayerMovementDefault, K2Node_DynamicCast_AsJack_Playable_Movement_Component) == 0x000010, "Member 'BP_GimmickRura_C_ResetPlayerMovementDefault::K2Node_DynamicCast_AsJack_Playable_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_ResetPlayerMovementDefault, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GimmickRura_C_ResetPlayerMovementDefault::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_GimmickRura.BP_GimmickRura_C.RuraCheck
// 0x0018 (0x0018 - 0x0000)
struct BP_GimmickRura_C_RuraCheck final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AJackRuraArea*                          K2Node_DynamicCast_AsJack_Rura_Area;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GimmickRura_C_RuraCheck) == 0x000008, "Wrong alignment on BP_GimmickRura_C_RuraCheck");
static_assert(sizeof(BP_GimmickRura_C_RuraCheck) == 0x000018, "Wrong size on BP_GimmickRura_C_RuraCheck");
static_assert(offsetof(BP_GimmickRura_C_RuraCheck, Object) == 0x000000, "Member 'BP_GimmickRura_C_RuraCheck::Object' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_RuraCheck, K2Node_DynamicCast_AsJack_Rura_Area) == 0x000008, "Member 'BP_GimmickRura_C_RuraCheck::K2Node_DynamicCast_AsJack_Rura_Area' has a wrong offset!");
static_assert(offsetof(BP_GimmickRura_C_RuraCheck, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_GimmickRura_C_RuraCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

