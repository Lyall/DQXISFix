#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_CutScene

#include "Basic.hpp"

#include "BP_IF_CutScene_classes.hpp"
#include "BP_IF_CutScene_parameters.hpp"


namespace SDK
{

// Function BP_IF_CutScene.BP_IF_CutScene_C.EndCutScene
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::EndCutScene(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "EndCutScene");

	Params::BP_IF_CutScene_C_EndCutScene Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.EndCutSceneBeforeUnload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::EndCutSceneBeforeUnload(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "EndCutSceneBeforeUnload");

	Params::BP_IF_CutScene_C_EndCutSceneBeforeUnload Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.EndCutSceneFadInBefore
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::EndCutSceneFadInBefore(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "EndCutSceneFadInBefore");

	Params::BP_IF_CutScene_C_EndCutSceneFadInBefore Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.StartCutScene
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::StartCutScene(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "StartCutScene");

	Params::BP_IF_CutScene_C_StartCutScene Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.StartCutsceneBeforeLoad
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::StartCutsceneBeforeLoad(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "StartCutsceneBeforeLoad");

	Params::BP_IF_CutScene_C_StartCutsceneBeforeLoad Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.StartCutSceneCharacterSettingAfter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::StartCutSceneCharacterSettingAfter(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "StartCutSceneCharacterSettingAfter");

	Params::BP_IF_CutScene_C_StartCutSceneCharacterSettingAfter Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IF_CutScene.BP_IF_CutScene_C.StartCutSceneFadeOutAfter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             bpp__CSID__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IBP_IF_CutScene_C::StartCutSceneFadeOutAfter(class FName bpp__CSID__pf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CutScene_C", "StartCutSceneFadeOutAfter");

	Params::BP_IF_CutScene_C_StartCutSceneFadeOutAfter Parms{};

	Parms.bpp__CSID__pf = bpp__CSID__pf;

	UObject::ProcessEvent(Func, &Parms);
}

}

