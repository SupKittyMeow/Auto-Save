#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJDropDownLayer.hpp"
#include "RewardedVideoDelegate.hpp"

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)
    
private:
    [[deprecated("RetryLevelLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RetryLevelLayer* create();
public:
    
private:
    [[deprecated("RetryLevelLayer::getEndText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEndText();
public:
    
private:
    [[deprecated("RetryLevelLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onMenu not implemented")]]
    /**
     * @note[short] Windows: 0x3a8110
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onReplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::onRewardedVideo not implemented")]]
    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RetryLevelLayer::setupLastProgress not implemented")]]
    /**
     * @note[short] Windows: 0x3a7a50
     * @note[short] Android
     */
    TodoReturn setupLastProgress();
public:

    /**
     * @note[short] MacOS (ARM): 0x45c108
     * @note[short] MacOS (Intel): 0x504350
     * @note[short] Windows: 0x3a8230
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45c05c
     * @note[short] MacOS (Intel): 0x504280
     * @note[short] Windows: 0x3a80c0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x45af98
     * @note[short] MacOS (Intel): 0x503110
     * @note[short] Windows: 0x3a72f0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x45bb78
     * @note[short] MacOS (Intel): 0x503d60
     * @note[short] Android
     */
    virtual void showLayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x45bc88
     * @note[short] MacOS (Intel): 0x503e60
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x45c04c
     * @note[short] MacOS (Intel): 0x504260
     * @note[short] Windows: 0x3a7ff0
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x45c140
     * @note[short] MacOS (Intel): 0x5043a0
     * @note[short] Android
     */
    virtual bool shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);
};
