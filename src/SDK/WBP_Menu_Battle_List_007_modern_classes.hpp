#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Battle_List_007_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Battle_List_007_modern.WBP_Menu_Battle_List_007_modern_C
// 0x0178 (0x05A8 - 0x0430)
class UWBP_Menu_Battle_List_007_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             Description1Panel;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Description2Panel;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_1105;                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_9;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_10;                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_11;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_36;                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_338;                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_339;                          // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_340;                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_001_modern_C*           WBP_Menu_Parts_001_C_341;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002;                                // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine;                                        // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine_Zone;                                   // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ZoneFrame;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ZoneWindow;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NumData;                                           // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumPageItem;                                       // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BarPanel;                                          // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DispTop;                                           // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGBattleMenuCommand                     BattleActionType;                                  // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E5[0x3];                                      // 0x04E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   JumonActionId;                                     // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TokugiActionId;                                    // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGUIActionInfo*                   UIActionInfoRef;                                   // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RenkeiID;                                          // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Hud_ActionCursor_All_000_C*        TargetCursorRef;                                   // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackGameCharacter*>             EnemyList;                                         // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                   RenkeiName;                                        // 0x0520(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Description1Text;                                  // 0x0538(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Description2Text;                                  // 0x0550(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           MemberList;                                        // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   TempName;                                          // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           MemberTagList;                                     // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           Desc2TextId;                                       // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EJackCharacter                                ActionCharacterType;                               // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackRenkeiSpectacleShowStatus                SpectacleShowResult;                               // 0x05A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Battle_List_007_modern(int32 EntryPoint);
	void CustomEvent_0(EJackKeys InKeyType, bool bIsPressed);
	void WidgetBPActionDelegate_Copy(class FName EventTag);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void Construct();
	void SetSenrekiHudAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Battle_List_007_modern_C">();
	}
	static class UWBP_Menu_Battle_List_007_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Battle_List_007_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Battle_List_007_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Battle_List_007_modern_C");
static_assert(sizeof(UWBP_Menu_Battle_List_007_modern_C) == 0x0005A8, "Wrong size on UWBP_Menu_Battle_List_007_modern_C");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Battle_List_007_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, Description1Panel) == 0x000438, "Member 'UWBP_Menu_Battle_List_007_modern_C::Description1Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, Description2Panel) == 0x000440, "Member 'UWBP_Menu_Battle_List_007_modern_C::Description2Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, InvalidationBox_0) == 0x000448, "Member 'UWBP_Menu_Battle_List_007_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, ItemListPanel) == 0x000450, "Member 'UWBP_Menu_Battle_List_007_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_000_C_1105) == 0x000458, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_000_C_1105' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_9) == 0x000460, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_10) == 0x000468, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_11) == 0x000470, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_11' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_36) == 0x000478, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_36' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_338) == 0x000480, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_338' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_339) == 0x000488, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_339' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_340) == 0x000490, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_340' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_001_C_341) == 0x000498, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_001_C_341' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WBP_Menu_Parts_002) == 0x0004A0, "Member 'UWBP_Menu_Battle_List_007_modern_C::WBP_Menu_Parts_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WindowFrame) == 0x0004A8, "Member 'UWBP_Menu_Battle_List_007_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WindowLine) == 0x0004B0, "Member 'UWBP_Menu_Battle_List_007_modern_C::WindowLine' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, WindowLine_Zone) == 0x0004B8, "Member 'UWBP_Menu_Battle_List_007_modern_C::WindowLine_Zone' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, ZoneFrame) == 0x0004C0, "Member 'UWBP_Menu_Battle_List_007_modern_C::ZoneFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, ZoneWindow) == 0x0004C8, "Member 'UWBP_Menu_Battle_List_007_modern_C::ZoneWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, NumData) == 0x0004D0, "Member 'UWBP_Menu_Battle_List_007_modern_C::NumData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, NumPageItem) == 0x0004D4, "Member 'UWBP_Menu_Battle_List_007_modern_C::NumPageItem' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, BarPanel) == 0x0004D8, "Member 'UWBP_Menu_Battle_List_007_modern_C::BarPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, DispTop) == 0x0004E0, "Member 'UWBP_Menu_Battle_List_007_modern_C::DispTop' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, BattleActionType) == 0x0004E4, "Member 'UWBP_Menu_Battle_List_007_modern_C::BattleActionType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, JumonActionId) == 0x0004E8, "Member 'UWBP_Menu_Battle_List_007_modern_C::JumonActionId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, TokugiActionId) == 0x0004F0, "Member 'UWBP_Menu_Battle_List_007_modern_C::TokugiActionId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, UIActionInfoRef) == 0x0004F8, "Member 'UWBP_Menu_Battle_List_007_modern_C::UIActionInfoRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, RenkeiID) == 0x000500, "Member 'UWBP_Menu_Battle_List_007_modern_C::RenkeiID' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, TargetCursorRef) == 0x000508, "Member 'UWBP_Menu_Battle_List_007_modern_C::TargetCursorRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, EnemyList) == 0x000510, "Member 'UWBP_Menu_Battle_List_007_modern_C::EnemyList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, RenkeiName) == 0x000520, "Member 'UWBP_Menu_Battle_List_007_modern_C::RenkeiName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, Description1Text) == 0x000538, "Member 'UWBP_Menu_Battle_List_007_modern_C::Description1Text' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, Description2Text) == 0x000550, "Member 'UWBP_Menu_Battle_List_007_modern_C::Description2Text' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, MemberList) == 0x000568, "Member 'UWBP_Menu_Battle_List_007_modern_C::MemberList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, TempName) == 0x000578, "Member 'UWBP_Menu_Battle_List_007_modern_C::TempName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, MemberTagList) == 0x000580, "Member 'UWBP_Menu_Battle_List_007_modern_C::MemberTagList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, Desc2TextId) == 0x000590, "Member 'UWBP_Menu_Battle_List_007_modern_C::Desc2TextId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, ActionCharacterType) == 0x0005A0, "Member 'UWBP_Menu_Battle_List_007_modern_C::ActionCharacterType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Battle_List_007_modern_C, SpectacleShowResult) == 0x0005A1, "Member 'UWBP_Menu_Battle_List_007_modern_C::SpectacleShowResult' has a wrong offset!");

}
