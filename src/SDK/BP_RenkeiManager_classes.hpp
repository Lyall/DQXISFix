#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RenkeiManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RenkeiManager.BP_RenkeiManager_C
// 0x0088 (0x08E8 - 0x0860)
class ABP_RenkeiManager_C final : public AJackRenkeiManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0860(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SavedSetHiddenAllActors;                           // 0x0870(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnPlayPreInitialize;                               // 0x0880(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnPlayEndFinalize;                                 // 0x0890(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                           PlayingMatineeLevelName;                           // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           VisibleLevels;                                     // 0x08B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AJackCharacter*                         TargetCharacter;                                   // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MatineePlaying;                                    // 0x08C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUICreate;                                        // 0x08C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA[0x6];                                      // 0x08CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HiddenActorTargets;                                // 0x08D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         MatineeActorsPrepareCompleteCount;                 // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPlayPreInitialize__DelegateSignature(class AMatineeActor* MatineeActor);
	void OnPlayEndFinalize__DelegateSignature(class AMatineeActor* MatineeActor);
	void ExecuteUbergraph_BP_RenkeiManager(int32 EntryPoint);
	void OnStartMatineeRenkei_CreateMatineeSkipUI();
	void OnCreateMatineeSkipUI();
	void OnSetBattleWhiteLineHiddenDecal(const bool InHidden);
	void OnMatineeRenkeiDivisionLoad(const TArray<class FName>& RenkeiLevelNames, const TArray<class FName>& LevelNamePass);
	void MatineeRenkeiFinish();
	void OnMatineeRenkeiPlay(class FName RenkeiName, class FName RenkeiLevelName, const TArray<class AJackCharacter*>& AttackerCharaList, class AJackCharacter* TargetCharacter1);
	void UserConstructionScript();
	void IsHiddenActor(class AActor* Actor, bool* bHidden_0);
	void SetHiddenActor(class AActor* Actor, bool bHidden_0);
	void SetHiddenAllActors(bool bHidden_0);
	void Set_Visible_Actors_by_HiddenTag();
	void SetVisibleAnotherLevel(bool Should_be_Visidle);
	void SetMatineeTargetLocation(bool First);
	void GetTargetPosition(bool* bActive, struct FVector* Location, struct FRotator* Rotator, struct FVector* Scale);
	void IsMatineeLevelsVisible(bool* IsVisible);
	void InfoRenkeiStart();
	void InfoRenkeiEnd();
	void ChangeVoiceTrack(bool VoiceJapanese, bool MartinaDevilMode, bool CamuMemoryLost);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RenkeiManager_C">();
	}
	static class ABP_RenkeiManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RenkeiManager_C>();
	}
};
static_assert(alignof(ABP_RenkeiManager_C) == 0x000008, "Wrong alignment on ABP_RenkeiManager_C");
static_assert(sizeof(ABP_RenkeiManager_C) == 0x0008E8, "Wrong size on ABP_RenkeiManager_C");
static_assert(offsetof(ABP_RenkeiManager_C, UberGraphFrame) == 0x000860, "Member 'ABP_RenkeiManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, DefaultSceneRoot) == 0x000868, "Member 'ABP_RenkeiManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, SavedSetHiddenAllActors) == 0x000870, "Member 'ABP_RenkeiManager_C::SavedSetHiddenAllActors' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, OnPlayPreInitialize) == 0x000880, "Member 'ABP_RenkeiManager_C::OnPlayPreInitialize' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, OnPlayEndFinalize) == 0x000890, "Member 'ABP_RenkeiManager_C::OnPlayEndFinalize' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, PlayingMatineeLevelName) == 0x0008A0, "Member 'ABP_RenkeiManager_C::PlayingMatineeLevelName' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, VisibleLevels) == 0x0008B0, "Member 'ABP_RenkeiManager_C::VisibleLevels' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, TargetCharacter) == 0x0008C0, "Member 'ABP_RenkeiManager_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, MatineePlaying) == 0x0008C8, "Member 'ABP_RenkeiManager_C::MatineePlaying' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, IsUICreate) == 0x0008C9, "Member 'ABP_RenkeiManager_C::IsUICreate' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, HiddenActorTargets) == 0x0008D0, "Member 'ABP_RenkeiManager_C::HiddenActorTargets' has a wrong offset!");
static_assert(offsetof(ABP_RenkeiManager_C, MatineeActorsPrepareCompleteCount) == 0x0008E0, "Member 'ABP_RenkeiManager_C::MatineeActorsPrepareCompleteCount' has a wrong offset!");

}

