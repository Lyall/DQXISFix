#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraLensEffect_Snow

#include "Basic.hpp"

#include "BP_CameraLensEffect_WeatherBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraLensEffect_Snow.BP_CameraLensEffect_Snow_C
// 0x0000 (0x0480 - 0x0480)
class ABP_CameraLensEffect_Snow_C final : public ABP_CameraLensEffect_WeatherBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLensEffect_Snow_C">();
	}
	static class ABP_CameraLensEffect_Snow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLensEffect_Snow_C>();
	}
};
static_assert(alignof(ABP_CameraLensEffect_Snow_C) == 0x000010, "Wrong alignment on ABP_CameraLensEffect_Snow_C");
static_assert(sizeof(ABP_CameraLensEffect_Snow_C) == 0x000480, "Wrong size on ABP_CameraLensEffect_Snow_C");

}
