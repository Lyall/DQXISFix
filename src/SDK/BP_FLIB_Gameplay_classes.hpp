#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_Gameplay

#include "Basic.hpp"

#include "ENUM_MedalExchangeFirstContact_structs.hpp"
#include "Engine_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FLIB_Gameplay.BP_FLIB_Gameplay_C
// 0x0000 (0x0038 - 0x0038)
class UBP_FLIB_Gameplay_C final : public UBlueprintFunctionLibrary
{
public:
	static void Player_Input_Disabled(class UObject* __WorldContext);
	static void Player_Input_Enabled(class UObject* __WorldContext);
	static void Character_Movement_Enabled(class AJackCharacter* JackCharacter, class UObject* __WorldContext);
	static void Character_Movement_Disabled(class AJackCharacter* JackCharacter, class UObject* __WorldContext);
	static void Player_Camera_Reset(float Interp_Second, class UObject* __WorldContext);
	static void Talk_Camera_Enabled(class AJackCharacter* TalkCharacter, bool LocationUpdate, class UObject* __WorldContext);
	static void Talk_Camera_Disabled(class UObject* __WorldContext);
	static void Player_Movement_Enabled(class UObject* __WorldContext);
	static void Player_Movement_Disabled(class UObject* __WorldContext);
	static void Set_Hidden_All_Characters(EJackCharacterHiddenPurpose Purpose, bool NewHidden, bool PlayerPause, bool IgnoreSymbolMonster, class UObject* __WorldContext);
	static void AddInteractiveActorComponent(class AActor* InActor, class UJackInteractiveActorComponent* InComponent, class UObject* __WorldContext);
	static void RemoveInteractiveActorComponent(class AActor* InActor, class UJackInteractiveActorComponent* InComponent, class UObject* __WorldContext);
	static void Get_Time_Color(TArray<struct FLinearColor>& ColorTable, int32 Time, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Time_Float(TArray<float>& FloatTable, int32 Time, class UObject* __WorldContext, float* Float);
	static void Set_Player_Camera_Rotation(const struct FRotator& Rotation, float Length, float InterpSeconds, bool bRelativeRotation, class UObject* __WorldContext);
	static void Set_Player_Camera_Target_Rotation(class AActor* Target, float Length, float InterpSeconds, const struct FRotator& OffsetRotator, class UObject* __WorldContext);
	static void Player_Teleport_And_Camera_Reset(class AActor* Actor, const struct FRotator& CameraRotation, float CameraInterpSeconds, bool CameraRelativeRotation, class UObject* __WorldContext);
	static void Set_Player_Condition_Riding_On_Horse(class UObject* __WorldContext);
	static void On_Begin_Gimmick(class AJackCharacter* JackCharacter, bool bIgnoreLookAt, bool bIgnoreFootIK, bool bIgnoreFieldActionControl, bool bGuestNPCHiddenControl, class UObject* __WorldContext);
	static void On_End_Gimmick(class AJackCharacter* JackCharacter, bool bIgnoreLookAt, bool bIgnoreFootIK, bool bIgnoreFieldActionControl, bool bGuestNPCHiddenControl, class UObject* __WorldContext);
	static void StartEventPlayerSetting(bool EventWrapper, class UObject* __WorldContext);
	static void EndEventPlayerSetting(bool EventWrapper, class UObject* __WorldContext);
	static void Character_Teleport(class AJackCharacter* Target, class AActor* Actor, class UObject* __WorldContext);
	static void StartMessagePlayerSettings(class UObject* __WorldContext);
	static void EndMessagePlayerSettings(class UObject* __WorldContext);
	static void SetCharacterMaxSpeedType(class AActor* Actor, EJackCharacterMovementMaxSpeed MaxSpeedType, class UObject* __WorldContext);
	static void Attach_Prop_To_Player(class FName PropName, class UObject* __WorldContext);
	static void Detach_Prop_From_Player(class FName PropName, class UObject* __WorldContext);
	static void SetHiddenCharacterWeapon(class AJackCharacter* Character, bool NewHidden, class UObject* __WorldContext);
	static void SetHiddenCharacterWeaponAccessary(class AJackCharacter* Character, bool NewHidden, class UObject* __WorldContext);
	static void SetHiddenPlayerWeapon(bool NewHidden, class UObject* __WorldContext);
	static void SetHiddenPlayerWeaponAccessary(bool NewHidden, class UObject* __WorldContext);
	static void Get_Time_Color_Blend(TArray<struct FLinearColor>& FineColor, TArray<struct FLinearColor>& CloudyColor, float CloudyRate, int32 Time, class UObject* WorldContext, class UObject* __WorldContext, struct FLinearColor* BlendedColor);
	static void Get_Time_Float_Blend(TArray<float>& Fine, TArray<float>& Cloudy, float ClodyRate, int32 Time, class UObject* WorldContext, class UObject* __WorldContext, float* BlendedColor);
	static void Set_Day_Night(class UObject* __WorldContext);
	static void Is_Can_Interrupt(class UObject* __WorldContext, bool* CanInterrupt);
	static void All_Door_Close(class UObject* __WorldContext);
	static void StartDayNightPlayerSettings(class UObject* __WorldContext);
	static void EndDayNightPlayerSettings(class UObject* __WorldContext);
	static void GatPlayerCoordinate(class UObject* __WorldContext, class FName* Coordinate);
	static void Get_Npc_From_Unique_ID(const struct FJackLDT_NPCList& UniqueID, class UObject* __WorldContext, class AJackScheduledNPC** NPC);
	static void Set_Fog_Visible(class FName LevelName, bool AtmosphericFog, bool HeightFog, bool Visible, class UObject* __WorldContext);
	static void Is_Player_Riding_on_Vehicle(class UObject* __WorldContext, bool* Player_Riding);
	static void EndEventPlayerSettingCore(bool EventWrapper, bool bKeepPossessPlayerControl, class UObject* __WorldContext);
	static void StartTalkToEventPlayerSetting(class UObject* __WorldContext);
	static void PlayerPartyFullRecover(bool ClearOddEffect_0, class UObject* __WorldContext);
	static void AllDeadFullRecover(class UObject* __WorldContext);
	static void Get_Actor_In_CS_Level(class UObject* __WorldContext, TArray<class AActor*>* Actor);
	static void IsCurrentMapRemainOrb(class UObject* __WorldContext, bool* bRemain);
	static void All_Door_Set_Auto_Close_Enable_that_is_Opened_By_Player(bool AutoCloseEnable, class UObject* __WorldContext);
	static void Set_Hidden_Renkei_Character_Setting(class UObject* __WorldContext, bool* MartinaDevilMode);
	static void CheckCurrentMapTown(class UObject* __WorldContext, bool* bTown);
	static void AllActorChangeScenarioFlag(const struct FJackLDT_GameFlagDataScenario& ScenarioFlag, class UObject* __WorldContext);
	static void OpenTitle(class UObject* __WorldContext);
	static void Get_Actor_In_Renkei_Level(class UObject* __WorldContext, TArray<class AActor*>* Actor);
	static void RemoteEventByLevel(class FName EventName, class FName LevelName, class UObject* __WorldContext, bool* Result);
	static void RemoteEventByLevels(class FName EventName, TArray<class FName>& LevelNames, class UObject* __WorldContext, bool* Result);
	static void ForceEquipmentFromDataTable(EJackCharacter Chara, EJackEquipmentRegion Region, const struct FJackLDT_ItemTable& EquipID, bool EnableFixupCharacterLooks, class UObject* __WorldContext);
	static void GetNowWorldTime(class UObject* __WorldContext, int32* Hour, int32* Minute, int32* Second);
	static void Set_LOD_By_Tag(class FName Tag, int32 LOD, class UObject* __WorldContext);
	static void GetPartyTalkData(EJackCharacter CharacterID, bool PriorityTalk, class UObject* __WorldContext, struct FJackPartyTalkDescription* Description);
	static void IsMapRemainOrb(class FName MapId, class UObject* __WorldContext, bool* IsRemain);
	static void GetMapOrbFlagName(class FName MapId, class UObject* __WorldContext, class FName* FlagName);
	static void SetPlayerYumeNoNaka(bool On, class UObject* __WorldContext);
	static void CalcPlayerMovePosSceneComponentAway(class USceneComponent* NewParam, float ReturnDistance, class UObject* __WorldContext, struct FVector* Location, struct FRotator* Rotation);
	static void CheckMedalExchangeFirstContact(EJackMedal_Shop MedalShopType, class UObject* __WorldContext, ENUM_MedalExchangeFirstContact* NewParam);
	static void OnFlagMedalExchangeFirstContact(EJackMedal_Shop MedalShopType, class UObject* __WorldContext);
	static void SetLevelVisible(TArray<class FName>& LevelNames, bool Visible, class UObject* __WorldContext, bool* RetVisible);
	static void GetItemCount(const struct FJackLDT_ItemTable& ItemID, bool IgnoreEquip, class UObject* __WorldContext, int32* ItemCount);
	static void IsEquippedItem(EJackCharacter CharaType, const struct FJackLDT_ItemTable& ItemID, class UObject* __WorldContext, bool* Equipped);
	static void SetRuraCondition(bool Enable, class UObject* __WorldContext);
	static void IsAcquiredActiveTokugis(EJackCharacter Character, TArray<class FName>& Tokugis, bool AndCheck, class UObject* __WorldContext, bool* Acquired);
	static void CheckCurrentMapRoom(class UObject* __WorldContext, bool* RoomMap);
	static void CheckCurrentMapConditionID(class FName ConditionID, class UObject* __WorldContext, bool* Ret);
	static void SetCullingDistanceVolumeByTag(class FName Tag, bool Enable, class UObject* __WorldContext);
	static void SetFogVisibleByTag(class FName Tag, bool Visible, class UObject* __WorldContext);
	static void ForceEquipmentDetachFromDataTable(EJackCharacter Chara, const struct FJackLDT_ItemTable& EquipID, class UObject* __WorldContext);
	static void MakeItemGetMessageTag(class FName ItemID, int32 ItemCount, EJackItem_Bag BagType, class UObject* __WorldContext, TArray<struct FJackMessageArgumentData>* Tags);
	static void SetCullingDistanceVolumeForActorByTag(class FName Tag, bool Enable, class UObject* __WorldContext);
	static void SetFriendCoordinate(EJackCharacter Friend, const struct FJackLDT_Coordinate& Coordinate, bool Reset, bool QueryFilterAll, class UObject* __WorldContext);
	static void IncreaseSeedCorrectMiryoku(EJackCharacter Character, int32 InIncrease, class UObject* __WorldContext);
	static void GetCharaTypeFromBagType(EJackItem_Bag InBagType, class UObject* __WorldContext, EJackCharacter* CharaType);
	static void GetCharaDisplayNameFromCharaType(EJackCharacter CharaType, class UObject* __WorldContext, class FString* DisplayName);
	static void SetPlayerWeaponHiddenForCamp(bool NewHidden, class UObject* __WorldContext);
	static void SetCutsceneHidden(bool NewHidden, bool NPCVisible, class UObject* __WorldContext);
	static void CutsceneAfterHiddenOffForEventBattle(class FName EventBattleID, class UObject* __WorldContext);
	static void StartEventPlayerSettingIECustom(bool EventWrapper, class UObject* __WorldContext);
	static void CheckStartEventPlayerSettingPossess(class UObject* __WorldContext);
	static void CallIFStartCutScene(class FName CSID, class UObject* __WorldContext);
	static void CallIFEndCutScene(class FName CSID, class UObject* __WorldContext);
	static void AllActorChangeSystemFlag(class UObject* __WorldContext);
	static void SetVisibleLightByTag(class FName Tag, bool Visible, class UObject* __WorldContext);
	static void TalkResurrectionFriend(class FName TextID, class UObject* __WorldContext);
	static void SetCutsceneTextureSetting(class FName HighQualityTextureTag, class FName LoadWaitTextureTag, TArray<class AActor*>& AddActor, class UObject* __WorldContext);
	static void StartEventPlayerSettingIECustom_FromMapJump(bool EventWrapper, class UObject* __WorldContext);
	static void ClearOddEffect(class UObject* __WorldContext);
	static void GetEquippedItemCount(EJackCharacter CharaType, const struct FJackLDT_ItemTable& ItemID, class UObject* __WorldContext, int32* Count);
	static void ResetCharacterPhysics(class AJackCharacter* TargetChara, class UObject* __WorldContext);
	static void SafeDestroyActor(class AActor* InActor, class UObject* __WorldContext);
	static void SafeDestroyActors(TArray<class AActor*>& InActors, class UObject* __WorldContext);
	static void Set_Visible_By_Tag(class FName Tag, bool Visible, bool Collision_Enable, class UObject* __WorldContext);
	static void GetJackPlayerCharacterType(class UObject* __WorldContext, EJackCharacter* Type);
	static void IsEqualJackPlayerCharacterType(EJackCharacter Type, class UObject* __WorldContext, bool* Ret);
	static void StartNpcTalkPlayerSetting(class UObject* __WorldContext);
	static void EndNpcTalkPlayerSetting(class UObject* __WorldContext);
	static void IsAcquiredJumons(EJackCharacter Character, TArray<class FName>& Jumons, bool AndCheck, class UObject* __WorldContext, bool* Acquired);
	static void OpenTitleTensei(bool Tensei2D, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FLIB_Gameplay_C">();
	}
	static class UBP_FLIB_Gameplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FLIB_Gameplay_C>();
	}
};
static_assert(alignof(UBP_FLIB_Gameplay_C) == 0x000008, "Wrong alignment on UBP_FLIB_Gameplay_C");
static_assert(sizeof(UBP_FLIB_Gameplay_C) == 0x000038, "Wrong size on UBP_FLIB_Gameplay_C");

}
