#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_List_012_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_List_012_modern.WBP_Menu_WorldMap_List_012_modern_C
// 0x00E8 (0x0518 - 0x0430)
class UWBP_Menu_WorldMap_List_012_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           NoNeighborMapText;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_10;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_11;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_00;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_01;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_02;                                       // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_03;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_04;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_05;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_06;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_07;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_08;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_09;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_Title;                                    // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           Parts002;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BottomMagin;                                       // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Jumon_Setumei_001_modern_C*   SetumeiWindow001;                                  // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   FocusItemEvent;                                    // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   RemoveEvent;                                       // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UJackUMGMapTextItemBase*>        SelectedNeighborMapItems;                          // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   PrevMapVolumeID;                                   // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FocusItemEvent__DelegateSignature(class UJackUMGAccessorSaveDataInRura* RuraData);
	void RemoveEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_WorldMap_List_012_modern(int32 EntryPoint);
	void OnInitialized();
	void WidgetBActionDelegate(class FName EventTag);
	void Construct();
	void SetParamSetumei(int32 ItemIndex, bool* IsEmpty);
	void UpdateNeighborMapList(class FName MapVolumeID, class FName PrevMapVolumeID_0);
	void ItemListControlHandler(class FName Selection, class UJackUMGItemBase* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_List_012_modern_C">();
	}
	static class UWBP_Menu_WorldMap_List_012_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_List_012_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_List_012_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_List_012_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_List_012_modern_C) == 0x000518, "Wrong size on UWBP_Menu_WorldMap_List_012_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, ItemListPanel) == 0x000440, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, NoNeighborMapText) == 0x000448, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::NoNeighborMapText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_10) == 0x000450, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_11) == 0x000458, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_11' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_00) == 0x000460, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_01) == 0x000468, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_02) == 0x000470, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_03) == 0x000478, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_04) == 0x000480, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_04' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_05) == 0x000488, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_05' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_06) == 0x000490, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_06' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_07) == 0x000498, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_07' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_08) == 0x0004A0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_08' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_09) == 0x0004A8, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_09' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts000_Title) == 0x0004B0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts000_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, Parts002) == 0x0004B8, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::Parts002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, RootPanel) == 0x0004C0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, WindowFrame) == 0x0004C8, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, BottomMagin) == 0x0004D0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::BottomMagin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, SetumeiWindow001) == 0x0004D8, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::SetumeiWindow001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, FocusItemEvent) == 0x0004E0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::FocusItemEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, RemoveEvent) == 0x0004F0, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::RemoveEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, SelectedNeighborMapItems) == 0x000500, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::SelectedNeighborMapItems' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_List_012_modern_C, PrevMapVolumeID) == 0x000510, "Member 'UWBP_Menu_WorldMap_List_012_modern_C::PrevMapVolumeID' has a wrong offset!");

}
