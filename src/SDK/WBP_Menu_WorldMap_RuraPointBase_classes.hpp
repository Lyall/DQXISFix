#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Menu_WorldMap_RuraPointBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_WorldMap_RuraPointBase.WBP_Menu_WorldMap_RuraPointBase_C
// 0x0008 (0x01D8 - 0x01D0)
class UWBP_Menu_WorldMap_RuraPointBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01D0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_Menu_WorldMap_RuraPointBase(int32 EntryPoint);
	void SetFlag(bool bIsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_WorldMap_RuraPointBase_C">();
	}
	static class UWBP_Menu_WorldMap_RuraPointBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_WorldMap_RuraPointBase_C>();
	}
};
static_assert(alignof(UWBP_Menu_WorldMap_RuraPointBase_C) == 0x000008, "Wrong alignment on UWBP_Menu_WorldMap_RuraPointBase_C");
static_assert(sizeof(UWBP_Menu_WorldMap_RuraPointBase_C) == 0x0001D8, "Wrong size on UWBP_Menu_WorldMap_RuraPointBase_C");
static_assert(offsetof(UWBP_Menu_WorldMap_RuraPointBase_C, UberGraphFrame) == 0x0001D0, "Member 'UWBP_Menu_WorldMap_RuraPointBase_C::UberGraphFrame' has a wrong offset!");

}
