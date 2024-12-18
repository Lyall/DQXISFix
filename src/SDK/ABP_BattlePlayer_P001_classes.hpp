#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BattlePlayer_P001

#include "Basic.hpp"

#include "JackGame_structs.hpp"
#include "ABP_Player_P001_classes.hpp"


namespace SDK
{

// DynamicClass ABP_BattlePlayer_P001.ABP_BattlePlayer_P001_C
// 0x0030 (0x21500 - 0x214D0)
class UABP_BattlePlayer_P001_C final : public UABP_Player_P001_C
{
public:
	float                                         K2Node_Event_DeltaTimeX;                           // 0x214D0(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214D4[0x4];                                    // 0x214D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackCharacter*                         K2Node_DynamicCast_AsJack_Character;               // 0x214D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          K2Node_DynamicCast_bSuccess_ABP_BattlePlayer_P001_C; // 0x214E0(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214E1[0x3];                                    // 0x214E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBattleABPInfo_OutMovementRate;         // 0x214E4(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CallFunc_GetBattleABPInfo_OutMovementRootMotionTranslationRate; // 0x214E8(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EJackEquippedWeaponStyle                      CallFunc_GetBattleABPInfo_OutWeaponStyle;          // 0x214EC(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetBattleABPInfo_OutWeaponEquipChange;    // 0x214ED(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetBattleABPInfo_OutWeaponEquipChangeFlip; // 0x214EE(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214EF[0x1];                                    // 0x214EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBattleABPInfo_OutInjuryRate;           // 0x214F0(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetBattleABPInfo_OutIsInBattle;           // 0x214F4(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetBattleABPInfo_OutIsDefending;          // 0x214F5(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CallFunc_GetBattleABPInfo_OutIsEquippedBothHands;  // 0x214F6(0x0001)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214F7[0x9];                                    // 0x214F7(0x0009)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ABP_BattlePlayer_P001_C">();
	}
	static class UABP_BattlePlayer_P001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_BattlePlayer_P001_C>();
	}
};
static_assert(alignof(UABP_BattlePlayer_P001_C) == 0x000010, "Wrong alignment on UABP_BattlePlayer_P001_C");
static_assert(sizeof(UABP_BattlePlayer_P001_C) == 0x021500, "Wrong size on UABP_BattlePlayer_P001_C");
static_assert(offsetof(UABP_BattlePlayer_P001_C, K2Node_Event_DeltaTimeX) == 0x0214D0, "Member 'UABP_BattlePlayer_P001_C::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, K2Node_DynamicCast_AsJack_Character) == 0x0214D8, "Member 'UABP_BattlePlayer_P001_C::K2Node_DynamicCast_AsJack_Character' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, K2Node_DynamicCast_bSuccess_ABP_BattlePlayer_P001_C) == 0x0214E0, "Member 'UABP_BattlePlayer_P001_C::K2Node_DynamicCast_bSuccess_ABP_BattlePlayer_P001_C' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutMovementRate) == 0x0214E4, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutMovementRate' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutMovementRootMotionTranslationRate) == 0x0214E8, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutMovementRootMotionTranslationRate' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutWeaponStyle) == 0x0214EC, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutWeaponStyle' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutWeaponEquipChange) == 0x0214ED, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutWeaponEquipChange' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutWeaponEquipChangeFlip) == 0x0214EE, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutWeaponEquipChangeFlip' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutInjuryRate) == 0x0214F0, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutInjuryRate' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutIsInBattle) == 0x0214F4, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutIsInBattle' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutIsDefending) == 0x0214F5, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutIsDefending' has a wrong offset!");
static_assert(offsetof(UABP_BattlePlayer_P001_C, CallFunc_GetBattleABPInfo_OutIsEquippedBothHands) == 0x0214F6, "Member 'UABP_BattlePlayer_P001_C::CallFunc_GetBattleABPInfo_OutIsEquippedBothHands' has a wrong offset!");

}

