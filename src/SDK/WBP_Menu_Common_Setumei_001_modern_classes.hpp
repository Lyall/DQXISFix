#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Common_Setumei_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Common_Setumei_001_modern.WBP_Menu_Common_Setumei_001_modern_C
// 0x0058 (0x0458 - 0x0400)
class UWBP_Menu_Common_Setumei_001_modern_C final : public UJackUMGWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 IconPanel;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Common_ScrollContent_001_modern_C* WBP_Menu_Common_ScrollContent_001;                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_000_modern_C*           WBP_Menu_Parts_000_C_230;                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007_C_6;                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_024_modern_C*           WBP_Menu_Parts_024_C_226;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line_1;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Window_Line_2;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowFrame;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zabuton;                                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bSellItemMode;                                     // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBattleMode;                                       // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452[0x2];                                      // 0x0452(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoadUniqueId;                                      // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_Common_Setumei_001_modern(int32 EntryPoint);
	void Destruct();
	void LoaddedSetBookIcon(int32 InResultCode, class UObject* InLoaddedObject, class UJackUMGAsyncLoad* InLoadInfo);
	void SetBookIcon(TSoftObjectPtr<class UTexture> InTextureAsset);
	void SetDouguMenuDescription(class UJackUMGItemSyousai* InItemSyousai);
	void Construct();
	void SetBattleMode(bool bValue);
	void SetSellItemMode(bool bValue);
	void SetSetumei(const class FText& InCategory, const class FText& InDescription, class FName InCountCaption, int32 InCountValue, class FName InCountUnit);
	void SetWindowFrameWidth(float FrameWidth);
	void SetSetumei2(const class FText& InCategory, const class FText& InDescription, class FName InCountCaption, class FName InCountValue, class FName InCountUnit);
	void CancelLoadTexture();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Common_Setumei_001_modern_C">();
	}
	static class UWBP_Menu_Common_Setumei_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Common_Setumei_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Common_Setumei_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Common_Setumei_001_modern_C");
static_assert(sizeof(UWBP_Menu_Common_Setumei_001_modern_C) == 0x000458, "Wrong size on UWBP_Menu_Common_Setumei_001_modern_C");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, UberGraphFrame) == 0x000400, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, IconPanel) == 0x000408, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::IconPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, WBP_Menu_Common_ScrollContent_001) == 0x000410, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::WBP_Menu_Common_ScrollContent_001' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, WBP_Menu_Parts_000_C_230) == 0x000418, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::WBP_Menu_Parts_000_C_230' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, WBP_Menu_Parts_007_C_6) == 0x000420, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::WBP_Menu_Parts_007_C_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, WBP_Menu_Parts_024_C_226) == 0x000428, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::WBP_Menu_Parts_024_C_226' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, Window_Line_1) == 0x000430, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::Window_Line_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, Window_Line_2) == 0x000438, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::Window_Line_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, WindowFrame) == 0x000440, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::WindowFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, Zabuton) == 0x000448, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::Zabuton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, bSellItemMode) == 0x000450, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::bSellItemMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, bBattleMode) == 0x000451, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::bBattleMode' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Common_Setumei_001_modern_C, LoadUniqueId) == 0x000454, "Member 'UWBP_Menu_Common_Setumei_001_modern_C::LoadUniqueId' has a wrong offset!");

}

