#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Shop_List_004_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Shop_List_004_modern.WBP_Menu_Shop_List_004_modern_C
// 0x0128 (0x0558 - 0x0430)
class UWBP_Menu_Shop_List_004_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           BagItemListPanelNE;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CaptionTextPanel;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharaBagWindowFrame;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemHighlightPanel;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002_C_2;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_0;                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_1;                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_2;                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_3;                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_4;                        // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_5;                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_6;                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Shop_Item_004_modern_C*       WBP_Menu_Shop_Item_004_C_7;                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BottomMagin;                                       // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 SelectedBagType;                                   // 0x04AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCommonBag;                                       // 0x04AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackItem_Bag                                 SaveTargetBagType;                                 // 0x04AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF[0x1];                                      // 0x04AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaveTargetIndex;                                   // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B4[0x4];                                      // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SwapItemId;                                        // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BuyItemId;                                         // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         buyItemCount;                                      // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGUIActionInfo*                   ItemActionInfoRef;                                 // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExecEquipmentFlow;                               // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9[0x3];                                      // 0x04D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CharaBagListPosition;                              // 0x04DC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CommonBagListPosition;                             // 0x04E4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CharaBagCursorOffset;                              // 0x04EC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CommonBagCursorOffset;                             // 0x04F4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IndexPerPage;                                      // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountInBag;                                        // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CharaBagPagerPosition;                             // 0x0504(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CommonBagPagerPosition;                            // 0x050C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGShopItemSyousai*                ItemSyousaiRef;                                    // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Status_000_modern_C*    StatusWindowRef;                                   // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipUpdate;                                      // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBagOverflowByPass;                               // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A[0x2];                                      // 0x052A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BuyItemIndex;                                      // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CursorIndex;                                       // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534[0x4];                                      // 0x0534(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Common_Button_000_modern_C*   CommonButton000Ref;                                // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_100_modern_C*   DouguSyousai100Ref;                                // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenCommonButton;                                // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549[0x7];                                      // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Common_Setumei_007_modern_C*  CommonSetumei007Ref;                               // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Shop_List_004_modern(int32 EntryPoint);
	void ItemindexNotification_Event_0(int32 OutItemIndex);
	void BPActionDelegate(class FName EventTag);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void ChangedItemSyousai();
	void KeyEventDelegate(EJackKeys InKeyType, bool bIsPressed);
	void Construct();
	void UpdateList(int32 InCursorIndex, class FName InItemId);
	void ReturnToShopList000();
	void GetStoreBagName(class FName& InItemId, class FString* NewParam);
	void DoSelectItemFlow(bool IsExecEquipmentFlow_0);
	void OpenSetumeiAndStatusWindow(class UJackUMGShopItemSyousai* ItemSyousaiRef_0, bool InChangeItemSyousai);
	int32 GetCursorIndexInPage();
	void InitCursorIndex();
	void SetCursorIndex(int32 CursorIndex_0);
	void OpenCommonButtonWindow();
	void CloseCommonButtonWindow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Shop_List_004_modern_C">();
	}
	static class UWBP_Menu_Shop_List_004_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Shop_List_004_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Shop_List_004_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Shop_List_004_modern_C");
