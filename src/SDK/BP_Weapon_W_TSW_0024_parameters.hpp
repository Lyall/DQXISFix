#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_W_TSW_0024

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.ExecuteUbergraph_BP_Weapon_W_TSW_0024
// 0x0004 (0x0004 - 0x0000)
struct BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024) == 0x000004, "Wrong alignment on BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024");
static_assert(sizeof(BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024) == 0x000004, "Wrong size on BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024, EntryPoint) == 0x000000, "Member 'BP_Weapon_W_TSW_0024_C_ExecuteUbergraph_BP_Weapon_W_TSW_0024::EntryPoint' has a wrong offset!");

// Function BP_Weapon_W_TSW_0024.BP_Weapon_W_TSW_0024_C.ApplyMaterialParameters
// 0x0050 (0x0050 - 0x0000)
struct BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_GetWeaponMeshComponent_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackMaterialUpdaterScalar*             CallFunc_StartMaterialScalarUpdate_ReturnValue;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters) == 0x000008, "Wrong alignment on BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters");
static_assert(sizeof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters) == 0x000050, "Wrong size on BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, bEnable) == 0x000000, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::bEnable' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, Materials) == 0x000008, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::Materials' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_GetWeaponMeshComponent_ReturnValue) == 0x000020, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_GetWeaponMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, Temp_int_Variable) == 0x000028, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_GetNumMaterials_ReturnValue) == 0x00002C, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_StartMaterialScalarUpdate_ReturnValue) == 0x000040, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_StartMaterialScalarUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BP_Weapon_W_TSW_0024_C_ApplyMaterialParameters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

