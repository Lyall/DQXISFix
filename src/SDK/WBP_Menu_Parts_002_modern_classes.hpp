#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_002_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_002_modern.WBP_Menu_Parts_002_modern_C
// 0x0078 (0x0438 - 0x03C0)
class UWBP_Menu_Parts_002_modern_C final : public UJackUMGPageController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           Down_0;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Down_Arrow;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Num_L_1;                                           // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Num_R_3;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slash_2;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Up_4;                                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Up_Arrow;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FVector2D>                      OneKeta;                                           // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      TwoKeta;                                           // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                      ThreeKeta;                                         // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Fig;                                               // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Parts_002_modern(int32 EntryPoint);
	void SetPager(int32 Numerator, int32 Denominator);
	void PlayArrowAnimAtInputValue(int32 Input);
	void PlayArrowAnimation(bool bIsRight);
	void Construct();
	void SetNumber(int32 Numerator, int32 Denominator);
	void CustomEvent_0(class FName EventTag);
	void Setup();
	void GetDigit(int32 InVar, int32* Digit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_002_modern_C">();
	}
	static class UWBP_Menu_Parts_002_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_002_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_002_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_002_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_002_modern_C) == 0x000438, "Wrong size on UWBP_Menu_Parts_002_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, UberGraphFrame) == 0x0003C0, "Member 'UWBP_Menu_Parts_002_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Down_0) == 0x0003C8, "Member 'UWBP_Menu_Parts_002_modern_C::Down_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Down_Arrow) == 0x0003D0, "Member 'UWBP_Menu_Parts_002_modern_C::Down_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Num_L_1) == 0x0003D8, "Member 'UWBP_Menu_Parts_002_modern_C::Num_L_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Num_R_3) == 0x0003E0, "Member 'UWBP_Menu_Parts_002_modern_C::Num_R_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Slash_2) == 0x0003E8, "Member 'UWBP_Menu_Parts_002_modern_C::Slash_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Up_4) == 0x0003F0, "Member 'UWBP_Menu_Parts_002_modern_C::Up_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Up_Arrow) == 0x0003F8, "Member 'UWBP_Menu_Parts_002_modern_C::Up_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, OneKeta) == 0x000400, "Member 'UWBP_Menu_Parts_002_modern_C::OneKeta' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, TwoKeta) == 0x000410, "Member 'UWBP_Menu_Parts_002_modern_C::TwoKeta' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, ThreeKeta) == 0x000420, "Member 'UWBP_Menu_Parts_002_modern_C::ThreeKeta' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_002_modern_C, Fig) == 0x000430, "Member 'UWBP_Menu_Parts_002_modern_C::Fig' has a wrong offset!");

}
