#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Parts_006_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Parts_006_modern.WBP_Menu_Parts_006_modern_C
// 0x0010 (0x03E0 - 0x03D0)
class UWBP_Menu_Parts_006_modern_C final : public UJackUMGItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             CaptionPanel;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Menu_Parts_006_modern(int32 EntryPoint);
	void SetCaptionData(const class FString& Caption, int32 MaxLines);
	void SetData(class FName TextID_0, int32 MaxLines);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Parts_006_modern_C">();
	}
	static class UWBP_Menu_Parts_006_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Parts_006_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Parts_006_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Parts_006_modern_C");
static_assert(sizeof(UWBP_Menu_Parts_006_modern_C) == 0x0003E0, "Wrong size on UWBP_Menu_Parts_006_modern_C");
static_assert(offsetof(UWBP_Menu_Parts_006_modern_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_Menu_Parts_006_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Parts_006_modern_C, CaptionPanel) == 0x0003D8, "Member 'UWBP_Menu_Parts_006_modern_C::CaptionPanel' has a wrong offset!");

}

