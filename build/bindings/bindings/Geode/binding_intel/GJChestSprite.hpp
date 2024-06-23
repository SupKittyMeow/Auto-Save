#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)
    
private:
    [[deprecated("GJChestSprite::create not implemented")]]
    /**
     * @note[short] iOS: 0x1cf3c0
     * @note[short] Android
     */
    static GJChestSprite* create(int p0);
public:
    
private:
    [[deprecated("GJChestSprite::init not implemented")]]
    /**
     * @note[short] iOS: 0x1d17e4
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("GJChestSprite::switchToState not implemented")]]
    /**
     * @note[short] Android
     */
    void switchToState(ChestSpriteState p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1ca94c
     * @note[short] MacOS (Intel): 0x21a180
     * @note[short] Windows: 0x3ad3e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1ca878
     * @note[short] MacOS (Intel): 0x21a090
     * @note[short] Windows: 0x3ad320
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);
};
