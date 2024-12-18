#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Jumon_List_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Jumon_List_000_modern.WBP_Menu_Jumon_List_000_modern_C
// 0x0088 (0x04B8 - 0x0430)
class UWBP_Menu_Jumon_List_000_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemListPanelNew;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_92;                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_0;                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_1;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_2;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_3;                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_4;                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_5;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_6;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082_C_7;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrameAll;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Jumon_List_001_modern_C*      JumonListWindow;                                   // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGAccessorMembersInChange*        MemberInfo;                                        // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CursorIndex;                                       // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Jumon_List_000_modern(int32 EntryPoint);
	void CustomEvent_0(class FName EventTag);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void Construct();
	void SnapJumon(int32 ItemIndex, int32 MemberIndex);
	void SetSelectedMember(int32 Index_0);
	void UpdateList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Jumon_List_000_modern_C">();
	}
	static class UWBP_Menu_Jumon_List_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Jumon_List_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Jumon_List_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Jumon_List_000_modern_C");
static_assert(sizeof(UWBP_Menu_Jumon_List_000_modern_C) == 0x0004B8, "Wrong size on UWBP_Menu_Jumon_List_000_modern_C");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Jumon_List_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_Menu_Jumon_List_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, ItemListPanelNew) == 0x000440, "Member 'UWBP_Menu_Jumon_List_000_modern_C::ItemListPanelNew' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, RootPanel) == 0x000448, "Member 'UWBP_Menu_Jumon_List_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_000_C_92) == 0x000450, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_000_C_92' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_0) == 0x000458, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_1) == 0x000460, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_2) == 0x000468, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_3) == 0x000470, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_4) == 0x000478, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_5) == 0x000480, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_6) == 0x000488, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WBP_Menu_Parts_082_C_7) == 0x000490, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WBP_Menu_Parts_082_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, WindowFrameAll) == 0x000498, "Member 'UWBP_Menu_Jumon_List_000_modern_C::WindowFrameAll' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, JumonListWindow) == 0x0004A0, "Member 'UWBP_Menu_Jumon_List_000_modern_C::JumonListWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, MemberInfo) == 0x0004A8, "Member 'UWBP_Menu_Jumon_List_000_modern_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Jumon_List_000_modern_C, CursorIndex) == 0x0004B0, "Member 'UWBP_Menu_Jumon_List_000_modern_C::CursorIndex' has a wrong offset!");

}

