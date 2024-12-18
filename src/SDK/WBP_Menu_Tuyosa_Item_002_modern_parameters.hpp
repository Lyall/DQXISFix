#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_Item_002_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern
// 0x0110 (0x0110 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_NotifyTag;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemData*                       K2Node_Event_InItemData;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_Object;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Value;                                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                K2Node_CustomEvent_InCharType;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetCharacterFaceIconFromType_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGItemContainer                  K2Node_CustomEvent_ItemContainer;                  // 0x0038(0x0050)()
	bool                                          CallFunc_SetOddEffectId_Debuff;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMemberDataInTuyosa*     K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FJackUMGItemContainer& ItemContainer)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_IntInt_ReturnValue;               // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDecMenuText_ReturnValue;               // 0x00B8(0x0018)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackCharacter                                CallFunc_GetCharacterType_ReturnValue;             // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDecMenuText_ReturnValue2;              // 0x00D8(0x0018)()
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern) == 0x000110, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_Event_NotifyTag) == 0x000008, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_Event_NotifyTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_Event_InItemData) == 0x000010, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_Event_InItemData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_Event_Object) == 0x000018, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_Event_Object' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_Event_Value) == 0x000020, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_CustomEvent_InCharType) == 0x000024, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_CustomEvent_InCharType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_Conv_IntToBool_ReturnValue) == 0x000025, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_SwitchName_CmpSuccess) == 0x000026, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_GetAccessorMembers_ReturnValue) == 0x000028, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_GetCharacterFaceIconFromType_ReturnValue) == 0x000030, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_GetCharacterFaceIconFromType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_CustomEvent_ItemContainer) == 0x000038, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_CustomEvent_ItemContainer' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_SetOddEffectId_Debuff) == 0x000088, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_SetOddEffectId_Debuff' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa) == 0x000090, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_DynamicCast_AsJack_UMGAccessor_Member_Data_in_Tuyosa' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_InRange_IntInt_ReturnValue) == 0x0000B4, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_InRange_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_GetDecMenuText_ReturnValue) == 0x0000B8, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_GetDecMenuText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D0, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_GetCharacterType_ReturnValue) == 0x0000D1, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_GetCharacterType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_SwitchName2_CmpSuccess) == 0x0000D2, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000D3, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, Temp_byte_Variable) == 0x0000D4, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, CallFunc_GetDecMenuText_ReturnValue2) == 0x0000D8, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::CallFunc_GetDecMenuText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, Temp_byte_Variable2) == 0x0000F0, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_MakeArray_Array) == 0x0000F8, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, Temp_bool_Variable) == 0x000108, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern, K2Node_Select_Default) == 0x000109, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_ExecuteUbergraph_WBP_Menu_Tuyosa_Item_002_modern::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.CustomEvent_0
// 0x0050 (0x0050 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0 final
{
public:
	struct FJackUMGItemContainer                  ItemContainer;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0) == 0x000050, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0, ItemContainer) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_CustomEvent_0::ItemContainer' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.SetFaceIcon
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon final
{
public:
	EJackCharacter                                InCharType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon) == 0x000001, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon) == 0x000001, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon, InCharType) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetFaceIcon::InCharType' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.NotificationItemBase
// 0x0020 (0x0020 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase final
{
public:
	class FName                                   NotifyTag;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemData*                       InItemData;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Object;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase) == 0x000020, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase, NotifyTag) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase::NotifyTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase, InItemData) == 0x000008, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase::InItemData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase, Object) == 0x000010, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase::Object' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase, Value) == 0x000018, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_NotificationItemBase::Value' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.SetVisibilityParts
// 0x000A (0x000A - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts final
{
public:
	bool                                          InBuffVisibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InNumberVisibility;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts) == 0x000001, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts) == 0x00000A, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, InBuffVisibility) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::InBuffVisibility' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, InNumberVisibility) == 0x000001, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::InNumberVisibility' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_byte_Variable) == 0x000002, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_byte_Variable2) == 0x000003, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_bool_Variable) == 0x000004, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_byte_Variable3) == 0x000005, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_byte_Variable4) == 0x000006, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, K2Node_Select_Default) == 0x000007, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, Temp_bool_Variable2) == 0x000008, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts, K2Node_Select2_Default) == 0x000009, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetVisibilityParts::K2Node_Select2_Default' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.SetStatusDeadColor
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor final
{
public:
	EJackCharacter                                InCharType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          TextFontColor;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUMGAliveCharacter_bIsAlive;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGTextColorSet                          Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor) == 0x000001, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor) == 0x000008, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, InCharType) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::InCharType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, TextFontColor) == 0x000001, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::TextFontColor' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, Temp_bool_Variable) == 0x000002, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, CallFunc_IsUMGAliveCharacter_bIsAlive) == 0x000004, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::CallFunc_IsUMGAliveCharacter_bIsAlive' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, Temp_byte_Variable) == 0x000005, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, Temp_byte_Variable2) == 0x000006, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor, K2Node_Select_Default) == 0x000007, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusDeadColor::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.SetStatusRateColor
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor final
{
public:
	float                                         HPRate;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor) == 0x000004, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor) == 0x000004, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor, HPRate) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetStatusRateColor::HPRate' has a wrong offset!");

// Function WBP_Menu_Tuyosa_Item_002_modern.WBP_Menu_Tuyosa_Item_002_modern_C.SetOddEffectId
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId final
{
public:
	class FName                                   InOddEffectId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetOddEffectId_Debuff;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId) == 0x000008, "Wrong alignment on WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId");
static_assert(sizeof(WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId) == 0x000010, "Wrong size on WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId, InOddEffectId) == 0x000000, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId::InOddEffectId' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId, CallFunc_SetOddEffectId_Debuff) == 0x000008, "Member 'WBP_Menu_Tuyosa_Item_002_modern_C_SetOddEffectId::CallFunc_SetOddEffectId_Debuff' has a wrong offset!");

}

