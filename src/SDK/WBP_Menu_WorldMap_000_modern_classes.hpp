#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_000_modern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JackGame_structs.hpp"
#include "JackGame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_000_modern.WBP_Menu_WorldMap_000_modern_C
// 0x0228 (0x0848 - 0x0620)
class UWBP_Menu_WorldMap_000_modern_C final : public UJackUMGWorldMapWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0620(0x0008)(Transient, DuplicateTransient)
	class UWBP_Menu_Parts_048_C*                  FloorSpinner;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Button_004_modern_C* LayerChangeCaptionWBP;                             // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapImage;                                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapSymbolImage;                                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MapTextLayer;                                      // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NowLoadingPanel;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Paper_000;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Pc_000_C*            PCMarkerWBP;                                       // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_1;                                         // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_2;                                         // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_3;                                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_4;                                         // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_5;                                         // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_6;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_7;                                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_8;                                         // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_9;                                         // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_10;                                        // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_11;                                        // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_12;                                        // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_13;                                        // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_14;                                        // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_15;                                        // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_16;                                        // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_17;                                        // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_18;                                        // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_19;                                        // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_20;                                        // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_21;                                        // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_22;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_23;                                        // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_24;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_25;                                        // 0x0728(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_26;                                        // 0x0730(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_27;                                        // 0x0738(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_28;                                        // 0x0740(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_29;                                        // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Cursor_000_C*        Pointer_30;                                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_053_C*                  Slider_Down;                                       // 0x0758(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_053_C*                  Slider_Left;                                       // 0x0760(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_053_C*                  Slider_Right;                                      // 0x0768(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_053_C*                  Slider_UP;                                         // 0x0770(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Parts_007_modern_C*           WBP_Menu_Parts_007;                                // 0x0778(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Button_002_modern_C* ZoomOperatingCaptionWBP;                           // 0x0780(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowsWorldMapMenu;                                // 0x0788(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_789[0x3];                                      // 0x0789(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RelativeFloorLevel;                                // 0x078C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PCMarkerDefaultColor;                              // 0x0790(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PCMarkerAlphaDisplayingOtherFloor;                 // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A4[0x4];                                      // 0x07A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UJackUMGWidgetBase*                     BoukenGuideWBP;                                    // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_WorldMap_Button_001_modern_C* CaptionButtonWBP;                                  // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ZoomCenterLocation;                                // 0x07B8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBoundsLeftStick;                                  // 0x07C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBoundsRightStick;                                 // 0x07C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EJackKeys                                     ZoomAccelButton;                                   // 0x07C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHoldsZoomAccelButton;                             // 0x07C7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UWBP_Menu_WorldMap_Cursor_000_C*> PointerWBPList;                                    // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                 CurrentPointerTargetList;                          // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWBP_Menu_WorldMap_Spacer_000_C*        SpacerWBP;                                         // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UJackUMGWidgetBase*>             WorldMapMenuWidgets;                               // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MapSymbolMID;                                      // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAlreadyUICameraDisabled;                          // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsBeginClose;                                     // 0x0811(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_812[0x6];                                      // 0x0812(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            EaseInCurve;                                       // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBoukenGuideInitialized;                           // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bButtonCaptionInitialized;                         // 0x0821(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bMapTextVisible;                                   // 0x0822(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUpdatedByUpdateWidgetFunc;                        // 0x0823(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         RequesterID;                                       // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevZoomCenterPosition;                            // 0x082C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMovedToPCPosition;                                // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bScaledToDefault;                                  // 0x0839(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83A[0x2];                                      // 0x083A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PrevZoomScaleFactor;                               // 0x083C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             MaskTexture;                                       // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Menu_WorldMap_000_modern(int32 EntryPoint);
	void OnEmptyPointerTargetsEvent();
	void StickEventR(const struct FVector2D& Vector);
	void UpdateWidget(float DeltaTime_0);
	void StickEventL(const struct FVector2D& Vector);
	void OnDetailedKeyEvent(EJackKeys Key, bool Pressed, bool Released);
	void AnimDelegate();
	void OnConstructWidget();
	void WidgetBPActionDelegate(class FName EventTag);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Open();
	void Close();
	void UpdateFloorSpinnerStatus();
	void OpenBoukenGuide();
	void SetMapBasePaper();
	void SetLocationName(const class FString& LocationName);
	void OnKeyChangeFloor(EJackKeys Key);
	void ProcButtonHold(EJackKeys Key, bool Press, bool Release);
	void CalcMapUVWH(struct FLinearColor* MapUVWH);
	void OnKeyChangeZoom(bool bWithButtonAnimation);
	void UpdateZoomScrollMarker();
	void SetScrollMarkerVisibility(class UUserWidget* Marker, bool bScrollable);
	void Update(float DeltaTime_0);
	void BindStick(bool bLeftStick, bool bRightStick);
	void UnbindStick();
	void OpenLocalMapMenu();
	void UpdateMapSymbolTypesToDisplay(EJackWorldMapState State);
	void UpdatePointer();
	void OnEmptyPointerTargets();
	void GetEmptyPointer(class UWBP_Menu_WorldMap_Cursor_000_C** PointerWBP);
	void GetTargettingPointer(int32 UniqueNo, class UWBP_Menu_WorldMap_Cursor_000_C** PointerWBP);
	void DisplayFloorMap(class UJackUMGMapFloorInfo* FloorInfo);
	void CloseRequest();
	void OnOpenRuraMenu(bool bOpen);
	class UMaterialInstanceDynamic* CreateMID();
	void RequestToDisplayMap(class FName MapVolumeID);
	class UCanvasPanel* GetMapTextDrawCanvas();
	class UMaterialInstanceDynamic* CreateMapSymbolMID();
	void MapSymbolVisibleChanged(class UObject* Sender, bool bVisible, class UObject* Payload);
	void BindHandler(bool bUnbind);
	class FName GetRenderTargetName();
	void UpdateFloorChangeCaptionVisible(bool bVisible);
	void AsyncLoadFinished(int32 RequesterID_0);
	void SetRequesterAndUpdateLocationTitle(int32 RequesterID_0, class UJackUMGMapResourceRequester** Requester);
	void SetMapMaterialTexture(class UTexture2D* MapOpenTexture, class UTexture2D* MapMaskTexture, class UTexture2D* JourneyTexture);
	void KeyEventHandler(EJackKeys Key, bool Condition);
	void DisplayCurrentMap();
	void UpdatePCMarkerColor();
	void IsChangingFloorEnabled(bool* bEnabled);
	void SetupBoukenGuide();

	bool IsPCMarkerVisible() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_000_modern_C">();
	}
	static class UWBP_Menu_WorldMap_000_modern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_000_modern_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_000_modern_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_000_modern_C");
