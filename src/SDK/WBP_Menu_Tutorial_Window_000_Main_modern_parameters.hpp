#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tutorial_Window_000_Main_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.LoadingPictureEvent__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature final
{
public:
	bool                                          bIsLoading;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature) == 0x000001, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature) == 0x000001, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature, bIsLoading) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_LoadingPictureEvent__DelegateSignature::bIsLoading' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern
// 0x0170 (0x0170 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable6;                               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable7;                               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InResultCode, class UObject* InLoaddedObject, class UJackUMGAsyncLoad* InLoadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UWBP_AsyncLoadingImage_C* Sender)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable8;                               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGTabiNoKokoroePageData          K2Node_CustomEvent_PageData;                       // 0x0038(0x0050)()
	int32                                         K2Node_CustomEvent_PageMax;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F[0x1];                                       // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InResultCode;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InLoaddedObject;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAsyncLoad*                      K2Node_CustomEvent_InLoadInfo;                     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                K2Node_CustomEvent_InTextureAsset;                 // 0x00D8(0x0018)(HasGetValueTypeHash)
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00F8(0x003C)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AsyncLoadTexture_ReturnValue;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_AsyncLoadingImage_C*               K2Node_CustomEvent_Sender;                         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_155[0x3];                                      // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0158(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable4;                               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select4_Default;                            // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsRight;                       // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern) == 0x000008, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern) == 0x000170, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable) == 0x000004, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_bool_Variable) == 0x000005, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable2) == 0x000006, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable3) == 0x000007, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_bool_Variable2) == 0x000008, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable4) == 0x000009, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable5) == 0x00000A, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_bool_Variable3) == 0x00000B, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable6) == 0x00000C, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable7) == 0x00000D, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable7' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_byte_Variable8) == 0x000030, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_byte_Variable8' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_PageData) == 0x000038, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_PageData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_PageMax) == 0x000088, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_PageMax' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00008C, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00008D, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Select_Default) == 0x00008E, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000094, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Not_PreBool_ReturnValue) == 0x000095, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Select2_Default) == 0x000096, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Not_PreBool_ReturnValue2) == 0x000097, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Select3_Default) == 0x0000B0, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_InResultCode) == 0x0000B4, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_InResultCode' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_InLoaddedObject) == 0x0000B8, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_InLoaddedObject' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_InLoadInfo) == 0x0000C0, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_InLoadInfo' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_DynamicCast_AsTexture_2D) == 0x0000C8, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_InTextureAsset) == 0x0000D8, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_InTextureAsset' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_GetUMGManager_ReturnValue) == 0x0000F0, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Event_MyGeometry) == 0x0000F8, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Event_InDeltaTime) == 0x000134, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_AsyncLoadTexture_ReturnValue) == 0x000138, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_AsyncLoadTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Add_FloatFloat_ReturnValue) == 0x00013C, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_Sender) == 0x000140, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000148, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_Divide_FloatFloat_ReturnValue2) == 0x00014C, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_Divide_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_FMin_ReturnValue) == 0x000150, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000154, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_MakeStruct_LinearColor) == 0x000158, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, Temp_bool_Variable4) == 0x000168, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_Select4_Default) == 0x000169, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_Select4_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern, K2Node_CustomEvent_bIsRight) == 0x00016A, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_Main_modern::K2Node_CustomEvent_bIsRight' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.PlayArrowAnimation
// 0x0001 (0x0001 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation final
{
public:
	bool                                          bIsRight;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation) == 0x000001, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation) == 0x000001, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation, bIsRight) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_PlayArrowAnimation::bIsRight' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.OnEndLoadingIamge
// 0x0008 (0x0008 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge final
{
public:
	class UWBP_AsyncLoadingImage_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge) == 0x000008, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge) == 0x000008, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge, Sender) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_OnEndLoadingIamge::Sender' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.Tick
// 0x0040 (0x0040 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x003C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick) == 0x000004, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick) == 0x000040, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick, InDeltaTime) == 0x00003C, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.AsyncLoadTutorialPicture
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture final
{
public:
	TSoftObjectPtr<class UTexture>                InTextureAsset;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture) == 0x000008, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture) == 0x000018, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture, InTextureAsset) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_AsyncLoadTutorialPicture::InTextureAsset' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.OnLoadComplete
// 0x0018 (0x0018 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete final
{
public:
	int32                                         InResultCode;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                InLoaddedObject;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAsyncLoad*                      InLoadInfo;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete) == 0x000008, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete) == 0x000018, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete, InResultCode) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete::InResultCode' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete, InLoaddedObject) == 0x000008, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete::InLoaddedObject' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete, InLoadInfo) == 0x000010, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_OnLoadComplete::InLoadInfo' has a wrong offset!");

// Function WBP_Menu_Tutorial_Window_000_Main_modern.WBP_Menu_Tutorial_Window_000_Main_modern_C.SetPageData
// 0x0058 (0x0058 - 0x0000)
struct WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData final
{
public:
	struct FJackUMGTabiNoKokoroePageData          PageData;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         PageMax;                                           // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData) == 0x000008, "Wrong alignment on WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData");
static_assert(sizeof(WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData) == 0x000058, "Wrong size on WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData, PageData) == 0x000000, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData::PageData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData, PageMax) == 0x000050, "Member 'WBP_Menu_Tutorial_Window_000_Main_modern_C_SetPageData::PageMax' has a wrong offset!");

}
