// Copyright Epic Games, Inc. All Rights Reserved.

#include "FVector_Kalman.h"

#define LOCTEXT_NAMESPACE "FFVector_KalmanModule"

void FFVector_KalmanModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FFVector_KalmanModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFVector_KalmanModule, FVector_Kalman)