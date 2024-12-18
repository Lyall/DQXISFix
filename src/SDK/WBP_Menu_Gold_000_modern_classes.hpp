#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Gold_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Gold_000_modern.WBP_Menu_Gold_000_modern_C
// 0x0038 (0x03A8 - 0x0370)
class UWBP_Menu_Gold_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionPanel;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnitPanel;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ValueText;                                         // 0x0390(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Menu_Gold_000_modern(int32 EntryPoint);
	void PhotoModeEvent(bool bIsPhotoMode);
	void Construct();
	void CustomEvent_1(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Gold_000_modern_C">();
	}
	static class UWBP_Menu_Gold_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Gold_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Gold_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Gold_000_modern_C");
static_assert(sizeof(UWBP_Menu_Gold_000_modern_C) == 0x0003A8, "Wrong size on UWBP_Menu_Gold_000_modern_C");
static_assert(offsetof(UWBP_Menu_Gold_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Gold_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Gold_000_modern_C, CaptionPanel) == 0x000378, "Member 'UWBP_Menu_Gold_000_modern_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Gold_000_modern_C, RootPanel) == 0x000380, "Member 'UWBP_Menu_Gold_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Gold_000_modern_C, UnitPanel) == 0x000388, "Member 'UWBP_Menu_Gold_000_modern_C::UnitPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Gold_000_modern_C, ValueText) == 0x000390, "Member 'UWBP_Menu_Gold_000_modern_C::ValueText' has a wrong offset!");

}

