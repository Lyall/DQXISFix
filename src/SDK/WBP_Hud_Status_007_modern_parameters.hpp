#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_007_modern

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Hud_Status_007_modern.WBP_Hud_Status_007_modern_C.ExecuteUbergraph_WBP_Hud_Status_007_modern
// 0x0028 (0x0028 - 0x0000)
struct WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGManager*                        CallFunc_GetUMGManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembers*                CallFunc_GetAccessorMembers_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackUMGItemData*>               CallFunc_GetHudStatusList_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern) == 0x000008, "Wrong alignment on WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern");
static_assert(sizeof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern) == 0x000028, "Wrong size on WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern");
static_assert(offsetof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern, EntryPoint) == 0x000000, "Member 'WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern, CallFunc_GetUMGManager_ReturnValue) == 0x000008, "Member 'WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern::CallFunc_GetUMGManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern, CallFunc_GetAccessorMembers_ReturnValue) == 0x000010, "Member 'WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern::CallFunc_GetAccessorMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern, CallFunc_GetHudStatusList_ReturnValue) == 0x000018, "Member 'WBP_Hud_Status_007_modern_C_ExecuteUbergraph_WBP_Hud_Status_007_modern::CallFunc_GetHudStatusList_ReturnValue' has a wrong offset!");

}

