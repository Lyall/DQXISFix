#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_MiniMap_Button_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_MiniMap_Button_000_modern.WBP_Hud_MiniMap_Button_000_modern_C
// 0x0018 (0x0388 - 0x0370)
class UWBP_Hud_MiniMap_Button_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_1062;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           WBP_Menu_Parts_008_modern;                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_MiniMap_Button_000_modern(int32 EntryPoint);
	void Construct();
	void CustomEvent_0(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_MiniMap_Button_000_modern_C">();
	}
	static class UWBP_Hud_MiniMap_Button_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_MiniMap_Button_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_MiniMap_Button_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_MiniMap_Button_000_modern_C");
static_assert(sizeof(UWBP_Hud_MiniMap_Button_000_modern_C) == 0x000388, "Wrong size on UWBP_Hud_MiniMap_Button_000_modern_C");
static_assert(offsetof(UWBP_Hud_MiniMap_Button_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Hud_MiniMap_Button_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_MiniMap_Button_000_modern_C, CanvasPanel_1062) == 0x000378, "Member 'UWBP_Hud_MiniMap_Button_000_modern_C::CanvasPanel_1062' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_MiniMap_Button_000_modern_C, WBP_Menu_Parts_008_modern) == 0x000380, "Member 'UWBP_Hud_MiniMap_Button_000_modern_C::WBP_Menu_Parts_008_modern' has a wrong offset!");

}
