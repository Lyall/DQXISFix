#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_104_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Dougu_Syousai_104_modern.WBP_Menu_Dougu_Syousai_104_modern_C
// 0x0078 (0x03E8 - 0x0370)
class UWBP_Menu_Dougu_Syousai_104_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           BuyPrice_000;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BuyPrice_001;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SalePrice_000;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SalePrice_001;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007_C_98;                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_010_modern_C*           WBP_Menu_Parts_010_C_441;                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_010_modern_C*           WBP_Menu_Parts_010_C_445;                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_0;                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_6;                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_253;                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_271;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_296;                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_303;                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Dougu_Syousai_104_modern(int32 EntryPoint);
	void Construct();
	void DispItemFromSyousaiRef(class UJackUMGItemSyousai* NewVar_0);
	void JackOnWidgetNotificationDelegate_Event_0(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Dougu_Syousai_104_modern_C">();
	}
	static class UWBP_Menu_Dougu_Syousai_104_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Dougu_Syousai_104_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Dougu_Syousai_104_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Dougu_Syousai_104_modern_C");
static_assert(sizeof(UWBP_Menu_Dougu_Syousai_104_modern_C) == 0x0003E8, "Wrong size on UWBP_Menu_Dougu_Syousai_104_modern_C");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, BuyPrice_000) == 0x000378, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::BuyPrice_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, BuyPrice_001) == 0x000380, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::BuyPrice_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, SalePrice_000) == 0x000388, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::SalePrice_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, SalePrice_001) == 0x000390, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::SalePrice_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_007_C_98) == 0x000398, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_007_C_98' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_010_C_441) == 0x0003A0, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_010_C_441' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_010_C_445) == 0x0003A8, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_010_C_445' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_0) == 0x0003B0, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_6) == 0x0003B8, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_253) == 0x0003C0, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_253' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_271) == 0x0003C8, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_271' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_296) == 0x0003D0, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_296' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, WBP_Menu_Parts_037_C_303) == 0x0003D8, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::WBP_Menu_Parts_037_C_303' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_104_modern_C, ItemSyousaiRef) == 0x0003E0, "Member 'UWBP_Menu_Dougu_Syousai_104_modern_C::ItemSyousaiRef' has a wrong offset!");

}
