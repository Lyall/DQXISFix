#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_LevelStreaming

#include "Basic.hpp"

#include "BP_IF_LevelStreaming_classes.hpp"
#include "BP_IF_LevelStreaming_parameters.hpp"


namespace SDK
{

// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddLoadLevels
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     bpp__LevelName__pf                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bpp__Result__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::AddLoadLevels(TArray<class FName>* bpp__LevelName__pf, bool* bpp__Result__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "AddLoadLevels");

	Params::BP_IF_LevelStreaming_C_AddLoadLevels Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__LevelName__pf != nullptr)
		*bpp__LevelName__pf = std::move(Parms.bpp__LevelName__pf);

	if (bpp__Result__pf != nullptr)
		*bpp__Result__pf = Parms.bpp__Result__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddLoadLevelsArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           bpp__AreaName__pf__const                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                     bpp__LevelName__pf                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bpp__Result__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::AddLoadLevelsArea(const class FString& bpp__AreaName__pf__const, TArray<class FName>* bpp__LevelName__pf, bool* bpp__Result__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "AddLoadLevelsArea");

	Params::BP_IF_LevelStreaming_C_AddLoadLevelsArea Parms{};

	Parms.bpp__AreaName__pf__const = std::move(bpp__AreaName__pf__const);

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__LevelName__pf != nullptr)
		*bpp__LevelName__pf = std::move(Parms.bpp__LevelName__pf);

	if (bpp__Result__pf != nullptr)
		*bpp__Result__pf = Parms.bpp__Result__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddUnLoadLevels
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     bpp__LevelName__pf                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bpp__Result__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::AddUnLoadLevels(TArray<class FName>* bpp__LevelName__pf, bool* bpp__Result__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "AddUnLoadLevels");

	Params::BP_IF_LevelStreaming_C_AddUnLoadLevels Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__LevelName__pf != nullptr)
		*bpp__LevelName__pf = std::move(Parms.bpp__LevelName__pf);

	if (bpp__Result__pf != nullptr)
		*bpp__Result__pf = Parms.bpp__Result__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.AddUnLoadLevelsArea
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           bpp__AreaName__pf__const                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                     bpp__LevelName__pf                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bpp__Result__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::AddUnLoadLevelsArea(const class FString& bpp__AreaName__pf__const, TArray<class FName>* bpp__LevelName__pf, bool* bpp__Result__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "AddUnLoadLevelsArea");

	Params::BP_IF_LevelStreaming_C_AddUnLoadLevelsArea Parms{};

	Parms.bpp__AreaName__pf__const = std::move(bpp__AreaName__pf__const);

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__LevelName__pf != nullptr)
		*bpp__LevelName__pf = std::move(Parms.bpp__LevelName__pf);

	if (bpp__Result__pf != nullptr)
		*bpp__Result__pf = Parms.bpp__Result__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.BindTriggerMapChangeDelegate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_LevelStreaming_C::BindTriggerMapChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "BindTriggerMapChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetCurrentMapStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__MapStart__pf                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::GetCurrentMapStart(class FName* bpp__MapStart__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "GetCurrentMapStart");

	Params::BP_IF_LevelStreaming_C_GetCurrentMapStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__MapStart__pf != nullptr)
		*bpp__MapStart__pf = Parms.bpp__MapStart__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetLoadCompleted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bpp__LoadCompleted__pf                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::GetLoadCompleted(bool* bpp__LoadCompleted__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "GetLoadCompleted");

	Params::BP_IF_LevelStreaming_C_GetLoadCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__LoadCompleted__pf != nullptr)
		*bpp__LoadCompleted__pf = Parms.bpp__LoadCompleted__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetNPCLevels
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     bpp__NPC__pf                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::GetNPCLevels(TArray<class FName>* bpp__NPC__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "GetNPCLevels");

	Params::BP_IF_LevelStreaming_C_GetNPCLevels Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__NPC__pf != nullptr)
		*bpp__NPC__pf = std::move(Parms.bpp__NPC__pf);
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetNPCLevelVisibled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bpp__Visibled__pf                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::GetNPCLevelVisibled(bool* bpp__Visibled__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "GetNPCLevelVisibled");

	Params::BP_IF_LevelStreaming_C_GetNPCLevelVisibled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__Visibled__pf != nullptr)
		*bpp__Visibled__pf = Parms.bpp__Visibled__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.GetPreLoadStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bpp__PreLoadStart__pf                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::GetPreLoadStart(bool* bpp__PreLoadStart__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "GetPreLoadStart");

	Params::BP_IF_LevelStreaming_C_GetPreLoadStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__PreLoadStart__pf != nullptr)
		*bpp__PreLoadStart__pf = Parms.bpp__PreLoadStart__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.MapJumpDelegateRegist
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_LevelStreaming_C::MapJumpDelegateRegist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "MapJumpDelegateRegist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.NPCLevelLoad
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_LevelStreaming_C::NPCLevelLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "NPCLevelLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.SetSysControlLevelName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__LevelName__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bpp__Result__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_LevelStreaming_C::SetSysControlLevelName(class FName bpp__LevelName__pf, bool* bpp__Result__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "SetSysControlLevelName");

	Params::BP_IF_LevelStreaming_C_SetSysControlLevelName Parms{};

	Parms.bpp__LevelName__pf = bpp__LevelName__pf;

	UObject::ProcessEvent(Func, &Parms);

	if (bpp__Result__pf != nullptr)
		*bpp__Result__pf = Parms.bpp__Result__pf;
}


// Function BP_IF_LevelStreaming.BP_IF_LevelStreaming_C.StartAutoSave
// (Event, Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_LevelStreaming_C::StartAutoSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_LevelStreaming_C", "StartAutoSave");

	UObject::ProcessEvent(Func, nullptr);
}

}
