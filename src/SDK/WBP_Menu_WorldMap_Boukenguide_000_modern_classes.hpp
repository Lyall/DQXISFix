#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_Boukenguide_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_Boukenguide_000_modern.WBP_Menu_WorldMap_Boukenguide_000_modern_C
// 0x0028 (0x0428 - 0x0400)
class UWBP_Menu_WorldMap_Boukenguide_000_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_006_modern_C*           WBP_Menu_Parts_006_C_20;                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_WorldMap_Boukenguide_000_modern(int32 EntryPoint);
	void Destruct();
	void UpdateWidget(float DeltaTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetSetumei(const class FText& InCategory, const class FText& InDescription);
	void UpdateVisible();
	void BindBoukenGuideVisibleChanged(bool Unbind);
	void BoukenGuideVisibledChangedHandler(class UObject* Sender, bool bVisible, class UObject* Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_Boukenguide_000_modern_C">();
	}
	static class UWBP_Menu_WorldMap_Boukenguide_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_Boukenguide_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_Boukenguide_000_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C) == 0x000428, "Wrong size on UWBP_Menu_WorldMap_Boukenguide_000_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_WorldMap_Boukenguide_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C, InvalidationBox_0) == 0x000408, "Member 'UWBP_Menu_WorldMap_Boukenguide_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C, WBP_Menu_Parts_006_C_20) == 0x000410, "Member 'UWBP_Menu_WorldMap_Boukenguide_000_modern_C::WBP_Menu_Parts_006_C_20' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C, WBP_Menu_Parts_007) == 0x000418, "Member 'UWBP_Menu_WorldMap_Boukenguide_000_modern_C::WBP_Menu_Parts_007' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_Boukenguide_000_modern_C, Window_Line) == 0x000420, "Member 'UWBP_Menu_WorldMap_Boukenguide_000_modern_C::Window_Line' has a wrong offset!");

}

