#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Dougu_Syousai_103_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Dougu_Syousai_103_modern.WBP_Menu_Dougu_Syousai_103_modern_C
// 0x0088 (0x03F8 - 0x0370)
class UWBP_Menu_Dougu_Syousai_103_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 CharaListWindow;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_8;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Dougu_Syousai_203_C*          WBP_Menu_Dougu_Syousai_203;                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJackUMGItemSyousai*                    ItemSyousaiRef;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      Name1Position;                                     // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      Name2Position;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      Name3Position;                                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      Name4Position;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      Name8Position;                                     // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      PositionList;                                      // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Menu_Dougu_Syousai_103_modern(int32 EntryPoint);
	void Construct();
	void JackOnWidgetNotificationDelegate_Event_0(class FName InEventTag, class UJackUMGWidgetBase* InCallWidgetBase, class UObject* InObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Dougu_Syousai_103_modern_C">();
	}
	static class UWBP_Menu_Dougu_Syousai_103_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Dougu_Syousai_103_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Dougu_Syousai_103_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Dougu_Syousai_103_modern_C");
static_assert(sizeof(UWBP_Menu_Dougu_Syousai_103_modern_C) == 0x0003F8, "Wrong size on UWBP_Menu_Dougu_Syousai_103_modern_C");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, CharaListWindow) == 0x000378, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::CharaListWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, TextBlock_8) == 0x000380, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::TextBlock_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, WBP_Menu_Dougu_Syousai_203) == 0x000388, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::WBP_Menu_Dougu_Syousai_203' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, ItemSyousaiRef) == 0x000390, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::ItemSyousaiRef' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, Name1Position) == 0x000398, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::Name1Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, Name2Position) == 0x0003A8, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::Name2Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, Name3Position) == 0x0003B8, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::Name3Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, Name4Position) == 0x0003C8, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::Name4Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, Name8Position) == 0x0003D8, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::Name8Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Dougu_Syousai_103_modern_C, PositionList) == 0x0003E8, "Member 'UWBP_Menu_Dougu_Syousai_103_modern_C::PositionList' has a wrong offset!");

}
