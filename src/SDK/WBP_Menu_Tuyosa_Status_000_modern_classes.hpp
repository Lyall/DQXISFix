#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tuyosa_Status_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tuyosa_Status_000_modern.WBP_Menu_Tuyosa_Status_000_modern_C
// 0x0030 (0x0200 - 0x01D0)
class UWBP_Menu_Tuyosa_Status_000_modern_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 CharaIcon;                                         // 0x01D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text080_Coron00All;                                // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text080_Text00All;                                 // 0x01E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text080_Value00All;                                // 0x01F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Status_008_modern_C*           WBP_Hud_Status_008;                                // 0x01F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Tuyosa_Status_000_modern(int32 EntryPoint);
	void Construct();
	void SetData(class UJackUMGAccessorMemberDataInTuyosa* TuyosaData);
	void InitParamValue(class UJackGameCharacter* GameCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tuyosa_Status_000_modern_C">();
	}
	static class UWBP_Menu_Tuyosa_Status_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tuyosa_Status_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tuyosa_Status_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tuyosa_Status_000_modern_C");
static_assert(sizeof(UWBP_Menu_Tuyosa_Status_000_modern_C) == 0x000200, "Wrong size on UWBP_Menu_Tuyosa_Status_000_modern_C");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, CharaIcon) == 0x0001D8, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::CharaIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, Text080_Coron00All) == 0x0001E0, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::Text080_Coron00All' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, Text080_Text00All) == 0x0001E8, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::Text080_Text00All' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, Text080_Value00All) == 0x0001F0, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::Text080_Value00All' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tuyosa_Status_000_modern_C, WBP_Hud_Status_008) == 0x0001F8, "Member 'UWBP_Menu_Tuyosa_Status_000_modern_C::WBP_Hud_Status_008' has a wrong offset!");

}
