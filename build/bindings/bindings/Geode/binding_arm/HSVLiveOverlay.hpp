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
#include "HSVWidgetDelegate.hpp"

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)
    
private:
    [[deprecated("HSVLiveOverlay::create not implemented")]]
    /**
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("HSVLiveOverlay::closeColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::createHSVWidget not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createHSVWidget(int p0);
public:
    
private:
    [[deprecated("HSVLiveOverlay::determineStartValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn determineStartValues();
public:
    
private:
    [[deprecated("HSVLiveOverlay::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("HSVLiveOverlay::onSelectTab not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("HSVLiveOverlay::toggleControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleControls(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x20e0dc
     * @note[short] MacOS (Intel): 0x267120
     * @note[short] Windows: 0x2a7c80
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20e194
     * @note[short] MacOS (Intel): 0x2671d0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x20e248
     * @note[short] MacOS (Intel): 0x2672a0
     * @note[short] Windows: 0x2a7cd0
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* p0);
};
