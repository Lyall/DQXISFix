#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Title_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Title_000_modern.WBP_Menu_Title_000_modern_C
// 0x0030 (0x03A0 - 0x0370)
class UWBP_Menu_Title_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	int32                                         Mode;                                              // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPushKey;                                         // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          BGMStopped;                                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PreLoadBGM;                                        // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TitleMode;                                         // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStartedTick;                                      // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Menu_Title_000_modern(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void CustomEvent_3();
	void WidgetBPActionDelegate(class FName EventTag);
	void CustomEvent_0(EJackKeys InKeyType, bool bIsPressed);
	void SetTitleBg();
	void SelectMode(bool IsUp);
	void IsFadeWhite(bool* WhiteFade);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Title_000_modern_C">();
	}
	static class UWBP_Menu_Title_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Title_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Title_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Title_000_modern_C");
static_assert(sizeof(UWBP_Menu_Title_000_modern_C) == 0x0003A0, "Wrong size on UWBP_Menu_Title_000_modern_C");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Title_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, Mode) == 0x000378, "Member 'UWBP_Menu_Title_000_modern_C::Mode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, IsPushKey) == 0x00037C, "Member 'UWBP_Menu_Title_000_modern_C::IsPushKey' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, TimerHandle) == 0x000380, "Member 'UWBP_Menu_Title_000_modern_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, BGMStopped) == 0x000388, "Member 'UWBP_Menu_Title_000_modern_C::BGMStopped' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, PreLoadBGM) == 0x000390, "Member 'UWBP_Menu_Title_000_modern_C::PreLoadBGM' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, TitleMode) == 0x000398, "Member 'UWBP_Menu_Title_000_modern_C::TitleMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Title_000_modern_C, bStartedTick) == 0x000399, "Member 'UWBP_Menu_Title_000_modern_C::bStartedTick' has a wrong offset!");

}

