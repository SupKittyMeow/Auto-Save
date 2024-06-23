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

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)
    
private:
    [[deprecated("ShareLevelLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* p0);
public:
    
private:
    [[deprecated("ShareLevelLayer::getStarsButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale);
public:
    
private:
    [[deprecated("ShareLevelLayer::init not implemented")]]
    /**
     * @note[short] Windows: 0x463090
     * @note[short] Android
     */
    bool init(GJGameLevel* level);
public:
    
private:
    [[deprecated("ShareLevelLayer::onClose not implemented")]]
    /**
     * @note[short] Windows: 0x82fc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelLayer::onSettings not implemented")]]
    /**
     * @note[short] Windows: 0x4642f0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelLayer::onShare not implemented")]]
    /**
     * @note[short] Windows: 0x464440
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ShareLevelLayer::selectRating not implemented")]]
    /**
     * @note[short] Windows: 0x464160
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("ShareLevelLayer::setupStars not implemented")]]
    /**
     * @note[short] Windows: 0x463d50
     * @note[short] Android
     */
    void setupStars();
public:

    /**
     * @note[short] MacOS (ARM): 0x222e0c
     * @note[short] MacOS (Intel): 0x27da30
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
