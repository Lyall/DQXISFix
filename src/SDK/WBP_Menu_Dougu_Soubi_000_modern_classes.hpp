#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Soubi_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Dougu_Soubi_000_modern.WBP_Menu_Dougu_Soubi_000_modern_C
// 0x0258 (0x05C8 - 0x0370)
class UWBP_Menu_Dougu_Soubi_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackMessageArgumentData               MsgAliveName;                                      // 0x0380(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgCharName;                                       // 0x03C8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgItemName;                                       // 0x0410(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgItemCount;                                      // 0x0458(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FJackMessageArgumentData               MsgReleaseItemName;                                // 0x04A0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Menu_Common_Quantity_001_modern_C* QuantityWindowRef;                                 // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectedWindowPanel;                               // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectedListPanel;                                 // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoubiItemId;                                       // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackCharacter                                SoubiCharType;                                     // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 SoubiBagType;                                      // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A[0x6];                                      // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGSoubiList*                      SoubiListRef;                                      // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DetachItemId;                                      // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackEquipmentRegion                          EquipmentRegion;                                   // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasEquipped;                                       // 0x0521(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackEquipmentRegion                          SelectSequipmentRegion;                            // 0x0522(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_523[0x5];                                      // 0x0523(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Main_Command_000_modern_C*    MainCommandWindowRef;                              // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FJackUMGEquipmentResultData            EquipmentResultData;                               // 0x0530(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UJackUMGItemData*>               DataItemList;                                      // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJackUMGUIActionInfo*                   HandednessEquipmentRef;                            // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   HandEquipmentRef;                                  // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   SoubiItemRef;                                      // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SoubiIndexInBag;                                   // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_574[0x4];                                      // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGEquipmentResultData            ResultData;                                        // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                   DoEquipmentEventFinish;                            // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   DoDispResultMessageFinish;                         // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEquippedConfirmation;                            // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1[0x7];                                      // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGItemSyousai*                    DetachItemInfo;                                    // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DetachitemIndex;                                   // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoEquipmentEventFinish__DelegateSignature();
	void DoDispResultMessageFinish__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_Dougu_Soubi_000_modern(int32 EntryPoint);
	void DoEquipmentEvent(bool IsEquippedConfirmation_0);
	void DoEquipmentResultMessage();
	void WidgetBPActionDelegate(class FName EventTag);
	void Construct();
	void OpenQuantityWindow(class UWBP_Menu_Common_Quantity_001_modern_C** OutQuantityWindow);
	void SetupSoubiData();
	void MakeMessageArgument();
	void IsHandedWeapons(class FName& InItemId, bool* IsHanded);
	void GetSoubi(class UJackUMGSoubiList** AsJack_UMGSoubi_List);
	void GetEquipmentActionResult(bool* IsActionlEquipment);
	void DoEquipmentAction(EJackEquipmentRegion EquipmentRegion_0, struct FJackUMGEquipmentResultData* ResultData_0);
	void GetEmptyAccessoryRegion(class UJackUMGSoubiList* InSoubiListRef, EJackEquipmentRegion* EmptyRegion);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Dougu_Soubi_000_modern_C">();
	}
	static class UWBP_Menu_Dougu_Soubi_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Dougu_Soubi_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Dougu_Soubi_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Dougu_Soubi_000_modern_C");
static_assert(sizeof(UWBP_Menu_Dougu_Soubi_000_modern_C) == 0x0005C8, "Wrong size on UWBP_Menu_Dougu_Soubi_000_modern_C");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, ItemSyousaiRef) == 0x000378, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MsgAliveName) == 0x000380, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MsgAliveName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MsgCharName) == 0x0003C8, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MsgCharName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MsgItemName) == 0x000410, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MsgItemName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MsgItemCount) == 0x000458, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MsgItemCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MsgReleaseItemName) == 0x0004A0, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MsgReleaseItemName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, QuantityWindowRef) == 0x0004E8, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::QuantityWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SelectedWindowPanel) == 0x0004F0, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SelectedWindowPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SelectedListPanel) == 0x0004F8, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SelectedListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiItemId) == 0x000500, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiCharType) == 0x000508, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiCharType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiBagType) == 0x000509, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiListRef) == 0x000510, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiListRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DetachItemId) == 0x000518, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DetachItemId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, EquipmentRegion) == 0x000520, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::EquipmentRegion' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, HasEquipped) == 0x000521, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::HasEquipped' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SelectSequipmentRegion) == 0x000522, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SelectSequipmentRegion' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, MainCommandWindowRef) == 0x000528, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::MainCommandWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, EquipmentResultData) == 0x000530, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::EquipmentResultData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DataItemList) == 0x000548, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DataItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, HandednessEquipmentRef) == 0x000558, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::HandednessEquipmentRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, HandEquipmentRef) == 0x000560, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::HandEquipmentRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiItemRef) == 0x000568, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiItemRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, SoubiIndexInBag) == 0x000570, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::SoubiIndexInBag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, ResultData) == 0x000578, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::ResultData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DoEquipmentEventFinish) == 0x000590, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DoEquipmentEventFinish' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DoDispResultMessageFinish) == 0x0005A0, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DoDispResultMessageFinish' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, IsEquippedConfirmation) == 0x0005B0, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::IsEquippedConfirmation' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DetachItemInfo) == 0x0005B8, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DetachItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Soubi_000_modern_C, DetachitemIndex) == 0x0005C0, "Member 'UWBP_Menu_Dougu_Soubi_000_modern_C::DetachitemIndex' has a wrong offset!");

}
