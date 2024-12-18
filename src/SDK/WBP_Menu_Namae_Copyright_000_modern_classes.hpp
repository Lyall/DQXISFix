#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Namae_Copyright_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Namae_Copyright_000_modern.WBP_Menu_Namae_Copyright_000_modern_C
// 0x0040 (0x04A0 - 0x0460)
class UWBP_Menu_Namae_Copyright_000_modern_C final : public UJackUMGCopyright
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           RootPanel;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_044_C*                  WBP_Menu_Parts_044;                                // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_072_modern_C*           WBP_Menu_Parts_072;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TopNumber;                                         // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LineCount;                                         // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScrollMove;                                        // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndNumber;                                         // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScrollMoveLine;                                    // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PixelPerLine;                                      // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Namae_Copyright_000_modern(int32 EntryPoint);
	void Construct();
	void CustomEvent_0(class FName EventTag);
	void CustomEvent_1(EJackKeys InKeyType, bool bIsPressed);
	void CopyRightScroll(bool IsUpScroll);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Namae_Copyright_000_modern_C">();
	}
	static class UWBP_Menu_Namae_Copyright_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Namae_Copyright_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Namae_Copyright_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Namae_Copyright_000_modern_C");
static_assert(sizeof(UWBP_Menu_Namae_Copyright_000_modern_C) == 0x0004A0, "Wrong size on UWBP_Menu_Namae_Copyright_000_modern_C");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, UberGraphFrame) == 0x000460, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, RootPanel) == 0x000468, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::RootPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, WBP_Menu_Parts_044) == 0x000470, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::WBP_Menu_Parts_044' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, WBP_Menu_Parts_072) == 0x000478, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::WBP_Menu_Parts_072' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, WindowFrame) == 0x000480, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, TopNumber) == 0x000488, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::TopNumber' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, LineCount) == 0x00048C, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::LineCount' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, ScrollMove) == 0x000490, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::ScrollMove' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, EndNumber) == 0x000494, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::EndNumber' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, ScrollMoveLine) == 0x000498, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::ScrollMoveLine' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Namae_Copyright_000_modern_C, PixelPerLine) == 0x00049C, "Member 'UWBP_Menu_Namae_Copyright_000_modern_C::PixelPerLine' has a wrong offset!");

}

