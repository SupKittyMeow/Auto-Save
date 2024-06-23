#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/ActiveSaveObject1.hpp>
#else
#include <Geode/binding_intel/ActiveSaveObject1.hpp>
#endif
