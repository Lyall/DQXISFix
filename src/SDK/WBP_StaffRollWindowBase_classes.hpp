#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StaffRollWindowBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JackGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StaffRollWindowBase.WBP_StaffRollWindowBase_C
// 0x0008 (0x0558 - 0x0550)
class UWBP_StaffRollWindowBase_C : public UJackUMGStaffRollWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_StaffRollWindowBase(int32 EntryPoint);
	void StartStaffRoll(bool bPlayThroughSecond);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StaffRollWindowBase_C">();
	}
	static class UWBP_StaffRollWindowBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StaffRollWindowBase_C>();
	}
};
static_assert(alignof(UWBP_StaffRollWindowBase_C) == 0x000008, "Wrong alignment on UWBP_StaffRollWindowBase_C");
static_assert(sizeof(UWBP_StaffRollWindowBase_C) == 0x000558, "Wrong size on UWBP_StaffRollWindowBase_C");
static_assert(offsetof(UWBP_StaffRollWindowBase_C, UberGraphFrame) == 0x000550, "Member 'UWBP_StaffRollWindowBase_C::UberGraphFrame' has a wrong offset!");

}
