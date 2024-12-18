#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Shop_Item_004_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Shop_Item_004_modern.WBP_Menu_Shop_Item_004_modern_C
// 0x0090 (0x0460 - 0x03D0)
class UWBP_Menu_Shop_Item_004_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionPanel;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Equipment_s_000;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemBasePanel;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIconPanel;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NumTextPanel;                                      // 0x03F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OsyareStarsPanel;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StackPanel;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UnitTextPanel;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   NumText;                                           // 0x0418(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UnitText;                                          // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStackCount;                                      // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoadUniqueId;                                      // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             OsyareStarsTextureRef;                             // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Shop_Item_004_modern(int32 EntryPoint);
	void AsyncLoadTextureComplete(int32 InResultCode, class UObject* InLoaddedObject, class UJackUMGAsyncLoad* InLoadInfo);
	void CancelLoadTexture();
	void Construct();
	void Destruct();
	void DrawItemBase(class UJackUMGItemData* InItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Shop_Item_004_modern_C">();
	}
	static class UWBP_Menu_Shop_Item_004_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Shop_Item_004_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Shop_Item_004_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Shop_Item_004_modern_C");
static_assert(sizeof(UWBP_Menu_Shop_Item_004_modern_C) == 0x000460, "Wrong size on UWBP_Menu_Shop_Item_004_modern_C");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Shop_Item_004_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, CaptionPanel) == 0x0003D8, "Member 'UWBP_Menu_Shop_Item_004_modern_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, Equipment_s_000) == 0x0003E0, "Member 'UWBP_Menu_Shop_Item_004_modern_C::Equipment_s_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, ItemBasePanel) == 0x0003E8, "Member 'UWBP_Menu_Shop_Item_004_modern_C::ItemBasePanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, ItemIconPanel) == 0x0003F0, "Member 'UWBP_Menu_Shop_Item_004_modern_C::ItemIconPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, NumTextPanel) == 0x0003F8, "Member 'UWBP_Menu_Shop_Item_004_modern_C::NumTextPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, OsyareStarsPanel) == 0x000400, "Member 'UWBP_Menu_Shop_Item_004_modern_C::OsyareStarsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, StackPanel) == 0x000408, "Member 'UWBP_Menu_Shop_Item_004_modern_C::StackPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, UnitTextPanel) == 0x000410, "Member 'UWBP_Menu_Shop_Item_004_modern_C::UnitTextPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, NumText) == 0x000418, "Member 'UWBP_Menu_Shop_Item_004_modern_C::NumText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, UnitText) == 0x000430, "Member 'UWBP_Menu_Shop_Item_004_modern_C::UnitText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, ItemSyousaiRef) == 0x000448, "Member 'UWBP_Menu_Shop_Item_004_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, IsStackCount) == 0x000450, "Member 'UWBP_Menu_Shop_Item_004_modern_C::IsStackCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, LoadUniqueId) == 0x000454, "Member 'UWBP_Menu_Shop_Item_004_modern_C::LoadUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Shop_Item_004_modern_C, OsyareStarsTextureRef) == 0x000458, "Member 'UWBP_Menu_Shop_Item_004_modern_C::OsyareStarsTextureRef' has a wrong offset!");

}

