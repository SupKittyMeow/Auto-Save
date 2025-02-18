#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class UIButtonConfig {
public:
    static constexpr auto CLASS_NAME = "UIButtonConfig";
    
private:
    [[deprecated("UIButtonConfig::reset not implemented")]]
    /**
     * @note[short] Windows: 0x1720d0
     * @note[short] Android
     */
    TodoReturn reset();
public:
    
private:
    [[deprecated("UIButtonConfig::resetOneBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetOneBtn();
public:
};
