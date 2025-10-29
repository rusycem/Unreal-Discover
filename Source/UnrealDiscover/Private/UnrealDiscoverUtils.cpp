// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "UnrealDiscoverUtils.h"

#include "OculusXRHMD/Private/OculusXRHMDModule.h"

// gets whether the simulator is active.
const bool UUnrealDiscoverUtils::IsSimulatorActive()
{
	return FOculusXRHMDModule::IsSimulatorActivated();
}
