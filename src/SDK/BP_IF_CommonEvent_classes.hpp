#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_CommonEvent

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// DynamicClass BP_IF_CommonEvent.BP_IF_CommonEvent_C
// 0x0000 (0x0038 - 0x0038)
class IBP_IF_CommonEvent_C final : public IInterface
{
public:
	void CallSetPartyTalkBehaviorState();
	void CsPlayerWeaponSetting(class AJackCharacter* bpp__CsPlayer__pf);
	void DisableNpcImportance();
	void EnableNpcImportance();
	void ForceAutoSaveAfterCS(bool* bpp__Result__pf);
	void GetShowLocationTitle(bool* bpp__IsDrawLocationTitle__pf);
	void InnSystem(class AJackScheduledNPC* bpp__NPC__pf, EJackYadoyaMorningCallTimezone bpp__TimeZone__pf, class FName bpp__InnEndEventName__pf, bool bpp__bForceDontResumeBGM__pf, bool bpp__PlayJingle__pf, bool bpp__AllDoorClose__pf, bool bpp__CameraReset__pf, bool bpp__DontPlayBGM__pf);
	void IsAutoSave(bool* bpp__NoSave__pf);
	void PlayableStart(bool bpp__IsDrawLocationTitle__pf);
	void RequestShowLocation();
	void ScheduleChangeDisableDitherForNPC(class AJackScheduledNPC* bpp__TargetNpc__pf);
	void ScheduleChangeEnableDitherForNPC();
	void SetAutoSaveCompleted(bool* bpp__Result__pf);
	void SetForceNoAutoSave(bool* bpp__Result__pf);
	void Set_Day_Night_Proc(bool bpp__Night__pf);
	void Set_Time_Proc();
	void StartPreLoad();
	void UpdateScenarioFlag();
	void UpdateScenarioFlagForNpc();
	void UpdateScenarioFlagForSystem();
	void UseHorseCallMountBefore();
	void UseItemFusigiKazi();
	void YadoyaSystemAfter();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_IF_CommonEvent_C">();
	}
	static class IBP_IF_CommonEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_IF_CommonEvent_C>();
	}
};
static_assert(alignof(IBP_IF_CommonEvent_C) == 0x000008, "Wrong alignment on IBP_IF_CommonEvent_C");
static_assert(sizeof(IBP_IF_CommonEvent_C) == 0x000038, "Wrong size on IBP_IF_CommonEvent_C");

}

