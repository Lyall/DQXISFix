#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_018_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_018_modern.WBP_Menu_Parts_018_modern_C
// 0x0018 (0x03E8 - 0x03D0)
class UWBP_Menu_Parts_018_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_241;                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_082_modern_C*           WBP_Menu_Parts_082;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_018_modern(int32 EntryPoint);
	void Construct();
	void NotificationItemBase(const class FName& NotifyTag, class UJackUMGItemData* InItemData, class UObject* Object, int32 Value);
	void UpdateContainerDelegate(const struct FJackUMGItemContainer& ItemContainer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_018_modern_C">();
	}
	static class UWBP_Menu_Parts_018_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_018_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_018_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_018_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_018_modern_C) == 0x0003E8, "Wrong size on UWBP_Menu_Parts_018_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_018_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_018_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_018_modern_C, WBP_Menu_Parts_000_C_241) == 0x0003D8, "Member 'UWBP_Menu_Parts_018_modern_C::WBP_Menu_Parts_000_C_241' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_018_modern_C, WBP_Menu_Parts_082) == 0x0003E0, "Member 'UWBP_Menu_Parts_018_modern_C::WBP_Menu_Parts_082' has a wrong offset!");

}
