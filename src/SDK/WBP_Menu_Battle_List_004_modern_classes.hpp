#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_List_004_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENUM_Menu_ActionFlowResult_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Battle_List_004_modern.WBP_Menu_Battle_List_004_modern_C
// 0x00E0 (0x0510 - 0x0430)
class UWBP_Menu_Battle_List_004_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_744;                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002;                                // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           WBP_Menu_Parts_008;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022;                                // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_6;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_7;                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_60;                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_62;                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_64;                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_67;                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_022_modern_C*           WBP_Menu_Parts_022_C_71;                           // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_Setumei_003_modern_C*  SetumeiWindowRef;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGItemSortType                          SortType;                                          // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Common_Button_000_modern_C*   CommonButtonWindow;                                // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Status_000_modern_C*    StatusWindowRef;                                   // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnter;                                           // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9[0x3];                                      // 0x04D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaveDataNumber;                                    // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 SelectBagType;                                     // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGUIActionInfo*                   UIActionInfoRef;                                   // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OnPagerCommonPosition;                             // 0x04F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OffPagerCommonPosition;                            // 0x04F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_100_modern_C*   DouguSyousai100Ref;                                // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_Menu_ActionFlowResult                    FlowResult;                                        // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGUIActionFlow                          UIFlow;                                            // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Battle_List_004_modern(int32 EntryPoint);
	void ItemIndexNotify(int32 OutItemIndex);
	void ChangedItemIndex();
	void CustomEvent_0(EJackKeys InKeyType, bool bIsPressed);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void WidgetBPActionDelegate(class FName EventTag);
	void Construct();
	void UpdateBrowserList(int32* NumData);
	void RemoveSetumeiAndStatus();
	void SelectedItemIndex(class UJackUMGItemBase* InItemBase);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Battle_List_004_modern_C">();
	}
	static class UWBP_Menu_Battle_List_004_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Battle_List_004_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Battle_List_004_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Battle_List_004_modern_C");
static_assert(sizeof(UWBP_Menu_Battle_List_004_modern_C) == 0x000510, "Wrong size on UWBP_Menu_Battle_List_004_modern_C");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Battle_List_004_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_Menu_Battle_List_004_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, ItemListPanel) == 0x000440, "Member 'UWBP_Menu_Battle_List_004_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, RootPanel) == 0x000448, "Member 'UWBP_Menu_Battle_List_004_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_000_C_744) == 0x000450, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_000_C_744' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_002) == 0x000458, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_008) == 0x000460, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_008' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022) == 0x000468, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_6) == 0x000470, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_7) == 0x000478, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_60) == 0x000480, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_60' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_62) == 0x000488, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_62' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_64) == 0x000490, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_64' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_67) == 0x000498, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_67' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WBP_Menu_Parts_022_C_71) == 0x0004A0, "Member 'UWBP_Menu_Battle_List_004_modern_C::WBP_Menu_Parts_022_C_71' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WindowFrame) == 0x0004A8, "Member 'UWBP_Menu_Battle_List_004_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, WindowLine) == 0x0004B0, "Member 'UWBP_Menu_Battle_List_004_modern_C::WindowLine' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, SetumeiWindowRef) == 0x0004B8, "Member 'UWBP_Menu_Battle_List_004_modern_C::SetumeiWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, SortType) == 0x0004C0, "Member 'UWBP_Menu_Battle_List_004_modern_C::SortType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, CommonButtonWindow) == 0x0004C8, "Member 'UWBP_Menu_Battle_List_004_modern_C::CommonButtonWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, StatusWindowRef) == 0x0004D0, "Member 'UWBP_Menu_Battle_List_004_modern_C::StatusWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, IsEnter) == 0x0004D8, "Member 'UWBP_Menu_Battle_List_004_modern_C::IsEnter' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, SaveDataNumber) == 0x0004DC, "Member 'UWBP_Menu_Battle_List_004_modern_C::SaveDataNumber' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, SelectBagType) == 0x0004E0, "Member 'UWBP_Menu_Battle_List_004_modern_C::SelectBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, UIActionInfoRef) == 0x0004E8, "Member 'UWBP_Menu_Battle_List_004_modern_C::UIActionInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, OnPagerCommonPosition) == 0x0004F0, "Member 'UWBP_Menu_Battle_List_004_modern_C::OnPagerCommonPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, OffPagerCommonPosition) == 0x0004F8, "Member 'UWBP_Menu_Battle_List_004_modern_C::OffPagerCommonPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, DouguSyousai100Ref) == 0x000500, "Member 'UWBP_Menu_Battle_List_004_modern_C::DouguSyousai100Ref' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, FlowResult) == 0x000508, "Member 'UWBP_Menu_Battle_List_004_modern_C::FlowResult' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_004_modern_C, UIFlow) == 0x000509, "Member 'UWBP_Menu_Battle_List_004_modern_C::UIFlow' has a wrong offset!");

}

