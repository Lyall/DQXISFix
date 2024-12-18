#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Save_data_002_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Namae_Save_data_002_modern.WBP_Menu_Namae_Save_data_002_modern_C
// 0x00A0 (0x04D0 - 0x0430)
class UWBP_Menu_Namae_Save_data_002_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TopCanvasPanel;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_Button_000_modern_C*   WBP_Menu_Common_Button_000;                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_590;                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002;                                // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_2;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_3;                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_7;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnSelect;                                          // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnRemove;                                          // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UJackUMGItemData*>               ItemDataList_0;                                    // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWBP_Menu_Parts_014_modern_C*>   ItemList;                                          // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   NewVar_0;                                          // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature(class UJackUMGItemBase* ItemBase);
	void OnRemove__DelegateSignature();
	void ExecuteUbergraph_WBP_Menu_Namae_Save_data_002_modern(int32 EntryPoint);
	void RefreshData();
	void Construct();
	void UpdateData(int32 InDataIndex);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void CustomEvent_0(EJackKeys InKeyType, bool bIsPressed);
	void WidgetBPActionDelegate_Copy(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Namae_Save_data_002_modern_C">();
	}
	static class UWBP_Menu_Namae_Save_data_002_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Namae_Save_data_002_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Namae_Save_data_002_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Namae_Save_data_002_modern_C");
static_assert(sizeof(UWBP_Menu_Namae_Save_data_002_modern_C) == 0x0004D0, "Wrong size on UWBP_Menu_Namae_Save_data_002_modern_C");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, ItemListPanel) == 0x000440, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, RootPanel) == 0x000448, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, TopCanvasPanel) == 0x000450, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::TopCanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Common_Button_000) == 0x000458, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Common_Button_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Parts_000_C_590) == 0x000460, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Parts_000_C_590' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Parts_002) == 0x000468, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Parts_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Parts_014_C_2) == 0x000470, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Parts_014_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Parts_014_C_3) == 0x000478, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Parts_014_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, WBP_Menu_Parts_014_C_7) == 0x000480, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::WBP_Menu_Parts_014_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, OnSelect) == 0x000488, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, OnRemove) == 0x000498, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::OnRemove' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, ItemDataList_0) == 0x0004A8, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::ItemDataList_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, ItemList) == 0x0004B8, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_002_modern_C, NewVar_0) == 0x0004C8, "Member 'UWBP_Menu_Namae_Save_data_002_modern_C::NewVar_0' has a wrong offset!");

}

