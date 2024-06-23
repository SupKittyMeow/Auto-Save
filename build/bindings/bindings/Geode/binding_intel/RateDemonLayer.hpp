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

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)
    
private:
    [[deprecated("RateDemonLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static RateDemonLayer* create(int p0);
public:
    
private:
    [[deprecated("RateDemonLayer::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(int p0);
public:
    
private:
    [[deprecated("RateDemonLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateDemonLayer::onRate not implemented")]]
    /**
     * @note[short] Windows: 0x3a54d0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("RateDemonLayer::selectRating not implemented")]]
    /**
     * @note[short] Windows: 0x3a5350
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x225914
     * @note[short] MacOS (Intel): 0x280930
     * @note[short] Windows: 0x3a5890
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x225568
     * @note[short] MacOS (Intel): 0x2805f0
     * @note[short] Windows: 0x3a5670
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2256b8
     * @note[short] MacOS (Intel): 0x2806e0
     * @note[short] Windows: 0x3a5700
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x225828
     * @note[short] MacOS (Intel): 0x280850
     * @note[short] Windows: 0x3a57d0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
private:
    int m_demonRate;
public:
};
