#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_100_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENUM_Menu_Dougu_Syousai_Page_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "ENUM_Menu_Dougu_Syousai_Disp_Region_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Dougu_Syousai_100_modern.WBP_Menu_Dougu_Syousai_100_modern_C
// 0x0198 (0x0508 - 0x0370)
class UWBP_Menu_Dougu_Syousai_100_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Caption_Small;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_ScrollContent_002_modern_C* WBP_Menu_Common_ScrollContent_002;                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_101_modern_C*   WBP_Menu_Dougu_Syousai_101;                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_102_modern_C*   WBP_Menu_Dougu_Syousai_102;                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           WBP_Menu_Parts_008;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FJackUMGItemListInfo>           ItemSyousaiList;                                   // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ItemMax;                                           // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowItemIndex;                                     // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   ItemIndexNotification;                             // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   EquipmentInfoRef;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackUMGWidgetBase*>             VisibleWidgetList;                                 // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ShowPage;                                          // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextPage;                                          // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  ParamVisibleList;                                  // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                  GetAreaVisibleList;                                // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                  QualityVisibleList;                                // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                  RecipeBookVisibleList;                             // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                  VisibleList;                                       // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispPageList;                                      // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EJackCharacter                                OpenCharaType;                                     // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectedChara;                                   // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDekiNoYosa;                                      // 0x0462(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463[0x5];                                      // 0x0463(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispListDouguSyousai;                              // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispListSoubiSyousai;                              // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispListSoubiSyousaiWithKazi;                      // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispListRecipeSyousai;                             // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ENUM_Menu_Dougu_Syousai_Page                  DispPageListType;                                  // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenedFusigikazi;                                // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA[0x6];                                      // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ENUM_Menu_Dougu_Syousai_Page>          DispListDekoNoYosaSyousai;                         // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         DouguSyousaiZOrder;                                // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHandedness;                                     // 0x04C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C5[0x3];                                      // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGItemListInfo                   ItemSyousaiInfo;                                   // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EJackItem_Bag                                 SelectItemBagType;                                 // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                SelectItemCharaType;                               // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 OpenCharaBagType;                                  // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDisableMove;                                    // 0x04E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackEquipmentRegion                          SelectRegion;                                      // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_Menu_Dougu_Syousai_Disp_Region           DispRegionMode;                                    // 0x04E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsItemComparison;                                 // 0x04E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E7[0x1];                                      // 0x04E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Dougu_Syousai_101_modern_C*   DouguSyousai101Ref;                                // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_102_modern_C*   DouguSyousai102Ref;                                // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         DouguSyousaiAssets;                                // 0x04F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

public:
	void ItemIndexNotification__DelegateSignature(int32 OutItemIndex);
	void ExecuteUbergraph_WBP_Menu_Dougu_Syousai_100_modern(int32 EntryPoint);
	void OnSetText(const class FText& Text);
	void CustomEvent_1(EJackKeys InKeyType, bool bIsPressed);
	void DispItemSyousai();
	void CustomEvent_0(class FName EventTag);
	void Construct();
	void SetupItemSyousai(TArray<struct FJackUMGItemListInfo>& ItemSyousalList, int32 InShowItemIndex, EJackCharacter InCharaType, EJackEquipmentRegion InRegion, bool IsDekiNoYosa_0, bool ShowBG);
	void ShowItemSyousai();
	void UpdateDispList();
	void UpdateCommonButton();
	void TogglePage(bool* IsChangedPage);
	void IsDisableInput(bool IsDisableMove);
	void SetupItemSyousaiWithDispRegion(TArray<struct FJackUMGItemListInfo>& ItemSyousalList, int32 InShowItemIndex, EJackCharacter InCharaType, EJackEquipmentRegion InRegion, bool IsDekiNoYosa_0, bool ShowBG, ENUM_Menu_Dougu_Syousai_Disp_Region InDispRegionMode);

	void GetVisibleTable(ENUM_Menu_Dougu_Syousai_Page DispSyousaiPage, TArray<bool>* ParamVisibleList_0) const;
	int32 UpDownItemIndex(EJackKeys Index_0) const;
	void IsHandedness(bool* NewParam) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Dougu_Syousai_100_modern_C">();
	}
	static class UWBP_Menu_Dougu_Syousai_100_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Dougu_Syousai_100_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Dougu_Syousai_100_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Dougu_Syousai_100_modern_C");
