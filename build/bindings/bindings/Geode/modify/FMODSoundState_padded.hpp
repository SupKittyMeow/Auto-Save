#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/FMODSoundState_padded.hpp>
#else
#include <Geode/modify_intel/FMODSoundState_padded.hpp>
#endif
