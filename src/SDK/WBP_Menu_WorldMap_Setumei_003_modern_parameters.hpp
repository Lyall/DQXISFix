#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Setumei_003_modern

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_Menu_WorldMap_Setumei_003_modern.WBP_Menu_WorldMap_Setumei_003_modern_C.ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern
// 0x0004 (0x0004 - 0x0000)
struct WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern) == 0x000004, "Wrong alignment on WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern");
static_assert(sizeof(WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern) == 0x000004, "Wrong size on WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern, EntryPoint) == 0x000000, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_003_modern::EntryPoint' has a wrong offset!");

// Function WBP_Menu_WorldMap_Setumei_003_modern.WBP_Menu_WorldMap_Setumei_003_modern_C.SetCondition
// 0x0300 (0x0300 - 0x0000)
struct WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition final
{
public:
	TArray<EJackMapSymbol>                        TimeCondition;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EJackMapSymbol>                        WeatherCondition;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                          bHasPickedUp;                                      // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHasCondition;                                     // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHasWeatherCondition;                              // 0x0022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ConditionTextID;                                   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EJackMapSymbol>                        ConditionList;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class FName                                   Temp_name_Variable;                                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable2;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackMapSymbol                                Temp_byte_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable3;                               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable4;                               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable5;                               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable6;                               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable7;                               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable8;                               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable9;                               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable10;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable11;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable12;                              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable13;                              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable14;                              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable15;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable16;                              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable17;                              // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable18;                              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable19;                              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable20;                              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable21;                              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable22;                              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable23;                              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable24;                              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable25;                              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable26;                              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable27;                              // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable28;                              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable29;                              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable30;                              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable31;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable32;                              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable33;                              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable34;                              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable35;                              // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable36;                              // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable37;                              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable38;                              // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable39;                              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable40;                              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable41;                              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable42;                              // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable43;                              // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable44;                              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable45;                              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable46;                              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable47;                              // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable48;                              // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable49;                              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable50;                              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable51;                              // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable52;                              // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable53;                              // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable54;                              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable55;                              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable56;                              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable57;                              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable58;                              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable59;                              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable60;                              // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetText_ReturnValue;                      // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EJackMapSymbol                                CallFunc_Array_Get_Item;                           // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue3;                // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue3;              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select2_Default;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageArgumentData               K2Node_MakeStruct_JackMessageArgumentData;         // 0x0270(0x0048)()
	TArray<struct FJackMessageArgumentData>       K2Node_MakeArray_Array;                            // 0x02B8(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_ReplaceMessageTag_ReturnValue;            // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02D8(0x0018)()
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_FindMapSymbolTexture_ReturnValue;         // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition) == 0x000008, "Wrong alignment on WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition");
static_assert(sizeof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition) == 0x000300, "Wrong size on WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, TimeCondition) == 0x000000, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::TimeCondition' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, WeatherCondition) == 0x000010, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::WeatherCondition' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, bHasPickedUp) == 0x000020, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::bHasPickedUp' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, bHasCondition) == 0x000021, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::bHasCondition' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, bHasWeatherCondition) == 0x000022, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::bHasWeatherCondition' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, ConditionTextID) == 0x000028, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::ConditionTextID' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, ConditionList) == 0x000030, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::ConditionList' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable) == 0x000040, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Array_Length_ReturnValue2) == 0x00004C, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Greater_IntInt_ReturnValue2) == 0x000051, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable2) == 0x000058, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable2' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_byte_Variable) == 0x000060, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable3) == 0x000068, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable4) == 0x000070, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable4' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable5) == 0x000078, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable5' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable6) == 0x000080, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable6' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable7) == 0x000088, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable7' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable8) == 0x000090, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable8' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable9) == 0x000098, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable9' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable10) == 0x0000A0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable10' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable11) == 0x0000A8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable11' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable12) == 0x0000B0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable12' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable13) == 0x0000B8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable13' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable14) == 0x0000C0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable14' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable15) == 0x0000C8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable15' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable16) == 0x0000D0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable16' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable17) == 0x0000D8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable17' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable18) == 0x0000E0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable18' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable19) == 0x0000E8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable19' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable20) == 0x0000F0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable20' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable21) == 0x0000F8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable21' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable22) == 0x000100, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable22' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable23) == 0x000108, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable23' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable24) == 0x000110, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable24' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable25) == 0x000118, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable25' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable26) == 0x000120, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable26' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable27) == 0x000128, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable27' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable28) == 0x000130, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable28' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable29) == 0x000138, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable29' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable30) == 0x000140, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable30' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable31) == 0x000148, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable31' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable32) == 0x000150, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable32' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable33) == 0x000158, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable33' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable34) == 0x000160, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable34' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable35) == 0x000168, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable35' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable36) == 0x000170, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable36' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable37) == 0x000178, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable37' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable38) == 0x000180, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable38' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable39) == 0x000188, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable39' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable40) == 0x000190, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable40' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable41) == 0x000198, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable41' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable42) == 0x0001A0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable42' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable43) == 0x0001A8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable43' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable44) == 0x0001B0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable44' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable45) == 0x0001B8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable45' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable46) == 0x0001C0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable46' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable47) == 0x0001C8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable47' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable48) == 0x0001D0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable48' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable49) == 0x0001D8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable49' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable50) == 0x0001E0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable50' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable51) == 0x0001E8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable51' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable52) == 0x0001F0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable52' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable53) == 0x0001F8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable53' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable54) == 0x000200, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable54' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable55) == 0x000208, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable55' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable56) == 0x000210, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable56' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable57) == 0x000218, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable57' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable58) == 0x000220, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable58' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable59) == 0x000228, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable59' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_name_Variable60) == 0x000230, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_name_Variable60' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, Temp_bool_Variable) == 0x000238, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, K2Node_Select_Default) == 0x000240, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_GetText_ReturnValue) == 0x000248, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Array_Get_Item) == 0x000258, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Array_Length_ReturnValue3) == 0x00025C, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Array_Length_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Greater_IntInt_ReturnValue3) == 0x000260, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Greater_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, K2Node_Select2_Default) == 0x000268, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, K2Node_MakeStruct_JackMessageArgumentData) == 0x000270, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::K2Node_MakeStruct_JackMessageArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, K2Node_MakeArray_Array) == 0x0002B8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_ReplaceMessageTag_ReturnValue) == 0x0002C8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_ReplaceMessageTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_Conv_StringToText_ReturnValue) == 0x0002D8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_GetUMGManager_ReturnValue) == 0x0002F0, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition, CallFunc_FindMapSymbolTexture_ReturnValue) == 0x0002F8, "Member 'WBP_Menu_WorldMap_Setumei_003_modern_C_SetCondition::CallFunc_FindMapSymbolTexture_ReturnValue' has a wrong offset!");

}

