#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Senreki_Kuwasii_Window_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Senreki_Kuwasii_Window_000_modern.WBP_Menu_Senreki_Kuwasii_Window_000_modern_C
// 0x00B0 (0x04E0 - 0x0430)
class UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           CategoryList;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Information;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemList;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Top;                                               // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_428;                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073;                                // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_0;                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_1;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_2;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_3;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_4;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_5;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_6;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_7;                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_8;                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_073_modern_C*           WBP_Menu_Parts_073_C_9;                            // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     TextLabelList;                                     // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                             ScrollBarImage;                                    // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Senreki_Kuwasii_Window_000_modern(int32 EntryPoint);
	void Construct();
	void CustomEvent_0(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Senreki_Kuwasii_Window_000_modern_C">();
	}
	static class UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C");
static_assert(sizeof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C) == 0x0004E0, "Wrong size on UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, CategoryList) == 0x000438, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, Information) == 0x000440, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::Information' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, InvalidationBox_0) == 0x000448, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, ItemList) == 0x000450, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, Top) == 0x000458, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_000) == 0x000460, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_037_C_428) == 0x000468, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_037_C_428' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073) == 0x000470, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_0) == 0x000478, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_1) == 0x000480, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_2) == 0x000488, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_3) == 0x000490, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_4) == 0x000498, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_5) == 0x0004A0, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_6) == 0x0004A8, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_7) == 0x0004B0, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_8) == 0x0004B8, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, WBP_Menu_Parts_073_C_9) == 0x0004C0, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::WBP_Menu_Parts_073_C_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, TextLabelList) == 0x0004C8, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::TextLabelList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C, ScrollBarImage) == 0x0004D8, "Member 'UWBP_Menu_Senreki_Kuwasii_Window_000_modern_C::ScrollBarImage' has a wrong offset!");

}

