#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Button_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_Button_001_modern.WBP_Menu_WorldMap_Button_001_modern_C
// 0x0060 (0x0460 - 0x0400)
class UWBP_Menu_WorldMap_Button_001_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Parts_008_modern_C*           Button000;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           Button001;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           Button002;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_008_modern_C*           Button003;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootPanel;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame1;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame3;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame4;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bMapSymbolVisible;                                 // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGMapController*                  MapController;                                     // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_WorldMap_Button_001_modern(int32 EntryPoint);
	void Destruct();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateZoomModeCaption();
	void BindHandler(bool bUnbind);
	void MapSymbolVisibleChanged(class UObject* Sender, bool bVisible, class UObject* Payload);
	void BoukenGuideVisibleChanged(class UObject* Sender, bool bVisible, class UObject* Payload);
	void PlayBoukenGuideToggleButtonAnimation();
	void PlayMapSymbolToggleButtonAnimation();
	void PlayZoomButtonAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_Button_001_modern_C">();
	}
	static class UWBP_Menu_WorldMap_Button_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_Button_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_Button_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_Button_001_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_Button_001_modern_C) == 0x000460, "Wrong size on UWBP_Menu_WorldMap_Button_001_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, Button000) == 0x000408, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::Button000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, Button001) == 0x000410, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::Button001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, Button002) == 0x000418, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::Button002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, Button003) == 0x000420, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::Button003' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, InvalidationBox_0) == 0x000428, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, RootPanel) == 0x000430, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, WindowFrame1) == 0x000438, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::WindowFrame1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, WindowFrame3) == 0x000440, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::WindowFrame3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, WindowFrame4) == 0x000448, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::WindowFrame4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, bMapSymbolVisible) == 0x000450, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::bMapSymbolVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Button_001_modern_C, MapController) == 0x000458, "Member 'UWBP_Menu_WorldMap_Button_001_modern_C::MapController' has a wrong offset!");

}

