#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Syuurenjou_Member_Change_Window_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Syuurenjou_Member_Change_Window_000_modern.WBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C
// 0x0270 (0x0670 - 0x0400)
class UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Glow_Stop;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Glow_Loop;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BottomMessagePanel;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Button_Kettei;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IM_Button;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_BattleNumber0;                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_BattleNumber1;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_BattleNumber2;                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           Parts000_BattleNumber3;                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           Parts007_BattleMember;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           Parts007_Ok;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           Parts007_StandbyMember;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           Parts037_Title;                                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_10;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_11;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_12;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_20;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_21;                                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_22;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_30;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_31;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_32;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_00;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_01;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           Parts069_02;                                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_00;                                       // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_01;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_02;                                       // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_03;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_04;                                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_05;                                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_06;                                       // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_07;                                       // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_00;                          // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_01;                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_02;                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_03;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_04;                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_05;                          // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_06;                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           Parts070_Unselectable_07;                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_090_modern_C*      PartsText090_BattleName0;                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_090_modern_C*      PartsText090_BattleName1;                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_090_modern_C*      PartsText090_BattleName2;                          // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Text_090_modern_C*      PartsText090_BattleName3;                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Round_1;                                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Round_2;                                           // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Round_3;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Round_4;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectableParts070Panel;                           // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectablePartsPanel_1;                            // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectablePartsPanel_2;                            // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectablePartsPanel_3;                            // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectablePartsPanel_4;                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Simple_Text_000;                                   // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           UnSelectableParts070Panel;                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Menu_Parts_069_modern_C*>   Parts069ListAll;                                   // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWBP_Menu_Parts_069_modern_C*>   Parts069ListAdd;                                   // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWBP_Menu_Parts_070_modern_C*>   Parts070List;                                      // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWBP_Menu_Parts_070_modern_C*>   Parts070UnselectableList;                          // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJackUMGItemBase*                       PrevFocusItem;                                     // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackUMGSyuurenjouBattleData*>   BattleDataList;                                    // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJackUMGItemBase*                       SelectedParts;                                     // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Parts_069_modern_C*           SelectedParts069;                                  // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_Parts_070_modern_C*           SelectedParts070;                                  // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   SelectOkEvent;                                     // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   CancelEvent;                                       // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UJackFriendGameCharacter*>       CharacterDataList;                                 // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void SelectOkEvent__DelegateSignature();
	void CancelEvent__DelegateSignature(class UJackUMGWidgetBase* Sender);
	void ExecuteUbergraph_WBP_Menu_Syuurenjou_Member_Change_Window_000_modern(int32 EntryPoint);
	void StopOkItemHighlight();
	void SettingCursorMove(bool bSelect);
	void InitChange();
	void InitSelect();
	void InitBattleMemberChange();
	void InitStandbyMemberSelect();
	void InitBattleMemberSelect();
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void SetBattleData(class UJackUMGSyuurenjouBattleData* BattleData, class UCanvasPanel* ParentPanel, class UWBP_Menu_Parts_000_modern_C* Parts000_BattleNumber, class UWBP_Menu_Parts_Text_090_modern_C* PartsText090_BattleName, const TArray<class UWBP_Menu_Parts_069_modern_C*>& Parts069List);
	void SetData(const class FString& Title, const TArray<class UJackUMGSyuurenjouBattleData*>& BattleData, const TArray<class UJackFriendGameCharacter*>& CharacterDataList_0);
	void WidgetBPActionDelegate_Copy(class FName EventTag);
	void Construct();
	void GetParts069ListByBattleIndex(int32 BattleIndex, TArray<class UWBP_Menu_Parts_069_modern_C*>* Result);
	void SetSelectParts(class UJackUMGItemBase* SelectParts);
	void FindParts070ByCharacterType(EJackCharacter CharacterType, class UWBP_Menu_Parts_070_modern_C** Parts070);
	void SetParts070ActiveFlag(class UWBP_Menu_Parts_070_modern_C* Parts070, bool bIsActive_0);
	void FindParts070UnselectableByCharacterType(EJackCharacter CharacterType, class UWBP_Menu_Parts_070_modern_C** Parts070);
	void SetBattleMemberCharacter(class UWBP_Menu_Parts_069_modern_C* Parts069, EJackCharacter CharacterType, bool bExchange);
	void IsAllSelectedBattleMember(bool* Result);
	void SetCaptionJustification(ETextJustify InJustification);
	void SetParts069(class UWBP_Menu_Parts_069_modern_C* TargetParts069, class UWBP_Menu_Parts_070_modern_C* TargetParts070);
	void UnsetParts069(class UWBP_Menu_Parts_069_modern_C* Parts069);
	void FindParts069ByCharacterType(EJackCharacter CharacterType, class UWBP_Menu_Parts_069_modern_C** Parts069);
	void ExchangeParts069Character(class UWBP_Menu_Parts_069_modern_C* TargetParts069_0, class UWBP_Menu_Parts_069_modern_C* TargetParts069_1);
	void FocusBattleMember(class UWBP_Menu_Parts_069_modern_C* StartParts069, bool bFocusNext);
	void RunSetParts069Flow(class UWBP_Menu_Parts_069_modern_C* TargetParts069, class UWBP_Menu_Parts_070_modern_C* TargetParts070, bool bFocusNext);
	void RunExchangeParts069CharacterFlow(class UWBP_Menu_Parts_069_modern_C* TargetParts069_0, class UWBP_Menu_Parts_069_modern_C* TargetParts069_1);
	void FindEmptyCharacterParts069(class UWBP_Menu_Parts_069_modern_C* StartParts069, class UWBP_Menu_Parts_069_modern_C** Result);
	void FindActiveParts070(class UWBP_Menu_Parts_070_modern_C** Result);
	void SetBattleDataList(TArray<class UJackUMGSyuurenjouBattleData*>& BattleDataList_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C">();
	}
	static class UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C");
