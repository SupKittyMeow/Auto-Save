#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/ObjectDecoder.hpp>
#else
#include <Geode/binding_intel/ObjectDecoder.hpp>
#endif
