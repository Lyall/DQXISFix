#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_SaveDataCheck

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IF_SaveDataCheck.BP_IF_SaveDataCheck_C
// 0x0000 (0x0038 - 0x0038)
class IBP_IF_SaveDataCheck_C final : public IInterface
{
public:
	void ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint);
	void OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result);
	void ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult);
	void OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IF_SaveDataCheck_C">();
	}
	static class IBP_IF_SaveDataCheck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_IF_SaveDataCheck_C>();
	}
};
static_assert(alignof(IBP_IF_SaveDataCheck_C) == 0x000008, "Wrong alignment on IBP_IF_SaveDataCheck_C");
static_assert(sizeof(IBP_IF_SaveDataCheck_C) == 0x000038, "Wrong size on IBP_IF_SaveDataCheck_C");

}

