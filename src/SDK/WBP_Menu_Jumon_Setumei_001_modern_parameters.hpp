#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Jumon_Setumei_001_modern

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Jumon_Setumei_001_modern.WBP_Menu_Jumon_Setumei_001_modern_C.ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern
// 0x0020 (0x0020 - 0x0000)
struct WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern) == 0x000008, "Wrong alignment on WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern");
static_assert(sizeof(WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern) == 0x000020, "Wrong size on WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_ExecuteUbergraph_WBP_Menu_Jumon_Setumei_001_modern::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_Menu_Jumon_Setumei_001_modern.WBP_Menu_Jumon_Setumei_001_modern_C.SetShopIconVisibility
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility final
{
public:
	bool                                          Visibility_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility) == 0x000008, "Wrong alignment on WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility");
static_assert(sizeof(WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility) == 0x000010, "Wrong size on WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility, Visibility_0) == 0x000000, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility::Visibility_0' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility, Target) == 0x000008, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetShopIconVisibility::Target' has a wrong offset!");

// Function WBP_Menu_Jumon_Setumei_001_modern.WBP_Menu_Jumon_Setumei_001_modern_C.SetSetumei
// 0x0078 (0x0078 - 0x0000)
struct WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei final
{
public:
	class UJackUMGAccessorSaveDataInRura*         RuraData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         VisibleIconCount;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  FlagArray;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item2;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei) == 0x000008, "Wrong alignment on WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei");
static_assert(sizeof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei) == 0x000078, "Wrong size on WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, RuraData) == 0x000000, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::RuraData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, VisibleIconCount) == 0x000008, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::VisibleIconCount' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, FlagArray) == 0x000010, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::FlagArray' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, Temp_byte_Variable) == 0x000020, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, K2Node_MakeArray_Array) == 0x000028, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, Temp_bool_Variable) == 0x00003C, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, Temp_byte_Variable2) == 0x000050, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Array_Get_Item) == 0x000051, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, K2Node_Select_Default) == 0x000052, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Add_IntInt_ReturnValue2) == 0x000054, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Array_Get_Item2) == 0x000058, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000068, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'WBP_Menu_Jumon_Setumei_001_modern_C_SetSetumei::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}
