#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsDestructibleBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    bpp__HitComponent__pf;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 bpp__OtherActor__pf;                               // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    bpp__OtherComp__pf;                                // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                bpp__NormalImpulse__pf;                            // 0x0018(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             bpp__Hit__pf__const;                               // 0x0028(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature, bpp__HitComponent__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature::bpp__HitComponent__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature, bpp__OtherActor__pf) == 0x000008, "Member 'BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature::bpp__OtherActor__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature, bpp__OtherComp__pf) == 0x000010, "Member 'BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature::bpp__OtherComp__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature, bpp__NormalImpulse__pf) == 0x000018, "Member 'BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature::bpp__NormalImpulse__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature, bpp__Hit__pf__const) == 0x000028, "Member 'BP_PhysicsDestructibleBase_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_73_ComponentHitSignature__DelegateSignature::bpp__Hit__pf__const' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.GetSoundVolumeFromVelocity
// 0x0004 (0x0004 - 0x0000)
struct BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity final
{
public:
	float                                         bpp__Volume__pf;                                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity) == 0x000004, "Wrong alignment on BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity) == 0x000004, "Wrong size on BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity, bpp__Volume__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_GetSoundVolumeFromVelocity::bpp__Volume__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.GetVelocityFromPlayer
// 0x0020 (0x0020 - 0x0000)
struct BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer final
{
public:
	float                                         bpp__VelocityRate__pf;                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 bpp__InputPin__pf;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer) == 0x000020, "Wrong size on BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer, bpp__VelocityRate__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer::bpp__VelocityRate__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer, bpp__InputPin__pf) == 0x000008, "Member 'BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer::bpp__InputPin__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer, ReturnValue) == 0x000010, "Member 'BP_PhysicsDestructibleBase_C_GetVelocityFromPlayer::ReturnValue' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.IsCanPlaySound
// 0x0010 (0x0010 - 0x0000)
struct BP_PhysicsDestructibleBase_C_IsCanPlaySound final
{
public:
	struct FVector                                bpp__ImpulsePoint__pf;                             // 0x0000(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bpp__Ok__pf;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_IsCanPlaySound) == 0x000004, "Wrong alignment on BP_PhysicsDestructibleBase_C_IsCanPlaySound");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_IsCanPlaySound) == 0x000010, "Wrong size on BP_PhysicsDestructibleBase_C_IsCanPlaySound");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_IsCanPlaySound, bpp__ImpulsePoint__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_IsCanPlaySound::bpp__ImpulsePoint__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_IsCanPlaySound, bpp__Ok__pf) == 0x00000C, "Member 'BP_PhysicsDestructibleBase_C_IsCanPlaySound::bpp__Ok__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.LimitMoveVelocity
// 0x0018 (0x0018 - 0x0000)
struct BP_PhysicsDestructibleBase_C_LimitMoveVelocity final
{
public:
	struct FVector                                bpp__Velocity__pf;                                 // 0x0000(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                bpp__ClampVelocity__pf;                            // 0x000C(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_LimitMoveVelocity) == 0x000004, "Wrong alignment on BP_PhysicsDestructibleBase_C_LimitMoveVelocity");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_LimitMoveVelocity) == 0x000018, "Wrong size on BP_PhysicsDestructibleBase_C_LimitMoveVelocity");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_LimitMoveVelocity, bpp__Velocity__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_LimitMoveVelocity::bpp__Velocity__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_LimitMoveVelocity, bpp__ClampVelocity__pf) == 0x00000C, "Member 'BP_PhysicsDestructibleBase_C_LimitMoveVelocity::bpp__ClampVelocity__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.LimitPhysicsVelocity
// 0x0008 (0x0008 - 0x0000)
struct BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity final
{
public:
	class UPrimitiveComponent*                    bpp__Primitive__pf;                                // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity) == 0x000008, "Wrong size on BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity, bpp__Primitive__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_LimitPhysicsVelocity::bpp__Primitive__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.OnHitPhysics
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PhysicsDestructibleBase_C_OnHitPhysics final
{
public:
	class UObject*                                bpp__OtherActor__pf;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                bpp__NormalxImpulse__pfT;                          // 0x0008(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             bpp__Hit__pf;                                      // 0x0018(0x0088)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_OnHitPhysics) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_OnHitPhysics");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_OnHitPhysics) == 0x0000A0, "Wrong size on BP_PhysicsDestructibleBase_C_OnHitPhysics");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_OnHitPhysics, bpp__OtherActor__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_OnHitPhysics::bpp__OtherActor__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_OnHitPhysics, bpp__NormalxImpulse__pfT) == 0x000008, "Member 'BP_PhysicsDestructibleBase_C_OnHitPhysics::bpp__NormalxImpulse__pfT' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_OnHitPhysics, bpp__Hit__pf) == 0x000018, "Member 'BP_PhysicsDestructibleBase_C_OnHitPhysics::bpp__Hit__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.OnTouchCollide
// 0x0088 (0x0088 - 0x0000)
struct BP_PhysicsDestructibleBase_C_OnTouchCollide final
{
public:
	struct FHitResult                             bpp__HitResult__pf;                                // 0x0000(0x0088)(Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_OnTouchCollide) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_OnTouchCollide");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_OnTouchCollide) == 0x000088, "Wrong size on BP_PhysicsDestructibleBase_C_OnTouchCollide");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_OnTouchCollide, bpp__HitResult__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_OnTouchCollide::bpp__HitResult__pf' has a wrong offset!");

// Function BP_PhysicsDestructibleBase.BP_PhysicsDestructibleBase_C.PlaySoundLocationNotNull
// 0x0010 (0x0010 - 0x0000)
struct BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull final
{
public:
	class USoundBase*                             bpp__Sound__pf;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         bpp__Volume__pf;                                   // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull) == 0x000008, "Wrong alignment on BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull");
static_assert(sizeof(BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull) == 0x000010, "Wrong size on BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull, bpp__Sound__pf) == 0x000000, "Member 'BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull::bpp__Sound__pf' has a wrong offset!");
static_assert(offsetof(BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull, bpp__Volume__pf) == 0x000008, "Member 'BP_PhysicsDestructibleBase_C_PlaySoundLocationNotNull::bpp__Volume__pf' has a wrong offset!");

}

