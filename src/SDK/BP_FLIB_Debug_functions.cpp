#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_Debug

#include "Basic.hpp"

#include "BP_FLIB_Debug_classes.hpp"
#include "BP_FLIB_Debug_parameters.hpp"


namespace SDK
{

// Function BP_FLIB_Debug.BP_FLIB_Debug_C.Get Time String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           TimeString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::Get_Time_String(class UObject* __WorldContext, class FString* TimeString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "Get Time String");

	Params::BP_FLIB_Debug_C_Get_Time_String Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TimeString != nullptr)
		*TimeString = std::move(Parms.TimeString);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.Debug Warp
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WarpLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::Debug_Warp(const struct FVector& WarpLocation, const class FString& DispString, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "Debug Warp");

	Params::BP_FLIB_Debug_C_Debug_Warp Parms{};

	Parms.WarpLocation = std::move(WarpLocation);
	Parms.DispString = std::move(DispString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.Debug Warp Actor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           WarpActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::Debug_Warp_Actor(class AActor* WarpActor, const class FString& DispString, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "Debug Warp Actor");

	Params::BP_FLIB_Debug_C_Debug_Warp_Actor Parms{};

	Parms.WarpActor = WarpActor;
	Parms.DispString = std::move(DispString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.Debug Print String
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ENUM_DebugStringColor                   Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::Debug_Print_String(const class FString& Message, ENUM_DebugStringColor Color, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "Debug Print String");

	Params::BP_FLIB_Debug_C_Debug_Print_String Parms{};

	Parms.Message = std::move(Message);
	Parms.Color = Color;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugScenarioFlagOn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackLDT_GameFlagDataScenario    FlagName                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugScenarioFlagOn(const struct FJackLDT_GameFlagDataScenario& FlagName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugScenarioFlagOn");

	Params::BP_FLIB_Debug_C_DebugScenarioFlagOn Parms{};

	Parms.FlagName = std::move(FlagName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugCutSceneFlagOn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackLDT_GameFlagDataCutScene    FlagName                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugCutSceneFlagOn(const struct FJackLDT_GameFlagDataCutScene& FlagName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugCutSceneFlagOn");

	Params::BP_FLIB_Debug_C_DebugCutSceneFlagOn Parms{};

	Parms.FlagName = std::move(FlagName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugConvertViewportPosition
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CalcPositionX                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CalcPositionY                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugConvertViewportPosition(float Position, class UObject* __WorldContext, float* CalcPositionX, float* CalcPositionY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugConvertViewportPosition");

	Params::BP_FLIB_Debug_C_DebugConvertViewportPosition Parms{};

	Parms.Position = Position;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CalcPositionX != nullptr)
		*CalcPositionX = Parms.CalcPositionX;

	if (CalcPositionY != nullptr)
		*CalcPositionY = Parms.CalcPositionY;
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugSetCoordinateToClass
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugSetCoordinateToClass(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugSetCoordinateToClass");

	Params::BP_FLIB_Debug_C_DebugSetCoordinateToClass Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugFullReload
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackLDT_MapStart                MapStart                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugFullReload(const struct FJackLDT_MapStart& MapStart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugFullReload");

	Params::BP_FLIB_Debug_C_DebugFullReload Parms{};

	Parms.MapStart = std::move(MapStart);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.SetBpWarning
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::SetBpWarning(const class FString& String, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "SetBpWarning");

	Params::BP_FLIB_Debug_C_SetBpWarning Parms{};

	Parms.String = std::move(String);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugFriendAllJoin
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugFriendAllJoin(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugFriendAllJoin");

	Params::BP_FLIB_Debug_C_DebugFriendAllJoin Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.DebugCampSetNo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   No                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::DebugCampSetNo(int32 No, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "DebugCampSetNo");

	Params::BP_FLIB_Debug_C_DebugCampSetNo Parms{};

	Parms.No = No;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.GetDebugFontSize
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DebugFontSize                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CharSizeHalfWidthX                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CharSizeFullWidthX                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CharSizeY                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::GetDebugFontSize(class UObject* __WorldContext, float* DebugFontSize, float* CharSizeHalfWidthX, float* CharSizeFullWidthX, float* CharSizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "GetDebugFontSize");

	Params::BP_FLIB_Debug_C_GetDebugFontSize Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DebugFontSize != nullptr)
		*DebugFontSize = Parms.DebugFontSize;

	if (CharSizeHalfWidthX != nullptr)
		*CharSizeHalfWidthX = Parms.CharSizeHalfWidthX;

	if (CharSizeFullWidthX != nullptr)
		*CharSizeFullWidthX = Parms.CharSizeFullWidthX;

	if (CharSizeY != nullptr)
		*CharSizeY = Parms.CharSizeY;
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.CollisionChecker
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ChangeVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutputStaticMeshActorList                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   IllegalCollisionLog                                    (Parm, OutParm, ZeroConstructor)
// TArray<class FString>                   CustomNoCollisionLog                                   (Parm, OutParm, ZeroConstructor)
// TMap<class AActor*, class FString>      IllegalCollisionActor                                  (Parm, OutParm, ZeroConstructor)
// TMap<class AActor*, class FString>      WarningCollisionActor                                  (Parm, OutParm, ZeroConstructor)

void UBP_FLIB_Debug_C::CollisionChecker(const class FString& LevelName, bool ChangeVisible, bool OutputStaticMeshActorList, class UObject* __WorldContext, TArray<class FString>* IllegalCollisionLog, TArray<class FString>* CustomNoCollisionLog, TMap<class AActor*, class FString>* IllegalCollisionActor, TMap<class AActor*, class FString>* WarningCollisionActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "CollisionChecker");

	Params::BP_FLIB_Debug_C_CollisionChecker Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.ChangeVisible = ChangeVisible;
	Parms.OutputStaticMeshActorList = OutputStaticMeshActorList;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IllegalCollisionLog != nullptr)
		*IllegalCollisionLog = std::move(Parms.IllegalCollisionLog);

	if (CustomNoCollisionLog != nullptr)
		*CustomNoCollisionLog = std::move(Parms.CustomNoCollisionLog);

	if (IllegalCollisionActor != nullptr)
		*IllegalCollisionActor = std::move(Parms.IllegalCollisionActor);

	if (WarningCollisionActor != nullptr)
		*WarningCollisionActor = std::move(Parms.WarningCollisionActor);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.MakeIllegalCollisionLog
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CollisionPreset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           LogString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::MakeIllegalCollisionLog(const class FString& LevelName, class AActor* Actor, class FName CollisionPreset, class UObject* __WorldContext, class FString* LogString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "MakeIllegalCollisionLog");

	Params::BP_FLIB_Debug_C_MakeIllegalCollisionLog Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.Actor = Actor;
	Parms.CollisionPreset = CollisionPreset;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LogString != nullptr)
		*LogString = std::move(Parms.LogString);
}


// Function BP_FLIB_Debug.BP_FLIB_Debug_C.CollisionCheckCore
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CollisionProfileName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECollisionEnabled                       CollisionEnabled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     IgnoreCollisionPreset                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<class AActor*, class FString>      RefIllegalColision                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<class AActor*, class FString>      RefCustomNoColision                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>                   RefIllegalCollisionLog                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>                   RefCustomNoCollisionLog                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    OutputActorList                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Debug_C::CollisionCheckCore(const class FString& LevelName, class AActor* Actor, class FName CollisionProfileName, ECollisionEnabled CollisionEnabled, TArray<class FName>& IgnoreCollisionPreset, TMap<class AActor*, class FString>& RefIllegalColision, TMap<class AActor*, class FString>& RefCustomNoColision, TArray<class FString>& RefIllegalCollisionLog, TArray<class FString>& RefCustomNoCollisionLog, bool OutputActorList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Debug_C", "CollisionCheckCore");

	Params::BP_FLIB_Debug_C_CollisionCheckCore Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.Actor = Actor;
	Parms.CollisionProfileName = CollisionProfileName;
	Parms.CollisionEnabled = CollisionEnabled;
	Parms.IgnoreCollisionPreset = std::move(IgnoreCollisionPreset);
	Parms.RefIllegalColision = std::move(RefIllegalColision);
	Parms.RefCustomNoColision = std::move(RefCustomNoColision);
	Parms.RefIllegalCollisionLog = std::move(RefIllegalCollisionLog);
	Parms.RefCustomNoCollisionLog = std::move(RefCustomNoCollisionLog);
	Parms.OutputActorList = OutputActorList;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	IgnoreCollisionPreset = std::move(Parms.IgnoreCollisionPreset);
	RefIllegalColision = std::move(Parms.RefIllegalColision);
	RefCustomNoColision = std::move(Parms.RefCustomNoColision);
	RefIllegalCollisionLog = std::move(Parms.RefIllegalCollisionLog);
	RefCustomNoCollisionLog = std::move(Parms.RefCustomNoCollisionLog);
}

}
