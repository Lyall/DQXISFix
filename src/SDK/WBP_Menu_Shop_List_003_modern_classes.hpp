#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Shop_List_003_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Shop_List_003_modern.WBP_Menu_Shop_List_003_modern_C
// 0x0330 (0x0760 - 0x0430)
class UWBP_Menu_Shop_List_003_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionTextPanel;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemHighlightPanel;                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanelNE;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Soubi_000_modern_C*     WBP_Menu_Dougu_Soubi_000;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_0;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_1;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_2;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_3;                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_4;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_5;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_6;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_7;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_8;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_9;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_083_modern_C*           WBP_Menu_Parts_083_C_10;                           // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrameAll;                                    // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_List_004_modern_C*       BagListWindowRef;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalPrice;                                        // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountInBag;                                        // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountInTotal;                                      // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquipped;                                        // 0x04D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInBag;                                           // 0x04D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6[0x2];                                      // 0x04D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GettableCount;                                     // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackEquipmentRegion                          EquipmentRegion;                                   // 0x04DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD[0x3];                                      // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGUIActionInfo*                   UIActionInfoRef;                                   // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   SoubiItemInfoRef;                                  // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 SoubiBagType;                                      // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                SoubiCharType;                                     // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F2[0x6];                                      // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SoubiItemId;                                       // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SoubiIndexInBag;                                   // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGSoubiList*                      SoubiListRef;                                      // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageArgumentData               MsgCharName;                                       // 0x0510(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgItemName;                                       // 0x0558(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJackUMGUIActionInfo*                   EquippedAccessory1Ref;                             // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   EquippedAccessory2Ref;                             // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   HandEquipment;                                     // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActionEquipment;                                 // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9[0x7];                                      // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   EquipmentAcionDelegate;                            // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Menu_Main_Command_000_modern_C*    MainCommandWindowRef;                              // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGEquipmentResultData            ResultData;                                        // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FJackMessageArgumentData               MsgAliveName;                                      // 0x05F0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackUMGEquipmentResultData            EquipmentResultData;                               // 0x0638(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FJackMessageArgumentData               MsgReleaseItemName;                                // 0x0650(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   BuyItemId;                                         // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuyItemIndex;                                      // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A4[0x4];                                      // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   EquippedItemId;                                    // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageArgumentData               MsgHandedness;                                     // 0x06B0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgHand;                                           // 0x06F8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJackUMGItemSyousai*                    HandednessItemInfo;                                // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGShopItemSyousai*                ItemSyousaiRef;                                    // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   NitouryuuItemInfo2;                                // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdateList;                                      // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EquipmentAcionDelegate__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_Shop_List_003_modern(int32 EntryPoint);
	void Destruct();
	void SenaHairstyleChangedDelegate_Event_0();
	void DisplayAfterBuyingMessage();
	void EquipmentFlow(int32 ItemIndex);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void WidgetBPActionDelegate(class FName EventTag);
	void Construct();
	void UpdateMembarList();
	void GetShopTalkMessage(class FName InTextId, class FString* OutString);
	class FString GetTargetCharName();
	void GetTargetCharTag(struct FJackMessageArgumentData* JackMessageArgumentData);
	void GetTotalPriceTag(struct FJackMessageArgumentData* JackMessageArgumentData);
	bool IsTargetOrBag();
	bool IsBouguAndSibari();
	void UpdateBagListOnItemID(int32 InDataIndex, class FName InItemId);
	void GetEquipmentActionResult(bool* NewParam);
	void GetEquipmentResultData(struct FJackUMGEquipmentResultData* ResultData_0);
	void GetSelectedItemName(class FString* NewParam);
	void GetBagName(struct FJackMessageArgumentData* ArgData);
	void ReturnToShopList000(bool IsCancelMessage);
	void GetStoreBagName(class FString* NewParam);
	void MakeMessageCharName();
	void GetItemNameById(class FName InItemId, struct FJackMessageArgumentData* JackMessageArgumentData);
	void GetRegionMessage(EJackEquipmentRegion InRegionType, struct FJackMessageArgumentData* JackMessageArgumentData);
	void BuyAction(bool IsSelectedItem, int32* BuyItemIndex_0);
	void DoEquipmentAction();
	void UpdateBagListOnIndex(int32 InDataIndex);
	void SetItemSyousai(class UJackUMGShopItemSyousai* ItemSyousaiRef_0);
	class UJackGameCharacter* GetTargetChar();

	void IsEquippedWithWeaponInHand_(class FName* OutItemId, bool* bIsNitouryu) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Shop_List_003_modern_C">();
	}
	static class UWBP_Menu_Shop_List_003_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Shop_List_003_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Shop_List_003_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Shop_List_003_modern_C");
