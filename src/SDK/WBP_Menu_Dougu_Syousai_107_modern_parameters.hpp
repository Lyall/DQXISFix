#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_107_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Dougu_Syousai_107_modern.WBP_Menu_Dougu_Syousai_107_modern_C.ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern
// 0x0080 (0x0080 - 0x0000)
struct WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InEventTag;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     K2Node_CustomEvent_InCallWidgetBase;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InObject;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemSyousai*                    K2Node_CustomEvent_InItemSyousaiRef;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemSyousai*                    K2Node_DynamicCast_AsJack_UMGItem_Syousai;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorItem*                   CallFunc_GetAccessorItem_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FJackUMGItemGetInfo>            CallFunc_GetDropMapList_OutMapList;                // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_GetDropMapList_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FJackUMGItemGetInfo>            CallFunc_GetDropMonsterList_OutMonsterList;        // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_GetDropMonsterList_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern) == 0x000008, "Wrong alignment on WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern");
static_assert(sizeof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern) == 0x000080, "Wrong size on WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_CustomEvent_InEventTag) == 0x000008, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_CustomEvent_InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_CustomEvent_InCallWidgetBase) == 0x000010, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_CustomEvent_InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_CustomEvent_InObject) == 0x000018, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_CustomEvent_InObject' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_CustomEvent_InItemSyousaiRef) == 0x000020, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_CustomEvent_InItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_DynamicCast_AsJack_UMGItem_Syousai) == 0x000028, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_DynamicCast_AsJack_UMGItem_Syousai' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_SwitchName_CmpSuccess) == 0x000031, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, CallFunc_GetAccessorItem_ReturnValue) == 0x000038, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::CallFunc_GetAccessorItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, CallFunc_GetDropMapList_OutMapList) == 0x000050, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::CallFunc_GetDropMapList_OutMapList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, CallFunc_GetDropMapList_ReturnValue) == 0x000060, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::CallFunc_GetDropMapList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, CallFunc_GetDropMonsterList_OutMonsterList) == 0x000068, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::CallFunc_GetDropMonsterList_OutMonsterList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern, CallFunc_GetDropMonsterList_ReturnValue) == 0x000078, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_ExecuteUbergraph_WBP_Menu_Dougu_Syousai_107_modern::CallFunc_GetDropMonsterList_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Dougu_Syousai_107_modern.WBP_Menu_Dougu_Syousai_107_modern_C.DispItemFromSyousaiRef
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef final
{
public:
	class UJackUMGItemSyousai*                    InItemSyousaiRef;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef) == 0x000008, "Wrong alignment on WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef");
static_assert(sizeof(WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef) == 0x000008, "Wrong size on WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef, InItemSyousaiRef) == 0x000000, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DispItemFromSyousaiRef::InItemSyousaiRef' has a wrong offset!");

// Function WBP_Menu_Dougu_Syousai_107_modern.WBP_Menu_Dougu_Syousai_107_modern_C.JackOnWidgetNotificationDelegate_Event_0
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0 final
{
public:
	class FName                                   InEventTag;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     InCallWidgetBase;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InObject;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0) == 0x000008, "Wrong alignment on WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0");
static_assert(sizeof(WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0) == 0x000018, "Wrong size on WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0, InEventTag) == 0x000000, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0::InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0, InCallWidgetBase) == 0x000008, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0::InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0, InObject) == 0x000010, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_JackOnWidgetNotificationDelegate_Event_0::InObject' has a wrong offset!");

// Function WBP_Menu_Dougu_Syousai_107_modern.WBP_Menu_Dougu_Syousai_107_modern_C.DrawAreaList
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList final
{
public:
	TArray<struct FJackUMGItemGetInfo>            InDropAreaList;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCanvasPanel*                           InIconListPanel;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           InTextListPanel;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                InMoreTextPanel;                                   // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsListOver;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDrawtext;                                        // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     TextPanelList;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          IsDrawIcon;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTextureRef;                                    // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         ImagePanelList;                                    // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class UJackUMGAccessorItem*                   CallFunc_GetAccessorItem_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     CallFunc_MakeTextPanelArray_OutTextPanelArray;     // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         CallFunc_MakeImagePanelArray_OutImagePanelArray;   // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_Array_Get_Item2;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class UTexture2D*                             CallFunc_GetSyousaiVisitIconTexture_ReturnValue;   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF[0x1];                                       // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item3;                          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList) == 0x000008, "Wrong alignment on WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList");
static_assert(sizeof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList) == 0x0000F8, "Wrong size on WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, InDropAreaList) == 0x000000, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::InDropAreaList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, InIconListPanel) == 0x000010, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::InIconListPanel' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, InTextListPanel) == 0x000018, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::InTextListPanel' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, InMoreTextPanel) == 0x000020, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::InMoreTextPanel' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, bIsListOver) == 0x000028, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::bIsListOver' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, IsDrawtext) == 0x000029, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::IsDrawtext' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, TextPanelList) == 0x000030, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::TextPanelList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, IsDrawIcon) == 0x000040, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::IsDrawIcon' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, IconTextureRef) == 0x000048, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::IconTextureRef' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, ImagePanelList) == 0x000050, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::ImagePanelList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_GetAccessorItem_ReturnValue) == 0x000060, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_GetAccessorItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_MakeTextPanelArray_OutTextPanelArray) == 0x000068, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_MakeTextPanelArray_OutTextPanelArray' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_MakeImagePanelArray_OutImagePanelArray) == 0x000080, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_MakeImagePanelArray_OutImagePanelArray' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_bool_Variable) == 0x000094, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_int_Variable) == 0x000098, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Array_Get_Item2) == 0x0000A8, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_GetSyousaiVisitIconTexture_ReturnValue) == 0x0000D0, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_GetSyousaiVisitIconTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_byte_Variable) == 0x0000DC, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_byte_Variable2) == 0x0000DD, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_bool_Variable2) == 0x0000DE, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Array_Get_Item3) == 0x0000E0, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Array_Get_Item3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, K2Node_Select_Default) == 0x0000E8, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000E9, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_byte_Variable3) == 0x0000EA, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, Temp_byte_Variable4) == 0x0000EB, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000EC, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList, K2Node_Select2_Default) == 0x0000F1, "Member 'WBP_Menu_Dougu_Syousai_107_modern_C_DrawAreaList::K2Node_Select2_Default' has a wrong offset!");

}
