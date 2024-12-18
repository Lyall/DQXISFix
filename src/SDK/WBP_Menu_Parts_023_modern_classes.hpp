#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_023_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_023_modern.WBP_Menu_Parts_023_modern_C
// 0x0040 (0x0410 - 0x03D0)
class UWBP_Menu_Parts_023_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             Caption;                                           // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Lv;                                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Buff_000_C*             Parts_Buff_000_0;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Buff_000_C*             Parts_Buff_000_1;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_030_modern_C*           WBP_Menu_Parts_030_C_14;                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Menu_Parts_Buff_000_C*>     BuffPanelList;                                     // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_023_modern(int32 EntryPoint);
	void SetLevel(class UJackGameCharacter* Data);
	void InitLevel(int32 Level, EJackUMGTextColorSet ColorType);
	void Construct();
	void SetGameCharacterData(class UJackGameCharacter* Data);
	void UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_023_modern_C">();
	}
	static class UWBP_Menu_Parts_023_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_023_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_023_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_023_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_023_modern_C) == 0x000410, "Wrong size on UWBP_Menu_Parts_023_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_023_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, Caption) == 0x0003D8, "Member 'UWBP_Menu_Parts_023_modern_C::Caption' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, Lv) == 0x0003E0, "Member 'UWBP_Menu_Parts_023_modern_C::Lv' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, Parts_Buff_000_0) == 0x0003E8, "Member 'UWBP_Menu_Parts_023_modern_C::Parts_Buff_000_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, Parts_Buff_000_1) == 0x0003F0, "Member 'UWBP_Menu_Parts_023_modern_C::Parts_Buff_000_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, WBP_Menu_Parts_030_C_14) == 0x0003F8, "Member 'UWBP_Menu_Parts_023_modern_C::WBP_Menu_Parts_030_C_14' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_023_modern_C, BuffPanelList) == 0x000400, "Member 'UWBP_Menu_Parts_023_modern_C::BuffPanelList' has a wrong offset!");

}