static_assert(sizeof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C) == 0x000670, "Wrong size on UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Glow_Stop) == 0x000408, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Glow_Stop' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Glow_Loop) == 0x000410, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Glow_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, BottomMessagePanel) == 0x000418, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::BottomMessagePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Button_Kettei) == 0x000420, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Button_Kettei' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Glow) == 0x000428, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, IM_Button) == 0x000430, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::IM_Button' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts000_BattleNumber0) == 0x000438, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts000_BattleNumber0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts000_BattleNumber1) == 0x000440, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts000_BattleNumber1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts000_BattleNumber2) == 0x000448, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts000_BattleNumber2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts000_BattleNumber3) == 0x000450, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts000_BattleNumber3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts007_BattleMember) == 0x000458, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts007_BattleMember' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts007_Ok) == 0x000460, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts007_Ok' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts007_StandbyMember) == 0x000468, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts007_StandbyMember' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts037_Title) == 0x000470, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts037_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_10) == 0x000478, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_11) == 0x000480, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_11' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_12) == 0x000488, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_12' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_20) == 0x000490, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_20' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_21) == 0x000498, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_21' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_22) == 0x0004A0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_22' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_30) == 0x0004A8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_30' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_31) == 0x0004B0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_31' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_32) == 0x0004B8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_32' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_00) == 0x0004C0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_01) == 0x0004C8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069_02) == 0x0004D0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_00) == 0x0004D8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_01) == 0x0004E0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_02) == 0x0004E8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_03) == 0x0004F0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_04) == 0x0004F8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_04' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_05) == 0x000500, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_05' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_06) == 0x000508, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_06' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_07) == 0x000510, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_07' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_00) == 0x000518, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_00' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_01) == 0x000520, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_01' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_02) == 0x000528, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_03) == 0x000530, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_04) == 0x000538, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_04' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_05) == 0x000540, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_05' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_06) == 0x000548, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_06' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070_Unselectable_07) == 0x000550, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070_Unselectable_07' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, PartsText090_BattleName0) == 0x000558, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::PartsText090_BattleName0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, PartsText090_BattleName1) == 0x000560, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::PartsText090_BattleName1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, PartsText090_BattleName2) == 0x000568, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::PartsText090_BattleName2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, PartsText090_BattleName3) == 0x000570, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::PartsText090_BattleName3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Round_1) == 0x000578, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Round_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Round_2) == 0x000580, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Round_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Round_3) == 0x000588, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Round_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Round_4) == 0x000590, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Round_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectableParts070Panel) == 0x000598, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectableParts070Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectablePartsPanel_1) == 0x0005A0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectablePartsPanel_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectablePartsPanel_2) == 0x0005A8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectablePartsPanel_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectablePartsPanel_3) == 0x0005B0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectablePartsPanel_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectablePartsPanel_4) == 0x0005B8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectablePartsPanel_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Simple_Text_000) == 0x0005C0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Simple_Text_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, UnSelectableParts070Panel) == 0x0005C8, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::UnSelectableParts070Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069ListAll) == 0x0005D0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069ListAll' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts069ListAdd) == 0x0005E0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts069ListAdd' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070List) == 0x0005F0, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070List' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, Parts070UnselectableList) == 0x000600, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::Parts070UnselectableList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, PrevFocusItem) == 0x000610, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::PrevFocusItem' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, BattleDataList) == 0x000618, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::BattleDataList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectedParts) == 0x000628, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectedParts' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectedParts069) == 0x000630, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectedParts069' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectedParts070) == 0x000638, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectedParts070' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, SelectOkEvent) == 0x000640, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::SelectOkEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, CancelEvent) == 0x000650, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::CancelEvent' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C, CharacterDataList) == 0x000660, "Member 'UWBP_Menu_Syuurenjou_Member_Change_Window_000_modern_C::CharacterDataList' has a wrong offset!");

}
