#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJPurchaseDelegate.hpp"
#include "DialogDelegate.hpp"
#include "RewardedVideoDelegate.hpp"

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("GJShopLayer::create not implemented")]]
    /**
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType p0);
public:
    
private:
    [[deprecated("GJShopLayer::exitVideoAdItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn exitVideoAdItems();
public:
    
private:
    [[deprecated("GJShopLayer::init not implemented")]]
    /**
     * @note[short] Windows: 0x297400
     * @note[short] Android
     */
    bool init(ShopType p0);
public:
    
private:
    [[deprecated("GJShopLayer::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x29a840
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onCommunityCredits not implemented")]]
    /**
     * @note[short] Windows: 0x299680
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onPlushies not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onSelectItem not implemented")]]
    /**
     * @note[short] Windows: 0x299850
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::onVideoAd not implemented")]]
    /**
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("GJShopLayer::scene not implemented")]]
    /**
     * @note[short] Windows: 0x297280
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType p0);
public:
    
private:
    [[deprecated("GJShopLayer::showCantAffordMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* p0);
public:
    
private:
    [[deprecated("GJShopLayer::showReactMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void showReactMessage();
public:
    
private:
    [[deprecated("GJShopLayer::updateCurrencyCounter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCurrencyCounter();
public:

    /**
     * @note[short] MacOS (ARM): 0x2b3cb0
     * @note[short] MacOS (Intel): 0x323680
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2b5e94
     * @note[short] MacOS (Intel): 0x325d60
     * @note[short] Windows: 0x29c3c0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2b6290
     * @note[short] MacOS (Intel): 0x326190
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x2b62ac
     * @note[short] MacOS (Intel): 0x3261d0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2b4bb4
     * @note[short] MacOS (Intel): 0x3246c0
     * @note[short] Windows: 0x29aa60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2b4548
     * @note[short] MacOS (Intel): 0x323fc0
     * @note[short] Windows: 0x29a0a0
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* p0);

    /**
     * @note[short] MacOS (ARM): 0x2b3f7c
     * @note[short] MacOS (Intel): 0x323970
     * @note[short] Windows: 0x2997c0
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2b5cb4
     * @note[short] MacOS (Intel): 0x325ba0
     * @note[short] Windows: 0x29c0c0
     * @note[short] iOS: 0x158204
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
