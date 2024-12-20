#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_List_006_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Tuyosa_List_006_modern.WBP_Menu_Tuyosa_List_006_modern_C.ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UJackUMGItemData*>               K2Node_CustomEvent_ItemDataList;                   // 0x0038(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UJackUMGItemData*                       CallFunc_Array_Get_Item2;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGItemContainer                  CallFunc_GetItemContainer_ReturnValue;             // 0x0058(0x0050)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMemberDataInTuyosa*     K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCanvasPanel*>                   K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	class UWBP_Menu_Tuyosa_Status_000_modern_C*   CallFunc_Create_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern");
static_assert(sizeof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern) == 0x0000F8, "Wrong size on WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_CustomEvent_EventTag) == 0x000028, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_SwitchName_CmpSuccess) == 0x000030, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_CustomEvent_ItemDataList) == 0x000038, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_CustomEvent_ItemDataList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Array_Get_Item2) == 0x000048, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Array_Length_ReturnValue2) == 0x000050, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_GetItemContainer_ReturnValue) == 0x000058, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_GetItemContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A8, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa) == 0x0000B0, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C0, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, K2Node_MakeArray_Array) == 0x0000C8, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Create_ReturnValue) == 0x0000D8, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000E0, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Less_IntInt_ReturnValue2) == 0x0000EC, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_List_006_modern::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Tuyosa_List_006_modern.WBP_Menu_Tuyosa_List_006_modern_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Tuyosa_List_006_modern_C_SetData final
{
public:
	TArray<class UJackUMGItemData*>               ItemDataList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WBP_Menu_Tuyosa_List_006_modern_C_SetData) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_List_006_modern_C_SetData");
static_assert(sizeof(WBP_Menu_Tuyosa_List_006_modern_C_SetData) == 0x000010, "Wrong size on WBP_Menu_Tuyosa_List_006_modern_C_SetData");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_SetData, ItemDataList) == 0x000000, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_SetData::ItemDataList' has a wrong offset!");

// Function WBP_Menu_Tuyosa_List_006_modern.WBP_Menu_Tuyosa_List_006_modern_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Menu_Tuyosa_List_006_modern_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

}

