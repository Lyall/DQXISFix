#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_UI

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FLIB_UI.BP_FLIB_UI_C
// 0x0000 (0x0038 - 0x0038)
class UBP_FLIB_UI_C final : public UBlueprintFunctionLibrary
{
public:
	static void IntToMultiByteText(int32 Num, bool UseSign, bool IsIgnoreZero, class UObject* __WorldContext, class FText* MultByteText);
	static void GetEnableTextColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void GetDisableTextColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void GetEnableTextShadowColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void GetDisableShadowTextColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
	static void OpenGoldWindow(class UObject* __WorldContext);
	static void UpdateGoldWindow(class UObject* __WorldContext);
	static void CloseGoldWindow(class UObject* __WorldContext);
	static void CloseHudStatus(class UObject* __WorldContext);
	static void AdjustMenuWindowWidth(TArray<class UJackUMGItemBase*>& InLeftMenuItemList, TArray<class UJackUMGItemBase*>& InRightMenuItemList, class UWidget* InRootWidget, class UWidget* InBackground, class UWidget* InBarImage, float LeftMargin, float CenterSpace, float RightMargin, bool bIncludeLeftMarginToMenuPos, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FLIB_UI_C">();
	}
	static class UBP_FLIB_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FLIB_UI_C>();
	}
};
static_assert(alignof(UBP_FLIB_UI_C) == 0x000008, "Wrong alignment on UBP_FLIB_UI_C");
static_assert(sizeof(UBP_FLIB_UI_C) == 0x000038, "Wrong size on UBP_FLIB_UI_C");

}
