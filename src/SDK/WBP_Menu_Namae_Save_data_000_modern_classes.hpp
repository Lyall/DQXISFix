#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Save_data_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Namae_Save_data_000_modern.WBP_Menu_Namae_Save_data_000_modern_C
// 0x0120 (0x0550 - 0x0430)
class UWBP_Menu_Namae_Save_data_000_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           AutoSaveFrame;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AutoSavePager;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AutoSavePanel;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ChangeText;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Down_Arrow;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanel;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title_AutoSave;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title_AutoSaveDemo;                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title_Boukennosyo;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title_BoukennosyoDemo;                        // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Up_Arrow;                                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_1;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_2;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_3;                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_014_modern_C*           WBP_Menu_Parts_014_C_7;                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line2;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line3;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line4;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NewVar_0;                                          // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_1;                                          // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_2;                                          // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_3;                                          // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_4;                                          // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_5;                                          // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_6;                                          // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_8;                                          // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewVar_9;                                          // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaveSlotIndex;                                     // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndBGMTime;                                        // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Canceled;                                          // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAutoSave3D;                                       // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A[0x6];                                      // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DisplayableName;                                   // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Namae_Save_data_000_modern(int32 EntryPoint);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void OnFinishTrialSaveDataCheck(EJackUMGSaveDataCheckResult Result);
	void GotoNamaeInput();
	void DisplayBasicMessage();
	void InDisableNameEvent(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex);
	void InDisplayableName();
	void ExecuteSaveDataCheck(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint);
	void ExecuteSaveDataCheckResult(TScriptInterface<class IBP_IF_SaveDataCheck_C> Sender, EJackUMGSaveDataCheckPoint CheckPoint, EJackSaveLoadResult CheckRusult);
	void SelectAutoSave(EJackKeys InKeyType, bool bIsPressed);
	void OnDisplayMessageFromSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint);
	void Construct();
	void OnFinishSaveDataCheckKesu(EJackUMGSaveDataCheckResult Result);
	void OnFinishSaveDataCheckSuru(EJackUMGSaveDataCheckResult Result);
	void OnFinishSaveDataCheck(EJackUMGSaveDataCheckPoint CheckPoint, EJackUMGSaveDataCheckResult Result);
	void DeleteError(int32 SlotIndex_0, EJackSaveLoadResult SaveLoadResult);
	void WidgetBPActionDelegate_Copy(class FName EventTag);
	void CustomEvent_0(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex);
	void CustomEvent_1(class UJackUMGSerifuWindowController* Sender, class FName CurrentTextID, int32 SelectDialogIndex);
	void SetAutoSaveData();
	void IsValidSavedata(bool* Valid);
	void SetSlotIndex(class FName SlotName);
	void CopySibariSettei();
	void IsValidArasuziData(bool* Valid);
	void SetAutoSaveCaption();
	void ChangeAutoSlotIndex(int32* OutIndex);
	void IsValidSaveDataIndex(int32 SlotIndex_0, bool* Valid);
	void SetCursorActive(bool IsActive);
	void GetDisplayableName();
	void IsDisplayableName(bool* Displayable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Namae_Save_data_000_modern_C">();
	}
	static class UWBP_Menu_Namae_Save_data_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Namae_Save_data_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Namae_Save_data_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Namae_Save_data_000_modern_C");
static_assert(sizeof(UWBP_Menu_Namae_Save_data_000_modern_C) == 0x000550, "Wrong size on UWBP_Menu_Namae_Save_data_000_modern_C");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, AutoSaveFrame) == 0x000438, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::AutoSaveFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, AutoSavePager) == 0x000440, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::AutoSavePager' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, AutoSavePanel) == 0x000448, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::AutoSavePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, ChangeText) == 0x000450, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::ChangeText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Down_Arrow) == 0x000458, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Down_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, ItemListPanel) == 0x000460, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::ItemListPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, RootPanel) == 0x000468, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Text_Title_AutoSave) == 0x000470, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Text_Title_AutoSave' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Text_Title_AutoSaveDemo) == 0x000478, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Text_Title_AutoSaveDemo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Text_Title_Boukennosyo) == 0x000480, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Text_Title_Boukennosyo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Text_Title_BoukennosyoDemo) == 0x000488, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Text_Title_BoukennosyoDemo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Up_Arrow) == 0x000490, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Up_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, WBP_Menu_Parts_002) == 0x000498, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::WBP_Menu_Parts_002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, WBP_Menu_Parts_014_C_1) == 0x0004A0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::WBP_Menu_Parts_014_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, WBP_Menu_Parts_014_C_2) == 0x0004A8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::WBP_Menu_Parts_014_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, WBP_Menu_Parts_014_C_3) == 0x0004B0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::WBP_Menu_Parts_014_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, WBP_Menu_Parts_014_C_7) == 0x0004B8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::WBP_Menu_Parts_014_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Window_Line) == 0x0004C0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Window_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Window_Line2) == 0x0004C8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Window_Line2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Window_Line3) == 0x0004D0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Window_Line3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Window_Line4) == 0x0004D8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Window_Line4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, SlotIndex) == 0x0004E0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::SlotIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_0) == 0x0004E8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_1) == 0x0004F0, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_2) == 0x0004F8, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_3) == 0x000500, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_4) == 0x000508, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_5) == 0x000510, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_6) == 0x000518, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_8) == 0x000520, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, NewVar_9) == 0x000528, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::NewVar_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, SaveSlotIndex) == 0x000530, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::SaveSlotIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, EndBGMTime) == 0x000534, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::EndBGMTime' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, Canceled) == 0x000538, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::Canceled' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, bAutoSave3D) == 0x000539, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::bAutoSave3D' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Save_data_000_modern_C, DisplayableName) == 0x000540, "Member 'UWBP_Menu_Namae_Save_data_000_modern_C::DisplayableName' has a wrong offset!");

}
