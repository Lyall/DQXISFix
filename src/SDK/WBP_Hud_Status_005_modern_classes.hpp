#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_Status_005_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_Status_005_modern.WBP_Hud_Status_005_modern_C
// 0x0058 (0x03C8 - 0x0370)
class UWBP_Hud_Status_005_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_1;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_2;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_3;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_HP2_C*                  WBP_Hud_Status_HP2;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Icon2_C*                WBP_Hud_Status_Icon2;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Level2_modern_C*        WBP_Hud_Status_Level2;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_MP2_C*                  WBP_Hud_Status_MP2;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_Name2_modern_C*         WBP_Hud_Status_Name2;                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Hud_Status_005_modern(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_Status_005_modern_C">();
	}
	static class UWBP_Hud_Status_005_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_Status_005_modern_C>();
	}
};
static_assert(alignof(UWBP_Hud_Status_005_modern_C) == 0x000008, "Wrong alignment on UWBP_Hud_Status_005_modern_C");
static_assert(sizeof(UWBP_Hud_Status_005_modern_C) == 0x0003C8, "Wrong size on UWBP_Hud_Status_005_modern_C");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Hud_Status_005_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, InvalidationBox_0) == 0x000378, "Member 'UWBP_Hud_Status_005_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, InvalidationBox_1) == 0x000380, "Member 'UWBP_Hud_Status_005_modern_C::InvalidationBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, InvalidationBox_2) == 0x000388, "Member 'UWBP_Hud_Status_005_modern_C::InvalidationBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, InvalidationBox_3) == 0x000390, "Member 'UWBP_Hud_Status_005_modern_C::InvalidationBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, RootPanel) == 0x000398, "Member 'UWBP_Hud_Status_005_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, WBP_Hud_Status_HP2) == 0x0003A0, "Member 'UWBP_Hud_Status_005_modern_C::WBP_Hud_Status_HP2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, WBP_Hud_Status_Icon2) == 0x0003A8, "Member 'UWBP_Hud_Status_005_modern_C::WBP_Hud_Status_Icon2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, WBP_Hud_Status_Level2) == 0x0003B0, "Member 'UWBP_Hud_Status_005_modern_C::WBP_Hud_Status_Level2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, WBP_Hud_Status_MP2) == 0x0003B8, "Member 'UWBP_Hud_Status_005_modern_C::WBP_Hud_Status_MP2' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_Status_005_modern_C, WBP_Hud_Status_Name2) == 0x0003C0, "Member 'UWBP_Hud_Status_005_modern_C::WBP_Hud_Status_Name2' has a wrong offset!");

}

