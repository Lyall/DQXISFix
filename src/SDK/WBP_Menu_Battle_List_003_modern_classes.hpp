#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_List_003_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Battle_List_003_modern.WBP_Menu_Battle_List_003_modern_C
// 0x00B8 (0x04E8 - 0x0430)
class UWBP_Menu_Battle_List_003_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleTextPanel;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_0;                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_1;                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_2;                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_3;                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_4;                      // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_5;                      // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_6;                      // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_7;                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_8;                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Battle_Item_000_modern_C*     WBP_Menu_Battle_Item_000_C_9;                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002_C_37;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine;                                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Jumon_Setumei_000_modern_C*   SetumeiWindowRef;                                  // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   UIActionInfoRef;                                   // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActionIndex;                                       // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActionID;                                          // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BottomMagin;                                       // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Battle_List_003_modern(int32 EntryPoint);
	void Construct();
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void WidgetBPActionDelegate(class FName EventTag);
	void SetupJumonList(class FName ItemID);
	void SetParamSetumei(class UWBP_Menu_Jumon_Setumei_000_modern_C* SetumeiWindow, class UJackUMGUIActionInfo* UIActionInfoRef_0);
	void SetJumonName(int32 Index_0);
	void SetSaveCursor();
	void GetMsgJumonName(struct FJackMessageArgumentData* JackMessageArgumentData);

	void GetSaveCursor(class FName* ReturnValue_Name) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Battle_List_003_modern_C">();
	}
	static class UWBP_Menu_Battle_List_003_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Battle_List_003_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Battle_List_003_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Battle_List_003_modern_C");
static_assert(sizeof(UWBP_Menu_Battle_List_003_modern_C) == 0x0004E8, "Wrong size on UWBP_Menu_Battle_List_003_modern_C");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Battle_List_003_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_Menu_Battle_List_003_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, ItemListPanel) == 0x000440, "Member 'UWBP_Menu_Battle_List_003_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, RootPanel) == 0x000448, "Member 'UWBP_Menu_Battle_List_003_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, TitleTextPanel) == 0x000450, "Member 'UWBP_Menu_Battle_List_003_modern_C::TitleTextPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_0) == 0x000458, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_1) == 0x000460, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_2) == 0x000468, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_3) == 0x000470, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_4) == 0x000478, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_5) == 0x000480, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_6) == 0x000488, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_7) == 0x000490, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_8) == 0x000498, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Battle_Item_000_C_9) == 0x0004A0, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Battle_Item_000_C_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WBP_Menu_Parts_002_C_37) == 0x0004A8, "Member 'UWBP_Menu_Battle_List_003_modern_C::WBP_Menu_Parts_002_C_37' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WindowFrame) == 0x0004B0, "Member 'UWBP_Menu_Battle_List_003_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, WindowLine) == 0x0004B8, "Member 'UWBP_Menu_Battle_List_003_modern_C::WindowLine' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, SetumeiWindowRef) == 0x0004C0, "Member 'UWBP_Menu_Battle_List_003_modern_C::SetumeiWindowRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, UIActionInfoRef) == 0x0004C8, "Member 'UWBP_Menu_Battle_List_003_modern_C::UIActionInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, ActionIndex) == 0x0004D0, "Member 'UWBP_Menu_Battle_List_003_modern_C::ActionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, ActionID) == 0x0004D8, "Member 'UWBP_Menu_Battle_List_003_modern_C::ActionID' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_003_modern_C, BottomMagin) == 0x0004E0, "Member 'UWBP_Menu_Battle_List_003_modern_C::BottomMagin' has a wrong offset!");

}
