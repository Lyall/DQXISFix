#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Quest_Clear_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Quest_Clear_000_modern.WBP_Hud_Quest_Clear_000_modern_C
// 0x0058 (0x03D0 - 0x0378)
class UWBP_Hud_Quest_Clear_000_modern_C final : public UJackUMGQuestClearBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       ClearAnimation;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       OutAnimation;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ClearStamp;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           Parts037_Title;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_077_modern_C*           Parts077_Description;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_079_modern_C*           WBP_Menu_Parts_079;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Timer;                                             // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFinishedClearAnimation;                           // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEndMe;                                            // 0x03CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFromOrder;                                        // 0x03CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Hud_Quest_Clear_000_modern(int32 EntryPoint);
	void CallPlayCloseAnimation();
	void CallPlayOpenAnimation();
	void CallSetData(const class FName& QuestId, bool bFromOrder_0);
	void SetData(class FName QuestId, bool bFromOrder_0);
	void Construct();
	void OnKeyEvent(EJackKeys InKeyType, bool bIsPressed);
	void OnEndMe();
	void OnEndClearAnimation();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartOpenAnimation(class FName QuestNameId);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void IsFinishedOpenAnimation(bool* bFinished);
	void IsFinishedCloseAnimation(bool* bFinished);
	void PlayCloseAnimation();
	void PlayOpenAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Quest_Clear_000_modern_C">();
	}
	static class UWBP_Hud_Quest_Clear_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Quest_Clear_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Quest_Clear_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Quest_Clear_000_modern_C");
static_assert(sizeof(UWBP_Hud_Quest_Clear_000_modern_C) == 0x0003D0, "Wrong size on UWBP_Hud_Quest_Clear_000_modern_C");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, UberGraphFrame) == 0x000378, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, ClearAnimation) == 0x000380, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::ClearAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, OutAnimation) == 0x000388, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::OutAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, InAnimation) == 0x000390, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, ClearStamp) == 0x000398, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::ClearStamp' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, InvalidationBox_0) == 0x0003A0, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, Parts037_Title) == 0x0003A8, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::Parts037_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, Parts077_Description) == 0x0003B0, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::Parts077_Description' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, RootPanel) == 0x0003B8, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, WBP_Menu_Parts_079) == 0x0003C0, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::WBP_Menu_Parts_079' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, Timer) == 0x0003C8, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::Timer' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, bFinishedClearAnimation) == 0x0003CC, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::bFinishedClearAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, bEndMe) == 0x0003CD, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::bEndMe' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Quest_Clear_000_modern_C, bFromOrder) == 0x0003CE, "Member 'UWBP_Hud_Quest_Clear_000_modern_C::bFromOrder' has a wrong offset!");

}
