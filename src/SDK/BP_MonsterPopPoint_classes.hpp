#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterPopPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MonsterPopPoint.BP_MonsterPopPoint_C
// 0x0030 (0x0420 - 0x03F0)
class ABP_MonsterPopPoint_C final : public AJackMonsterPopPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    SpriteComponent;                                   // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         StartSequenceIndex;                                // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndSequenceIndex;                                  // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MonsterPopPoint(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	bool IsNecessaryToPop();
	bool OverrideMonsterDeployTable(class UDataTable* InTableAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterPopPoint_C">();
	}
	static class ABP_MonsterPopPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterPopPoint_C>();
	}
};
static_assert(alignof(ABP_MonsterPopPoint_C) == 0x000008, "Wrong alignment on ABP_MonsterPopPoint_C");
static_assert(sizeof(ABP_MonsterPopPoint_C) == 0x000420, "Wrong size on ABP_MonsterPopPoint_C");
static_assert(offsetof(ABP_MonsterPopPoint_C, UberGraphFrame) == 0x0003F0, "Member 'ABP_MonsterPopPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, Arrow) == 0x0003F8, "Member 'ABP_MonsterPopPoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, Spline) == 0x000400, "Member 'ABP_MonsterPopPoint_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, SpriteComponent) == 0x000408, "Member 'ABP_MonsterPopPoint_C::SpriteComponent' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, Scene) == 0x000410, "Member 'ABP_MonsterPopPoint_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, StartSequenceIndex) == 0x000418, "Member 'ABP_MonsterPopPoint_C::StartSequenceIndex' has a wrong offset!");
static_assert(offsetof(ABP_MonsterPopPoint_C, EndSequenceIndex) == 0x00041C, "Member 'ABP_MonsterPopPoint_C::EndSequenceIndex' has a wrong offset!");

}
