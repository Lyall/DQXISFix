#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Sakusen_Settei_006_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Sakusen_Settei_006_modern.WBP_Menu_Sakusen_Settei_006_modern_C
// 0x0040 (0x0458 - 0x0418)
class UWBP_Menu_Sakusen_Settei_006_modern_C final : public UJackUMGHorizontalSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           ItemList;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_484;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_697;                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_067_modern_C*           WBP_Menu_Parts_067;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine_1;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine_2;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Sakusen_Settei_006_modern(int32 EntryPoint);
	void WidgetBPActionDelegate(class FName EventTag);
	void EventOnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void Construct();
	void SetInfoText(class FName InName);
	void SelectTextSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Sakusen_Settei_006_modern_C">();
	}
	static class UWBP_Menu_Sakusen_Settei_006_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Sakusen_Settei_006_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Sakusen_Settei_006_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Sakusen_Settei_006_modern_C");
static_assert(sizeof(UWBP_Menu_Sakusen_Settei_006_modern_C) == 0x000458, "Wrong size on UWBP_Menu_Sakusen_Settei_006_modern_C");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, UberGraphFrame) == 0x000418, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, ItemList) == 0x000420, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WBP_Menu_Parts_000_484) == 0x000428, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WBP_Menu_Parts_000_484' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WBP_Menu_Parts_000_C_697) == 0x000430, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WBP_Menu_Parts_000_C_697' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WBP_Menu_Parts_067) == 0x000438, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WBP_Menu_Parts_067' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WindowFrame) == 0x000440, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WindowLine_1) == 0x000448, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WindowLine_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Settei_006_modern_C, WindowLine_2) == 0x000450, "Member 'UWBP_Menu_Sakusen_Settei_006_modern_C::WindowLine_2' has a wrong offset!");

}

