#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/ActiveSaveObject2.hpp>
#else
#include <Geode/binding_intel/ActiveSaveObject2.hpp>
#endif
