#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayer.hpp"
#include "CurrencyRewardDelegate.hpp"

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)
    
private:
    [[deprecated("RewardUnlockLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int p0, RewardsPage* p1);
public:
    
private:
    [[deprecated("RewardUnlockLayer::connectionTimeout not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn connectionTimeout();
public:
    
private:
    [[deprecated("RewardUnlockLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0, RewardsPage* p1);
public:
    
private:
    [[deprecated("RewardUnlockLayer::labelEnterFinishedO not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn labelEnterFinishedO(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("RewardUnlockLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardUnlockLayer::playDropSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playDropSound();
public:
    
private:
    [[deprecated("RewardUnlockLayer::playLabelEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playLabelEffect(int p0, int p1, cocos2d::CCSprite* p2, cocos2d::CCPoint p3, float p4);
public:
    
private:
    [[deprecated("RewardUnlockLayer::playRewardEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playRewardEffect();
public:
    
private:
    [[deprecated("RewardUnlockLayer::readyToCollect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn readyToCollect(GJRewardItem* p0);
public:
    
private:
    [[deprecated("RewardUnlockLayer::showCloseButton not implemented")]]
    /**
     * @note[short] Android
     */
    void showCloseButton();
public:
    
private:
    [[deprecated("RewardUnlockLayer::showCollectReward not implemented")]]
    /**
     * @note[short] Android
     */
    void showCollectReward(GJRewardItem* p0);
public:
    
private:
    [[deprecated("RewardUnlockLayer::step2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn step2();
public:
    
private:
    [[deprecated("RewardUnlockLayer::step3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn step3();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ca7c8
     * @note[short] MacOS (Intel): 0x219f90
     * @note[short] Windows: 0x3ad1f0
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
};
