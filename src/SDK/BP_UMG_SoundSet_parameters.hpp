#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UMG_SoundSet

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_UMG_SoundSet.BP_UMG_SoundSet_C.ExecuteUbergraph_BP_UMG_SoundSet
// 0x0018 (0x0018 - 0x0000)
struct BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoundSet*                       CallFunc_GetSoundSet_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet) == 0x000008, "Wrong alignment on BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet");
static_assert(sizeof(BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet) == 0x000018, "Wrong size on BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet");
static_assert(offsetof(BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet, EntryPoint) == 0x000000, "Member 'BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet, CallFunc_GetSoundSet_ReturnValue) == 0x000010, "Member 'BP_UMG_SoundSet_C_ExecuteUbergraph_BP_UMG_SoundSet::CallFunc_GetSoundSet_ReturnValue' has a wrong offset!");

// Function BP_UMG_SoundSet.BP_UMG_SoundSet_C.GetEquipmentSound
// 0x0040 (0x0040 - 0x0000)
struct BP_UMG_SoundSet_C_GetEquipmentSound final
{
public:
	EJackItem_EquipmentSE                         InEquipmentSEType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_EquipmentSE                         Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable2;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoundSet*                       CallFunc_GetSoundSet_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UMG_SoundSet_C_GetEquipmentSound) == 0x000008, "Wrong alignment on BP_UMG_SoundSet_C_GetEquipmentSound");
static_assert(sizeof(BP_UMG_SoundSet_C_GetEquipmentSound) == 0x000040, "Wrong size on BP_UMG_SoundSet_C_GetEquipmentSound");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, InEquipmentSEType) == 0x000000, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::InEquipmentSEType' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, ReturnValue) == 0x000008, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, Temp_byte_Variable) == 0x000010, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, Temp_object_Variable) == 0x000018, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, Temp_object_Variable2) == 0x000020, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, CallFunc_GetUMGManager_ReturnValue) == 0x000028, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, CallFunc_GetSoundSet_ReturnValue) == 0x000030, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::CallFunc_GetSoundSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetEquipmentSound, K2Node_Select_Default) == 0x000038, "Member 'BP_UMG_SoundSet_C_GetEquipmentSound::K2Node_Select_Default' has a wrong offset!");

// Function BP_UMG_SoundSet.BP_UMG_SoundSet_C.GetUISoundById
// 0x0048 (0x0048 - 0x0000)
struct BP_UMG_SoundSet_C_GetUISoundById final
{
public:
	class FName                                   SoundId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ret;                                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageSoundTagDict               CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UMG_SoundSet_C_GetUISoundById) == 0x000008, "Wrong alignment on BP_UMG_SoundSet_C_GetUISoundById");
static_assert(sizeof(BP_UMG_SoundSet_C_GetUISoundById) == 0x000048, "Wrong size on BP_UMG_SoundSet_C_GetUISoundById");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, SoundId) == 0x000000, "Member 'BP_UMG_SoundSet_C_GetUISoundById::SoundId' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, ReturnValue) == 0x000008, "Member 'BP_UMG_SoundSet_C_GetUISoundById::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, Ret) == 0x000010, "Member 'BP_UMG_SoundSet_C_GetUISoundById::Ret' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'BP_UMG_SoundSet_C_GetUISoundById::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_UMG_SoundSet_C_GetUISoundById::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_UMG_SoundSet_C_GetUISoundById::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_BooleanAND_ReturnValue) == 0x00003D, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00003E, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UMG_SoundSet_C_GetUISoundById, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_UMG_SoundSet_C_GetUISoundById::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
