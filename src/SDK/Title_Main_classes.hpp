#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Title_Main

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Title_Main.Title_Main_C
// 0x0080 (0x0420 - 0x03A0)
class ATitle_Main_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(Transient, DuplicateTransient)
	struct FJackTravelMapInfo                     TravelMapInfo;                                     // 0x03A8(0x0007)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          TitleCompleted;                                    // 0x03AF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TitleCancel;                                       // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TitleWaitTime;                                     // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGManager*                        TempUmgManager;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnTitleFlag;                                   // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatineeActor*                          CurrentCS;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FukkatuNoJumonDQ12;                                // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FukkatuNoJumon;                                    // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackFadeColor                                TitleFadeColor;                                    // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CompleteCashedSaveDataHeaderList;                  // 0x03D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugSkipOPMovie;                                  // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTitleMovie;                                      // 0x03D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TenseiA010;                                        // 0x03D6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D7[0x1];                                      // 0x03D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                TitleBGMSoundBase;                                 // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    TitleBGMID;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                    ArasuziBGMID;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UObject*                                ArasuziBGMSynthSoundBase;                          // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ArasuziBGMOrcheSoundBase;                          // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackAudioVolume                              KeepVoiceVolume;                                   // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACameraActor*                           CameraActor_7_ExecuteUbergraph_Title_Main_RefProperty; // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Title_Main(int32 EntryPoint);
	void OnFinishTrialLoadAsync_Event(int32 SlotIndex, EJackSaveLoadResult SaveLoadResult);
	void FromTensei_A010();
	void StartVoiceDrama();
	void StartTenseiArasuzi();
	void FromTensei();
	void SkipOpMovie();
	void OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint);
	void OpenStore();
	void OpenOmake();
	void ReturnTitle();
	void StartTitle();
	void CancelBoukennosyo();
	void OnReturnBoukenNoSyo();
	void OnReturnTitle();
	void OnFinishStartSaveDataCheck(EJackUMGSaveDataCheckResult Result);
	void OnFinishLoadDataResult(EJackUMGSaveDataCheckResult Selection);
	void OnFinishLoadAsync_Event(int32 SlotIndex, EJackSaveLoadResult SaveLoadResult);
	void LoadGameSequence();
	void NewGameSequence();
	void OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result);
	void TitleBGMEnd();
	void CallBack_End_A_020_CS_TitleMovie();
	void CallBack_End_A_010_CS_010();
	void InitializeTitle();
	void SkipCutScene(const TArray<class AMatineeActor*>& PlayedMatinees);
	void MapChangeReadyDelegate_Event(class FName NextMapStart, class FName NextMapID, class FName PersistentLevelName, const struct FJackTravelMapInfo& TravelMapInfo_0);
	void PrepareMapChangeDelegate_Event(class FName NextMapStart, class FName NextMapID, const struct FJackTravelMapInfo& TravelMapInfo_0);
	void StreamingInitialize();
	void ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult);
	void ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint);
	void OnLoaded_9F99AB4F4C01740310A2B18BAD27D723(class UObject* Loaded);
	void OnLoaded_E2CC9F7B4E5E93DA9A80AE9C7C9E94AE(class UObject* Loaded);
	void OnLoaded_6B102BD94B620AE5CCC42681DCC7F062(class UObject* Loaded);
	void SaveDataCheck();
	void LoadGame();
	void SetScenarioInitialize();
	void SetKaziLevelForFukkatuNoJumon();
	void SetS_ScenarioPlayer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Title_Main_C">();
	}
	static class ATitle_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATitle_Main_C>();
	}
};
static_assert(alignof(ATitle_Main_C) == 0x000008, "Wrong alignment on ATitle_Main_C");
static_assert(sizeof(ATitle_Main_C) == 0x000420, "Wrong size on ATitle_Main_C");
static_assert(offsetof(ATitle_Main_C, UberGraphFrame) == 0x0003A0, "Member 'ATitle_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TravelMapInfo) == 0x0003A8, "Member 'ATitle_Main_C::TravelMapInfo' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleCompleted) == 0x0003AF, "Member 'ATitle_Main_C::TitleCompleted' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleCancel) == 0x0003B0, "Member 'ATitle_Main_C::TitleCancel' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleWaitTime) == 0x0003B4, "Member 'ATitle_Main_C::TitleWaitTime' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TempUmgManager) == 0x0003B8, "Member 'ATitle_Main_C::TempUmgManager' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, ReturnTitleFlag) == 0x0003C0, "Member 'ATitle_Main_C::ReturnTitleFlag' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, CurrentCS) == 0x0003C8, "Member 'ATitle_Main_C::CurrentCS' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, FukkatuNoJumonDQ12) == 0x0003D0, "Member 'ATitle_Main_C::FukkatuNoJumonDQ12' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, FukkatuNoJumon) == 0x0003D1, "Member 'ATitle_Main_C::FukkatuNoJumon' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleFadeColor) == 0x0003D2, "Member 'ATitle_Main_C::TitleFadeColor' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, CompleteCashedSaveDataHeaderList) == 0x0003D3, "Member 'ATitle_Main_C::CompleteCashedSaveDataHeaderList' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, DebugSkipOPMovie) == 0x0003D4, "Member 'ATitle_Main_C::DebugSkipOPMovie' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, IsTitleMovie) == 0x0003D5, "Member 'ATitle_Main_C::IsTitleMovie' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TenseiA010) == 0x0003D6, "Member 'ATitle_Main_C::TenseiA010' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleBGMSoundBase) == 0x0003D8, "Member 'ATitle_Main_C::TitleBGMSoundBase' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, TitleBGMID) == 0x0003E0, "Member 'ATitle_Main_C::TitleBGMID' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, ArasuziBGMID) == 0x0003F0, "Member 'ATitle_Main_C::ArasuziBGMID' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, ArasuziBGMSynthSoundBase) == 0x000400, "Member 'ATitle_Main_C::ArasuziBGMSynthSoundBase' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, ArasuziBGMOrcheSoundBase) == 0x000408, "Member 'ATitle_Main_C::ArasuziBGMOrcheSoundBase' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, KeepVoiceVolume) == 0x000410, "Member 'ATitle_Main_C::KeepVoiceVolume' has a wrong offset!");
static_assert(offsetof(ATitle_Main_C, CameraActor_7_ExecuteUbergraph_Title_Main_RefProperty) == 0x000418, "Member 'ATitle_Main_C::CameraActor_7_ExecuteUbergraph_Title_Main_RefProperty' has a wrong offset!");

}

