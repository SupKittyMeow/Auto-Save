#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/FMODSoundState_padded.hpp>
#else
#include <Geode/binding_intel/FMODSoundState_padded.hpp>
#endif
