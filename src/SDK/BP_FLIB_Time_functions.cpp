#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FLIB_Time

#include "Basic.hpp"

#include "BP_FLIB_Time_classes.hpp"
#include "BP_FLIB_Time_parameters.hpp"


namespace SDK
{

// Function BP_FLIB_Time.BP_FLIB_Time_C.Set Time Pause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackWorldTimePausePurpose              Purpose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Pause                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::Set_Time_Pause(EJackWorldTimePausePurpose Purpose, bool Pause, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "Set Time Pause");

	Params::BP_FLIB_Time_C_Set_Time_Pause Parms{};

	Parms.Purpose = Purpose;
	Parms.Pause = Pause;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.Set Time HMS
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Hour                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Second                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetNPC_Schedule                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUseTimeProc                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::Set_Time_HMS(int32 Hour, int32 Minute, int32 Second, bool ResetNPC_Schedule, bool bUseTimeProc, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "Set Time HMS");

	Params::BP_FLIB_Time_C_Set_Time_HMS Parms{};

	Parms.Hour = Hour;
	Parms.Minute = Minute;
	Parms.Second = Second;
	Parms.ResetNPC_Schedule = ResetNPC_Schedule;
	Parms.bUseTimeProc = bUseTimeProc;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.Set Time Zone
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJackTimeZone                           Timezone                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetNPCSchedule                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::Set_Time_Zone(EJackTimeZone Timezone, bool ResetNPCSchedule, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "Set Time Zone");

	Params::BP_FLIB_Time_C_Set_Time_Zone Parms{};

	Parms.Timezone = Timezone;
	Parms.ResetNPCSchedule = ResetNPCSchedule;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.SetTimePauseTimeZoneEventSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPause                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EJackTimeZone                           Timezone                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetNPCSchedule                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUseTimeProc                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::SetTimePauseTimeZoneEventSave(bool bPause, EJackTimeZone Timezone, bool ResetNPCSchedule, bool bUseTimeProc, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "SetTimePauseTimeZoneEventSave");

	Params::BP_FLIB_Time_C_SetTimePauseTimeZoneEventSave Parms{};

	Parms.bPause = bPause;
	Parms.Timezone = Timezone;
	Parms.ResetNPCSchedule = ResetNPCSchedule;
	Parms.bUseTimeProc = bUseTimeProc;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.SetTimePauseTimeEventSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPause                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Hour                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Second                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetNPCSchedule                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUseTimeProc                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::SetTimePauseTimeEventSave(bool bPause, int32 Hour, int32 Minute, int32 Second, bool ResetNPCSchedule, bool bUseTimeProc, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "SetTimePauseTimeEventSave");

	Params::BP_FLIB_Time_C_SetTimePauseTimeEventSave Parms{};

	Parms.bPause = bPause;
	Parms.Hour = Hour;
	Parms.Minute = Minute;
	Parms.Second = Second;
	Parms.ResetNPCSchedule = ResetNPCSchedule;
	Parms.bUseTimeProc = bUseTimeProc;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.CheckTimePauseEventSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MapStart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::CheckTimePauseEventSave(class FName MapId, class FName MapStart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "CheckTimePauseEventSave");

	Params::BP_FLIB_Time_C_CheckTimePauseEventSave Parms{};

	Parms.MapId = MapId;
	Parms.MapStart = MapStart;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.SetTimeStopperInRoom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::SetTimeStopperInRoom(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "SetTimeStopperInRoom");

	Params::BP_FLIB_Time_C_SetTimeStopperInRoom Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.ReleaseTimeStopperInRoom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::ReleaseTimeStopperInRoom(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "ReleaseTimeStopperInRoom");

	Params::BP_FLIB_Time_C_ReleaseTimeStopperInRoom Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.CheckMapJumpTimeSkip
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MapStart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::CheckMapJumpTimeSkip(class FName MapId, class FName MapStart, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "CheckMapJumpTimeSkip");

	Params::BP_FLIB_Time_C_CheckMapJumpTimeSkip Parms{};

	Parms.MapId = MapId;
	Parms.MapStart = MapStart;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.CheckTempSaveNight
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::CheckTempSaveNight(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "CheckTempSaveNight");

	Params::BP_FLIB_Time_C_CheckTempSaveNight Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_FLIB_Time.BP_FLIB_Time_C.CheckNightTimePause
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FLIB_Time_C::CheckNightTimePause(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FLIB_Time_C", "CheckNightTimePause");

	Params::BP_FLIB_Time_C_CheckNightTimePause Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
