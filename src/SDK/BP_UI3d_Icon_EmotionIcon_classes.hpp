#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI3d_Icon_EmotionIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_UI3d_Icon_ActionCursor_Arrow_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI3d_Icon_EmotionIcon.BP_UI3d_Icon_EmotionIcon_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_UI3d_Icon_EmotionIcon_C final : public ABP_UI3d_Icon_ActionCursor_Arrow_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F8(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_UI3d_Icon_EmotionIcon(int32 EntryPoint);
	void InitData(EJackMonsterEmotionIcon EmotionType);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI3d_Icon_EmotionIcon_C">();
	}
	static class ABP_UI3d_Icon_EmotionIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UI3d_Icon_EmotionIcon_C>();
	}
};
static_assert(alignof(ABP_UI3d_Icon_EmotionIcon_C) == 0x000008, "Wrong alignment on ABP_UI3d_Icon_EmotionIcon_C");
static_assert(sizeof(ABP_UI3d_Icon_EmotionIcon_C) == 0x000400, "Wrong size on ABP_UI3d_Icon_EmotionIcon_C");
static_assert(offsetof(ABP_UI3d_Icon_EmotionIcon_C, UberGraphFrame) == 0x0003F8, "Member 'ABP_UI3d_Icon_EmotionIcon_C::UberGraphFrame' has a wrong offset!");

}
