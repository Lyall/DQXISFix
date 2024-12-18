#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tokugi_Flash_004

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tokugi_Flash_004.WBP_Menu_Tokugi_Flash_004_C
// 0x0048 (0x0218 - 0x01D0)
class UWBP_Menu_Tokugi_Flash_004_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x01D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Centet_Eff;                                        // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 L_Eff;                                             // 0x01E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Moji_Eff_Panel;                                    // 0x01F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R_Eff;                                             // 0x01F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   EventEndAnim;                                      // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAutoRemove;                                       // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventEndAnim__DelegateSignature(class UWBP_Menu_Tokugi_Flash_004_C* Sender);
	void ExecuteUbergraph_WBP_Menu_Tokugi_Flash_004(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim(bool bDontAutoRemove);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tokugi_Flash_004_C">();
	}
	static class UWBP_Menu_Tokugi_Flash_004_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tokugi_Flash_004_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tokugi_Flash_004_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tokugi_Flash_004_C");
static_assert(sizeof(UWBP_Menu_Tokugi_Flash_004_C) == 0x000218, "Wrong size on UWBP_Menu_Tokugi_Flash_004_C");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_Tokugi_Flash_004_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, In) == 0x0001D8, "Member 'UWBP_Menu_Tokugi_Flash_004_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, Centet_Eff) == 0x0001E0, "Member 'UWBP_Menu_Tokugi_Flash_004_C::Centet_Eff' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, L_Eff) == 0x0001E8, "Member 'UWBP_Menu_Tokugi_Flash_004_C::L_Eff' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, Moji_Eff_Panel) == 0x0001F0, "Member 'UWBP_Menu_Tokugi_Flash_004_C::Moji_Eff_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, R_Eff) == 0x0001F8, "Member 'UWBP_Menu_Tokugi_Flash_004_C::R_Eff' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, EventEndAnim) == 0x000200, "Member 'UWBP_Menu_Tokugi_Flash_004_C::EventEndAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Flash_004_C, bAutoRemove) == 0x000210, "Member 'UWBP_Menu_Tokugi_Flash_004_C::bAutoRemove' has a wrong offset!");

}