static_assert(sizeof(UWBP_Menu_Shop_List_003_modern_C) == 0x000760, "Wrong size on UWBP_Menu_Shop_List_003_modern_C");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Shop_List_003_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, CaptionTextPanel) == 0x000438, "Member 'UWBP_Menu_Shop_List_003_modern_C::CaptionTextPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, InvalidationBox_0) == 0x000440, "Member 'UWBP_Menu_Shop_List_003_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, ItemHighlightPanel) == 0x000448, "Member 'UWBP_Menu_Shop_List_003_modern_C::ItemHighlightPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, ItemListPanelNE) == 0x000450, "Member 'UWBP_Menu_Shop_List_003_modern_C::ItemListPanelNE' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Dougu_Soubi_000) == 0x000458, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Dougu_Soubi_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_0) == 0x000460, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_1) == 0x000468, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_2) == 0x000470, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_3) == 0x000478, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_4) == 0x000480, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_5) == 0x000488, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_6) == 0x000490, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_7) == 0x000498, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_8) == 0x0004A0, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_9) == 0x0004A8, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WBP_Menu_Parts_083_C_10) == 0x0004B0, "Member 'UWBP_Menu_Shop_List_003_modern_C::WBP_Menu_Parts_083_C_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, WindowFrameAll) == 0x0004B8, "Member 'UWBP_Menu_Shop_List_003_modern_C::WindowFrameAll' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, BagListWindowRef) == 0x0004C0, "Member 'UWBP_Menu_Shop_List_003_modern_C::BagListWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, TotalPrice) == 0x0004C8, "Member 'UWBP_Menu_Shop_List_003_modern_C::TotalPrice' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, CountInBag) == 0x0004CC, "Member 'UWBP_Menu_Shop_List_003_modern_C::CountInBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, CountInTotal) == 0x0004D0, "Member 'UWBP_Menu_Shop_List_003_modern_C::CountInTotal' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, IsEquipped) == 0x0004D4, "Member 'UWBP_Menu_Shop_List_003_modern_C::IsEquipped' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, IsInBag) == 0x0004D5, "Member 'UWBP_Menu_Shop_List_003_modern_C::IsInBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, GettableCount) == 0x0004D8, "Member 'UWBP_Menu_Shop_List_003_modern_C::GettableCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquipmentRegion) == 0x0004DC, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquipmentRegion' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, UIActionInfoRef) == 0x0004E0, "Member 'UWBP_Menu_Shop_List_003_modern_C::UIActionInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiItemInfoRef) == 0x0004E8, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiItemInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiBagType) == 0x0004F0, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiCharType) == 0x0004F1, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiCharType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiItemId) == 0x0004F8, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiIndexInBag) == 0x000500, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiIndexInBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, SoubiListRef) == 0x000508, "Member 'UWBP_Menu_Shop_List_003_modern_C::SoubiListRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgCharName) == 0x000510, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgCharName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgItemName) == 0x000558, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgItemName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquippedAccessory1Ref) == 0x0005A0, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquippedAccessory1Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquippedAccessory2Ref) == 0x0005A8, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquippedAccessory2Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, HandEquipment) == 0x0005B0, "Member 'UWBP_Menu_Shop_List_003_modern_C::HandEquipment' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, IsActionEquipment) == 0x0005B8, "Member 'UWBP_Menu_Shop_List_003_modern_C::IsActionEquipment' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquipmentAcionDelegate) == 0x0005C0, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquipmentAcionDelegate' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MainCommandWindowRef) == 0x0005D0, "Member 'UWBP_Menu_Shop_List_003_modern_C::MainCommandWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, ResultData) == 0x0005D8, "Member 'UWBP_Menu_Shop_List_003_modern_C::ResultData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgAliveName) == 0x0005F0, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgAliveName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquipmentResultData) == 0x000638, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquipmentResultData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgReleaseItemName) == 0x000650, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgReleaseItemName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, BuyItemId) == 0x000698, "Member 'UWBP_Menu_Shop_List_003_modern_C::BuyItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, BuyItemIndex) == 0x0006A0, "Member 'UWBP_Menu_Shop_List_003_modern_C::BuyItemIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, EquippedItemId) == 0x0006A8, "Member 'UWBP_Menu_Shop_List_003_modern_C::EquippedItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgHandedness) == 0x0006B0, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgHandedness' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, MsgHand) == 0x0006F8, "Member 'UWBP_Menu_Shop_List_003_modern_C::MsgHand' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, HandednessItemInfo) == 0x000740, "Member 'UWBP_Menu_Shop_List_003_modern_C::HandednessItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, ItemSyousaiRef) == 0x000748, "Member 'UWBP_Menu_Shop_List_003_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, NitouryuuItemInfo2) == 0x000750, "Member 'UWBP_Menu_Shop_List_003_modern_C::NitouryuuItemInfo2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_003_modern_C, IsUpdateList) == 0x000758, "Member 'UWBP_Menu_Shop_List_003_modern_C::IsUpdateList' has a wrong offset!");

}

