#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_List_014_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.ExecuteUbergraph_WBP_Menu_Battle_List_014_modern
// 0x0090 (0x0090 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName EventName, class UJackUMGItemBase* InItemBase)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InListOffset)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       K2Node_CustomEvent_InItemBase;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InListOffset;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetJoutaiMiruListOffset_ReturnValue;      // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxJoutaiIjouNumber_ReturnValue;       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern) == 0x000090, "Wrong size on WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CustomEvent_EventTag) == 0x000038, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_SwitchName_CmpSuccess) == 0x000040, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CustomEvent_EventName) == 0x000048, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CustomEvent_InItemBase) == 0x000050, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CustomEvent_InItemBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_SwitchName2_CmpSuccess) == 0x000058, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000060, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_CustomEvent_InListOffset) == 0x000068, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_CustomEvent_InListOffset' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, CallFunc_GetJoutaiMiruListOffset_ReturnValue) == 0x00006C, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::CallFunc_GetJoutaiMiruListOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, CallFunc_GetAccessorMembers_ReturnValue) == 0x000070, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, CallFunc_GetMaxJoutaiIjouNumber_ReturnValue) == 0x000078, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::CallFunc_GetMaxJoutaiIjouNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_Menu_Battle_List_014_modern_C_ExecuteUbergraph_WBP_Menu_Battle_List_014_modern::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.CustomEvent_1
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_CustomEvent_1 final
{
public:
	int32                                         InListOffset;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_1) == 0x000004, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_CustomEvent_1");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_1) == 0x000004, "Wrong size on WBP_Menu_Battle_List_014_modern_C_CustomEvent_1");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_1, InListOffset) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_CustomEvent_1::InListOffset' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.OnItemListControl
// 0x0010 (0x0010 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_OnItemListControl final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       InItemBase;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_OnItemListControl) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_OnItemListControl");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_OnItemListControl) == 0x000010, "Wrong size on WBP_Menu_Battle_List_014_modern_C_OnItemListControl");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_OnItemListControl, EventName) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_OnItemListControl::EventName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_OnItemListControl, InItemBase) == 0x000008, "Member 'WBP_Menu_Battle_List_014_modern_C_OnItemListControl::InItemBase' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Menu_Battle_List_014_modern_C_CustomEvent_0 final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_0) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_CustomEvent_0");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_0) == 0x000008, "Wrong size on WBP_Menu_Battle_List_014_modern_C_CustomEvent_0");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_CustomEvent_0, EventTag) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_CustomEvent_0::EventTag' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.ResetWindow
// 0x0038 (0x0038 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_ResetWindow final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_SetFaceAndName_FaceTexture;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                CallFunc_SetFaceAndName_CharacterType;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetFaceAndName_Valid;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetJoutaiIjouParts_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGItemBase*                       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_ResetWindow) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_ResetWindow");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_ResetWindow) == 0x000038, "Wrong size on WBP_Menu_Battle_List_014_modern_C_ResetWindow");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_SetFaceAndName_FaceTexture) == 0x000008, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_SetFaceAndName_FaceTexture' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_SetFaceAndName_CharacterType) == 0x000010, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_SetFaceAndName_CharacterType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_SetFaceAndName_Valid) == 0x000011, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_SetFaceAndName_Valid' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_SetJoutaiIjouParts_ReturnValue) == 0x000012, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_SetJoutaiIjouParts_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_ResetWindow, CallFunc_GetAccessorMembers_ReturnValue) == 0x000030, "Member 'WBP_Menu_Battle_List_014_modern_C_ResetWindow::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.SetFaceAndName
// 0x0060 (0x0060 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_SetFaceAndName final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Parts_000_modern_C*           Parts000;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             FaceTexture;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                CharacterType;                                     // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue2;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGJoutaiMiruMember               CallFunc_Array_Get_Item;                           // 0x0030(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetCharacterFaceIconFromType_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_SetFaceAndName");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName) == 0x000060, "Wrong size on WBP_Menu_Battle_List_014_modern_C_SetFaceAndName");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, InIndex) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::InIndex' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, Parts000) == 0x000008, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::Parts000' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, FaceTexture) == 0x000010, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::FaceTexture' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CharacterType) == 0x000018, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CharacterType' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, Valid) == 0x000019, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::Valid' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_GetAccessorMembers_ReturnValue) == 0x000020, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_GetAccessorMembers_ReturnValue2) == 0x000028, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_GetAccessorMembers_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetFaceAndName, CallFunc_GetCharacterFaceIconFromType_ReturnValue) == 0x000058, "Member 'WBP_Menu_Battle_List_014_modern_C_SetFaceAndName::CallFunc_GetCharacterFaceIconFromType_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.SetOddEffectIcon
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon final
{
public:
	TArray<class UJackUMGItemBase*>               ItemBase;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGItemBase*                       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Parts_063_modern_C*           K2Node_DynamicCast_AsWBP_Menu_Parts_063_Modern;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDataIndex_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon) == 0x000040, "Wrong size on WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, ItemBase) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::ItemBase' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, K2Node_DynamicCast_AsWBP_Menu_Parts_063_Modern) == 0x000028, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::K2Node_DynamicCast_AsWBP_Menu_Parts_063_Modern' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, CallFunc_GetDataIndex_ReturnValue) == 0x000034, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::CallFunc_GetDataIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_Menu_Battle_List_014_modern_C_SetOddEffectIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Menu_Battle_List_014_modern.WBP_Menu_Battle_List_014_modern_C.SetDiscription
// 0x0020 (0x0020 - 0x0000)
struct WBP_Menu_Battle_List_014_modern_C_SetDiscription final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOddEffectSetumei_ReturnValue;          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Battle_List_014_modern_C_SetDiscription) == 0x000008, "Wrong alignment on WBP_Menu_Battle_List_014_modern_C_SetDiscription");
static_assert(sizeof(WBP_Menu_Battle_List_014_modern_C_SetDiscription) == 0x000020, "Wrong size on WBP_Menu_Battle_List_014_modern_C_SetDiscription");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetDiscription, InName) == 0x000000, "Member 'WBP_Menu_Battle_List_014_modern_C_SetDiscription::InName' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetDiscription, CallFunc_GetAccessorMembers_ReturnValue) == 0x000008, "Member 'WBP_Menu_Battle_List_014_modern_C_SetDiscription::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Battle_List_014_modern_C_SetDiscription, CallFunc_GetOddEffectSetumei_ReturnValue) == 0x000010, "Member 'WBP_Menu_Battle_List_014_modern_C_SetDiscription::CallFunc_GetOddEffectSetumei_ReturnValue' has a wrong offset!");

}

