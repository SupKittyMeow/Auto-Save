#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "DialogDelegate.hpp"
#include "BoomScrollLayerDelegate.hpp"

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretRewardsLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0x2f8c5c
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::scene not implemented")]]
    /**
     * @note[short] Windows: 0x3ae160
     * @note[short] iOS: 0x2f8c10
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);
public:
    
private:
    [[deprecated("SecretRewardsLayer::createSecondaryLayer not implemented")]]
    /**
     * @note[short] iOS: 0x2fadf4
     * @note[short] Android
     */
    TodoReturn createSecondaryLayer(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::generateChestItems not implemented")]]
    /**
     * @note[short] iOS: 0x2fb19c
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::getPageColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPageColor(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::goToPage not implemented")]]
    /**
     * @note[short] iOS: 0x2fa67c
     * @note[short] Android
     */
    void goToPage(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x55c7dc
     * @note[short] MacOS (Intel): 0x63d020
     * @note[short] Windows: 0x3ae2c0
     * @note[short] iOS: 0x2f8cd0
     * @note[short] Android
     */
    bool init(bool p0);
    
private:
    [[deprecated("SecretRewardsLayer::moveToMainLayer not implemented")]]
    /**
     * @note[short] iOS: 0x2facd4
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::moveToSecondaryLayer not implemented")]]
    /**
     * @note[short] iOS: 0x2faabc
     * @note[short] Android
     */
    void moveToSecondaryLayer(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x3b24f0
     * @note[short] iOS: 0x2fa1d8
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onChestType not implemented")]]
    /**
     * @note[short] iOS: 0x2fa244
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onSelectItem not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onShop not implemented")]]
    /**
     * @note[short] Windows: 0x3b19e0
     * @note[short] iOS: 0x2fa52c
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onSpecialItem not implemented")]]
    /**
     * @note[short] iOS: 0x2fa80c
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::onSwitchPage not implemented")]]
    /**
     * @note[short] iOS: 0x2fa624
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialog01 not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog01();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialog03 not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialog03();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialogDiamond not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialogDiamond();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showDialogMechanic not implemented")]]
    /**
     * @note[short] Android
     */
    void showDialogMechanic();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showLockedChest not implemented")]]
    /**
     * @note[short] Android
     */
    void showLockedChest();
public:
    
private:
    [[deprecated("SecretRewardsLayer::showShop not implemented")]]
    /**
     * @note[short] Android
     */
    void showShop(int p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::switchToOpenedState not implemented")]]
    /**
     * @note[short] Windows: 0x3b2120
     * @note[short] iOS: 0x2fa298
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* p0);
public:
    
private:
    [[deprecated("SecretRewardsLayer::updateBackButton not implemented")]]
    /**
     * @note[short] iOS: 0x2fabb4
     * @note[short] Android
     */
    void updateBackButton();
public:
    
private:
    [[deprecated("SecretRewardsLayer::updateUnlockedLabel not implemented")]]
    /**
     * @note[short] Windows: 0x3b2200
     * @note[short] iOS: 0x2fa380
     * @note[short] Android
     */
    void updateUnlockedLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x564f80
     * @note[short] MacOS (Intel): 0x646ab0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x564f0c
     * @note[short] MacOS (Intel): 0x646a20
     * @note[short] Windows: 0x3b26d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x564da8
     * @note[short] MacOS (Intel): 0x6468d0
     * @note[short] Windows: 0x3b1bf0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x55e6e4
     * @note[short] MacOS (Intel): 0x63f0a0
     * @note[short] Windows: 0x3b0260
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
};
