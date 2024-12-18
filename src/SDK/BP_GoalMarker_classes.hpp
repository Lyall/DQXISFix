#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GoalMarker

#include "Basic.hpp"

#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GoalMarker.BP_GoalMarker_C
// 0x0018 (0x03C0 - 0x03A8)
class ABP_GoalMarker_C final : public AJackGoalMarker
{
public:
	class UArrowComponent*                        Arrow1;                                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere1;                                           // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender1;                                       // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GoalMarker_C">();
	}
	static class ABP_GoalMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GoalMarker_C>();
	}
};
static_assert(alignof(ABP_GoalMarker_C) == 0x000008, "Wrong alignment on ABP_GoalMarker_C");
static_assert(sizeof(ABP_GoalMarker_C) == 0x0003C0, "Wrong size on ABP_GoalMarker_C");
static_assert(offsetof(ABP_GoalMarker_C, Arrow1) == 0x0003A8, "Member 'ABP_GoalMarker_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_GoalMarker_C, Sphere1) == 0x0003B0, "Member 'ABP_GoalMarker_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_GoalMarker_C, TextRender1) == 0x0003B8, "Member 'ABP_GoalMarker_C::TextRender1' has a wrong offset!");

}

