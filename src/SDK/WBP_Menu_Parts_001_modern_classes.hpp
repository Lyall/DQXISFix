#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_001_modern.WBP_Menu_Parts_001_modern_C
// 0x0028 (0x03F8 - 0x03D0)
class UWBP_Menu_Parts_001_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionPanel;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePanel;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillStar;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_001_modern(int32 EntryPoint);
	void SetSoubiDataImpl(const struct FJackUMGSoubiData& JackUMGSoubiData, EJackUMGTextColorSet InColorType);
	void SetRenkeiData(class UJackUMGTuyosaRenkeiData* RenkeiData);
	void SetItemSyousaiData(class UJackUMGItemSyousai* ItemSyousaiData);
	void SetData(const class FText& CaptionText_0, class UTexture2D* IconTexture_0, EJackUMGTextColorSet InColorType);
	void SetSoubiData(const struct FJackUMGSoubiData& Data, EJackUMGBackgroundColor BgType);
	void CustomEvent_0(class FName EventTag);
	void UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer);
	void Construct();
	void SetCharacterSpacing(float InCharacterSpacing);
	void SetTextColor(EJackUMGTextColorSet NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_001_modern_C">();
	}
	static class UWBP_Menu_Parts_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_001_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_001_modern_C) == 0x0003F8, "Wrong size on UWBP_Menu_Parts_001_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_001_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_001_modern_C, CaptionPanel) == 0x0003D8, "Member 'UWBP_Menu_Parts_001_modern_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_001_modern_C, ImagePanel) == 0x0003E0, "Member 'UWBP_Menu_Parts_001_modern_C::ImagePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_001_modern_C, SkillStar) == 0x0003E8, "Member 'UWBP_Menu_Parts_001_modern_C::SkillStar' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_001_modern_C, IconTexture) == 0x0003F0, "Member 'UWBP_Menu_Parts_001_modern_C::IconTexture' has a wrong offset!");

}
