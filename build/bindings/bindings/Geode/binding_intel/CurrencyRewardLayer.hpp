#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("CurrencyRewardLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6b865c
     * @note[short] Windows: 0x9dd30
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::createObjects not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6ba6d4
     * @note[short] Android
     */
    TodoReturn createObjects(CurrencySpriteType p0, int p1, cocos2d::CCPoint p2, float p3);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::createObjectsFull not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6ba798
     * @note[short] Android
     */
    TodoReturn createObjectsFull(CurrencySpriteType p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::createUnlockObject not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6ba73c
     * @note[short] Android
     */
    TodoReturn createUnlockObject(cocos2d::CCSprite* p0, cocos2d::CCPoint p1, float p2);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementCount not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bba28
     * @note[short] Android
     */
    TodoReturn incrementCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementDiamondsCount not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bbcc8
     * @note[short] Android
     */
    TodoReturn incrementDiamondsCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementMoonsCount not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bbe18
     * @note[short] Android
     */
    TodoReturn incrementMoonsCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementSpecialCount1 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bc0b8
     * @note[short] Android
     */
    TodoReturn incrementSpecialCount1(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementSpecialCount2 not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bbf68
     * @note[short] Android
     */
    TodoReturn incrementSpecialCount2(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::incrementStarsCount not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bbb78
     * @note[short] Android
     */
    TodoReturn incrementStarsCount(int p0);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::init not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6b8764
     * @note[short] Windows: 0x9df80
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2, int p3, CurrencySpriteType p4, int p5, CurrencySpriteType p6, int p7, cocos2d::CCPoint p8, CurrencyRewardType p9, float p10, float p11);
public:
    
private:
    [[deprecated("CurrencyRewardLayer::pulseSprite not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x6bc208
     * @note[short] Android
     */
    TodoReturn pulseSprite(cocos2d::CCSprite* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6bb3b8
     * @note[short] MacOS (Intel): 0x7b4aa0
     * @note[short] Android
     */
    virtual void update(float p0);
};
