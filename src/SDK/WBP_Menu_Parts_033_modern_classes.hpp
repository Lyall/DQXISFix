#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_033_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_033_modern.WBP_Menu_Parts_033_modern_C
// 0x0050 (0x0420 - 0x03D0)
class UWBP_Menu_Parts_033_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           Arrow;                                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Equipment_000;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Equipment_Center_Soubi;                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Possible;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sankaku;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_010_modern_C*           WBP_Menu_Parts_010_C_74;                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_010_modern_C*           WBP_Menu_Parts_010_C_75;                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_010_modern_C*           WBP_Menu_Parts_010_C_480;                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_033_modern(int32 EntryPoint);
	void Construct();
	void SetValue(int32 InCurrent, int32 InChanged, bool IsPercent);
	void HideValue();
	void SetParamUp(int32 InCurrent, int32 InChanged);
	void SetPossibleValue(int32 InCurrent, int32 InChanged, bool IsPercent);
	void SetEquipmentLeft(int32 InCurrent, int32 InChanged, bool IsPercent);
	void SetEquipmentCenter(int32 InCurrent, bool IsPercent);
	void HideAll();
	void SetValueFloat(float InCurrent, float InChanged, class FName InUnitTextId);
	void SetEquipmentLeftFloat(float InValue);
	void SetPossibleValueFloat(float InCurrent, float InChanged, class FName InUnitTextId);
	void SetEquipmentCenterFloat(float InValue, class FName InUnitTextId);
	void SetParamLeft(int32 InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_033_modern_C">();
	}
	static class UWBP_Menu_Parts_033_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_033_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_033_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_033_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_033_modern_C) == 0x000420, "Wrong size on UWBP_Menu_Parts_033_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_033_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, Arrow) == 0x0003D8, "Member 'UWBP_Menu_Parts_033_modern_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, Equipment_000) == 0x0003E0, "Member 'UWBP_Menu_Parts_033_modern_C::Equipment_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, Equipment_Center_Soubi) == 0x0003E8, "Member 'UWBP_Menu_Parts_033_modern_C::Equipment_Center_Soubi' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, Possible) == 0x0003F0, "Member 'UWBP_Menu_Parts_033_modern_C::Possible' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, Sankaku) == 0x0003F8, "Member 'UWBP_Menu_Parts_033_modern_C::Sankaku' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, TextBlock_0) == 0x000400, "Member 'UWBP_Menu_Parts_033_modern_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, WBP_Menu_Parts_010_C_74) == 0x000408, "Member 'UWBP_Menu_Parts_033_modern_C::WBP_Menu_Parts_010_C_74' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, WBP_Menu_Parts_010_C_75) == 0x000410, "Member 'UWBP_Menu_Parts_033_modern_C::WBP_Menu_Parts_010_C_75' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_033_modern_C, WBP_Menu_Parts_010_C_480) == 0x000418, "Member 'UWBP_Menu_Parts_033_modern_C::WBP_Menu_Parts_010_C_480' has a wrong offset!");

}
