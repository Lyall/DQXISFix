#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_List_010_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_List_010_modern.WBP_Menu_WorldMap_List_010_modern_C
// 0x0070 (0x0470 - 0x0400)
class UWBP_Menu_WorldMap_List_010_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemList;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           List010_Panel;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_00_Rura;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_01_Back;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_Title;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_Setumei_000_modern_C*  SetumeiWBP;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   SelectedMenuEvent;                                 // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EJackWorldMapState                            MenuType;                                          // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SelectedMenuEvent__DelegateSignature(class UWBP_Menu_WorldMap_List_010_modern_C* Sender, bool bSelectRura);
	void ExecuteUbergraph_WBP_Menu_WorldMap_List_010_modern(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetVisible(bool bIsVisible_0);
	void Construct();
	void CustomEvent_0(class FName EventTag);
	void OnItemListEvent(class FName EventName, class UJackUMGItemBase* ItemBase);
	void UpdateMenuItem(bool RuraMenuCanceled);
	void UpdateMenuDescription(bool bRuraMenuCanceled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_List_010_modern_C">();
	}
	static class UWBP_Menu_WorldMap_List_010_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_List_010_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_List_010_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_List_010_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_List_010_modern_C) == 0x000470, "Wrong size on UWBP_Menu_WorldMap_List_010_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, InvalidationBox_0) == 0x000408, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, ItemList) == 0x000410, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, List010_Panel) == 0x000418, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::List010_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, Parts000_00_Rura) == 0x000420, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::Parts000_00_Rura' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, Parts000_01_Back) == 0x000428, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::Parts000_01_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, Parts000_Title) == 0x000430, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::Parts000_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, RootPanel) == 0x000438, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, WindowFrame) == 0x000440, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, WindowLine) == 0x000448, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::WindowLine' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, SetumeiWBP) == 0x000450, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::SetumeiWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, SelectedMenuEvent) == 0x000458, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::SelectedMenuEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_010_modern_C, MenuType) == 0x000468, "Member 'UWBP_Menu_WorldMap_List_010_modern_C::MenuType' has a wrong offset!");

}
