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

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)
    
private:
    [[deprecated("GJPromoPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJPromoPopup* create(gd::string p0);
public:
    
private:
    [[deprecated("GJPromoPopup::init not implemented")]]
    /**
     * @note[short] Windows: 0x292920
     * @note[short] Android
     */
    bool init(gd::string p0);
public:
    
private:
    [[deprecated("GJPromoPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x252da4
     * @note[short] MacOS (Intel): 0x2b2650
     * @note[short] Windows: 0x292c20
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x252eb4
     * @note[short] MacOS (Intel): 0x2b2760
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x252de4
     * @note[short] MacOS (Intel): 0x2b2690
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x252eec
     * @note[short] MacOS (Intel): 0x2b27a0
     * @note[short] Android
     */
    virtual void show();
};
