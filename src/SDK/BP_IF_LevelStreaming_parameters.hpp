#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_LevelStreaming

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddLoadLevels
// 0x0018 (0x0018 - 0x0000)
struct BP_IF_LevelStreaming_C_AddLoadLevels final
{
public:
	TArray<class FName>                           bpp__LevelName__pf;                                // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bpp__Result__pf;                                   // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_IF_LevelStreaming_C_AddLoadLevels) == 0x000008, "Wrong alignment on BP_IF_LevelStreaming_C_AddLoadLevels");
static_assert(sizeof(BP_IF_LevelStreaming_C_AddLoadLevels) == 0x000018, "Wrong size on BP_IF_LevelStreaming_C_AddLoadLevels");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddLoadLevels, bpp__LevelName__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_AddLoadLevels::bpp__LevelName__pf' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddLoadLevels, bpp__Result__pf) == 0x000010, "Member 'BP_IF_LevelStreaming_C_AddLoadLevels::bpp__Result__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddLoadLevelsArea
// 0x0028 (0x0028 - 0x0000)
struct BP_IF_LevelStreaming_C_AddLoadLevelsArea final
{
public:
	class FString                                 bpp__AreaName__pf__const;                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           bpp__LevelName__pf;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bpp__Result__pf;                                   // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_IF_LevelStreaming_C_AddLoadLevelsArea) == 0x000008, "Wrong alignment on BP_IF_LevelStreaming_C_AddLoadLevelsArea");
static_assert(sizeof(BP_IF_LevelStreaming_C_AddLoadLevelsArea) == 0x000028, "Wrong size on BP_IF_LevelStreaming_C_AddLoadLevelsArea");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddLoadLevelsArea, bpp__AreaName__pf__const) == 0x000000, "Member 'BP_IF_LevelStreaming_C_AddLoadLevelsArea::bpp__AreaName__pf__const' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddLoadLevelsArea, bpp__LevelName__pf) == 0x000010, "Member 'BP_IF_LevelStreaming_C_AddLoadLevelsArea::bpp__LevelName__pf' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddLoadLevelsArea, bpp__Result__pf) == 0x000020, "Member 'BP_IF_LevelStreaming_C_AddLoadLevelsArea::bpp__Result__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddUnLoadLevels
// 0x0018 (0x0018 - 0x0000)
struct BP_IF_LevelStreaming_C_AddUnLoadLevels final
{
public:
	TArray<class FName>                           bpp__LevelName__pf;                                // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bpp__Result__pf;                                   // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_IF_LevelStreaming_C_AddUnLoadLevels) == 0x000008, "Wrong alignment on BP_IF_LevelStreaming_C_AddUnLoadLevels");
static_assert(sizeof(BP_IF_LevelStreaming_C_AddUnLoadLevels) == 0x000018, "Wrong size on BP_IF_LevelStreaming_C_AddUnLoadLevels");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddUnLoadLevels, bpp__LevelName__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_AddUnLoadLevels::bpp__LevelName__pf' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddUnLoadLevels, bpp__Result__pf) == 0x000010, "Member 'BP_IF_LevelStreaming_C_AddUnLoadLevels::bpp__Result__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddUnLoadLevelsArea
// 0x0028 (0x0028 - 0x0000)
struct BP_IF_LevelStreaming_C_AddUnLoadLevelsArea final
{
public:
	class FString                                 bpp__AreaName__pf__const;                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           bpp__LevelName__pf;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bpp__Result__pf;                                   // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_IF_LevelStreaming_C_AddUnLoadLevelsArea) == 0x000008, "Wrong alignment on BP_IF_LevelStreaming_C_AddUnLoadLevelsArea");
static_assert(sizeof(BP_IF_LevelStreaming_C_AddUnLoadLevelsArea) == 0x000028, "Wrong size on BP_IF_LevelStreaming_C_AddUnLoadLevelsArea");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddUnLoadLevelsArea, bpp__AreaName__pf__const) == 0x000000, "Member 'BP_IF_LevelStreaming_C_AddUnLoadLevelsArea::bpp__AreaName__pf__const' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddUnLoadLevelsArea, bpp__LevelName__pf) == 0x000010, "Member 'BP_IF_LevelStreaming_C_AddUnLoadLevelsArea::bpp__LevelName__pf' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_AddUnLoadLevelsArea, bpp__Result__pf) == 0x000020, "Member 'BP_IF_LevelStreaming_C_AddUnLoadLevelsArea::bpp__Result__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetCurrentMapStart
// 0x0008 (0x0008 - 0x0000)
struct BP_IF_LevelStreaming_C_GetCurrentMapStart final
{
public:
	class FName                                   bpp__MapStart__pf;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_LevelStreaming_C_GetCurrentMapStart) == 0x000004, "Wrong alignment on BP_IF_LevelStreaming_C_GetCurrentMapStart");
