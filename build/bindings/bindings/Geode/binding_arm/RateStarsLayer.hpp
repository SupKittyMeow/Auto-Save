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
#include "UploadPopupDelegate.hpp"
#include "UploadActionDelegate.hpp"

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)
    
private:
    [[deprecated("RateStarsLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RateStarsLayer* create(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("RateStarsLayer::getStarsButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x22bb60
     * @note[short] MacOS (Intel): 0x287930
     * @note[short] Windows: 0x3a6380
     * @note[short] Android
     */
    bool init(int p0, bool p1, bool p2);
    
private:
    [[deprecated("RateStarsLayer::onClose not implemented")]]
    /**
     * @note[short] Windows: 0x3a7140
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateStarsLayer::onFeature not implemented")]]
    /**
     * @note[short] Windows: 0x3a6a30
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateStarsLayer::onRate not implemented")]]
    /**
     * @note[short] Windows: 0x3a6d90
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateStarsLayer::onToggleCoins not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateStarsLayer::selectRating not implemented")]]
    /**
     * @note[short] Windows: 0x3a6ba0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x22c93c
     * @note[short] MacOS (Intel): 0x2886f0
     * @note[short] Windows: 0x3a7180
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22c5b0
     * @note[short] MacOS (Intel): 0x2883b0
     * @note[short] Windows: 0x3a6f80
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x22c6f0
     * @note[short] MacOS (Intel): 0x2884a0
     * @note[short] Windows: 0x3a7000
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x22c850
     * @note[short] MacOS (Intel): 0x288610
     * @note[short] Windows: 0x3a70c0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
private:
    int m_starsRate;
public:
};