static_assert(sizeof(UWBP_Menu_Dougu_Syousai_100_modern_C) == 0x000508, "Wrong size on UWBP_Menu_Dougu_Syousai_100_modern_C");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, BG) == 0x000378, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, Caption_Small) == 0x000380, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::Caption_Small' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, RootPanel) == 0x000388, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, WBP_Menu_Common_ScrollContent_002) == 0x000390, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::WBP_Menu_Common_ScrollContent_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, WBP_Menu_Dougu_Syousai_101) == 0x000398, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::WBP_Menu_Dougu_Syousai_101' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, WBP_Menu_Dougu_Syousai_102) == 0x0003A0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::WBP_Menu_Dougu_Syousai_102' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, WBP_Menu_Parts_008) == 0x0003A8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::WBP_Menu_Parts_008' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ItemSyousaiList) == 0x0003B0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ItemSyousaiList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ItemMax) == 0x0003C0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ItemMax' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ShowItemIndex) == 0x0003C4, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ShowItemIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ItemIndexNotification) == 0x0003C8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ItemIndexNotification' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ItemSyousaiRef) == 0x0003D8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, EquipmentInfoRef) == 0x0003E0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::EquipmentInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, VisibleWidgetList) == 0x0003E8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::VisibleWidgetList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ShowPage) == 0x0003F8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ShowPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, NextPage) == 0x0003FC, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::NextPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ParamVisibleList) == 0x000400, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ParamVisibleList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, GetAreaVisibleList) == 0x000410, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::GetAreaVisibleList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, QualityVisibleList) == 0x000420, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::QualityVisibleList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, RecipeBookVisibleList) == 0x000430, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::RecipeBookVisibleList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, VisibleList) == 0x000440, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::VisibleList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispPageList) == 0x000450, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispPageList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, OpenCharaType) == 0x000460, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::OpenCharaType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, IsSelectedChara) == 0x000461, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::IsSelectedChara' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, IsDekiNoYosa) == 0x000462, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::IsDekiNoYosa' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispListDouguSyousai) == 0x000468, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispListDouguSyousai' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispListSoubiSyousai) == 0x000478, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispListSoubiSyousai' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispListSoubiSyousaiWithKazi) == 0x000488, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispListSoubiSyousaiWithKazi' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispListRecipeSyousai) == 0x000498, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispListRecipeSyousai' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispPageListType) == 0x0004A8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispPageListType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, IsOpenedFusigikazi) == 0x0004A9, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::IsOpenedFusigikazi' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispListDekoNoYosaSyousai) == 0x0004B0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispListDekoNoYosaSyousai' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DouguSyousaiZOrder) == 0x0004C0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DouguSyousaiZOrder' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, bIsHandedness) == 0x0004C4, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::bIsHandedness' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, ItemSyousaiInfo) == 0x0004C8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::ItemSyousaiInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, SelectItemBagType) == 0x0004E0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::SelectItemBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, SelectItemCharaType) == 0x0004E1, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::SelectItemCharaType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, OpenCharaBagType) == 0x0004E2, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::OpenCharaBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, bIsDisableMove) == 0x0004E3, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::bIsDisableMove' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, SelectRegion) == 0x0004E4, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::SelectRegion' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DispRegionMode) == 0x0004E5, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DispRegionMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, bIsItemComparison) == 0x0004E6, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::bIsItemComparison' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DouguSyousai101Ref) == 0x0004E8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DouguSyousai101Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DouguSyousai102Ref) == 0x0004F0, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DouguSyousai102Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_100_modern_C, DouguSyousaiAssets) == 0x0004F8, "Member 'UWBP_Menu_Dougu_Syousai_100_modern_C::DouguSyousaiAssets' has a wrong offset!");

}

