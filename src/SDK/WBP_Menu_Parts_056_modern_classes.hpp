#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_056_modern

#include "Basic.hpp"

#include "WBP_Menu_Parts_Text_000_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_056_modern.WBP_Menu_Parts_056_modern_C
// 0x0038 (0x0408 - 0x03D0)
class UWBP_Menu_Parts_056_modern_C final : public UWBP_Menu_Parts_Text_000_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Parts_Value_002_modern_C*     PartsValue002;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Value002Panel;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Value003Panel;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_024_modern_C*           WBP_Menu_Parts_024;                                // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_Value_003_modern_C*     WBP_Menu_Parts_Value_003;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_056_modern(int32 EntryPoint);
	void Construct();
	void SetCompRate(class FName InCaptionID, float InCompRate);
	void SetCompValue(class FName InCaptionID, int32 InNowValue, int32 InAllValue);
	void SetNumberValue(class FName InCaptionID, int32 InValue, class FName InUnitTextId);
	void SetValue002(class FName InTextId, int32 Value, int32 MaxValue);
	void SetSenrekiTopVisible(bool Visible);
	void Set2ValueText(int32 Value, int32 ValueMax, class FName UnitTextId, class FName CaptionId);
	void SetValueText(int32 Value, class FName UnitTextId, class FName CaptionId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_056_modern_C">();
	}
	static class UWBP_Menu_Parts_056_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_056_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_056_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_056_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_056_modern_C) == 0x000408, "Wrong size on UWBP_Menu_Parts_056_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_056_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, PartsValue002) == 0x0003D8, "Member 'UWBP_Menu_Parts_056_modern_C::PartsValue002' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, Value002Panel) == 0x0003E0, "Member 'UWBP_Menu_Parts_056_modern_C::Value002Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, Value003Panel) == 0x0003E8, "Member 'UWBP_Menu_Parts_056_modern_C::Value003Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, WBP_Menu_Parts_000) == 0x0003F0, "Member 'UWBP_Menu_Parts_056_modern_C::WBP_Menu_Parts_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, WBP_Menu_Parts_024) == 0x0003F8, "Member 'UWBP_Menu_Parts_056_modern_C::WBP_Menu_Parts_024' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_056_modern_C, WBP_Menu_Parts_Value_003) == 0x000400, "Member 'UWBP_Menu_Parts_056_modern_C::WBP_Menu_Parts_Value_003' has a wrong offset!");

}

