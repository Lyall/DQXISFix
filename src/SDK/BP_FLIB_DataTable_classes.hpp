#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_DataTable

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FLIB_DataTable.BP_FLIB_DataTable_C
// 0x0000 (0x0038 - 0x0038)
class UBP_FLIB_DataTable_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetDataTableEventItem(const struct FJackLDT_ItemTable_EventGet& In, class UObject* __WorldContext, struct FJackDataTableItem_EventGet* Out, bool* Result);
	static void GetDataTableMap(class FName Row_Name, class UObject* __WorldContext, struct FJackDataTableMap* Out, bool* Success);
	static void GetDataTableCutSceneInfo(class FName In_Name, class UObject* __WorldContext, struct FJackDataTableCutSceneInfo* Out, bool* Success);
	static void GetDataTableRestart(class FName In_Name, class UObject* __WorldContext, struct FJackDataTableRestart* Out, bool* Success);
	static void GetDataTableBGM(class FName In_Name, class UObject* __WorldContext, struct FJackDataTableBGM* Out, bool* Success);
	static void GetDataTableAction(const struct FJackLDT_Action& In_Name, class UObject* __WorldContext, struct FJackDataTableAction* Out, class FName* RowName, bool* Success);
	static void GetDataTableEventItemGold(const struct FJackLDT_ItemTable_EventGet& In, class UObject* __WorldContext, int32* Out);
	static void GetDataTableCSAddLevel(class FName Row_Name, class UObject* __WorldContext, struct FJackDataTableCutSceneLevelLoadInfo* Out, bool* Success);
	static void GetCutSceneInfoInBGM_ID(class FName CS_ID, class UObject* __WorldContext, class FName* BGM_ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FLIB_DataTable_C">();
	}
	static class UBP_FLIB_DataTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FLIB_DataTable_C>();
	}
};
static_assert(alignof(UBP_FLIB_DataTable_C) == 0x000008, "Wrong alignment on UBP_FLIB_DataTable_C");
static_assert(sizeof(UBP_FLIB_DataTable_C) == 0x000038, "Wrong size on UBP_FLIB_DataTable_C");

}
