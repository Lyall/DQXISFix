#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionExec_Toherosu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionExec_Toherosu.BP_ActionExec_Toherosu_C
// 0x0010 (0x08F0 - 0x08E0)
class ABP_ActionExec_Toherosu_C final : public AJackActionExec
{
public:
	uint8                                         Pad_8D8[0x8];                                      // 0x08D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08E0(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionExec_Toherosu(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnBPStateDelegate_Event_0();
	void UserConstructionScript();
	void GetInpasuResultTextId(class FName* OutTextId);
	void IsFocusedActionCursor(bool* bFocused);
	void GetToherosuSerifId(class FName* NewParam);
	void IsToherosuFail(bool* IsFail);

	void IsFailStrangePower(bool* IsFail) const;
	void IsFailCannotUse(bool* IsFail) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionExec_Toherosu_C">();
	}
	static class ABP_ActionExec_Toherosu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActionExec_Toherosu_C>();
	}
};
static_assert(alignof(ABP_ActionExec_Toherosu_C) == 0x000010, "Wrong alignment on ABP_ActionExec_Toherosu_C");
static_assert(sizeof(ABP_ActionExec_Toherosu_C) == 0x0008F0, "Wrong size on ABP_ActionExec_Toherosu_C");
static_assert(offsetof(ABP_ActionExec_Toherosu_C, UberGraphFrame) == 0x0008E0, "Member 'ABP_ActionExec_Toherosu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ActionExec_Toherosu_C, DefaultSceneRoot) == 0x0008E8, "Member 'ABP_ActionExec_Toherosu_C::DefaultSceneRoot' has a wrong offset!");

}

