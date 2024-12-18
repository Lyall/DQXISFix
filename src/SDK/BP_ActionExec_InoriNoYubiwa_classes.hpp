#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionExec_InoriNoYubiwa

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionExec_InoriNoYubiwa.BP_ActionExec_InoriNoYubiwa_C
// 0x0020 (0x0900 - 0x08E0)
class ABP_ActionExec_InoriNoYubiwa_C final : public AJackActionExec
{
public:
	uint8                                         Pad_8D8[0x8];                                      // 0x08D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08E0(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   FieldDestroyTextID;                                // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BattleDestroyTextID;                               // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionExec_InoriNoYubiwa(int32 EntryPoint);
	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void UserConstructionScript();
	void GetItemData(EJackItem_Bag* BagType, int32* DouguId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionExec_InoriNoYubiwa_C">();
	}
	static class ABP_ActionExec_InoriNoYubiwa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActionExec_InoriNoYubiwa_C>();
	}
};
static_assert(alignof(ABP_ActionExec_InoriNoYubiwa_C) == 0x000010, "Wrong alignment on ABP_ActionExec_InoriNoYubiwa_C");
static_assert(sizeof(ABP_ActionExec_InoriNoYubiwa_C) == 0x000900, "Wrong size on ABP_ActionExec_InoriNoYubiwa_C");
static_assert(offsetof(ABP_ActionExec_InoriNoYubiwa_C, UberGraphFrame) == 0x0008E0, "Member 'ABP_ActionExec_InoriNoYubiwa_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ActionExec_InoriNoYubiwa_C, DefaultSceneRoot) == 0x0008E8, "Member 'ABP_ActionExec_InoriNoYubiwa_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ActionExec_InoriNoYubiwa_C, FieldDestroyTextID) == 0x0008F0, "Member 'ABP_ActionExec_InoriNoYubiwa_C::FieldDestroyTextID' has a wrong offset!");
static_assert(offsetof(ABP_ActionExec_InoriNoYubiwa_C, BattleDestroyTextID) == 0x0008F8, "Member 'ABP_ActionExec_InoriNoYubiwa_C::BattleDestroyTextID' has a wrong offset!");

}

