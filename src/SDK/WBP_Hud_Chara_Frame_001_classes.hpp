#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Chara_Frame_001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Chara_Frame_001.WBP_Hud_Chara_Frame_001_C
// 0x0060 (0x0528 - 0x04C8)
class UWBP_Hud_Chara_Frame_001_C final : public UJackUMGHudStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Dead2;                                             // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Active_End;                                        // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Active_Wait;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait_WBP_Hud_Chara_Frame_001_C;                    // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Start;                                             // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_Frame_000;                                   // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_Frame_003;                                   // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FrameRoot;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          StartActive;                                       // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_519[0x3];                                      // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         XOffsetDef;                                        // 0x051C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         XOffsetNow;                                        // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Started;                                           // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Hud_Chara_Frame_001(int32 EntryPoint);
	void Construct();
	void PlayAnimStart();
	void PlayAnimActiveStart();
	void PlayAnimActiveEnd();
	void GetPlateOffset(float* Pos2D);
	void PlayAnimDead();
	void PlayAnimWait();
	void PlayAnimWaitNoTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Chara_Frame_001_C">();
	}
	static class UWBP_Hud_Chara_Frame_001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Chara_Frame_001_C>();
	}
};
static_assert(alignof(UWBP_Hud_Chara_Frame_001_C) == 0x000008, "Wrong alignment on UWBP_Hud_Chara_Frame_001_C");
static_assert(sizeof(UWBP_Hud_Chara_Frame_001_C) == 0x000528, "Wrong size on UWBP_Hud_Chara_Frame_001_C");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_Hud_Chara_Frame_001_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Dead2) == 0x0004D0, "Member 'UWBP_Hud_Chara_Frame_001_C::Dead2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Active_End) == 0x0004D8, "Member 'UWBP_Hud_Chara_Frame_001_C::Active_End' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Active_Wait) == 0x0004E0, "Member 'UWBP_Hud_Chara_Frame_001_C::Active_Wait' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Wait_WBP_Hud_Chara_Frame_001_C) == 0x0004E8, "Member 'UWBP_Hud_Chara_Frame_001_C::Wait_WBP_Hud_Chara_Frame_001_C' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Start) == 0x0004F0, "Member 'UWBP_Hud_Chara_Frame_001_C::Start' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Chara_Frame_000) == 0x0004F8, "Member 'UWBP_Hud_Chara_Frame_001_C::Chara_Frame_000' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Chara_Frame_003) == 0x000500, "Member 'UWBP_Hud_Chara_Frame_001_C::Chara_Frame_003' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, FrameRoot) == 0x000508, "Member 'UWBP_Hud_Chara_Frame_001_C::FrameRoot' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, RootPanel) == 0x000510, "Member 'UWBP_Hud_Chara_Frame_001_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, StartActive) == 0x000518, "Member 'UWBP_Hud_Chara_Frame_001_C::StartActive' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, XOffsetDef) == 0x00051C, "Member 'UWBP_Hud_Chara_Frame_001_C::XOffsetDef' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, XOffsetNow) == 0x000520, "Member 'UWBP_Hud_Chara_Frame_001_C::XOffsetNow' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Chara_Frame_001_C, Started) == 0x000524, "Member 'UWBP_Hud_Chara_Frame_001_C::Started' has a wrong offset!");

}
