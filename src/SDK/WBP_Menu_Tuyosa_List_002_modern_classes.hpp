#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_List_002_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tuyosa_List_002_modern.WBP_Menu_Tuyosa_List_002_modern_C
// 0x00D8 (0x0508 - 0x0430)
class UWBP_Menu_Tuyosa_List_002_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Common_Button_000_modern_C*   CommonButton000;                                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanelNew;                                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_Tuyosa;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_0;                 // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_1;                 // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_2;                 // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_3;                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_4;                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_5;                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_6;                 // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_7;                 // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_Item_002_modern_C*     WBP_Menu_Tuyosa_Item_002_modern_8;                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WindowAll;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BottomMagin;                                       // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AC[0x4];                                      // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Menu_Tuyosa_List_000_modern_C*     MemberInfoWidget;                                  // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_List_005_modern_C*     GroupInfoWidget;                                   // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActionListPageIndex;                               // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageMoveInput;                                     // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMemberDataInTuyosa*     TuyosaData;                                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_List_003_modern_C*     ParamDetailPage;                                   // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_List_004_modern_C*     TokusyuPage;                                       // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Tuyosa_List_001_modern_C*     SkillPage;                                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     CurrentWidget;                                     // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGWidgetBase*                     PrevWidget;                                        // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRightInput;                                     // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsNextPageInput;                                  // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNumberVisible;                                   // 0x04FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FB[0x1];                                      // 0x04FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastPageFlag;                                      // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFirstSubPage;                                   // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackTuyosaPage                               PageType;                                          // 0x0501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Tuyosa_List_002_modern(int32 EntryPoint);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void WidgetBPActionDelegate(class FName EventTag);
	void Construct();
	void PageChangeFromTokusyu();
	void PageChangeFromKazi();
	void PageChangeFromRenkei();
	void PageChangeFromSkill();
	void PageChangeFromTokugi();
	void PageChangeFromJumon();
	void PageChangeFromParamDetail();
	void OnCloseAllMemberParamaterWidget();
	void RemoveChildPages();
	void HidePrevWidget();
	void OnSkillListPageControllEvent(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void CreateSkillList(int32 PageIndex, int32 CursorVerticalPos);
	void CreateParamDetail();
	void OnParamDetailPageControllKey(bool bIsRemove, bool bNextPage, bool bPrevPage);
	void OnRenkeiListPageControllEvent(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void CreateRenkeiList(int32 PageIndex, int32 CursorVerticalPos);
	void OnJumonListPageControllEvent(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void OnTokugiListPageControllEvent(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void CreateJumonList(int32 PageIndex, int32 CursorVerticalPos);
	void CreateTokugiList(int32 PageIndex, int32 CursorVerticalPos);
	void OnJumonListPageControllEvent_Copy(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void CreateKaziList();
	void CreateTokusyuPage();
	void CreateAllMemberParamPage();
	void OnTokusyuPageControllEvent(bool bIsRemove, bool bNextPage, bool bPrevPage);
	void UpdateCaptionButton(EJackTuyosaPage PageType_0);
	void RemoveChildPage(class UJackUMGWidgetBase*& Widget);
	void HideOtherPageMain(class UJackUMGWidgetBase* TargetPage);
	void HideOtherPage();
	void SetCurrentWidget(class UJackUMGWidgetBase* CurrentWidget_0);
	void ConstructSelectedMemberData(bool bOnlyOverview);
	void GetCaptionPositonX(float* Result);
	void GetWidgetSizeX(float* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tuyosa_List_002_modern_C">();
	}
	static class UWBP_Menu_Tuyosa_List_002_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tuyosa_List_002_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tuyosa_List_002_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tuyosa_List_002_modern_C");
static_assert(sizeof(UWBP_Menu_Tuyosa_List_002_modern_C) == 0x000508, "Wrong size on UWBP_Menu_Tuyosa_List_002_modern_C");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, CommonButton000) == 0x000438, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::CommonButton000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, InvalidationBox_0) == 0x000440, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, ItemListPanelNew) == 0x000448, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::ItemListPanelNew' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, Parts000_Tuyosa) == 0x000450, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::Parts000_Tuyosa' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_0) == 0x000458, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_1) == 0x000460, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_2) == 0x000468, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_3) == 0x000470, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_4) == 0x000478, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_5) == 0x000480, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_6) == 0x000488, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_7) == 0x000490, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WBP_Menu_Tuyosa_Item_002_modern_8) == 0x000498, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WBP_Menu_Tuyosa_Item_002_modern_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, WindowAll) == 0x0004A0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::WindowAll' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, BottomMagin) == 0x0004A8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::BottomMagin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, MemberInfoWidget) == 0x0004B0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::MemberInfoWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, GroupInfoWidget) == 0x0004B8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::GroupInfoWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, ActionListPageIndex) == 0x0004C0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::ActionListPageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, PageMoveInput) == 0x0004C4, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::PageMoveInput' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, TuyosaData) == 0x0004C8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::TuyosaData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, ParamDetailPage) == 0x0004D0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::ParamDetailPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, TokusyuPage) == 0x0004D8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::TokusyuPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, SkillPage) == 0x0004E0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::SkillPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, CurrentWidget) == 0x0004E8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::CurrentWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, PrevWidget) == 0x0004F0, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::PrevWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, bIsRightInput) == 0x0004F8, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::bIsRightInput' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, bIsNextPageInput) == 0x0004F9, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::bIsNextPageInput' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, IsNumberVisible) == 0x0004FA, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::IsNumberVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, LastPageFlag) == 0x0004FC, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::LastPageFlag' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, bIsFirstSubPage) == 0x000500, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::bIsFirstSubPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_002_modern_C, PageType) == 0x000501, "Member 'UWBP_Menu_Tuyosa_List_002_modern_C::PageType' has a wrong offset!");

}

