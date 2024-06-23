#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/ObjectDecoderDelegate.hpp>
#else
#include <Geode/binding_intel/ObjectDecoderDelegate.hpp>
#endif
