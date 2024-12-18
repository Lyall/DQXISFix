#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Balloon_004

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Balloon_004.WBP_Hud_Balloon_004_C
// 0x0078 (0x0498 - 0x0420)
class UWBP_Hud_Balloon_004_C final : public UJackUMGBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_213;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Miss;                                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MissPanel;                                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture*>                       T_Miss;                                            // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                       T_Balloon;                                         // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Number_Col;                                        // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Balloon_0_Col;                                     // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Balloon_1_Col;                                     // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Miss_Col;                                          // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NumberOffset;                                      // 0x0480(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 DelayTime;                                         // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Hud_Balloon_004(int32 EntryPoint);
	void Construct();
	void SetBalloon();
	void SetTextureNumber();
	void SetTexture();
	void GetNumberTexture(int32 Digit, float* BlockIndex);
	void SetDelayTime(float Delta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Balloon_004_C">();
	}
	static class UWBP_Hud_Balloon_004_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Balloon_004_C>();
	}
};
static_assert(alignof(UWBP_Hud_Balloon_004_C) == 0x000008, "Wrong alignment on UWBP_Hud_Balloon_004_C");
static_assert(sizeof(UWBP_Hud_Balloon_004_C) == 0x000498, "Wrong size on UWBP_Hud_Balloon_004_C");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, UberGraphFrame) == 0x000420, "Member 'UWBP_Hud_Balloon_004_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, In) == 0x000428, "Member 'UWBP_Hud_Balloon_004_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, CanvasPanel_213) == 0x000430, "Member 'UWBP_Hud_Balloon_004_C::CanvasPanel_213' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, Miss) == 0x000438, "Member 'UWBP_Hud_Balloon_004_C::Miss' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, MissPanel) == 0x000440, "Member 'UWBP_Hud_Balloon_004_C::MissPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, RootPanel) == 0x000448, "Member 'UWBP_Hud_Balloon_004_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, T_Miss) == 0x000450, "Member 'UWBP_Hud_Balloon_004_C::T_Miss' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, T_Balloon) == 0x000460, "Member 'UWBP_Hud_Balloon_004_C::T_Balloon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, Number_Col) == 0x000470, "Member 'UWBP_Hud_Balloon_004_C::Number_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, Balloon_0_Col) == 0x000474, "Member 'UWBP_Hud_Balloon_004_C::Balloon_0_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, Balloon_1_Col) == 0x000478, "Member 'UWBP_Hud_Balloon_004_C::Balloon_1_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, Miss_Col) == 0x00047C, "Member 'UWBP_Hud_Balloon_004_C::Miss_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, NumberOffset) == 0x000480, "Member 'UWBP_Hud_Balloon_004_C::NumberOffset' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_004_C, DelayTime) == 0x000488, "Member 'UWBP_Hud_Balloon_004_C::DelayTime' has a wrong offset!");

}

