#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_Tokugi_Piece_001_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "JackGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Tokugi_Piece_001_modern.WBP_Menu_Tokugi_Piece_001_modern_C
// 0x00C8 (0x0298 - 0x01D0)
class UWBP_Menu_Tokugi_Piece_001_modern_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default;                                           // 0x01D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_L_Top;                                       // 0x01E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_L_Bottom;                                    // 0x01E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_Bottom;                                      // 0x01F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_R_Bottom;                                    // 0x01F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_R_Top;                                       // 0x0200(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Flash_Top;                                         // 0x0208(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_Bottom;                                       // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_L_Bottom;                                     // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_L_Top;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_R_Bottom;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_R_Top;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Plug_Top;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0240(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale;                                             // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BgScroll;                                          // 0x024C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 DirList;                                           // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UImage*>                         ImageList;                                         // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Interval;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntervalMin;                                       // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntervalMax;                                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetAnimation*>               AnimList;                                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Menu_Tokugi_Piece_001_modern(int32 EntryPoint);
	void SetIntervalByRand();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetData(class UBP_TokugiPanelData_000_C* Data);
	void SetBackGroundScroll(const struct FVector2D& BgScroll_0);
	void SetDisplayScale(float DisplayScale);
	void UpdateDisplay();
	void SetPosAndScale(const struct FVector2D& Position_0, float Scale_0, const struct FVector2D& BgScroll_0);
	void SetPosition(const struct FVector2D& Pos);
	void Construct();
	void SendTokugiPanelMessage(class FName Message);
	void SetMenuMode();
	void PlayAnimData(const struct FJackUMGTokugiPanelAnimData& AnimData);
	void SetCharacterItemData(class UJackUMGItemData* ItemData);
	void SetPanelData(class UJackUMGTokugiPanelData* PanelData);
	void PlayAnimationNameArg(class FName Arg);
	void PlayAnimationIntArg(int32 Arg);
	void OnEndAnim(class UUserWidget* Sender);
	void SetEndAnimEventListener(TScriptInterface<class IBP_IF_TokugiPanel_Item_C> Listener);
	void PlayDefaultAnimation();
	void OnTokugiPanelWindowDestruct();
	void SetResetMode();
	void SetBattleResultMode(EJackCharacter CharacterType);
	void OnTokugiPanelWindowCancel();
	void SetCancelEventListener(TScriptInterface<class IBP_IF_TokugiPanel_Item_C> CancelEventListener);
	void SetDisplayData(const struct FVector2D& Position_0, float Scale_0, const struct FVector2D& BgScroll_0);
	void SetDrawPos(const struct FVector2D& Position_0);
	void GetDirList(class UJackUMGTokugiPanelData* Data, TArray<int32>* OpenDirList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Tokugi_Piece_001_modern_C">();
	}
	static class UWBP_Menu_Tokugi_Piece_001_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Tokugi_Piece_001_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_Tokugi_Piece_001_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_Tokugi_Piece_001_modern_C");
static_assert(sizeof(UWBP_Menu_Tokugi_Piece_001_modern_C) == 0x000298, "Wrong size on UWBP_Menu_Tokugi_Piece_001_modern_C");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Default) == 0x0001D8, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Default' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_L_Top) == 0x0001E0, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_L_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_L_Bottom) == 0x0001E8, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_L_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_Bottom) == 0x0001F0, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_R_Bottom) == 0x0001F8, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_R_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_R_Top) == 0x000200, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_R_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Flash_Top) == 0x000208, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Flash_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_Bottom) == 0x000210, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_L_Bottom) == 0x000218, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_L_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_L_Top) == 0x000220, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_L_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_R_Bottom) == 0x000228, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_R_Bottom' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_R_Top) == 0x000230, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_R_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Plug_Top) == 0x000238, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Plug_Top' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Position) == 0x000240, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Position' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Scale) == 0x000248, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Scale' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, BgScroll) == 0x00024C, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::BgScroll' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, DirList) == 0x000258, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::DirList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, ImageList) == 0x000268, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::ImageList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, Interval) == 0x000278, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::Interval' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, IntervalMin) == 0x00027C, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::IntervalMin' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, IntervalMax) == 0x000280, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::IntervalMax' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Tokugi_Piece_001_modern_C, AnimList) == 0x000288, "Member 'UWBP_Menu_Tokugi_Piece_001_modern_C::AnimList' has a wrong offset!");

}
