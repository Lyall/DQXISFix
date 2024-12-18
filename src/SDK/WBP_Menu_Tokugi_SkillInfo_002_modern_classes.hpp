#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tokugi_SkillInfo_002_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tokugi_SkillInfo_002_modern.WBP_Menu_Tokugi_SkillInfo_002_modern_C
// 0x0068 (0x0238 - 0x01D0)
class UWBP_Menu_Tokugi_SkillInfo_002_modern_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionPanel;                                      // 0x01D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePanel_1;                                      // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePanel_2;                                      // 0x01E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePanel_3;                                      // 0x01F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_1;                                          // 0x01F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_2;                                          // 0x0200(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_3;                                          // 0x0208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UImage*>                         ImageList;                                         // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USpacer*>                        SpacerList;                                        // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ESlateVisibility                              NewVar_0;                                          // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Tokugi_SkillInfo_002_modern(int32 EntryPoint);
	void SetIconList(const TArray<class UTexture2D*>& IconList);
	void Construct();
	void InitFontColor(EJackUMGTextColorSet InColorType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tokugi_SkillInfo_002_modern_C">();
	}
	static class UWBP_Menu_Tokugi_SkillInfo_002_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tokugi_SkillInfo_002_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tokugi_SkillInfo_002_modern_C");
static_assert(sizeof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C) == 0x000238, "Wrong size on UWBP_Menu_Tokugi_SkillInfo_002_modern_C");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, CaptionPanel) == 0x0001D8, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, ImagePanel_1) == 0x0001E0, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::ImagePanel_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, ImagePanel_2) == 0x0001E8, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::ImagePanel_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, ImagePanel_3) == 0x0001F0, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::ImagePanel_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, Spacer_1) == 0x0001F8, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::Spacer_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, Spacer_2) == 0x000200, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::Spacer_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, Spacer_3) == 0x000208, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::Spacer_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, ImageList) == 0x000210, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::ImageList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, SpacerList) == 0x000220, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::SpacerList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_SkillInfo_002_modern_C, NewVar_0) == 0x000230, "Member 'UWBP_Menu_Tokugi_SkillInfo_002_modern_C::NewVar_0' has a wrong offset!");

}

