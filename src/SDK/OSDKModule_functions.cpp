#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OSDKModule

#include "Basic.hpp"

#include "OSDKModule_classes.hpp"
#include "OSDKModule_parameters.hpp"


namespace SDK
{

// Function OSDKModule.OSDKFutureObject.Await
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EOSDKFutureFinishResult                 FinishResult                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo                LatentInfo                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UOSDKFutureObject::Await(class UObject* WorldContextObject, EOSDKFutureFinishResult* FinishResult, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKFutureObject", "Await");

	Params::OSDKFutureObject_Await Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FinishResult != nullptr)
		*FinishResult = Parms.FinishResult;
}


// Function OSDKModule.OSDKFutureObject.GetStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOSDKFutureStatus                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EOSDKFutureStatus UOSDKFutureObject::GetStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKFutureObject", "GetStatus");

	Params::OSDKFutureObject_GetStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.BPRefreshAuthentication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKFutureObject*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKFutureObject* UOSDKWebServiceClient::BPRefreshAuthentication()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "BPRefreshAuthentication");

	Params::OSDKWebServiceClient_BPRefreshAuthentication Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetAndResetStatsInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKStatsInfo*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKStatsInfo* UOSDKWebServiceClient::GetAndResetStatsInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetAndResetStatsInfo");

	Params::OSDKWebServiceClient_GetAndResetStatsInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           FeatureName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<class FString>                     OutFeatureNames                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOSDKWebServiceClient::GetFeatureNames(const class FString& FeatureName, TSet<class FString>* OutFeatureNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetFeatureNames");

	Params::OSDKWebServiceClient_GetFeatureNames Parms{};

	Parms.FeatureName = std::move(FeatureName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFeatureNames != nullptr)
		*OutFeatureNames = std::move(Parms.OutFeatureNames);
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           FeatureName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           SettingName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOSDKWebServiceClient::GetFeatureSetting(const class FString& FeatureName, const class FString& SettingName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetFeatureSetting");

	Params::OSDKWebServiceClient_GetFeatureSetting Parms{};

	Parms.FeatureName = std::move(FeatureName);
	Parms.SettingName = std::move(SettingName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           FeatureName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString>      OutSettings                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOSDKWebServiceClient::GetFeatureSettings(const class FString& FeatureName, TMap<class FString, class FString>* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetFeatureSettings");

	Params::OSDKWebServiceClient_GetFeatureSettings Parms{};

	Parms.FeatureName = std::move(FeatureName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSettings != nullptr)
		*OutSettings = std::move(Parms.OutSettings);
}


// Function OSDKModule.OSDKWebServiceClient.GetHTTPClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOSDKHTTPClient                  ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FOSDKHTTPClient UOSDKWebServiceClient::GetHTTPClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetHTTPClient");

	Params::OSDKWebServiceClient_GetHTTPClient Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetPrimaryProfileId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOSDKProfileId                   ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOSDKProfileId UOSDKWebServiceClient::GetPrimaryProfileId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetPrimaryProfileId");

	Params::OSDKWebServiceClient_GetPrimaryProfileId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetSecondaryProfileId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSDKProfileId                   ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOSDKProfileId UOSDKWebServiceClient::GetSecondaryProfileId(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetSecondaryProfileId");

	Params::OSDKWebServiceClient_GetSecondaryProfileId Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetUserConsentsToSendingMetrics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOSDKWebServiceClient::GetUserConsentsToSendingMetrics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetUserConsentsToSendingMetrics");

	Params::OSDKWebServiceClient_GetUserConsentsToSendingMetrics Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.ResetAllLocalStorages
// (Final, Native, Public, BlueprintCallable)

void UOSDKWebServiceClient::ResetAllLocalStorages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "ResetAllLocalStorages");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKWebServiceClient.ResetClient
// (Final, Native, Public, BlueprintCallable)

void UOSDKWebServiceClient::ResetClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "ResetClient");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKWebServiceClient.SetDefaultHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           HeaderName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           HeaderValue                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSDKWebServiceClient::SetDefaultHeader(const class FString& HeaderName, const class FString& HeaderValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "SetDefaultHeader");

	Params::OSDKWebServiceClient_SetDefaultHeader Parms{};

	Parms.HeaderName = std::move(HeaderName);
	Parms.HeaderValue = std::move(HeaderValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKWebServiceClient.SetUserConsentsToSendingMetrics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    OptIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    EmitConsentMetric                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSDKWebServiceClient::SetUserConsentsToSendingMetrics(bool OptIn, bool EmitConsentMetric)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "SetUserConsentsToSendingMetrics");

	Params::OSDKWebServiceClient_SetUserConsentsToSendingMetrics Parms{};

	Parms.OptIn = OptIn;
	Parms.EmitConsentMetric = EmitConsentMetric;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKWebServiceClient.SetUserLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           LanguageCode                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSDKWebServiceClient::SetUserLanguage(const class FString& LanguageCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "SetUserLanguage");

	Params::OSDKWebServiceClient_SetUserLanguage Parms{};

	Parms.LanguageCode = std::move(LanguageCode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKWebServiceClient.GetClientInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKClientInfo                  ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOSDKClientInfo UOSDKWebServiceClient::GetClientInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetClientInfo");

	Params::OSDKWebServiceClient_GetClientInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetServerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKServerInfo                  ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOSDKServerInfo UOSDKWebServiceClient::GetServerInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetServerInfo");

	Params::OSDKWebServiceClient_GetServerInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetStatsInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOSDKStatsInfo*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKStatsInfo* UOSDKWebServiceClient::GetStatsInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetStatsInfo");

	Params::OSDKWebServiceClient_GetStatsInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetUserInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKUserInfo                    ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FOSDKUserInfo UOSDKWebServiceClient::GetUserInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "GetUserInfo");

	Params::OSDKWebServiceClient_GetUserInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.IsAuthenticated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOSDKWebServiceClient::IsAuthenticated() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKWebServiceClient", "IsAuthenticated");

	Params::OSDKWebServiceClient_IsAuthenticated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.BeginNewGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSimulationRunning                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSDK::BeginNewGameSession(bool bSimulationRunning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "BeginNewGameSession");

	Params::OSDK_BeginNewGameSession Parms{};

	Parms.bSimulationRunning = bSimulationRunning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDK.CreateWebServiceClientWithUserId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOSDKUserId                      UserId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSDKClientConfig                ClientConfig                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UOSDKWebServiceClient*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserId(const struct FOSDKUserId& UserId, const struct FOSDKClientConfig& ClientConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "CreateWebServiceClientWithUserId");

	Params::OSDK_CreateWebServiceClientWithUserId Parms{};

	Parms.UserId = std::move(UserId);
	Parms.ClientConfig = std::move(ClientConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.CreateWebServiceClientWithUserInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOSDKUserInfo                    UserInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSDKClientConfig                ClientConfig                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UOSDKWebServiceClient*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserInfo(const struct FOSDKUserInfo& UserInfo, const struct FOSDKClientConfig& ClientConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "CreateWebServiceClientWithUserInfo");

	Params::OSDK_CreateWebServiceClientWithUserInfo Parms{};

	Parms.UserInfo = std::move(UserInfo);
	Parms.ClientConfig = std::move(ClientConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.GetHardwareName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOSDK::GetHardwareName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "GetHardwareName");

	Params::OSDK_GetHardwareName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.GetSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOSDK::GetSessionId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "GetSessionId");

	Params::OSDK_GetSessionId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.IsNetworkAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOSDK::IsNetworkAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "IsNetworkAvailable");

	Params::OSDK_IsNetworkAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDK.PauseGameSimulation
// (Final, Native, Public, BlueprintCallable)

void UOSDK::PauseGameSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "PauseGameSimulation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDK.StartGameSimulation
// (Final, Native, Public, BlueprintCallable)

void UOSDK::StartGameSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDK", "StartGameSimulation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OSDKModule.OSDKMembershipAccountClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*            WebServiceClient                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSDKMembershipAccountClient*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKMembershipAccountClient* UOSDKMembershipAccountClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKMembershipAccountClient", "SetWebServiceClient");

	Params::OSDKMembershipAccountClient_SetWebServiceClient Parms{};

	Parms.WebServiceClient = WebServiceClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKMetricsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*            WebServiceClient                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSDKMetricsClient*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKMetricsClient* UOSDKMetricsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKMetricsClient", "SetWebServiceClient");

	Params::OSDKMetricsClient_SetWebServiceClient Parms{};

	Parms.WebServiceClient = WebServiceClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKPlayerItemsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*            WebServiceClient                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSDKPlayerItemsClient*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKPlayerItemsClient* UOSDKPlayerItemsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKPlayerItemsClient", "SetWebServiceClient");

	Params::OSDKPlayerItemsClient_SetWebServiceClient Parms{};

	Parms.WebServiceClient = WebServiceClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OSDKModule.OSDKPlayerStatsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*            WebServiceClient                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSDKPlayerStatsClient*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSDKPlayerStatsClient* UOSDKPlayerStatsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OSDKPlayerStatsClient", "SetWebServiceClient");

	Params::OSDKPlayerStatsClient_SetWebServiceClient Parms{};

	Parms.WebServiceClient = WebServiceClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
