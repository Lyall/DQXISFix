#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Balloon_003

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Balloon_003.WBP_Hud_Balloon_003_C
// 0x00A8 (0x04C8 - 0x0420)
class UWBP_Hud_Balloon_003_C final : public UJackUMGBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_0;                                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_1_Glow;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BasePanel;                                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BasePanel_Glow;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BasePanel_Root;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Num_0;                                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Num_1;                                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Num_2;                                             // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Num_3;                                             // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Num_4;                                             // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NumPanel;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture*>                       T_Miss;                                            // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                       T_Balloon;                                         // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Number_Col;                                        // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Balloon_0_Col;                                     // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Balloon_1_Col;                                     // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Miss_Col;                                          // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NumberOffset;                                      // 0x04C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_Balloon_003(int32 EntryPoint);
	void Construct();
	void SetBalloon();
	void SetAppearAnimation();
	void SetVisibleParts();
	void SetTextureNumber();
	void SetTexture();
	void GetNumberTexture(int32 Digit, float* BlockIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Balloon_003_C">();
	}
	static class UWBP_Hud_Balloon_003_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Balloon_003_C>();
	}
};
static_assert(alignof(UWBP_Hud_Balloon_003_C) == 0x000008, "Wrong alignment on UWBP_Hud_Balloon_003_C");
static_assert(sizeof(UWBP_Hud_Balloon_003_C) == 0x0004C8, "Wrong size on UWBP_Hud_Balloon_003_C");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, UberGraphFrame) == 0x000420, "Member 'UWBP_Hud_Balloon_003_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, In) == 0x000428, "Member 'UWBP_Hud_Balloon_003_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Base_0) == 0x000430, "Member 'UWBP_Hud_Balloon_003_C::Base_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Base_1_Glow) == 0x000438, "Member 'UWBP_Hud_Balloon_003_C::Base_1_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, BasePanel) == 0x000440, "Member 'UWBP_Hud_Balloon_003_C::BasePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, BasePanel_Glow) == 0x000448, "Member 'UWBP_Hud_Balloon_003_C::BasePanel_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, BasePanel_Root) == 0x000450, "Member 'UWBP_Hud_Balloon_003_C::BasePanel_Root' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Num_0) == 0x000458, "Member 'UWBP_Hud_Balloon_003_C::Num_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Num_1) == 0x000460, "Member 'UWBP_Hud_Balloon_003_C::Num_1' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Num_2) == 0x000468, "Member 'UWBP_Hud_Balloon_003_C::Num_2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Num_3) == 0x000470, "Member 'UWBP_Hud_Balloon_003_C::Num_3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Num_4) == 0x000478, "Member 'UWBP_Hud_Balloon_003_C::Num_4' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, NumPanel) == 0x000480, "Member 'UWBP_Hud_Balloon_003_C::NumPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, RootPanel) == 0x000488, "Member 'UWBP_Hud_Balloon_003_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, T_Miss) == 0x000490, "Member 'UWBP_Hud_Balloon_003_C::T_Miss' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, T_Balloon) == 0x0004A0, "Member 'UWBP_Hud_Balloon_003_C::T_Balloon' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Number_Col) == 0x0004B0, "Member 'UWBP_Hud_Balloon_003_C::Number_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Balloon_0_Col) == 0x0004B4, "Member 'UWBP_Hud_Balloon_003_C::Balloon_0_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Balloon_1_Col) == 0x0004B8, "Member 'UWBP_Hud_Balloon_003_C::Balloon_1_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, Miss_Col) == 0x0004BC, "Member 'UWBP_Hud_Balloon_003_C::Miss_Col' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Balloon_003_C, NumberOffset) == 0x0004C0, "Member 'UWBP_Hud_Balloon_003_C::NumberOffset' has a wrong offset!");

}

