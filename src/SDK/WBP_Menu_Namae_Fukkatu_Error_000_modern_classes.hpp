#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Fukkatu_Error_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Namae_Fukkatu_Error_000_modern.WBP_Menu_Namae_Fukkatu_Error_000_modern_C
// 0x0020 (0x0390 - 0x0370)
class UWBP_Menu_Namae_Fukkatu_Error_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Open;                                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Namae_Fukkatu_Error_000_modern(int32 EntryPoint);
	void Construct();
	void CustomEvent_0(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Namae_Fukkatu_Error_000_modern_C">();
	}
	static class UWBP_Menu_Namae_Fukkatu_Error_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Namae_Fukkatu_Error_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Namae_Fukkatu_Error_000_modern_C");
static_assert(sizeof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C) == 0x000390, "Wrong size on UWBP_Menu_Namae_Fukkatu_Error_000_modern_C");
static_assert(offsetof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Namae_Fukkatu_Error_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C, Open) == 0x000378, "Member 'UWBP_Menu_Namae_Fukkatu_Error_000_modern_C::Open' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C, RootPanel) == 0x000380, "Member 'UWBP_Menu_Namae_Fukkatu_Error_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Fukkatu_Error_000_modern_C, WBP_Menu_Parts_007) == 0x000388, "Member 'UWBP_Menu_Namae_Fukkatu_Error_000_modern_C::WBP_Menu_Parts_007' has a wrong offset!");

}
