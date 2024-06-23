#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)
    
private:
    [[deprecated("AchievementBar::create not implemented")]]
    /**
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);
public:
    
private:
    [[deprecated("AchievementBar::init not implemented")]]
    /**
     * @note[short] Windows: 0x7f040
     * @note[short] iOS: 0x27a350
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);
public:
    
private:
    [[deprecated("AchievementBar::show not implemented")]]
    /**
     * @note[short] Android
     */
    void show();
public:

    /**
     * @note[short] MacOS (ARM): 0x5474bc
     * @note[short] MacOS (Intel): 0x6258a0
     * @note[short] Windows: 0x80870
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);
};
