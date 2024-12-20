#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RoomControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// DynamicClass BP_RoomControl.BP_RoomControl_C
// 0x01B8 (0x05C0 - 0x0408)
class ABP_RoomControl_C final : public AJackPhysicsVolume
{
public:
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextRenderComponent*                   TextRender1;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APostProcessVolume*                     Post_Process;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CameraInVolume;                                    // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PlayerInVolume;                                    // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_422[0x6];                                      // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_RoomEnter_C*>                RoomEnter;                                         // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          bEnableRoomCamera;                                 // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableTimeStopper;                                // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A[0x6];                                      // 0x043A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackRuraArea*                          RuraArea;                                          // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnableIndoorCameraInterpSec;                       // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InRoomGuestHidden;                                 // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44D[0x3];                                      // 0x044D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackSafeAreaVolume*                    SafeArea;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AJackSafeAreaVolume*>            InvalidSafeArea;                                   // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                          CurrentMapRoom;                                    // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRoomWeatherEffect;                          // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRoomWindPause;                              // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DelayEnableIndoorCamera;                           // 0x046B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableSetRoomFlag;                                 // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TempMapJumpInRoom;                                 // 0x046D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LocalInRoomFlag;                                   // 0x046E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseLocalInRoomFlag;                                // 0x046F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableAllDoorAutoClose;                            // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnablePlayerMarkerInTheRoom;                       // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_472[0x2];                                      // 0x0472(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0474(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 K2Node_CustomEvent_Player2;                        // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AJackCharacter*                         K2Node_DynamicCast_AsJack_Character;               // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0490(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCharacter*                         K2Node_DynamicCast_AsJack_Character2;              // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x04A0(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A1[0x7];                                      // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent2;   // 0x04A8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor2;            // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp2;             // 0x04B8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex2;        // 0x04C0(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x04C4(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C5[0x3];                                      // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x04C8(0x0088)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0550(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0560(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0568(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_GameEvent_C>    K2Node_DynamicCast_AsBP_IF_Game_Event;             // 0x0570(0x0010)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0580(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_581[0x7];                                      // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_IF_GameEvent_C>    K2Node_DynamicCast_AsBP_IF_Game_Event2;            // 0x0588(0x0010)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          K2Node_DynamicCast_bSuccess4;                      // 0x0598(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_CustomEvent_Pause;                          // 0x0599(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x059A(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59B[0x1];                                      // 0x059B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x059C(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABP_RoomEnter_C*                        CallFunc_Array_Get_Item;                           // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x05A8(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                          K2Node_CustomEvent_NewHidden;                      // 0x05B8(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x05B9(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_IsMapJumping_Result;                      // 0x05BA(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetRoomFlag_NowInRoom;                    // 0x05BB(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const struct FHitResult& bpp__SweepResult__pf__const);
	void BndEvt__BrushComponent_K2Node_ComponentBoundEvent_273_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	void ChangeIndoorCamera(bool bpp__Enable__pf);
	void CheckInRoom();
	void ClearNowIndoorCameraChange();
	void DelayIndoorCamera();
	void Enable_Post(bool bpp__Enable__pf);
	void ExecuteUbergraph_BP_RoomControl_0(int32 bpp__EntryPoint__pf);
	void ExecuteUbergraph_BP_RoomControl_10(int32 bpp__EntryPoint__pf);
	void ExecuteUbergraph_BP_RoomControl_6(int32 bpp__EntryPoint__pf);
	void GetRoomFlag(bool* bpp__NowInRoom__pf);
	void GuestHidden(bool bpp__NewHidden__pf);
	void IsTimeStopperEnable(bool* bpp__Enabled__pf);
	void MapJumpBeginPlay();
	void MapJumpEndPlay();
	void ReceiveBeginPlay();
	void ResetTimeStopper();
	void RoomControlTimeStopper();
	void RoomOutTimeCheck();
	void Room_Camera_In();
	void Room_Camera_Out();
	void Room_Player_In(class AActor* bpp__Player__pf);
	void Room_Player_Out(class AActor* bpp__Player__pf);
	void SetAllDoorAutoCloseEnable(bool bpp__AutoCloseEnable__pf);
	void SetEnableIndoorCamera(bool bpp__Enable__pf);
	void SetEnableIndoorCameraInterpSec(float bpp__InterpSec__pf);
	void SetEnableRuraArea(bool bpp__Enable__pf);
	void SetEnableSafeArea(bool bpp__Enable__pf);
	void SetEnableTimeStopper(bool bpp__Enable__pf);
	void SetRoomFlag(bool bpp__InRoom__pf);
	void SetTimeStopper();
	void SetWeatherEffectEnable(bool bpp__Enable__pf);
	void SetWindPause(bool bpp__Pause__pf);
	void UserConstructionScript();
	void WeatherEffectEnable(bool bpp__Enable__pf);
	void WindPasue(bool bpp__Pause__pf);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_RoomControl_C">();
	}
	static class ABP_RoomControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RoomControl_C>();
	}
};
static_assert(alignof(ABP_RoomControl_C) == 0x000008, "Wrong alignment on ABP_RoomControl_C");
static_assert(sizeof(ABP_RoomControl_C) == 0x0005C0, "Wrong size on ABP_RoomControl_C");
static_assert(offsetof(ABP_RoomControl_C, TextRender1) == 0x000410, "Member 'ABP_RoomControl_C::TextRender1' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, Post_Process) == 0x000418, "Member 'ABP_RoomControl_C::Post_Process' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CameraInVolume) == 0x000420, "Member 'ABP_RoomControl_C::CameraInVolume' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, PlayerInVolume) == 0x000421, "Member 'ABP_RoomControl_C::PlayerInVolume' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, RoomEnter) == 0x000428, "Member 'ABP_RoomControl_C::RoomEnter' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, bEnableRoomCamera) == 0x000438, "Member 'ABP_RoomControl_C::bEnableRoomCamera' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, bEnableTimeStopper) == 0x000439, "Member 'ABP_RoomControl_C::bEnableTimeStopper' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, RuraArea) == 0x000440, "Member 'ABP_RoomControl_C::RuraArea' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, EnableIndoorCameraInterpSec) == 0x000448, "Member 'ABP_RoomControl_C::EnableIndoorCameraInterpSec' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, InRoomGuestHidden) == 0x00044C, "Member 'ABP_RoomControl_C::InRoomGuestHidden' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, SafeArea) == 0x000450, "Member 'ABP_RoomControl_C::SafeArea' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, InvalidSafeArea) == 0x000458, "Member 'ABP_RoomControl_C::InvalidSafeArea' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CurrentMapRoom) == 0x000468, "Member 'ABP_RoomControl_C::CurrentMapRoom' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, bEnableRoomWeatherEffect) == 0x000469, "Member 'ABP_RoomControl_C::bEnableRoomWeatherEffect' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, bEnableRoomWindPause) == 0x00046A, "Member 'ABP_RoomControl_C::bEnableRoomWindPause' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, DelayEnableIndoorCamera) == 0x00046B, "Member 'ABP_RoomControl_C::DelayEnableIndoorCamera' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, EnableSetRoomFlag) == 0x00046C, "Member 'ABP_RoomControl_C::EnableSetRoomFlag' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, TempMapJumpInRoom) == 0x00046D, "Member 'ABP_RoomControl_C::TempMapJumpInRoom' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, LocalInRoomFlag) == 0x00046E, "Member 'ABP_RoomControl_C::LocalInRoomFlag' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, UseLocalInRoomFlag) == 0x00046F, "Member 'ABP_RoomControl_C::UseLocalInRoomFlag' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, EnableAllDoorAutoClose) == 0x000470, "Member 'ABP_RoomControl_C::EnableAllDoorAutoClose' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, EnablePlayerMarkerInTheRoom) == 0x000471, "Member 'ABP_RoomControl_C::EnablePlayerMarkerInTheRoom' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, Temp_int_Loop_Counter_Variable) == 0x000474, "Member 'ABP_RoomControl_C::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_CustomEvent_Player2) == 0x000478, "Member 'ABP_RoomControl_C::K2Node_CustomEvent_Player2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_CustomEvent_Player) == 0x000480, "Member 'ABP_RoomControl_C::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_AsJack_Character) == 0x000488, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_AsJack_Character' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_bSuccess) == 0x000490, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_AsJack_Character2) == 0x000498, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_AsJack_Character2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_bSuccess2) == 0x0004A0, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OverlappedComponent2) == 0x0004A8, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OverlappedComponent2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherActor2) == 0x0004B0, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherActor2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherComp2) == 0x0004B8, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherComp2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherBodyIndex2) == 0x0004C0, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherBodyIndex2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_bFromSweep) == 0x0004C4, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_SweepResult) == 0x0004C8, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000550, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherActor) == 0x000558, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherComp) == 0x000560, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000568, "Member 'ABP_RoomControl_C::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_AsBP_IF_Game_Event) == 0x000570, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_AsBP_IF_Game_Event' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_bSuccess3) == 0x000580, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_AsBP_IF_Game_Event2) == 0x000588, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_AsBP_IF_Game_Event2' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_DynamicCast_bSuccess4) == 0x000598, "Member 'ABP_RoomControl_C::K2Node_DynamicCast_bSuccess4' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_CustomEvent_Pause) == 0x000599, "Member 'ABP_RoomControl_C::K2Node_CustomEvent_Pause' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_CustomEvent_Enable) == 0x00059A, "Member 'ABP_RoomControl_C::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, Temp_int_Array_Index_Variable) == 0x00059C, "Member 'ABP_RoomControl_C::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CallFunc_Array_Get_Item) == 0x0005A0, "Member 'ABP_RoomControl_C::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CallFunc_GetOverlappingActors_OverlappingActors) == 0x0005A8, "Member 'ABP_RoomControl_C::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, K2Node_CustomEvent_NewHidden) == 0x0005B8, "Member 'ABP_RoomControl_C::K2Node_CustomEvent_NewHidden' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, Temp_bool_True_if_break_was_hit_Variable) == 0x0005B9, "Member 'ABP_RoomControl_C::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CallFunc_IsMapJumping_Result) == 0x0005BA, "Member 'ABP_RoomControl_C::CallFunc_IsMapJumping_Result' has a wrong offset!");
static_assert(offsetof(ABP_RoomControl_C, CallFunc_GetRoomFlag_NowInRoom) == 0x0005BB, "Member 'ABP_RoomControl_C::CallFunc_GetRoomFlag_NowInRoom' has a wrong offset!");

}

