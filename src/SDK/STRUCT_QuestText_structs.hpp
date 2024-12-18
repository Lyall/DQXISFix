#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STRUCT_QuestText

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct STRUCT_QuestText.STRUCT_QuestText
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FSTRUCT_QuestText final
{
public:
	class FName                                   TextID_2_4299F14945D9F612F2CD428EB90E620E;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TalkNPC_5_0AB26D3D4EF3FA20D91B93A93FD50BAC;        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BeforeFadeOut_7_A85E5D9543A8BD960B9E2BA6AFE63242;  // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AfterFadeIn_9_F29A8F0C4E6596FF7A9F8D970971DAC4;    // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SerifuAfterProc_12_2B850DA7487AF87F2257B0A2E9291AF4; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SerifuBeforeProc_15_5CA1378649EB465911DF8AA5B3F705F1; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SerifuBeforeWait_18_40E3AC5A417F0B59FBAFB4BD779205CF; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSTRUCT_QuestText) == 0x000008, "Wrong alignment on FSTRUCT_QuestText");
static_assert(sizeof(FSTRUCT_QuestText) == 0x000028, "Wrong size on FSTRUCT_QuestText");
static_assert(offsetof(FSTRUCT_QuestText, TextID_2_4299F14945D9F612F2CD428EB90E620E) == 0x000000, "Member 'FSTRUCT_QuestText::TextID_2_4299F14945D9F612F2CD428EB90E620E' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, TalkNPC_5_0AB26D3D4EF3FA20D91B93A93FD50BAC) == 0x000008, "Member 'FSTRUCT_QuestText::TalkNPC_5_0AB26D3D4EF3FA20D91B93A93FD50BAC' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, BeforeFadeOut_7_A85E5D9543A8BD960B9E2BA6AFE63242) == 0x000009, "Member 'FSTRUCT_QuestText::BeforeFadeOut_7_A85E5D9543A8BD960B9E2BA6AFE63242' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, AfterFadeIn_9_F29A8F0C4E6596FF7A9F8D970971DAC4) == 0x00000A, "Member 'FSTRUCT_QuestText::AfterFadeIn_9_F29A8F0C4E6596FF7A9F8D970971DAC4' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, SerifuAfterProc_12_2B850DA7487AF87F2257B0A2E9291AF4) == 0x000010, "Member 'FSTRUCT_QuestText::SerifuAfterProc_12_2B850DA7487AF87F2257B0A2E9291AF4' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, SerifuBeforeProc_15_5CA1378649EB465911DF8AA5B3F705F1) == 0x000018, "Member 'FSTRUCT_QuestText::SerifuBeforeProc_15_5CA1378649EB465911DF8AA5B3F705F1' has a wrong offset!");
static_assert(offsetof(FSTRUCT_QuestText, SerifuBeforeWait_18_40E3AC5A417F0B59FBAFB4BD779205CF) == 0x000020, "Member 'FSTRUCT_QuestText::SerifuBeforeWait_18_40E3AC5A417F0B59FBAFB4BD779205CF' has a wrong offset!");

}

