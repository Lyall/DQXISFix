#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_ChangeFlag

#include "Basic.hpp"

#include "JackGame_structs.hpp"


namespace SDK::Params
{

// Function BP_IF_ChangeFlag.BP_IF_ChangeFlag_C.ChangeCutSceneFlag
// 0x0010 (0x0010 - 0x0000)
struct BP_IF_ChangeFlag_C_ChangeCutSceneFlag final
{
public:
	struct FJackLDT_GameFlagDataCutScene          bpp__CutSceneFlag__pf;                             // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_ChangeFlag_C_ChangeCutSceneFlag) == 0x000008, "Wrong alignment on BP_IF_ChangeFlag_C_ChangeCutSceneFlag");
static_assert(sizeof(BP_IF_ChangeFlag_C_ChangeCutSceneFlag) == 0x000010, "Wrong size on BP_IF_ChangeFlag_C_ChangeCutSceneFlag");
static_assert(offsetof(BP_IF_ChangeFlag_C_ChangeCutSceneFlag, bpp__CutSceneFlag__pf) == 0x000000, "Member 'BP_IF_ChangeFlag_C_ChangeCutSceneFlag::bpp__CutSceneFlag__pf' has a wrong offset!");

// Function BP_IF_ChangeFlag.BP_IF_ChangeFlag_C.ChangeScenarioFlag
// 0x0010 (0x0010 - 0x0000)
struct BP_IF_ChangeFlag_C_ChangeScenarioFlag final
{
public:
	struct FJackLDT_GameFlagDataScenario          bpp__ScenarioFlag__pf;                             // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_ChangeFlag_C_ChangeScenarioFlag) == 0x000008, "Wrong alignment on BP_IF_ChangeFlag_C_ChangeScenarioFlag");
static_assert(sizeof(BP_IF_ChangeFlag_C_ChangeScenarioFlag) == 0x000010, "Wrong size on BP_IF_ChangeFlag_C_ChangeScenarioFlag");
static_assert(offsetof(BP_IF_ChangeFlag_C_ChangeScenarioFlag, bpp__ScenarioFlag__pf) == 0x000000, "Member 'BP_IF_ChangeFlag_C_ChangeScenarioFlag::bpp__ScenarioFlag__pf' has a wrong offset!");

}
