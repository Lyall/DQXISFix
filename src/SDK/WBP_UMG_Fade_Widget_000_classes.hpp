#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UMG_Fade_Widget_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UMG_Fade_Widget_000.WBP_UMG_Fade_Widget_000_C
// 0x0018 (0x0388 - 0x0370)
class UWBP_UMG_Fade_Widget_000_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fade;                                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UMG_Fade_Widget_000(int32 EntryPoint);
	void Destruct();
	void SetFade(class FName WidgetName_0, int32 ZOrder, float FadeAlpha, const struct FLinearColor& FadeColor);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UMG_Fade_Widget_000_C">();
	}
	static class UWBP_UMG_Fade_Widget_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UMG_Fade_Widget_000_C>();
	}
};
static_assert(alignof(UWBP_UMG_Fade_Widget_000_C) == 0x000008, "Wrong alignment on UWBP_UMG_Fade_Widget_000_C");
static_assert(sizeof(UWBP_UMG_Fade_Widget_000_C) == 0x000388, "Wrong size on UWBP_UMG_Fade_Widget_000_C");
static_assert(offsetof(UWBP_UMG_Fade_Widget_000_C, UberGraphFrame) == 0x000370, "Member 'UWBP_UMG_Fade_Widget_000_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UMG_Fade_Widget_000_C, CanvasPanel) == 0x000378, "Member 'UWBP_UMG_Fade_Widget_000_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_UMG_Fade_Widget_000_C, Fade) == 0x000380, "Member 'UWBP_UMG_Fade_Widget_000_C::Fade' has a wrong offset!");

}
