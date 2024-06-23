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

class PurchaseItemPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PurchaseItemPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PurchaseItemPopup, FLAlertLayer)
    
private:
    [[deprecated("PurchaseItemPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static PurchaseItemPopup* create(GJStoreItem* p0);
public:
    
private:
    [[deprecated("PurchaseItemPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(GJStoreItem* p0);
public:
    
private:
    [[deprecated("PurchaseItemPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("PurchaseItemPopup::onPurchase not implemented")]]
    /**
     * @note[short] Android
     */
    void onPurchase(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x2b70f0
     * @note[short] MacOS (Intel): 0x327270
     * @note[short] Android
     */
    virtual void keyBackClicked();
};
