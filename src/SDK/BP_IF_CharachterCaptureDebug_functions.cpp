#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IF_CharachterCaptureDebug

#include "Basic.hpp"

#include "BP_IF_CharachterCaptureDebug_classes.hpp"
#include "BP_IF_CharachterCaptureDebug_parameters.hpp"


namespace SDK
{

// Function BP_IF_CharachterCaptureDebug.BP_IF_CharachterCaptureDebug_C.ShowDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_CharachterCaptureDebug_C::ShowDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CharachterCaptureDebug_C", "ShowDebugInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_CharachterCaptureDebug.BP_IF_CharachterCaptureDebug_C.HideDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_CharachterCaptureDebug_C::HideDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CharachterCaptureDebug_C", "HideDebugInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_CharachterCaptureDebug.BP_IF_CharachterCaptureDebug_C.ShowDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_CharachterCaptureDebug_C::ShowDebugTargetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CharachterCaptureDebug_C", "ShowDebugTargetSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_CharachterCaptureDebug.BP_IF_CharachterCaptureDebug_C.HideDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_IF_CharachterCaptureDebug_C::HideDebugTargetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CharachterCaptureDebug_C", "HideDebugTargetSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IF_CharachterCaptureDebug.BP_IF_CharachterCaptureDebug_C.SetDebugTargetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        SlideTargetOrigin                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MaxSlideTargetSize                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MinSlideTargetSize                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_IF_CharachterCaptureDebug_C::SetDebugTargetSize(bool bVisible, const struct FVector2D& SlideTargetOrigin, const struct FVector2D& MaxSlideTargetSize, const struct FVector2D& MinSlideTargetSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IF_CharachterCaptureDebug_C", "SetDebugTargetSize");

	Params::BP_IF_CharachterCaptureDebug_C_SetDebugTargetSize Parms{};

	Parms.bVisible = bVisible;
	Parms.SlideTargetOrigin = std::move(SlideTargetOrigin);
	Parms.MaxSlideTargetSize = std::move(MaxSlideTargetSize);
	Parms.MinSlideTargetSize = std::move(MinSlideTargetSize);

	UObject::ProcessEvent(Func, &Parms);
}

}
