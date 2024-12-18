#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Sakusen_Renkei_Settei_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Sakusen_Renkei_Settei_000_modern.WBP_Menu_Sakusen_Renkei_Settei_000_modern_C
// 0x0038 (0x03A8 - 0x0370)
class UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C final : public UJackUMGWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_9;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_7;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          RenkeiSuru;                                        // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RenkeiTextID;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Sakusen_Renkei_Settei_000_modern(int32 EntryPoint);
	void Construct();
	void SetRenkeiText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Sakusen_Renkei_Settei_000_modern_C">();
	}
	static class UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C");
static_assert(sizeof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C) == 0x0003A8, "Wrong size on UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, UberGraphFrame) == 0x000370, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, Image_9) == 0x000378, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::Image_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, InvalidationBox_0) == 0x000380, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, WBP_Menu_Parts_000) == 0x000388, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::WBP_Menu_Parts_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, WBP_Menu_Parts_000_C_7) == 0x000390, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::WBP_Menu_Parts_000_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, RenkeiSuru) == 0x000398, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::RenkeiSuru' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C, RenkeiTextID) == 0x0003A0, "Member 'UWBP_Menu_Sakusen_Renkei_Settei_000_modern_C::RenkeiTextID' has a wrong offset!");

}

