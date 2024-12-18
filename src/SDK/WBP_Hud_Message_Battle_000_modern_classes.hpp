#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Message_Battle_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Message_Battle_000_modern.WBP_Hud_Message_Battle_000_modern_C
// 0x0040 (0x0580 - 0x0540)
class UWBP_Hud_Message_Battle_000_modern_C final : public UJackUMGSerifuWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0540(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_000;                                     // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_001;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_002;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_003;                                     // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_004;                                     // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_Message_Battle_000_modern(int32 EntryPoint);
	void SetVisibleBackgroundImage(bool bValue);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Message_Battle_000_modern_C">();
	}
	static class UWBP_Hud_Message_Battle_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Message_Battle_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Message_Battle_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Message_Battle_000_modern_C");
static_assert(sizeof(UWBP_Hud_Message_Battle_000_modern_C) == 0x000580, "Wrong size on UWBP_Hud_Message_Battle_000_modern_C");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, UberGraphFrame) == 0x000540, "Member 'UWBP_Hud_Message_Battle_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, BackgroundImage) == 0x000548, "Member 'UWBP_Hud_Message_Battle_000_modern_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, InvalidationBox_0) == 0x000550, "Member 'UWBP_Hud_Message_Battle_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, TextBlock_000) == 0x000558, "Member 'UWBP_Hud_Message_Battle_000_modern_C::TextBlock_000' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, TextBlock_001) == 0x000560, "Member 'UWBP_Hud_Message_Battle_000_modern_C::TextBlock_001' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, TextBlock_002) == 0x000568, "Member 'UWBP_Hud_Message_Battle_000_modern_C::TextBlock_002' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, TextBlock_003) == 0x000570, "Member 'UWBP_Hud_Message_Battle_000_modern_C::TextBlock_003' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Message_Battle_000_modern_C, TextBlock_004) == 0x000578, "Member 'UWBP_Hud_Message_Battle_000_modern_C::TextBlock_004' has a wrong offset!");

}