static_assert(sizeof(BP_IF_LevelStreaming_C_GetCurrentMapStart) == 0x000008, "Wrong size on BP_IF_LevelStreaming_C_GetCurrentMapStart");
static_assert(offsetof(BP_IF_LevelStreaming_C_GetCurrentMapStart, bpp__MapStart__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_GetCurrentMapStart::bpp__MapStart__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetLoadCompleted
// 0x0001 (0x0001 - 0x0000)
struct BP_IF_LevelStreaming_C_GetLoadCompleted final
{
public:
	bool                                          bpp__LoadCompleted__pf;                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_LevelStreaming_C_GetLoadCompleted) == 0x000001, "Wrong alignment on BP_IF_LevelStreaming_C_GetLoadCompleted");
static_assert(sizeof(BP_IF_LevelStreaming_C_GetLoadCompleted) == 0x000001, "Wrong size on BP_IF_LevelStreaming_C_GetLoadCompleted");
static_assert(offsetof(BP_IF_LevelStreaming_C_GetLoadCompleted, bpp__LoadCompleted__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_GetLoadCompleted::bpp__LoadCompleted__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetNPCLevels
// 0x0010 (0x0010 - 0x0000)
struct BP_IF_LevelStreaming_C_GetNPCLevels final
{
public:
	TArray<class FName>                           bpp__NPC__pf;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_LevelStreaming_C_GetNPCLevels) == 0x000008, "Wrong alignment on BP_IF_LevelStreaming_C_GetNPCLevels");
static_assert(sizeof(BP_IF_LevelStreaming_C_GetNPCLevels) == 0x000010, "Wrong size on BP_IF_LevelStreaming_C_GetNPCLevels");
static_assert(offsetof(BP_IF_LevelStreaming_C_GetNPCLevels, bpp__NPC__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_GetNPCLevels::bpp__NPC__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetNPCLevelVisibled
// 0x0001 (0x0001 - 0x0000)
struct BP_IF_LevelStreaming_C_GetNPCLevelVisibled final
{
public:
	bool                                          bpp__Visibled__pf;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_LevelStreaming_C_GetNPCLevelVisibled) == 0x000001, "Wrong alignment on BP_IF_LevelStreaming_C_GetNPCLevelVisibled");
static_assert(sizeof(BP_IF_LevelStreaming_C_GetNPCLevelVisibled) == 0x000001, "Wrong size on BP_IF_LevelStreaming_C_GetNPCLevelVisibled");
static_assert(offsetof(BP_IF_LevelStreaming_C_GetNPCLevelVisibled, bpp__Visibled__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_GetNPCLevelVisibled::bpp__Visibled__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetPreLoadStart
// 0x0001 (0x0001 - 0x0000)
struct BP_IF_LevelStreaming_C_GetPreLoadStart final
{
public:
	bool                                          bpp__PreLoadStart__pf;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BP_IF_LevelStreaming_C_GetPreLoadStart) == 0x000001, "Wrong alignment on BP_IF_LevelStreaming_C_GetPreLoadStart");
static_assert(sizeof(BP_IF_LevelStreaming_C_GetPreLoadStart) == 0x000001, "Wrong size on BP_IF_LevelStreaming_C_GetPreLoadStart");
static_assert(offsetof(BP_IF_LevelStreaming_C_GetPreLoadStart, bpp__PreLoadStart__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_GetPreLoadStart::bpp__PreLoadStart__pf' has a wrong offset!");

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.SetSysControlLevelName
// 0x0010 (0x0010 - 0x0000)
struct BP_IF_LevelStreaming_C_SetSysControlLevelName final
{
public:
	class FName                                   bpp__LevelName__pf;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bpp__Result__pf;                                   // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BP_IF_LevelStreaming_C_SetSysControlLevelName) == 0x000004, "Wrong alignment on BP_IF_LevelStreaming_C_SetSysControlLevelName");
static_assert(sizeof(BP_IF_LevelStreaming_C_SetSysControlLevelName) == 0x000010, "Wrong size on BP_IF_LevelStreaming_C_SetSysControlLevelName");
static_assert(offsetof(BP_IF_LevelStreaming_C_SetSysControlLevelName, bpp__LevelName__pf) == 0x000000, "Member 'BP_IF_LevelStreaming_C_SetSysControlLevelName::bpp__LevelName__pf' has a wrong offset!");
static_assert(offsetof(BP_IF_LevelStreaming_C_SetSysControlLevelName, bpp__Result__pf) == 0x000008, "Member 'BP_IF_LevelStreaming_C_SetSysControlLevelName::bpp__Result__pf' has a wrong offset!");

}

