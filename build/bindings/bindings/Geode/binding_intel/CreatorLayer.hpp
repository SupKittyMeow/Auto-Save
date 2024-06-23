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

class CreatorLayer : public cocos2d::CCLayer, public cocos2d::CCSceneTransitionDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CreatorLayer, cocos2d::CCLayer)
    
private:
    [[deprecated("CreatorLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0xb7504
     * @note[short] Android
     */
    static CreatorLayer* create();
public:
    
private:
    [[deprecated("CreatorLayer::scene not implemented")]]
    /**
     * @note[short] Windows: 0x9a190
     * @note[short] iOS: 0xb74ac
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();
public:
    
private:
    [[deprecated("CreatorLayer::canPlayOnlineLevels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canPlayOnlineLevels();
public:
    
private:
    [[deprecated("CreatorLayer::checkQuestsStatus not implemented")]]
    /**
     * @note[short] Windows: 0x9d810
     * @note[short] iOS: 0xb8a08
     * @note[short] Android
     */
    TodoReturn checkQuestsStatus();
public:
    
private:
    [[deprecated("CreatorLayer::onAdventureMap not implemented")]]
    /**
     * @note[short] Windows: 0x9c3a0
     * @note[short] Android
     */
    void onAdventureMap(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x9d9c0
     * @note[short] iOS: 0xb90d0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onChallenge not implemented")]]
    /**
     * @note[short] Windows: 0x9c770
     * @note[short] Android
     */
    void onChallenge(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onDailyLevel not implemented")]]
    /**
     * @note[short] Windows: 0x9c510
     * @note[short] Android
     */
    void onDailyLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onEventLevel not implemented")]]
    /**
     * @note[short] Windows: 0x9c550
     * @note[short] Android
     */
    void onEventLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onFameLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFameLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onFeaturedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x9ba60
     * @note[short] Android
     */
    void onFeaturedLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onGauntlets not implemented")]]
    /**
     * @note[short] Windows: 0x9bd50
     * @note[short] Android
     */
    void onGauntlets(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onLeaderboards not implemented")]]
    /**
     * @note[short] Windows: 0x9b8b0
     * @note[short] Android
     */
    void onLeaderboards(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onMapPacks not implemented")]]
    /**
     * @note[short] Windows: 0x9bc90
     * @note[short] Android
     */
    void onMapPacks(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onMultiplayer not implemented")]]
    /**
     * @note[short] Windows: 0x9bdd0
     * @note[short] Android
     */
    void onMultiplayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onMyLevels not implemented")]]
    /**
     * @note[short] Windows: 0x9b4a0
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onOnlineLevels not implemented")]]
    /**
     * @note[short] Windows: 0x9bc10
     * @note[short] Android
     */
    void onOnlineLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onOnlyFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onOnlyFullVersion(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onPaths not implemented")]]
    /**
     * @note[short] Windows: 0x9bb20
     * @note[short] Android
     */
    void onPaths(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onSavedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x9b6b0
     * @note[short] Android
     */
    void onSavedLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onSecretVault not implemented")]]
    /**
     * @note[short] Windows: 0x9c8e0
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onTopLists not implemented")]]
    /**
     * @note[short] Windows: 0x9bb40
     * @note[short] Android
     */
    void onTopLists(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onTreasureRoom not implemented")]]
    /**
     * @note[short] Windows: 0x9cfc0
     * @note[short] iOS: 0xb8cbc
     * @note[short] Android
     */
    void onTreasureRoom(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CreatorLayer::onWeeklyLevel not implemented")]]
    /**
     * @note[short] Windows: 0x9c530
     * @note[short] Android
     */
    void onWeeklyLevel(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x236654
     * @note[short] MacOS (Intel): 0x2934c0
     * @note[short] Windows: 0x9a300
     * @note[short] iOS: 0xb75b4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x238b9c
     * @note[short] MacOS (Intel): 0x295bf0
     * @note[short] Windows: 0x9dae0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x238b2c
     * @note[short] MacOS (Intel): 0x295b70
     * @note[short] Windows: 0x9da20
     * @note[short] Android
     */
    virtual void sceneWillResume();

    /**
     * @note[short] MacOS (ARM): 0x238a2c
     * @note[short] MacOS (Intel): 0x295a70
     * @note[short] Windows: 0x9d900
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
