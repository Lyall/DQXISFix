#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Sakusen_List_003_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Sakusen_List_003_modern.WBP_Menu_Sakusen_List_003_modern_C
// 0x0058 (0x0458 - 0x0400)
class UWBP_Menu_Sakusen_List_003_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           AriItemList;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RenkeiAri;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_0;                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_1;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_2;                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_3;                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_4;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_12;                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Sakusen_List_003_modern(int32 EntryPoint);
	void WidgetBPActionDelegate_Copy(class FName EventTag);
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void Construct();
	void SetInfoText(class FName Selection, EJackGambit* OutGambit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Sakusen_List_003_modern_C">();
	}
	static class UWBP_Menu_Sakusen_List_003_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Sakusen_List_003_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Sakusen_List_003_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Sakusen_List_003_modern_C");
static_assert(sizeof(UWBP_Menu_Sakusen_List_003_modern_C) == 0x000458, "Wrong size on UWBP_Menu_Sakusen_List_003_modern_C");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, AriItemList) == 0x000408, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::AriItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, InvalidationBox_0) == 0x000410, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, RenkeiAri) == 0x000418, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::RenkeiAri' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_0) == 0x000420, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_1) == 0x000428, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_2) == 0x000430, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_3) == 0x000438, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_4) == 0x000440, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WBP_Menu_Parts_000_C_12) == 0x000448, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WBP_Menu_Parts_000_C_12' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Sakusen_List_003_modern_C, WindowFrame) == 0x000450, "Member 'UWBP_Menu_Sakusen_List_003_modern_C::WindowFrame' has a wrong offset!");

}
