#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_008_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Status_008_modern.WBP_Hud_Status_008_modern_C
// 0x0030 (0x0200 - 0x01D0)
class UWBP_Hud_Status_008_modern_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UWBP_Hud_Status_HP3_C*                  HudStatusHP3;                                      // 0x01D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HudStatusLevel3;                                   // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_MP3_C*                  HudStatusMP3;                                      // 0x01E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HudStatusName3;                                    // 0x01F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x01F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_Status_008_modern(int32 EntryPoint);
	void InitName(const class FString& Name_0, EJackUMGTextColorSet ColorType);
	void Construct();
	void InitLevel(int32 Level, EJackUMGTextColorSet ColorType);
	void InitData(class UJackGameCharacter* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Status_008_modern_C">();
	}
	static class UWBP_Hud_Status_008_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Status_008_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Status_008_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Status_008_modern_C");
static_assert(sizeof(UWBP_Hud_Status_008_modern_C) == 0x000200, "Wrong size on UWBP_Hud_Status_008_modern_C");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Hud_Status_008_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, HudStatusHP3) == 0x0001D8, "Member 'UWBP_Hud_Status_008_modern_C::HudStatusHP3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, HudStatusLevel3) == 0x0001E0, "Member 'UWBP_Hud_Status_008_modern_C::HudStatusLevel3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, HudStatusMP3) == 0x0001E8, "Member 'UWBP_Hud_Status_008_modern_C::HudStatusMP3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, HudStatusName3) == 0x0001F0, "Member 'UWBP_Hud_Status_008_modern_C::HudStatusName3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_008_modern_C, RootPanel) == 0x0001F8, "Member 'UWBP_Hud_Status_008_modern_C::RootPanel' has a wrong offset!");

}
