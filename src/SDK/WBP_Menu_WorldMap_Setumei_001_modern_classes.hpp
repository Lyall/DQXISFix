#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Setumei_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_Setumei_001_modern.WBP_Menu_WorldMap_Setumei_001_modern_C
// 0x0030 (0x0200 - 0x01D0)
class UWBP_Menu_WorldMap_Setumei_001_modern_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x01D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_ScrollContent_018_modern_C* WBP_Menu_Common_ScrollContent_018;                 // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_077_modern_C*           WBP_Menu_Parts_077;                                // 0x01E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_078_modern_C*           WBP_Menu_Parts_078;                                // 0x01F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowLine;                                        // 0x01F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_WorldMap_Setumei_001_modern(int32 EntryPoint);
	void SetData(const class FString& Description, bool bValidQuestData, const struct FJackQuestReward& QuestRewardData);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_Setumei_001_modern_C">();
	}
	static class UWBP_Menu_WorldMap_Setumei_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_Setumei_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_Setumei_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_Setumei_001_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_Setumei_001_modern_C) == 0x000200, "Wrong size on UWBP_Menu_WorldMap_Setumei_001_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, InvalidationBox_0) == 0x0001D8, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, WBP_Menu_Common_ScrollContent_018) == 0x0001E0, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::WBP_Menu_Common_ScrollContent_018' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, WBP_Menu_Parts_077) == 0x0001E8, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::WBP_Menu_Parts_077' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, WBP_Menu_Parts_078) == 0x0001F0, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::WBP_Menu_Parts_078' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Setumei_001_modern_C, WindowLine) == 0x0001F8, "Member 'UWBP_Menu_WorldMap_Setumei_001_modern_C::WindowLine' has a wrong offset!");

}
