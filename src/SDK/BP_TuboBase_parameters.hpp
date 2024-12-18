#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TuboBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// DelegateFunction BP_TuboBase.BP_TuboBase_C.ComponentFractureSignature__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_TuboBase_C_ComponentFractureSignature__DelegateSignature final
{
public:
	struct FVector                                bpp__HitPoint__pf;                                 // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                bpp__HitDirection__pf;                             // 0x000C(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_ComponentFractureSignature__DelegateSignature) == 0x000004, "Wrong alignment on BP_TuboBase_C_ComponentFractureSignature__DelegateSignature");
static_assert(sizeof(BP_TuboBase_C_ComponentFractureSignature__DelegateSignature) == 0x000018, "Wrong size on BP_TuboBase_C_ComponentFractureSignature__DelegateSignature");
static_assert(offsetof(BP_TuboBase_C_ComponentFractureSignature__DelegateSignature, bpp__HitPoint__pf) == 0x000000, "Member 'BP_TuboBase_C_ComponentFractureSignature__DelegateSignature::bpp__HitPoint__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_ComponentFractureSignature__DelegateSignature, bpp__HitDirection__pf) == 0x00000C, "Member 'BP_TuboBase_C_ComponentFractureSignature__DelegateSignature::bpp__HitDirection__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    bpp__OverlappedComponent__pf;                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 bpp__OtherActor__pf;                               // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    bpp__OtherComp__pf;                                // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         bpp__OtherBodyIndex__pf;                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bpp__bFromSweep__pf;                               // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             bpp__SweepResult__pf__const;                       // 0x0020(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__OverlappedComponent__pf) == 0x000000, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__OverlappedComponent__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__OtherActor__pf) == 0x000008, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__OtherActor__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__OtherComp__pf) == 0x000010, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__OtherComp__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__OtherBodyIndex__pf) == 0x000018, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__OtherBodyIndex__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__bFromSweep__pf) == 0x00001C, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__bFromSweep__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature, bpp__SweepResult__pf__const) == 0x000020, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_243_ComponentBeginOverlapSignature__DelegateSignature::bpp__SweepResult__pf__const' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    bpp__OverlappedComponent__pf;                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 bpp__OtherActor__pf;                               // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    bpp__OtherComp__pf;                                // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         bpp__OtherBodyIndex__pf;                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature, bpp__OverlappedComponent__pf) == 0x000000, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature::bpp__OverlappedComponent__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature, bpp__OtherActor__pf) == 0x000008, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature::bpp__OtherActor__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature, bpp__OtherComp__pf) == 0x000010, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature::bpp__OtherComp__pf' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature, bpp__OtherBodyIndex__pf) == 0x000018, "Member 'BP_TuboBase_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature::bpp__OtherBodyIndex__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature final
{
public:
	class AActor*                                 bpp__OtherActor__pf;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature");
static_assert(sizeof(BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature) == 0x000008, "Wrong size on BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature");
static_assert(offsetof(BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature, bpp__OtherActor__pf) == 0x000000, "Member 'BP_TuboBase_C_BndEvt__JackInteractiveActor_K2Node_ComponentBoundEvent_131_ComponentInteractSignature__DelegateSignature::bpp__OtherActor__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.ExecuteUbergraph_BP_TuboBase_0
// 0x0004 (0x0004 - 0x0000)
struct BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0 final
{
public:
	int32                                         bpp__EntryPoint__pf;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0) == 0x000004, "Wrong alignment on BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0");
static_assert(sizeof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0) == 0x000004, "Wrong size on BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0");
static_assert(offsetof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0, bpp__EntryPoint__pf) == 0x000000, "Member 'BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_0::bpp__EntryPoint__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.ExecuteUbergraph_BP_TuboBase_5
// 0x0004 (0x0004 - 0x0000)
struct BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5 final
{
public:
	int32                                         bpp__EntryPoint__pf;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5) == 0x000004, "Wrong alignment on BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5");
static_assert(sizeof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5) == 0x000004, "Wrong size on BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5");
static_assert(offsetof(BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5, bpp__EntryPoint__pf) == 0x000000, "Member 'BP_TuboBase_C_ExecuteUbergraph_BP_TuboBase_5::bpp__EntryPoint__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.GetCenterLocation
// 0x000C (0x000C - 0x0000)
struct BP_TuboBase_C_GetCenterLocation final
{
public:
	struct FVector                                bpp__CenterLocation__pf;                           // 0x0000(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_GetCenterLocation) == 0x000004, "Wrong alignment on BP_TuboBase_C_GetCenterLocation");
static_assert(sizeof(BP_TuboBase_C_GetCenterLocation) == 0x00000C, "Wrong size on BP_TuboBase_C_GetCenterLocation");
static_assert(offsetof(BP_TuboBase_C_GetCenterLocation, bpp__CenterLocation__pf) == 0x000000, "Member 'BP_TuboBase_C_GetCenterLocation::bpp__CenterLocation__pf' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.OnComponentFracture_Event_0
// 0x0018 (0x0018 - 0x0000)
struct BP_TuboBase_C_OnComponentFracture_Event_0 final
{
public:
	struct FVector                                bpp__HitPoint__pf__const;                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                bpp__HitDirection__pf__const;                      // 0x000C(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_OnComponentFracture_Event_0) == 0x000004, "Wrong alignment on BP_TuboBase_C_OnComponentFracture_Event_0");
static_assert(sizeof(BP_TuboBase_C_OnComponentFracture_Event_0) == 0x000018, "Wrong size on BP_TuboBase_C_OnComponentFracture_Event_0");
static_assert(offsetof(BP_TuboBase_C_OnComponentFracture_Event_0, bpp__HitPoint__pf__const) == 0x000000, "Member 'BP_TuboBase_C_OnComponentFracture_Event_0::bpp__HitPoint__pf__const' has a wrong offset!");
static_assert(offsetof(BP_TuboBase_C_OnComponentFracture_Event_0, bpp__HitDirection__pf__const) == 0x00000C, "Member 'BP_TuboBase_C_OnComponentFracture_Event_0::bpp__HitDirection__pf__const' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.OnGenerateDebugInfoString
// 0x0010 (0x0010 - 0x0000)
struct BP_TuboBase_C_OnGenerateDebugInfoString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_OnGenerateDebugInfoString) == 0x000008, "Wrong alignment on BP_TuboBase_C_OnGenerateDebugInfoString");
static_assert(sizeof(BP_TuboBase_C_OnGenerateDebugInfoString) == 0x000010, "Wrong size on BP_TuboBase_C_OnGenerateDebugInfoString");
static_assert(offsetof(BP_TuboBase_C_OnGenerateDebugInfoString, ReturnValue) == 0x000000, "Member 'BP_TuboBase_C_OnGenerateDebugInfoString::ReturnValue' has a wrong offset!");

// Function BP_TuboBase.BP_TuboBase_C.PlayEffectBreak
// 0x000C (0x000C - 0x0000)
struct BP_TuboBase_C_PlayEffectBreak final
{
public:
	struct FVector                                bpp__Location__pf;                                 // 0x0000(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_TuboBase_C_PlayEffectBreak) == 0x000004, "Wrong alignment on BP_TuboBase_C_PlayEffectBreak");
static_assert(sizeof(BP_TuboBase_C_PlayEffectBreak) == 0x00000C, "Wrong size on BP_TuboBase_C_PlayEffectBreak");
static_assert(offsetof(BP_TuboBase_C_PlayEffectBreak, bpp__Location__pf) == 0x000000, "Member 'BP_TuboBase_C_PlayEffectBreak::bpp__Location__pf' has a wrong offset!");

}

