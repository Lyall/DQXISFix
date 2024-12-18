#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterPopArea

#include "Basic.hpp"

#include "BP_MonsterPopArea_classes.hpp"
#include "BP_MonsterPopArea_parameters.hpp"


namespace SDK
{

// Function BP_MonsterPopArea.BP_MonsterPopArea_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MonsterPopArea_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterPopArea_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MonsterPopArea.BP_MonsterPopArea_C.OverrideMonsterDeployTable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       InTableAsset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_MonsterPopArea_C::OverrideMonsterDeployTable(class UDataTable* InTableAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MonsterPopArea_C", "OverrideMonsterDeployTable");

	Params::BP_MonsterPopArea_C_OverrideMonsterDeployTable Parms{};

	Parms.InTableAsset = InTableAsset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

