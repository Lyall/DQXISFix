#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_031_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_031_modern.WBP_Menu_Parts_031_modern_C
// 0x0058 (0x0428 - 0x03D0)
class UWBP_Menu_Parts_031_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             Parts028_CaptionPanel;                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts028_NumberPanel;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Buff_000_C*             Parts028_PartsBuff000;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts030_Lv;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Parts030_Lv_Count;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Parts082_BG;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Parts082_FaceIcon;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJackUMGAccessorMemberDataInKyoukai*    DataInKyoukai;                                     // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNumberVisivility;                                // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackKyoukaiEffectEventType                   EventType;                                         // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValidEventType;                                   // 0x041A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B[0x5];                                      // 0x041B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             FaceIconTextureRef;                                // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_031_modern(int32 EntryPoint);
	void Construct();
	void UpdateContainerDelegate_Copy(const struct FJackUMGItemContainer& ItemContainer);
	void UpdateOddEffectIcon();
	void ShowOddEffectIcon(EJackKyoukaiEffectEventType EventType_0);
	void SetVisibilityParts(bool InBuffVisibility, bool InNumberVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_031_modern_C">();
	}
	static class UWBP_Menu_Parts_031_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_031_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_031_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_031_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_031_modern_C) == 0x000428, "Wrong size on UWBP_Menu_Parts_031_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_031_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts028_CaptionPanel) == 0x0003D8, "Member 'UWBP_Menu_Parts_031_modern_C::Parts028_CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts028_NumberPanel) == 0x0003E0, "Member 'UWBP_Menu_Parts_031_modern_C::Parts028_NumberPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts028_PartsBuff000) == 0x0003E8, "Member 'UWBP_Menu_Parts_031_modern_C::Parts028_PartsBuff000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts030_Lv) == 0x0003F0, "Member 'UWBP_Menu_Parts_031_modern_C::Parts030_Lv' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts030_Lv_Count) == 0x0003F8, "Member 'UWBP_Menu_Parts_031_modern_C::Parts030_Lv_Count' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts082_BG) == 0x000400, "Member 'UWBP_Menu_Parts_031_modern_C::Parts082_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, Parts082_FaceIcon) == 0x000408, "Member 'UWBP_Menu_Parts_031_modern_C::Parts082_FaceIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, DataInKyoukai) == 0x000410, "Member 'UWBP_Menu_Parts_031_modern_C::DataInKyoukai' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, IsNumberVisivility) == 0x000418, "Member 'UWBP_Menu_Parts_031_modern_C::IsNumberVisivility' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, EventType) == 0x000419, "Member 'UWBP_Menu_Parts_031_modern_C::EventType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, bValidEventType) == 0x00041A, "Member 'UWBP_Menu_Parts_031_modern_C::bValidEventType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_031_modern_C, FaceIconTextureRef) == 0x000420, "Member 'UWBP_Menu_Parts_031_modern_C::FaceIconTextureRef' has a wrong offset!");

}

