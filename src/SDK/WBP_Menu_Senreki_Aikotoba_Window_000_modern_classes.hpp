#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Senreki_Aikotoba_Window_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Senreki_Aikotoba_Window_000_modern.WBP_Menu_Senreki_Aikotoba_Window_000_modern_C
// 0x00D8 (0x0508 - 0x0430)
class UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C final : public UJackUMGBrowserBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           CategoryList;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Information;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemList;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Top;                                               // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_002_modern_C*           WBP_Menu_Parts_002_modern;                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007_C_98;                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_037_modern_C*           WBP_Menu_Parts_037_C_428;                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_056_modern_C*           WBP_Menu_Parts_056;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062;                                // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_0;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_1;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_2;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_3;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_4;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_5;                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_6;                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_7;                            // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_062_modern_C*           WBP_Menu_Parts_062_C_8;                            // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EJackCharacter                                SelectedCharType;                                  // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGItemData*                       CharSoubiData;                                     // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoubiList*                      SoubiList;                                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJackUMGSoubiState*                     SoubiState;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CharacterName;                                     // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsShowTokugi;                                      // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_Menu_Senreki_Aikotoba_Window_000_modern(int32 EntryPoint);
	void Construct();
	void OnItemListControl(class FName EventName, class UJackUMGItemBase* InItemBase);
	void WidgetBPActionDelegate(class FName EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Senreki_Aikotoba_Window_000_modern_C">();
	}
	static class UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C");
static_assert(sizeof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C) == 0x000508, "Wrong size on UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, CategoryList) == 0x000438, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, Information) == 0x000440, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::Information' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, InvalidationBox_0) == 0x000448, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, ItemList) == 0x000450, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::ItemList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, Top) == 0x000458, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_002_modern) == 0x000460, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_002_modern' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_007_C_98) == 0x000468, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_007_C_98' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_037_C_428) == 0x000470, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_037_C_428' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_056) == 0x000478, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_056' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062) == 0x000480, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_0) == 0x000488, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_1) == 0x000490, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_2) == 0x000498, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_3) == 0x0004A0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_4) == 0x0004A8, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_5) == 0x0004B0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_6) == 0x0004B8, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_7) == 0x0004C0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, WBP_Menu_Parts_062_C_8) == 0x0004C8, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::WBP_Menu_Parts_062_C_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, SelectedCharType) == 0x0004D0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::SelectedCharType' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, CharSoubiData) == 0x0004D8, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::CharSoubiData' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, SoubiList) == 0x0004E0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::SoubiList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, SoubiState) == 0x0004E8, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::SoubiState' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, CharacterName) == 0x0004F0, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C, IsShowTokugi) == 0x000500, "Member 'UWBP_Menu_Senreki_Aikotoba_Window_000_modern_C::IsShowTokugi' has a wrong offset!");

}
