#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tutorial_Window_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tutorial_Window_000_modern.WBP_Menu_Tutorial_Window_000_modern_C
// 0x0058 (0x03C8 - 0x0370)
class UWBP_Menu_Tutorial_Window_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       In_short;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Tutorial_Window_000_Main_modern_C* TutorialWindow000Main;                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FJackUMGTabiNoKokoroePageData>  PageDataList;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bIsMultiPage;                                      // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEndPage;                                        // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AA[0x2];                                      // 0x03AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ShowPageIndex;                                     // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_IF_Menu_Tutorial_C> CloseEventListener;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsAnimation;                                      // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLoading;                                        // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Menu_Tutorial_Window_000_modern(int32 EntryPoint);
	void SetIsLoading(bool bIsLoading_0);
	void SetIsAnimation(bool bIsAnimation_0);
	void PlayInAnim(class FName Key);
	void SetCloseEventListener(TScriptInterface<class IBP_IF_Menu_Tutorial_C> EventListener);
	void SetMainData(class FName Key);
	void SetPageData(const struct FJackUMGTabiNoKokoroePageData& Key);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnCancel();
	void OnWidgetKeyEvent(EJackKeys InKeyType, bool bIsPressed);
	void Construct();
	void OnTutorialClose();
	void WidgetBPActionDelegate(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tutorial_Window_000_modern_C">();
	}
	static class UWBP_Menu_Tutorial_Window_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tutorial_Window_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tutorial_Window_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tutorial_Window_000_modern_C");
static_assert(sizeof(UWBP_Menu_Tutorial_Window_000_modern_C) == 0x0003C8, "Wrong size on UWBP_Menu_Tutorial_Window_000_modern_C");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, In_short) == 0x000378, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::In_short' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, Out) == 0x000380, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::Out' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, In) == 0x000388, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, TutorialWindow000Main) == 0x000390, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::TutorialWindow000Main' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, PageDataList) == 0x000398, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::PageDataList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, bIsMultiPage) == 0x0003A8, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::bIsMultiPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, bIsEndPage) == 0x0003A9, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::bIsEndPage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, ShowPageIndex) == 0x0003AC, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::ShowPageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, CloseEventListener) == 0x0003B0, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::CloseEventListener' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, bIsAnimation) == 0x0003C0, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::bIsAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tutorial_Window_000_modern_C, bIsLoading) == 0x0003C1, "Member 'UWBP_Menu_Tutorial_Window_000_modern_C::bIsLoading' has a wrong offset!");

}

