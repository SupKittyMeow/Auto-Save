#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/ActiveSaveObject1.hpp>
#else
#include <Geode/modify_intel/ActiveSaveObject1.hpp>
#endif