static_assert(sizeof(UWBP_Menu_Shop_List_004_modern_C) == 0x000558, "Wrong size on UWBP_Menu_Shop_List_004_modern_C");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Shop_List_004_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, BagItemListPanelNE) == 0x000438, "Member 'UWBP_Menu_Shop_List_004_modern_C::BagItemListPanelNE' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CaptionTextPanel) == 0x000440, "Member 'UWBP_Menu_Shop_List_004_modern_C::CaptionTextPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CharaBagWindowFrame) == 0x000448, "Member 'UWBP_Menu_Shop_List_004_modern_C::CharaBagWindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, ItemHighlightPanel) == 0x000450, "Member 'UWBP_Menu_Shop_List_004_modern_C::ItemHighlightPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, RootPanel) == 0x000458, "Member 'UWBP_Menu_Shop_List_004_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Parts_002_C_2) == 0x000460, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Parts_002_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_0) == 0x000468, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_1) == 0x000470, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_2) == 0x000478, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_3) == 0x000480, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_4) == 0x000488, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_5) == 0x000490, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_6) == 0x000498, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, WBP_Menu_Shop_Item_004_C_7) == 0x0004A0, "Member 'UWBP_Menu_Shop_List_004_modern_C::WBP_Menu_Shop_Item_004_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, BottomMagin) == 0x0004A8, "Member 'UWBP_Menu_Shop_List_004_modern_C::BottomMagin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, SelectedBagType) == 0x0004AC, "Member 'UWBP_Menu_Shop_List_004_modern_C::SelectedBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IsCommonBag) == 0x0004AD, "Member 'UWBP_Menu_Shop_List_004_modern_C::IsCommonBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, SaveTargetBagType) == 0x0004AE, "Member 'UWBP_Menu_Shop_List_004_modern_C::SaveTargetBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, SaveTargetIndex) == 0x0004B0, "Member 'UWBP_Menu_Shop_List_004_modern_C::SaveTargetIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, SwapItemId) == 0x0004B8, "Member 'UWBP_Menu_Shop_List_004_modern_C::SwapItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, BuyItemId) == 0x0004C0, "Member 'UWBP_Menu_Shop_List_004_modern_C::BuyItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, buyItemCount) == 0x0004C8, "Member 'UWBP_Menu_Shop_List_004_modern_C::buyItemCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, ItemActionInfoRef) == 0x0004D0, "Member 'UWBP_Menu_Shop_List_004_modern_C::ItemActionInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IsExecEquipmentFlow) == 0x0004D8, "Member 'UWBP_Menu_Shop_List_004_modern_C::IsExecEquipmentFlow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CharaBagListPosition) == 0x0004DC, "Member 'UWBP_Menu_Shop_List_004_modern_C::CharaBagListPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CommonBagListPosition) == 0x0004E4, "Member 'UWBP_Menu_Shop_List_004_modern_C::CommonBagListPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CharaBagCursorOffset) == 0x0004EC, "Member 'UWBP_Menu_Shop_List_004_modern_C::CharaBagCursorOffset' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CommonBagCursorOffset) == 0x0004F4, "Member 'UWBP_Menu_Shop_List_004_modern_C::CommonBagCursorOffset' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IndexPerPage) == 0x0004FC, "Member 'UWBP_Menu_Shop_List_004_modern_C::IndexPerPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CountInBag) == 0x000500, "Member 'UWBP_Menu_Shop_List_004_modern_C::CountInBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CharaBagPagerPosition) == 0x000504, "Member 'UWBP_Menu_Shop_List_004_modern_C::CharaBagPagerPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CommonBagPagerPosition) == 0x00050C, "Member 'UWBP_Menu_Shop_List_004_modern_C::CommonBagPagerPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, ItemSyousaiRef) == 0x000518, "Member 'UWBP_Menu_Shop_List_004_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, StatusWindowRef) == 0x000520, "Member 'UWBP_Menu_Shop_List_004_modern_C::StatusWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IsSkipUpdate) == 0x000528, "Member 'UWBP_Menu_Shop_List_004_modern_C::IsSkipUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IsBagOverflowByPass) == 0x000529, "Member 'UWBP_Menu_Shop_List_004_modern_C::IsBagOverflowByPass' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, BuyItemIndex) == 0x00052C, "Member 'UWBP_Menu_Shop_List_004_modern_C::BuyItemIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CursorIndex) == 0x000530, "Member 'UWBP_Menu_Shop_List_004_modern_C::CursorIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CommonButton000Ref) == 0x000538, "Member 'UWBP_Menu_Shop_List_004_modern_C::CommonButton000Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, DouguSyousai100Ref) == 0x000540, "Member 'UWBP_Menu_Shop_List_004_modern_C::DouguSyousai100Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, IsOpenCommonButton) == 0x000548, "Member 'UWBP_Menu_Shop_List_004_modern_C::IsOpenCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_List_004_modern_C, CommonSetumei007Ref) == 0x000550, "Member 'UWBP_Menu_Shop_List_004_modern_C::CommonSetumei007Ref' has a wrong offset!");

}
