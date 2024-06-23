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
#include "FLAlertLayerProtocol.hpp"
#include "GJRewardDelegate.hpp"

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)
    
private:
    [[deprecated("RewardsPage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RewardsPage* create();
public:
    
private:
    [[deprecated("RewardsPage::getRewardFrame not implemented")]]
    /**
     * @note[short] Android
     */
    static char const* getRewardFrame(int p0, int p1);
public:
    
private:
    [[deprecated("RewardsPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardsPage::onFreeStuff not implemented")]]
    /**
     * @note[short] Windows: 0x3a9c20
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardsPage::onReward not implemented")]]
    /**
     * @note[short] Windows: 0x3a9460
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RewardsPage::tryGetRewards not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetRewards();
public:
    
private:
    [[deprecated("RewardsPage::unlockLayerClosed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockLayerClosed(RewardUnlockLayer* p0);
public:
    
private:
    [[deprecated("RewardsPage::updateTimers not implemented")]]
    /**
     * @note[short] Windows: 0x3a9860
     * @note[short] Android
     */
    void updateTimers(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1c5a20
     * @note[short] MacOS (Intel): 0x214cc0
     * @note[short] Windows: 0x3a8710
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1c71c0
     * @note[short] MacOS (Intel): 0x216580
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c7144
     * @note[short] MacOS (Intel): 0x216510
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c6fec
     * @note[short] MacOS (Intel): 0x2163b0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1c6c90
     * @note[short] MacOS (Intel): 0x216030
     * @note[short] Windows: 0x3a95a0
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1c6ee8
     * @note[short] MacOS (Intel): 0x2162c0
     * @note[short] Windows: 0x3a9790
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    cocos2d::CCNode* m_openLayer;
};
