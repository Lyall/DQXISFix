#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI3d_Icon_ActionCursor_Arrow

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI3d_Icon_ActionCursor_Arrow.BP_UI3d_Icon_ActionCursor_Arrow_C
// 0x0060 (0x03F8 - 0x0398)
class ABP_UI3d_Icon_ActionCursor_Arrow_C : public AActor
{
public:
	class USceneComponent*                        Scene1;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ComparisonRight;                                   // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ComparisonLeft;                                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        OffsetAnchor;                                      // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ComparisonAnchor;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        WidgetAnchor;                                      // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PosRight;                                          // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PosLeft;                                           // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bKeepDisplayScale;                                 // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x3];                                      // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewScale;                                          // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrScale;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetLenght;                                      // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultScale;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProjectSize;                                       // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void DrawUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI3d_Icon_ActionCursor_Arrow_C">();
	}
	static class ABP_UI3d_Icon_ActionCursor_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UI3d_Icon_ActionCursor_Arrow_C>();
	}
};
static_assert(alignof(ABP_UI3d_Icon_ActionCursor_Arrow_C) == 0x000008, "Wrong alignment on ABP_UI3d_Icon_ActionCursor_Arrow_C");
static_assert(sizeof(ABP_UI3d_Icon_ActionCursor_Arrow_C) == 0x0003F8, "Wrong size on ABP_UI3d_Icon_ActionCursor_Arrow_C");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, Scene1) == 0x000398, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::Scene1' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, ComparisonRight) == 0x0003A0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::ComparisonRight' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, ComparisonLeft) == 0x0003A8, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::ComparisonLeft' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, OffsetAnchor) == 0x0003B0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::OffsetAnchor' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, ComparisonAnchor) == 0x0003B8, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::ComparisonAnchor' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, WidgetAnchor) == 0x0003C0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::WidgetAnchor' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, PosRight) == 0x0003C8, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::PosRight' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, Widget) == 0x0003D0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, PosLeft) == 0x0003D8, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::PosLeft' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, bKeepDisplayScale) == 0x0003E0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::bKeepDisplayScale' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, NewScale) == 0x0003E4, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::NewScale' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, CurrScale) == 0x0003E8, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::CurrScale' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, OffsetLenght) == 0x0003EC, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::OffsetLenght' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, DefaultScale) == 0x0003F0, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::DefaultScale' has a wrong offset!");
static_assert(offsetof(ABP_UI3d_Icon_ActionCursor_Arrow_C, ProjectSize) == 0x0003F4, "Member 'ABP_UI3d_Icon_ActionCursor_Arrow_C::ProjectSize' has a wrong offset!");

}
