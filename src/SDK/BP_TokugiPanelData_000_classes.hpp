#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TokugiPanelData_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TokugiPanelData_000.BP_TokugiPanelData_000_C
// 0x0058 (0x0170 - 0x0118)
class UBP_TokugiPanelData_000_C final : public UJackUMGTokugiPanelData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0118(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Tokugi_Panel_000_modern_C*    TokugiPanel;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUsingPanelWidget;                                 // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJackUMGTokugiPanelAnimData            AnimData;                                          // 0x0130(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_TokugiPanelData_000(int32 EntryPoint);
	void OnEndCloseAnim();
	void CreatePieceWidget();
	void CreateWidget(class UWBP_Menu_Tokugi_Panel_000_modern_C* TokugiPanel_0);
	void SetBackGroundScroll(const struct FVector2D& BgScroll);
	void SetDisplayScale(float Scale);
	void AnimOpen(const TArray<int32>& CrackDirList);
	void AnimMaster();
	void AnimCrack();
	void AnimProvMaster();
	void AnimCancelProvMaster();
	void AnimClose();
	void AnimCloseFromProvMaster();
	void AnimCancelCrack();
	void AnimMasterFromProvMaster();
	void AnimCloseFromMaster();
	void AnimCancelMaster();
	void PlayAnimData(const struct FJackUMGTokugiPanelAnimData& AnimData_0);
	void AnimProvMasterFromClose(const TArray<int32>& CrackDirList);
	void AnimStateOpen();
	void AnimStateClose();
	void PlayResetPieceAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TokugiPanelData_000_C">();
	}
	static class UBP_TokugiPanelData_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TokugiPanelData_000_C>();
	}
};
static_assert(alignof(UBP_TokugiPanelData_000_C) == 0x000008, "Wrong alignment on UBP_TokugiPanelData_000_C");
static_assert(sizeof(UBP_TokugiPanelData_000_C) == 0x000170, "Wrong size on UBP_TokugiPanelData_000_C");
static_assert(offsetof(UBP_TokugiPanelData_000_C, UberGraphFrame) == 0x000118, "Member 'UBP_TokugiPanelData_000_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TokugiPanelData_000_C, TokugiPanel) == 0x000120, "Member 'UBP_TokugiPanelData_000_C::TokugiPanel' has a wrong offset!");
static_assert(offsetof(UBP_TokugiPanelData_000_C, bUsingPanelWidget) == 0x000128, "Member 'UBP_TokugiPanelData_000_C::bUsingPanelWidget' has a wrong offset!");
static_assert(offsetof(UBP_TokugiPanelData_000_C, AnimData) == 0x000130, "Member 'UBP_TokugiPanelData_000_C::AnimData' has a wrong offset!");

}
