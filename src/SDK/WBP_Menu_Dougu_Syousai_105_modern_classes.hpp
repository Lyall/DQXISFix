#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_105_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Dougu_Syousai_105_modern.WBP_Menu_Dougu_Syousai_105_modern_C
// 0x0060 (0x03D0 - 0x0370)
class UWBP_Menu_Dougu_Syousai_105_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       PrevItemAnim_Bottom;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       PrevItemAnim_Top;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel_3;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_1161;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_1162;                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_1163;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007_C_250;                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Menu_Parts_000_modern_C*>   PanelList;                                         // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJackUMGItemGetInfo>            DropDisplayList;                                   // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Menu_Dougu_Syousai_105_modern(int32 EntryPoint);
	void Construct();
	void DispItemFromSyousaiRef(class UJackUMGItemSyousai* InItemSyousaiRef);
	void JackOnWidgetNotificationDelegate_Event_0(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Dougu_Syousai_105_modern_C">();
	}
	static class UWBP_Menu_Dougu_Syousai_105_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Dougu_Syousai_105_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Dougu_Syousai_105_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Dougu_Syousai_105_modern_C");
static_assert(sizeof(UWBP_Menu_Dougu_Syousai_105_modern_C) == 0x0003D0, "Wrong size on UWBP_Menu_Dougu_Syousai_105_modern_C");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, PrevItemAnim_Bottom) == 0x000378, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::PrevItemAnim_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, PrevItemAnim_Top) == 0x000380, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::PrevItemAnim_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, ItemListPanel_3) == 0x000388, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::ItemListPanel_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, WBP_Menu_Parts_000_C_1161) == 0x000390, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::WBP_Menu_Parts_000_C_1161' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, WBP_Menu_Parts_000_C_1162) == 0x000398, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::WBP_Menu_Parts_000_C_1162' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, WBP_Menu_Parts_000_C_1163) == 0x0003A0, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::WBP_Menu_Parts_000_C_1163' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, WBP_Menu_Parts_007_C_250) == 0x0003A8, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::WBP_Menu_Parts_007_C_250' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, PanelList) == 0x0003B0, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::PanelList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_105_modern_C, DropDisplayList) == 0x0003C0, "Member 'UWBP_Menu_Dougu_Syousai_105_modern_C::DropDisplayList' has a wrong offset!");

}