static_assert(sizeof(UWBP_Menu_WorldMap_000_modern_C) == 0x000848, "Wrong size on UWBP_Menu_WorldMap_000_modern_C");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, UberGraphFrame) == 0x000620, "Member 'UWBP_Menu_WorldMap_000_modern_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, FloorSpinner) == 0x000628, "Member 'UWBP_Menu_WorldMap_000_modern_C::FloorSpinner' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, LayerChangeCaptionWBP) == 0x000630, "Member 'UWBP_Menu_WorldMap_000_modern_C::LayerChangeCaptionWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, MapImage) == 0x000638, "Member 'UWBP_Menu_WorldMap_000_modern_C::MapImage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, MapSymbolImage) == 0x000640, "Member 'UWBP_Menu_WorldMap_000_modern_C::MapSymbolImage' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, MapTextLayer) == 0x000648, "Member 'UWBP_Menu_WorldMap_000_modern_C::MapTextLayer' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, NowLoadingPanel) == 0x000650, "Member 'UWBP_Menu_WorldMap_000_modern_C::NowLoadingPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Paper_000) == 0x000658, "Member 'UWBP_Menu_WorldMap_000_modern_C::Paper_000' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PCMarkerWBP) == 0x000660, "Member 'UWBP_Menu_WorldMap_000_modern_C::PCMarkerWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_1) == 0x000668, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_2) == 0x000670, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_2' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_3) == 0x000678, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_3' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_4) == 0x000680, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_4' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_5) == 0x000688, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_5' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_6) == 0x000690, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_6' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_7) == 0x000698, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_7' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_8) == 0x0006A0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_8' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_9) == 0x0006A8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_9' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_10) == 0x0006B0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_10' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_11) == 0x0006B8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_11' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_12) == 0x0006C0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_12' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_13) == 0x0006C8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_13' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_14) == 0x0006D0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_14' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_15) == 0x0006D8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_15' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_16) == 0x0006E0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_16' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_17) == 0x0006E8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_17' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_18) == 0x0006F0, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_18' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_19) == 0x0006F8, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_19' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_20) == 0x000700, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_20' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_21) == 0x000708, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_21' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_22) == 0x000710, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_22' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_23) == 0x000718, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_23' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_24) == 0x000720, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_24' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_25) == 0x000728, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_25' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_26) == 0x000730, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_26' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_27) == 0x000738, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_27' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_28) == 0x000740, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_28' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_29) == 0x000748, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_29' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Pointer_30) == 0x000750, "Member 'UWBP_Menu_WorldMap_000_modern_C::Pointer_30' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Slider_Down) == 0x000758, "Member 'UWBP_Menu_WorldMap_000_modern_C::Slider_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Slider_Left) == 0x000760, "Member 'UWBP_Menu_WorldMap_000_modern_C::Slider_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Slider_Right) == 0x000768, "Member 'UWBP_Menu_WorldMap_000_modern_C::Slider_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Slider_UP) == 0x000770, "Member 'UWBP_Menu_WorldMap_000_modern_C::Slider_UP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, WBP_Menu_Parts_007) == 0x000778, "Member 'UWBP_Menu_WorldMap_000_modern_C::WBP_Menu_Parts_007' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, ZoomOperatingCaptionWBP) == 0x000780, "Member 'UWBP_Menu_WorldMap_000_modern_C::ZoomOperatingCaptionWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bShowsWorldMapMenu) == 0x000788, "Member 'UWBP_Menu_WorldMap_000_modern_C::bShowsWorldMapMenu' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, RelativeFloorLevel) == 0x00078C, "Member 'UWBP_Menu_WorldMap_000_modern_C::RelativeFloorLevel' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PCMarkerDefaultColor) == 0x000790, "Member 'UWBP_Menu_WorldMap_000_modern_C::PCMarkerDefaultColor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PCMarkerAlphaDisplayingOtherFloor) == 0x0007A0, "Member 'UWBP_Menu_WorldMap_000_modern_C::PCMarkerAlphaDisplayingOtherFloor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, BoukenGuideWBP) == 0x0007A8, "Member 'UWBP_Menu_WorldMap_000_modern_C::BoukenGuideWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, CaptionButtonWBP) == 0x0007B0, "Member 'UWBP_Menu_WorldMap_000_modern_C::CaptionButtonWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, ZoomCenterLocation) == 0x0007B8, "Member 'UWBP_Menu_WorldMap_000_modern_C::ZoomCenterLocation' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bBoundsLeftStick) == 0x0007C4, "Member 'UWBP_Menu_WorldMap_000_modern_C::bBoundsLeftStick' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bBoundsRightStick) == 0x0007C5, "Member 'UWBP_Menu_WorldMap_000_modern_C::bBoundsRightStick' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, ZoomAccelButton) == 0x0007C6, "Member 'UWBP_Menu_WorldMap_000_modern_C::ZoomAccelButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bHoldsZoomAccelButton) == 0x0007C7, "Member 'UWBP_Menu_WorldMap_000_modern_C::bHoldsZoomAccelButton' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PointerWBPList) == 0x0007C8, "Member 'UWBP_Menu_WorldMap_000_modern_C::PointerWBPList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, CurrentPointerTargetList) == 0x0007D8, "Member 'UWBP_Menu_WorldMap_000_modern_C::CurrentPointerTargetList' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, SpacerWBP) == 0x0007E8, "Member 'UWBP_Menu_WorldMap_000_modern_C::SpacerWBP' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, WorldMapMenuWidgets) == 0x0007F0, "Member 'UWBP_Menu_WorldMap_000_modern_C::WorldMapMenuWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, Mid) == 0x000800, "Member 'UWBP_Menu_WorldMap_000_modern_C::Mid' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, MapSymbolMID) == 0x000808, "Member 'UWBP_Menu_WorldMap_000_modern_C::MapSymbolMID' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bAlreadyUICameraDisabled) == 0x000810, "Member 'UWBP_Menu_WorldMap_000_modern_C::bAlreadyUICameraDisabled' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bIsBeginClose) == 0x000811, "Member 'UWBP_Menu_WorldMap_000_modern_C::bIsBeginClose' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, EaseInCurve) == 0x000818, "Member 'UWBP_Menu_WorldMap_000_modern_C::EaseInCurve' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bBoukenGuideInitialized) == 0x000820, "Member 'UWBP_Menu_WorldMap_000_modern_C::bBoukenGuideInitialized' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bButtonCaptionInitialized) == 0x000821, "Member 'UWBP_Menu_WorldMap_000_modern_C::bButtonCaptionInitialized' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bMapTextVisible) == 0x000822, "Member 'UWBP_Menu_WorldMap_000_modern_C::bMapTextVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bUpdatedByUpdateWidgetFunc) == 0x000823, "Member 'UWBP_Menu_WorldMap_000_modern_C::bUpdatedByUpdateWidgetFunc' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, RequesterID) == 0x000824, "Member 'UWBP_Menu_WorldMap_000_modern_C::RequesterID' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, DeltaTime) == 0x000828, "Member 'UWBP_Menu_WorldMap_000_modern_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PrevZoomCenterPosition) == 0x00082C, "Member 'UWBP_Menu_WorldMap_000_modern_C::PrevZoomCenterPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bMovedToPCPosition) == 0x000838, "Member 'UWBP_Menu_WorldMap_000_modern_C::bMovedToPCPosition' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, bScaledToDefault) == 0x000839, "Member 'UWBP_Menu_WorldMap_000_modern_C::bScaledToDefault' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, PrevZoomScaleFactor) == 0x00083C, "Member 'UWBP_Menu_WorldMap_000_modern_C::PrevZoomScaleFactor' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_WorldMap_000_modern_C, MaskTexture) == 0x000840, "Member 'UWBP_Menu_WorldMap_000_modern_C::MaskTexture' has a wrong offset!");

}
