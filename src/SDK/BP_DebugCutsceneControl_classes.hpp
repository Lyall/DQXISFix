#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugCutsceneControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugCutsceneControl.BP_DebugCutsceneControl_C
// 0x00C0 (0x0458 - 0x0398)
class ABP_DebugCutsceneControl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMatineeActor*                          Matinee;                                           // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkipPosition;                                      // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC[0x4];                                      // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MatineeLoop;                                       // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetPlayRateFlag;                                 // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5[0x3];                                      // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DispMenu;                                          // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CutName;                                           // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         SelectCut;                                         // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetSelectCut;                                    // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F5[0x3];                                      // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempInt;                                           // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipCaption;                                       // 0x03FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SkipCutMode;                                       // 0x03FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FE[0x2];                                      // 0x03FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DebugCutsceneSkipCut_C*             BPSkipCut;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CSLevelActor;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>           DebugWeaponMesh;                                   // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AJackCharacter*>                 DebugWeaponMeshOwner;                              // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          AutoCaption;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LightOff;                                          // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisableCameraLight;                                // 0x043A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LensFlareEnabe;                                    // 0x043B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         CsControlNum;                                      // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CsControl_C*                        CsControl;                                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CsWindControl_C*                    CsWindControl;                                     // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DispWindControlInfo;                               // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RecordingPreset;                                   // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CSPerformanceTestMode;                             // 0x0452(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_DebugCutsceneControl(int32 EntryPoint);
	void CoordChange();
	void CustomEvent_1(class AActor* Actor, EEndPlayReason EndPlayReason);
	void StartCutsceneControl();
	void AutoSendCaption();
	void VisibleAllFriend();
	void ShowDebugMaxWeapon();
	void SetPlayRate(float Value);
	void MenuDispChange();
	void SetMatineeLoop();
	void NextPrevCut(bool Next);
	void ResetPlayRate();
	void AddPlayRate(float AddValue);
	void ReceiveTick(float DeltaSeconds);
	void InpActEvt_Shift_W_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_Y_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_33(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_34(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_35(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_36(const struct FKey& Key);
	void InpActEvt_W_K2Node_InputKeyEvent_37(const struct FKey& Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_38(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_39(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_40(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_41(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_42(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_43(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_44(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_45(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_46(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_47(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_48(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_49(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_50(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_51(const struct FKey& Key);
	void UserConstructionScript();
	void SetEnable(bool Enable_0, bool RecordingPreset_0);
	void GetMatinee(class AMatineeActor** Matinee_0);
	void GetRightShiftXpos(const class FString& String, float Add, float* Xpos);
	void DispDebugMaxWeapon();
	void SpawnDebugWeapon(class AJackCharacter* JackCharacter, class UStaticMesh* Mesh, class FName InSocketName, float Scale);
	void GetDebugWeaponMesh(EJackCharacter CharacterType, EJackItem_Classification WeaponType, class UStaticMesh** Main, class UStaticMesh** Sub);
	void GetMainHand(EJackCharacter CharacterType, bool* LeftHand);
	void DestroyWeapon();
	void FindNextCoordinate(TArray<class FName>& CoordTable, class FName NowCoordinate, class FName* NextCoordinate);
	void MekeCsCoordinateTable(class FName CSID, TArray<class FName>* CoordinateTable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugCutsceneControl_C">();
	}
	static class ABP_DebugCutsceneControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugCutsceneControl_C>();
	}
};
static_assert(alignof(ABP_DebugCutsceneControl_C) == 0x000008, "Wrong alignment on ABP_DebugCutsceneControl_C");
static_assert(sizeof(ABP_DebugCutsceneControl_C) == 0x000458, "Wrong size on ABP_DebugCutsceneControl_C");
static_assert(offsetof(ABP_DebugCutsceneControl_C, UberGraphFrame) == 0x000398, "Member 'ABP_DebugCutsceneControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DefaultSceneRoot) == 0x0003A0, "Member 'ABP_DebugCutsceneControl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, Enable) == 0x0003A8, "Member 'ABP_DebugCutsceneControl_C::Enable' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, Matinee) == 0x0003B0, "Member 'ABP_DebugCutsceneControl_C::Matinee' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, SkipPosition) == 0x0003B8, "Member 'ABP_DebugCutsceneControl_C::SkipPosition' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, MatineeLoop) == 0x0003C0, "Member 'ABP_DebugCutsceneControl_C::MatineeLoop' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, PlayRate) == 0x0003D0, "Member 'ABP_DebugCutsceneControl_C::PlayRate' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, ResetPlayRateFlag) == 0x0003D4, "Member 'ABP_DebugCutsceneControl_C::ResetPlayRateFlag' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DispMenu) == 0x0003D8, "Member 'ABP_DebugCutsceneControl_C::DispMenu' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CutName) == 0x0003E0, "Member 'ABP_DebugCutsceneControl_C::CutName' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, SelectCut) == 0x0003F0, "Member 'ABP_DebugCutsceneControl_C::SelectCut' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, ResetSelectCut) == 0x0003F4, "Member 'ABP_DebugCutsceneControl_C::ResetSelectCut' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, TempInt) == 0x0003F8, "Member 'ABP_DebugCutsceneControl_C::TempInt' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, SkipCaption) == 0x0003FC, "Member 'ABP_DebugCutsceneControl_C::SkipCaption' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, SkipCutMode) == 0x0003FD, "Member 'ABP_DebugCutsceneControl_C::SkipCutMode' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, BPSkipCut) == 0x000400, "Member 'ABP_DebugCutsceneControl_C::BPSkipCut' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CSLevelActor) == 0x000408, "Member 'ABP_DebugCutsceneControl_C::CSLevelActor' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DebugWeaponMesh) == 0x000418, "Member 'ABP_DebugCutsceneControl_C::DebugWeaponMesh' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DebugWeaponMeshOwner) == 0x000428, "Member 'ABP_DebugCutsceneControl_C::DebugWeaponMeshOwner' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, AutoCaption) == 0x000438, "Member 'ABP_DebugCutsceneControl_C::AutoCaption' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, LightOff) == 0x000439, "Member 'ABP_DebugCutsceneControl_C::LightOff' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DisableCameraLight) == 0x00043A, "Member 'ABP_DebugCutsceneControl_C::DisableCameraLight' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, LensFlareEnabe) == 0x00043B, "Member 'ABP_DebugCutsceneControl_C::LensFlareEnabe' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CsControlNum) == 0x00043C, "Member 'ABP_DebugCutsceneControl_C::CsControlNum' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CsControl) == 0x000440, "Member 'ABP_DebugCutsceneControl_C::CsControl' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CsWindControl) == 0x000448, "Member 'ABP_DebugCutsceneControl_C::CsWindControl' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, DispWindControlInfo) == 0x000450, "Member 'ABP_DebugCutsceneControl_C::DispWindControlInfo' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, RecordingPreset) == 0x000451, "Member 'ABP_DebugCutsceneControl_C::RecordingPreset' has a wrong offset!");
static_assert(offsetof(ABP_DebugCutsceneControl_C, CSPerformanceTestMode) == 0x000452, "Member 'ABP_DebugCutsceneControl_C::CSPerformanceTestMode' has a wrong offset!");

}

