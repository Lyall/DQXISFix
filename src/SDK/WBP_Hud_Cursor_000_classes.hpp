#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Cursor_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Cursor_000.WBP_Hud_Cursor_000_C
// 0x0020 (0x0390 - 0x0370)
class UWBP_Hud_Cursor_000_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DisableGray;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Enable;                                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Hud_Cursor_000(int32 EntryPoint);
	void WidgetBPActionDelegate(class FName EventTag);
	void Construct();
	void SetActivate(bool InIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Cursor_000_C">();
	}
	static class UWBP_Hud_Cursor_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Cursor_000_C>();
	}
};
static_assert(alignof(UWBP_Hud_Cursor_000_C) == 0x000008, "Wrong alignment on UWBP_Hud_Cursor_000_C");
static_assert(sizeof(UWBP_Hud_Cursor_000_C) == 0x000390, "Wrong size on UWBP_Hud_Cursor_000_C");
static_assert(offsetof(UWBP_Hud_Cursor_000_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Hud_Cursor_000_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Cursor_000_C, CanvasPanel) == 0x000378, "Member 'UWBP_Hud_Cursor_000_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Cursor_000_C, DisableGray) == 0x000380, "Member 'UWBP_Hud_Cursor_000_C::DisableGray' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Cursor_000_C, Enable) == 0x000388, "Member 'UWBP_Hud_Cursor_000_C::Enable' has a wrong offset!");

}
