#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCAnimatedSprite.hpp"

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): 0x50e80c
     * @note[short] MacOS (Intel): 0x5e4f50
     * @note[short] Windows: 0x294360
     * @note[short] Android
     */
    static GJRobotSprite* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x50f694
     * @note[short] MacOS (Intel): 0x5e5f80
     * @note[short] Android
     */
    void hideGlow();

    /**
     * @note[short] MacOS (ARM): 0x50e9cc
     * @note[short] MacOS (Intel): 0x5e5100
     * @note[short] Windows: 0x294410
     * @note[short] Android
     */
    bool init(int p0, gd::string p1);

    /**
     * @note[short] MacOS (ARM): 0x50e93c
     * @note[short] MacOS (Intel): 0x5e5090
     * @note[short] Android
     */
    bool init(int p0);

    /**
     * @note[short] MacOS (ARM): 0x50f680
     * @note[short] MacOS (Intel): 0x5e5f60
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS (ARM): 0x50f6a8
     * @note[short] MacOS (Intel): 0x5e5fa0
     * @note[short] Android
     */
    void updateColor01(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x50f954
     * @note[short] MacOS (Intel): 0x5e62e0
     * @note[short] Android
     */
    void updateColor02(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x50f6bc
     * @note[short] MacOS (Intel): 0x5e5fc0
     * @note[short] Windows: 0x294ba0
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x50ef7c
     * @note[short] MacOS (Intel): 0x5e5720
     * @note[short] Windows: 0x295150
     * @note[short] Android
     */
    void updateFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x50f964
     * @note[short] MacOS (Intel): 0x5e6300
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::ccColor3B p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x50f9e0
     * @note[short] MacOS (Intel): 0x5e6380
     * @note[short] Windows: 0x295050
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x50fac4
     * @note[short] MacOS (Intel): 0x5e6490
     * @note[short] Windows: 0x295740
     * @note[short] Android
     */
    virtual void hideSecondary();
    cocos2d::CCArray* m_unkArray;
    bool m_hasExtra;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_secondColor;
    cocos2d::CCArray* m_secondArray;
    cocos2d::CCSprite* m_glowSprite;
    cocos2d::CCSprite* m_extraSprite;
    IconType m_iconType;
    int m_iconRequestID;
    CCSpritePart* m_headSprite;
    CCSpritePart* m_lastSprite;
};
