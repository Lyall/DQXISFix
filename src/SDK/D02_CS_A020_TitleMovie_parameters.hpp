#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: D02_CS_A020_TitleMovie

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function D02_CS_A020_TitleMovie.D02_CS_A020_TitleMovie_C.ExecuteUbergraph_D02_CS_A020_TitleMovie
// 0x02B8 (0x02B8 - 0x0000)
struct D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameFlagBool_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameFlagString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BuildString_Name_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue2;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoteEvent_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoteEvent_ReturnValue2;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue2;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameFlagString_ReturnValue2;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue3;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTripleRunning_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackDataTableCutSceneInfo             CallFunc_GetDataTableCutSceneInfo_Out;             // 0x0080(0x0190)()
	bool                                          CallFunc_GetDataTableCutSceneInfo_Success;         // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameFlagString_ReturnValue3;           // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue3;       // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMoviePlayTime_ReturnValue;             // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CallFunc_AddUMGConnectWidgetWithClass_ReturnValue; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_OpeningMovieSubTitle_C*            K2Node_DynamicCast_AsWBP_Opening_Movie_Sub_Title;  // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EJackLanguage                                 CallFunc_GetLanguageType_ReturnValue;              // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue4;       // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPosition_ReturnValue;           // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue5;       // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoteEvent_ReturnValue3;                 // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCutSceneController*                CallFunc_GetCutSceneController_ReturnValue6;       // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable2;                             // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameFlagBool_ReturnValue2;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameFlagBool_ReturnValue3;             // 0x02B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie) == 0x000008, "Wrong alignment on D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie");
static_assert(sizeof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie) == 0x0002B8, "Wrong size on D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, EntryPoint) == 0x000000, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::EntryPoint' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagBool_ReturnValue) == 0x000004, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, Temp_string_Variable) == 0x000008, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagString_ReturnValue) == 0x000018, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagString_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_BuildString_Name_ReturnValue) == 0x000030, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_BuildString_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue) == 0x000040, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_Conv_StringToName_ReturnValue2) == 0x000048, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_Conv_StringToName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_RemoteEvent_ReturnValue) == 0x000050, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_RemoteEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_RemoteEvent_ReturnValue2) == 0x000051, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_RemoteEvent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue2) == 0x000058, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagString_ReturnValue2) == 0x000060, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagString_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_Conv_StringToName_ReturnValue3) == 0x000070, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_Conv_StringToName_ReturnValue3' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_IsTripleRunning_ReturnValue) == 0x000078, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_IsTripleRunning_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetDataTableCutSceneInfo_Out) == 0x000080, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetDataTableCutSceneInfo_Out' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetDataTableCutSceneInfo_Success) == 0x000210, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetDataTableCutSceneInfo_Success' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, K2Node_Event_DeltaSeconds) == 0x000214, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_IsValid_ReturnValue) == 0x000218, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagString_ReturnValue3) == 0x000220, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagString_ReturnValue3' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000230, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue3) == 0x000238, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue3' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetMoviePlayTime_ReturnValue) == 0x000240, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetMoviePlayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_IsValid_ReturnValue2) == 0x000244, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetUMGManager_ReturnValue) == 0x000248, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_AddUMGConnectWidgetWithClass_ReturnValue) == 0x000250, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_AddUMGConnectWidgetWithClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, K2Node_DynamicCast_AsWBP_Opening_Movie_Sub_Title) == 0x000258, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::K2Node_DynamicCast_AsWBP_Opening_Movie_Sub_Title' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_IsValid_ReturnValue3) == 0x000261, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetLanguageType_ReturnValue) == 0x000262, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetLanguageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, K2Node_SwitchEnum_CmpSuccess) == 0x000263, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, Temp_bool_Variable) == 0x000264, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue4) == 0x000268, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue4' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCurrentPosition_ReturnValue) == 0x000270, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCurrentPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000274, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue5) == 0x000278, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue5' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_RemoteEvent_ReturnValue3) == 0x000280, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_RemoteEvent_ReturnValue3' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetCutSceneController_ReturnValue6) == 0x000288, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetCutSceneController_ReturnValue6' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, Temp_string_Variable2) == 0x000290, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::Temp_string_Variable2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, K2Node_Select_Default) == 0x0002A0, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagBool_ReturnValue2) == 0x0002B0, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_Not_PreBool_ReturnValue) == 0x0002B1, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_BooleanAND_ReturnValue) == 0x0002B2, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie, CallFunc_GetGameFlagBool_ReturnValue3) == 0x0002B3, "Member 'D02_CS_A020_TitleMovie_C_ExecuteUbergraph_D02_CS_A020_TitleMovie::CallFunc_GetGameFlagBool_ReturnValue3' has a wrong offset!");

// Function D02_CS_A020_TitleMovie.D02_CS_A020_TitleMovie_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct D02_CS_A020_TitleMovie_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(D02_CS_A020_TitleMovie_C_ReceiveTick) == 0x000004, "Wrong alignment on D02_CS_A020_TitleMovie_C_ReceiveTick");
static_assert(sizeof(D02_CS_A020_TitleMovie_C_ReceiveTick) == 0x000004, "Wrong size on D02_CS_A020_TitleMovie_C_ReceiveTick");
static_assert(offsetof(D02_CS_A020_TitleMovie_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'D02_CS_A020_TitleMovie_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

