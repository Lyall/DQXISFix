#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_CS_Skip_000_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern
// 0x0130 (0x0130 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_KeyDirectFlag_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue2;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue3;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_OpenMenu_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EventTag;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGAccessorSaveData*               CallFunc_GetAccessorSaveData_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue4;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InEventTag;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     K2Node_CustomEvent_InCallWidgetBase;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InObject;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName2_CmpSuccess;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventTag)>         K2Node_CreateDelegate_OutputDelegate2;             // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class UJackUMGAccessorSaveData*               CallFunc_GetAccessorSaveData_ReturnValue2;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackAudioVolume                              CallFunc_GetVoiceVolume_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue2;           // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3[0x1];                                       // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00C4(0x003C)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EJackKeys InKeyType, bool bIsPressed)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	class UJackMusicManager*                      CallFunc_GetMusicManager_ReturnValue;              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMEPlaying_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackKeys                                     K2Node_CustomEvent_InKeyType;                      // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsPressed;                     // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue3;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern) == 0x000008, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern) == 0x000130, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, EntryPoint) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_Event_Animation) == 0x000008, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000018, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_KeyDirectFlag_ReturnValue) == 0x000020, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_KeyDirectFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetUMGManager_ReturnValue2) == 0x000028, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetUMGManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000030, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetUMGManager_ReturnValue3) == 0x000038, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetUMGManager_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_OpenMenu_ReturnValue) == 0x000040, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_OpenMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_EventTag) == 0x000048, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_SwitchName_CmpSuccess) == 0x000050, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000068, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetAccessorSaveData_ReturnValue) == 0x000070, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetAccessorSaveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue) == 0x000078, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetUMGManager_ReturnValue4) == 0x000080, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetUMGManager_ReturnValue4' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_InEventTag) == 0x000088, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_InCallWidgetBase) == 0x000090, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_InObject) == 0x000098, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_InObject' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_SwitchName2_CmpSuccess) == 0x0000A0, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_SwitchName2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x0000A8, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetAccessorSaveData_ReturnValue2) == 0x0000B8, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetAccessorSaveData_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetVoiceVolume_ReturnValue) == 0x0000C0, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetVoiceVolume_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_Not_PreBool_ReturnValue2) == 0x0000C1, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_NotEqual_ByteByte_ReturnValue2) == 0x0000C2, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_NotEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_Event_MyGeometry) == 0x0000C4, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_Event_InDeltaTime) == 0x000100, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_Add_FloatFloat_ReturnValue) == 0x000104, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CreateDelegate_OutputDelegate3) == 0x000108, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_GetMusicManager_ReturnValue) == 0x000118, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_GetMusicManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_IsMEPlaying_ReturnValue) == 0x000120, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_IsMEPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_BooleanAND_ReturnValue) == 0x000121, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_InKeyType) == 0x000122, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_CustomEvent_bIsPressed) == 0x000123, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_CustomEvent_bIsPressed' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_SwitchEnum_CmpSuccess) == 0x000124, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000125, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000126, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_BooleanAND_ReturnValue2) == 0x000127, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, K2Node_SwitchEnum2_CmpSuccess) == 0x000128, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern, CallFunc_BooleanAND_ReturnValue3) == 0x000129, "Member 'WBP_Hud_CS_Skip_000_modern_C_ExecuteUbergraph_WBP_Hud_CS_Skip_000_modern::CallFunc_BooleanAND_ReturnValue3' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.KeyEventDelegate
// 0x0002 (0x0002 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate final
{
public:
	EJackKeys                                     InKeyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPressed;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate) == 0x000001, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate) == 0x000002, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate, InKeyType) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate::InKeyType' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate, bIsPressed) == 0x000001, "Member 'WBP_Hud_CS_Skip_000_modern_C_KeyEventDelegate::bIsPressed' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.NotificationEvent
// 0x0018 (0x0018 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_NotificationEvent final
{
public:
	class FName                                   InEventTag;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     InCallWidgetBase;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InObject;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_NotificationEvent) == 0x000008, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_NotificationEvent");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_NotificationEvent) == 0x000018, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_NotificationEvent");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_NotificationEvent, InEventTag) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_NotificationEvent::InEventTag' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_NotificationEvent, InCallWidgetBase) == 0x000008, "Member 'WBP_Hud_CS_Skip_000_modern_C_NotificationEvent::InCallWidgetBase' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_NotificationEvent, InObject) == 0x000010, "Member 'WBP_Hud_CS_Skip_000_modern_C_NotificationEvent::InObject' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.WidgetBPActionDelegate
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate final
{
public:
	class FName                                   EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate) == 0x000008, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate, EventTag) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_WidgetBPActionDelegate::EventTag' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.Tick
// 0x0040 (0x0040 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x003C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_Tick) == 0x000004, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_Tick");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_Tick) == 0x000040, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_Tick");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_Tick, InDeltaTime) == 0x00003C, "Member 'WBP_Hud_CS_Skip_000_modern_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.SetShowMode
// 0x0002 (0x0002 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_SetShowMode final
{
public:
	EJackUMGCutSceneSkipDialog                    NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_SetShowMode) == 0x000001, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_SetShowMode");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_SetShowMode) == 0x000002, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_SetShowMode");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_SetShowMode, NewParam) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_SetShowMode::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_SetShowMode, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_Hud_CS_Skip_000_modern_C_SetShowMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Hud_CS_Skip_000_modern.WBP_Hud_CS_Skip_000_modern_C.UpdateAutoFeedCaption
// 0x0048 (0x0048 - 0x0000)
struct WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGTextColorSet                          Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGTextColorSet                          Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable2;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorSaveData*               CallFunc_GetAccessorSaveData_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackAudioVolume                              CallFunc_GetVoiceVolume_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackUMGTextColorSet                          K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue; // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select2_Default;                            // 0x0030(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select3_Default;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption) == 0x000008, "Wrong alignment on WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption");
static_assert(sizeof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption) == 0x000048, "Wrong size on WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_bool_Variable) == 0x000000, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_byte_Variable) == 0x000001, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_byte_Variable2) == 0x000002, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_bool_Variable2) == 0x000003, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_bool_Variable3) == 0x000004, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_name_Variable) == 0x000008, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, Temp_name_Variable2) == 0x000010, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::Temp_name_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_GetUMGManager_ReturnValue) == 0x000018, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_GetAccessorSaveData_ReturnValue) == 0x000020, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_GetAccessorSaveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_GetVoiceVolume_ReturnValue) == 0x000029, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_GetVoiceVolume_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, K2Node_Select_Default) == 0x00002B, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue) == 0x00002C, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::CallFunc_GetEnableAutomaticFeedOfSpeech_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, K2Node_Select2_Default) == 0x000030, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption, K2Node_Select3_Default) == 0x000040, "Member 'WBP_Hud_CS_Skip_000_modern_C_UpdateAutoFeedCaption::K2Node_Select3_Default' has a wrong offset!");

}

