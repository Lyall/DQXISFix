#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_PairingProfile_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_PairingProfile_001_modern.WBP_Menu_PairingProfile_001_modern_C
// 0x0028 (0x03C0 - 0x0398)
class UWBP_Menu_PairingProfile_001_modern_C final : public UJackUMGPairingUser
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button;                                            // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Caption002_modern;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProfileChanage;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_PairingProfile_001_modern(int32 EntryPoint);
	void Construct();
	void PairingInputDelegateEvent(bool IsNeedPairing);
	void WidgetBPAction(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_PairingProfile_001_modern_C">();
	}
	static class UWBP_Menu_PairingProfile_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_PairingProfile_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_PairingProfile_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_PairingProfile_001_modern_C");
static_assert(sizeof(UWBP_Menu_PairingProfile_001_modern_C) == 0x0003C0, "Wrong size on UWBP_Menu_PairingProfile_001_modern_C");
static_assert(offsetof(UWBP_Menu_PairingProfile_001_modern_C, UberGraphFrame) == 0x000398, "Member 'UWBP_Menu_PairingProfile_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PairingProfile_001_modern_C, BG) == 0x0003A0, "Member 'UWBP_Menu_PairingProfile_001_modern_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PairingProfile_001_modern_C, Button) == 0x0003A8, "Member 'UWBP_Menu_PairingProfile_001_modern_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PairingProfile_001_modern_C, Caption002_modern) == 0x0003B0, "Member 'UWBP_Menu_PairingProfile_001_modern_C::Caption002_modern' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_PairingProfile_001_modern_C, ProfileChanage) == 0x0003B8, "Member 'UWBP_Menu_PairingProfile_001_modern_C::ProfileChanage' has a wrong offset!");

}
