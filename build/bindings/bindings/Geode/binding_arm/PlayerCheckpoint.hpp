#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)
    
private:
    [[deprecated("PlayerCheckpoint::create not implemented")]]
    /**
     * @note[short] Windows: 0x3979a0
     * @note[short] Android
     */
    static PlayerCheckpoint* create();
public:

    /**
     * @note[short] MacOS (ARM): 0xab20c
     * @note[short] MacOS (Intel): 0xbfbc0
     * @note[short] Android
     */
    virtual bool init();
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    int m_unkInt1;
    bool m_isUpsideDown;
    bool m_unk7b3;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
private:
    int m_hasGhostTrail;
public:
private:
    uint8_t m_unkBytes1[4];
public:
private:
    float m_speed;
public:
private:
    bool m_isHidden;
public:
private:
    bool m_isGoingLeft;
public:
private:
    uint8_t m_unkBytes2[42];
public:
private:
    float m_unkFloat1;
public:
private:
    int m_possiblyFlags;
public:
private:
    int m_timeOrPercentRelated;
public:
private:
    gd::vector<float> m_yPositionVector;
public:
private:
    uint8_t m_unkBytes3[8];
public:
};
