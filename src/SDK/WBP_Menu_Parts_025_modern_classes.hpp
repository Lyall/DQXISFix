#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_025_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_025_modern.WBP_Menu_Parts_025_modern_C
// 0x0098 (0x0468 - 0x03D0)
class UWBP_Menu_Parts_025_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Equipment_s_000;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Equipment_s_001;                                   // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FaceIconPanel;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flame;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemBasePanel;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemCaptionPanel;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIconPanel;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OsyareStarsPanel;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SoubiCharaPanel;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             FaceTextureRef;                                    // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackItem_Bag                                 DispBagType;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x3];                                      // 0x0439(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoadUniqueId;                                      // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture>                IconTextureAssetRef;                               // 0x0440(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                             OsyareStarsTextureRef;                             // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJackUMGSoubiScreenMode                       SoubiScreenMode;                                   // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_025_modern(int32 EntryPoint);
	void Construct();
	void NotificationItemBase(const class FName& NotifyTag, class UJackUMGItemData* InItemData, class UObject* Object, int32 Value);
	void LoadTextureComplete(int32 InResultCode, class UObject* InLoaddedObject, class UJackUMGAsyncLoad* InLoadInfo);
	void LoadIconTexture(TSoftObjectPtr<class UTexture> InTextureAsset);
	void Destruct();
	void DrawItemBase(class UJackUMGItemData* InItemData);
	void SetPriceMode(bool IsPriceMode);
	void SetDispBagType(EJackItem_Bag DispBagType_0);
	void CancelLoadTexture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_025_modern_C">();
	}
	static class UWBP_Menu_Parts_025_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_025_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_025_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_025_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_025_modern_C) == 0x000468, "Wrong size on UWBP_Menu_Parts_025_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_025_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, Base) == 0x0003D8, "Member 'UWBP_Menu_Parts_025_modern_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, Equipment_s_000) == 0x0003E0, "Member 'UWBP_Menu_Parts_025_modern_C::Equipment_s_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, Equipment_s_001) == 0x0003E8, "Member 'UWBP_Menu_Parts_025_modern_C::Equipment_s_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, FaceIconPanel) == 0x0003F0, "Member 'UWBP_Menu_Parts_025_modern_C::FaceIconPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, Flame) == 0x0003F8, "Member 'UWBP_Menu_Parts_025_modern_C::Flame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, ItemBasePanel) == 0x000400, "Member 'UWBP_Menu_Parts_025_modern_C::ItemBasePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, ItemCaptionPanel) == 0x000408, "Member 'UWBP_Menu_Parts_025_modern_C::ItemCaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, ItemIconPanel) == 0x000410, "Member 'UWBP_Menu_Parts_025_modern_C::ItemIconPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, OsyareStarsPanel) == 0x000418, "Member 'UWBP_Menu_Parts_025_modern_C::OsyareStarsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, SoubiCharaPanel) == 0x000420, "Member 'UWBP_Menu_Parts_025_modern_C::SoubiCharaPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, ItemSyousaiRef) == 0x000428, "Member 'UWBP_Menu_Parts_025_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, FaceTextureRef) == 0x000430, "Member 'UWBP_Menu_Parts_025_modern_C::FaceTextureRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, DispBagType) == 0x000438, "Member 'UWBP_Menu_Parts_025_modern_C::DispBagType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, LoadUniqueId) == 0x00043C, "Member 'UWBP_Menu_Parts_025_modern_C::LoadUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, IconTextureAssetRef) == 0x000440, "Member 'UWBP_Menu_Parts_025_modern_C::IconTextureAssetRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, OsyareStarsTextureRef) == 0x000458, "Member 'UWBP_Menu_Parts_025_modern_C::OsyareStarsTextureRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_025_modern_C, SoubiScreenMode) == 0x000460, "Member 'UWBP_Menu_Parts_025_modern_C::SoubiScreenMode' has a wrong offset!");

}

