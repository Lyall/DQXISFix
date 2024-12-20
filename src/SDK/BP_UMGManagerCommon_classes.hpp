#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UMGManagerCommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UMGManagerCommon.BP_UMGManagerCommon_C
// 0x0020 (0x0738 - 0x0718)
class UBP_UMGManagerCommon_C final : public UJackUMGManagerSetting
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(Transient, DuplicateTransient)
	TScriptInterface<class IBP_IF_SaveDataCheck_C> SaveDataCheckSender;                               // 0x0720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackUMGSaveDataCheckPoint                    SaveDataCheckPoint;                                // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSaveDataCheckResult                   SaveDataCheckResult;                               // 0x0731(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCreateInitialSaveData;                            // 0x0732(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_UMGManagerCommon(int32 EntryPoint);
	void ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult);
	void ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint);
	void SaveDataCheckResultMain(EJackSaveLoadResult SaveLoadResult);
	void OnFinishRestoreAsync_Event_0(EJackSaveLoadResult SaveLoadResult);
	void OnFinishCreateAsync_Event_0(EJackSaveLoadResult SaveLoadResult);
	void OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint);
	void OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UMGManagerCommon_C">();
	}
	static class UBP_UMGManagerCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UMGManagerCommon_C>();
	}
};
static_assert(alignof(UBP_UMGManagerCommon_C) == 0x000008, "Wrong alignment on UBP_UMGManagerCommon_C");
static_assert(sizeof(UBP_UMGManagerCommon_C) == 0x000738, "Wrong size on UBP_UMGManagerCommon_C");
static_assert(offsetof(UBP_UMGManagerCommon_C, UberGraphFrame) == 0x000718, "Member 'UBP_UMGManagerCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UMGManagerCommon_C, SaveDataCheckSender) == 0x000720, "Member 'UBP_UMGManagerCommon_C::SaveDataCheckSender' has a wrong offset!");
static_assert(offsetof(UBP_UMGManagerCommon_C, SaveDataCheckPoint) == 0x000730, "Member 'UBP_UMGManagerCommon_C::SaveDataCheckPoint' has a wrong offset!");
static_assert(offsetof(UBP_UMGManagerCommon_C, SaveDataCheckResult) == 0x000731, "Member 'UBP_UMGManagerCommon_C::SaveDataCheckResult' has a wrong offset!");
static_assert(offsetof(UBP_UMGManagerCommon_C, bCreateInitialSaveData) == 0x000732, "Member 'UBP_UMGManagerCommon_C::bCreateInitialSaveData' has a wrong offset!");

}

