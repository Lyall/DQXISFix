#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Map_Text_001

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.ExecuteUbergraph_WBP_Map_Text_001
// 0x000C (0x000C - 0x0000)
struct WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Event_Size;                                 // 0x0004(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001) == 0x000004, "Wrong alignment on WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001");
static_assert(sizeof(WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001) == 0x00000C, "Wrong size on WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001");
static_assert(offsetof(WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001, EntryPoint) == 0x000000, "Member 'WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001, K2Node_Event_Size) == 0x000004, "Member 'WBP_Map_Text_001_C_ExecuteUbergraph_WBP_Map_Text_001::K2Node_Event_Size' has a wrong offset!");

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.UpdateItemSize
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Text_001_C_UpdateItemSize final
{
public:
	struct FVector2D                              Size;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Text_001_C_UpdateItemSize) == 0x000004, "Wrong alignment on WBP_Map_Text_001_C_UpdateItemSize");
static_assert(sizeof(WBP_Map_Text_001_C_UpdateItemSize) == 0x000008, "Wrong size on WBP_Map_Text_001_C_UpdateItemSize");
static_assert(offsetof(WBP_Map_Text_001_C_UpdateItemSize, Size) == 0x000000, "Member 'WBP_Map_Text_001_C_UpdateItemSize::Size' has a wrong offset!");

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.SetRotateMaterialTexture
// 0x0018 (0x0018 - 0x0000)
struct WBP_Map_Text_001_C_SetRotateMaterialTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Map_Text_001_C_SetRotateMaterialTexture) == 0x000008, "Wrong alignment on WBP_Map_Text_001_C_SetRotateMaterialTexture");
static_assert(sizeof(WBP_Map_Text_001_C_SetRotateMaterialTexture) == 0x000018, "Wrong size on WBP_Map_Text_001_C_SetRotateMaterialTexture");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialTexture, Texture) == 0x000000, "Member 'WBP_Map_Text_001_C_SetRotateMaterialTexture::Texture' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialTexture, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_Map_Text_001_C_SetRotateMaterialTexture::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialTexture, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_Map_Text_001_C_SetRotateMaterialTexture::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.SetRotateMaterialAngle
// 0x0018 (0x0018 - 0x0000)
struct WBP_Map_Text_001_C_SetRotateMaterialAngle final
{
public:
	float                                         Angle;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Map_Text_001_C_SetRotateMaterialAngle) == 0x000008, "Wrong alignment on WBP_Map_Text_001_C_SetRotateMaterialAngle");
static_assert(sizeof(WBP_Map_Text_001_C_SetRotateMaterialAngle) == 0x000018, "Wrong size on WBP_Map_Text_001_C_SetRotateMaterialAngle");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialAngle, Angle) == 0x000000, "Member 'WBP_Map_Text_001_C_SetRotateMaterialAngle::Angle' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialAngle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_Map_Text_001_C_SetRotateMaterialAngle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_SetRotateMaterialAngle, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_Map_Text_001_C_SetRotateMaterialAngle::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.GetImageTexture
// 0x0020 (0x0020 - 0x0000)
struct WBP_Map_Text_001_C_GetImageTexture final
{
public:
	class UTexture2D*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Map_Text_001_C_GetImageTexture) == 0x000008, "Wrong alignment on WBP_Map_Text_001_C_GetImageTexture");
static_assert(sizeof(WBP_Map_Text_001_C_GetImageTexture) == 0x000020, "Wrong size on WBP_Map_Text_001_C_GetImageTexture");
static_assert(offsetof(WBP_Map_Text_001_C_GetImageTexture, ReturnValue) == 0x000000, "Member 'WBP_Map_Text_001_C_GetImageTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_GetImageTexture, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'WBP_Map_Text_001_C_GetImageTexture::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_GetImageTexture, K2Node_DynamicCast_AsTexture_2D) == 0x000010, "Member 'WBP_Map_Text_001_C_GetImageTexture::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Map_Text_001_C_GetImageTexture, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Map_Text_001_C_GetImageTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Map_Text_001.WBP_Map_Text_001_C.GetAngle
// 0x0004 (0x0004 - 0x0000)
struct WBP_Map_Text_001_C_GetAngle final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Text_001_C_GetAngle) == 0x000004, "Wrong alignment on WBP_Map_Text_001_C_GetAngle");
static_assert(sizeof(WBP_Map_Text_001_C_GetAngle) == 0x000004, "Wrong size on WBP_Map_Text_001_C_GetAngle");
static_assert(offsetof(WBP_Map_Text_001_C_GetAngle, ReturnValue) == 0x000000, "Member 'WBP_Map_Text_001_C_GetAngle::ReturnValue' has a wrong offset!");

}

