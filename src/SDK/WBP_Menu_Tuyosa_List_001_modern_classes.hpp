#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_List_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tuyosa_List_001_modern.WBP_Menu_Tuyosa_List_001_modern_C
// 0x0170 (0x0570 - 0x0400)
class UWBP_Menu_Tuyosa_List_001_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           BottomPanel;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_Description;                              // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_Text_NeedSkillPoint;                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_Text_UsePoint;                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_TextRenkei;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_Title;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts000_UseMpMore;                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           Parts001_000;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           Parts001_001;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           Parts001_002;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           Parts002_Pager;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts006_RenkeiDescription;                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts007_InfoText;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts007_TextZone;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts010_Text_ConcentratePointInvalid;             // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts010_Text_UseMpInvalid;                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts010_UseMpValue;                               // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_024_modern_C*           Parts024_SkillPoint;                               // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_024_modern_C*           Parts024_UsedSkillPoint;                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Value_003_modern_C*     PartsValue003_ConcentratePoint;                    // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Renkei_Line_2;                                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Renkei_Line_3;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RenkeiPanel;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RenkeiRootPanel;                                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RenkeiZonePanel;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ScrollPanel;                                       // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_044_C*                  WBP_Menu_Parts_044;                                // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_068_modern_C*           WBP_Menu_Parts_068;                                // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_068_modern_C*           WBP_Menu_Parts_068_C_29;                           // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_068_modern_C*           WBP_Menu_Parts_068_C_30;                           // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_068_modern_C*           WBP_Menu_Parts_068_C_31;                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line_2;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   PageControllKeyEvent;                              // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UJackUMGItemBase*>               ItemList;                                          // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UJackUMGItemData*>               DisplayActionItemDataList;                         // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         MaxCP;                                             // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RenkeiPanelSizeY;                                  // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         VerticalItemCount;                                 // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayTopIndex;                                   // 0x055C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHorizontalPageCount;                            // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowableVerticalItemCount;                         // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackTuyosaPage                               PageType;                                          // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PageControllKeyEvent__DelegateSignature(bool bIsRemove, bool bIsRight, bool bNextPage, bool bPrevPage);
	void ExecuteUbergraph_WBP_Menu_Tuyosa_List_001_modern(int32 EntryPoint);
	void ApplySkillData(class UJackUMGItemData* Target);
	void OnKeyEvent(EJackKeys InKeyType, bool bIsPressed);
	void OnDidNotMoveCursor(class UJackUMGItemBase* InSelectedItem, int32 MoveDirection);
	void SetData(class UJackUMGAccessorMemberDataInTuyosa* TuyosaData, EJackTuyosaPage PageType_0, int32 PageIndex, int32 PageMoveInput, int32 CursorVerticalPos);
	void WidgetBPActionDelegate(class FName EventTag);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetupActionList(TArray<class UJackUMGItemData*>& DisplayItemDataList, int32 VerticalItemCount_0);
	void UpdateTitleText(class UJackUMGAccessorMemberDataInTuyosa* TuyosaData, EJackTuyosaPage PageType_0, const class FString& Subtitle, int32 UsedSkillPoint);
	void GetCursorVerticalPosition(int32* CursorVerticalPos);
	void InitCursorPosition(int32 PageMoveInput, int32 CursorVerticalPos);
	void InitText();
	void ChangeParts();
	void InitItemList();
	void IsOneLine(bool* Result);
	void IsWide(bool* Result);
	void GetRightLineItemPositionX(float* Result);
	void GetRootPanelSizeX(float* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tuyosa_List_001_modern_C">();
	}
	static class UWBP_Menu_Tuyosa_List_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tuyosa_List_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tuyosa_List_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tuyosa_List_001_modern_C");
static_assert(sizeof(UWBP_Menu_Tuyosa_List_001_modern_C) == 0x000570, "Wrong size on UWBP_Menu_Tuyosa_List_001_modern_C");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, BottomPanel) == 0x000408, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::BottomPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, InvalidationBox_0) == 0x000410, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, ItemListPanel) == 0x000418, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_Description) == 0x000420, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_Description' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_Text_NeedSkillPoint) == 0x000428, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_Text_NeedSkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_Text_UsePoint) == 0x000430, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_Text_UsePoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_TextRenkei) == 0x000438, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_TextRenkei' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_Title) == 0x000440, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts000_UseMpMore) == 0x000448, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts000_UseMpMore' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts001_000) == 0x000450, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts001_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts001_001) == 0x000458, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts001_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts001_002) == 0x000460, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts001_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts002_Pager) == 0x000468, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts002_Pager' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts006_RenkeiDescription) == 0x000470, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts006_RenkeiDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts007_InfoText) == 0x000478, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts007_InfoText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts007_TextZone) == 0x000480, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts007_TextZone' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts010_Text_ConcentratePointInvalid) == 0x000488, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts010_Text_ConcentratePointInvalid' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts010_Text_UseMpInvalid) == 0x000490, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts010_Text_UseMpInvalid' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts010_UseMpValue) == 0x000498, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts010_UseMpValue' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts024_SkillPoint) == 0x0004A0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts024_SkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Parts024_UsedSkillPoint) == 0x0004A8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Parts024_UsedSkillPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, PartsValue003_ConcentratePoint) == 0x0004B0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::PartsValue003_ConcentratePoint' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Renkei_Line_2) == 0x0004B8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Renkei_Line_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Renkei_Line_3) == 0x0004C0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Renkei_Line_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, RenkeiPanel) == 0x0004C8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::RenkeiPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, RenkeiRootPanel) == 0x0004D0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::RenkeiRootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, RenkeiZonePanel) == 0x0004D8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::RenkeiZonePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, RootPanel) == 0x0004E0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, ScrollPanel) == 0x0004E8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::ScrollPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, WBP_Menu_Parts_044) == 0x0004F0, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::WBP_Menu_Parts_044' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, WBP_Menu_Parts_068) == 0x0004F8, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::WBP_Menu_Parts_068' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, WBP_Menu_Parts_068_C_29) == 0x000500, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::WBP_Menu_Parts_068_C_29' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, WBP_Menu_Parts_068_C_30) == 0x000508, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::WBP_Menu_Parts_068_C_30' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, WBP_Menu_Parts_068_C_31) == 0x000510, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::WBP_Menu_Parts_068_C_31' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, Window_Line_2) == 0x000518, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::Window_Line_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, PageControllKeyEvent) == 0x000520, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::PageControllKeyEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, ItemList) == 0x000530, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, DisplayActionItemDataList) == 0x000540, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::DisplayActionItemDataList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, MaxCP) == 0x000550, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::MaxCP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, RenkeiPanelSizeY) == 0x000554, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::RenkeiPanelSizeY' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, VerticalItemCount) == 0x000558, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::VerticalItemCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, DisplayTopIndex) == 0x00055C, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::DisplayTopIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, MaxHorizontalPageCount) == 0x000560, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::MaxHorizontalPageCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, ShowableVerticalItemCount) == 0x000564, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::ShowableVerticalItemCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_List_001_modern_C, PageType) == 0x000568, "Member 'UWBP_Menu_Tuyosa_List_001_modern_C::PageType' has a wrong offset!");

}
