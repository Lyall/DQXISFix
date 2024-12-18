#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_085_Steam2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_085_Steam2.WBP_Menu_Parts_085_Steam2_C
// 0x0058 (0x0488 - 0x0430)
class UWBP_Menu_Parts_085_Steam2_C final : public UJackUMGHorizontalParts
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CaptionPanel;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ChoiceCursorPanel;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ChoiceText;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_02;                                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_03;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_04;                                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_05;                                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_06;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_07;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_085_Steam2(int32 EntryPoint);
	void Construct();
	void CustomEvent_0();
	void AdjustItem(int32 LeavCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_085_Steam2_C">();
	}
	static class UWBP_Menu_Parts_085_Steam2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_085_Steam2_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_085_Steam2_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_085_Steam2_C");
static_assert(sizeof(UWBP_Menu_Parts_085_Steam2_C) == 0x000488, "Wrong size on UWBP_Menu_Parts_085_Steam2_C");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Parts_085_Steam2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Arrow) == 0x000438, "Member 'UWBP_Menu_Parts_085_Steam2_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, CaptionPanel) == 0x000440, "Member 'UWBP_Menu_Parts_085_Steam2_C::CaptionPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, ChoiceCursorPanel) == 0x000448, "Member 'UWBP_Menu_Parts_085_Steam2_C::ChoiceCursorPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, ChoiceText) == 0x000450, "Member 'UWBP_Menu_Parts_085_Steam2_C::ChoiceText' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_02) == 0x000458, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_02' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_03) == 0x000460, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_03' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_04) == 0x000468, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_04' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_05) == 0x000470, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_05' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_06) == 0x000478, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_06' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_085_Steam2_C, Value_07) == 0x000480, "Member 'UWBP_Menu_Parts_085_Steam2_C::Value_07' has a wrong offset!");

}

