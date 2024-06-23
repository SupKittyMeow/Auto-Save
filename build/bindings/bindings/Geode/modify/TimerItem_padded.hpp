#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/TimerItem_padded.hpp>
#else
#include <Geode/modify_intel/TimerItem_padded.hpp>
#endif
