#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "FLAlertLayerProtocol.hpp"
#include "GooglePlayDelegate.hpp"

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x31ad64
     * @note[short] MacOS (Intel): 0x392b80
     * @note[short] Windows: 0x312f60
     * @note[short] iOS: 0x275ef0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool p0);
    
private:
    [[deprecated("MenuLayer::endGame not implemented")]]
    /**
     * @note[short] iOS: 0x277ddc
     * @note[short] Android
     */
    void endGame();
public:
    
private:
    [[deprecated("MenuLayer::firstNetworkTest not implemented")]]
    /**
     * @note[short] Windows: 0x314950
     * @note[short] iOS: 0x2778b8
     * @note[short] Android
     */
    void firstNetworkTest();
public:
    
private:
    [[deprecated("MenuLayer::onAchievements not implemented")]]
    /**
     * @note[short] Windows: 0x314e80
     * @note[short] iOS: 0x2773d4
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onCreator not implemented")]]
    /**
     * @note[short] Windows: 0x315390
     * @note[short] iOS: 0x27737c
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onDaily not implemented")]]
    /**
     * @note[short] Windows: 0x314700
     * @note[short] iOS: 0x277854
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onDiscord not implemented")]]
    /**
     * @note[short] Windows: 0x314d80
     * @note[short] iOS: 0x277620
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onEveryplay not implemented")]]
    /**
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFacebook not implemented")]]
    /**
     * @note[short] Windows: 0x314d00
     * @note[short] iOS: 0x277590
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFreeLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onFullVersion not implemented")]]
    /**
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGameCenter not implemented")]]
    /**
     * @note[short] iOS: 0x2778cc
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGarage not implemented")]]
    /**
     * @note[short] Windows: 0x315420
     * @note[short] iOS: 0x277324
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onGooglePlayGames not implemented")]]
    /**
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c630
     * @note[short] Windows: 0x314da0
     * @note[short] iOS: 0x277644
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onMyProfile not implemented")]]
    /**
     * @note[short] Windows: 0x314c40
     * @note[short] iOS: 0x2776c8
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onNewgrounds not implemented")]]
    /**
     * @note[short] Windows: 0x3154b0
     * @note[short] iOS: 0x2774b8
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onOptions not implemented")]]
    /**
     * @note[short] Windows: 0x3150d0
     * @note[short] iOS: 0x277420
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onOptionsInstant not implemented")]]
    /**
     * @note[short] Windows: 0x3150e0
     * @note[short] iOS: 0x276044
     * @note[short] Android
     */
    void onOptionsInstant();
public:
    
private:
    [[deprecated("MenuLayer::onPlay not implemented")]]
    /**
     * @note[short] Windows: 0x315030
     * @note[short] iOS: 0x2772c8
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x31c6b4
     * @note[short] MacOS (Intel): 0x394500
     * @note[short] Windows: 0x3155f0
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);
    
private:
    [[deprecated("MenuLayer::onRobTop not implemented")]]
    /**
     * @note[short] Windows: 0x314ce0
     * @note[short] iOS: 0x27756c
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onStats not implemented")]]
    /**
     * @note[short] Windows: 0x315270
     * @note[short] iOS: 0x27746c
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onTrailer not implemented")]]
    /**
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onTwitch not implemented")]]
    /**
     * @note[short] Windows: 0x314d60
     * @note[short] iOS: 0x2775fc
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onTwitter not implemented")]]
    /**
     * @note[short] Windows: 0x314d20
     * @note[short] iOS: 0x2775b4
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::onYouTube not implemented")]]
    /**
     * @note[short] Windows: 0x314d40
     * @note[short] iOS: 0x2775d8
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MenuLayer::openOptions not implemented")]]
    /**
     * @note[short] Windows: 0x3150f0
     * @note[short] iOS: 0x277acc
     * @note[short] Android
     */
    void openOptions(bool videoOptions);
public:
    
private:
    [[deprecated("MenuLayer::showGCQuestion not implemented")]]
    /**
     * @note[short] Android
     */
    void showGCQuestion();
public:
    
private:
    [[deprecated("MenuLayer::showMeltdownPromo not implemented")]]
    /**
     * @note[short] Android
     */
    void showMeltdownPromo();
public:
    
private:
    [[deprecated("MenuLayer::showTOS not implemented")]]
    /**
     * @note[short] Windows: 0x314b20
     * @note[short] iOS: 0x277870
     * @note[short] Android
     */
    void showTOS();
public:
    
private:
    [[deprecated("MenuLayer::syncPlatformAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn syncPlatformAchievements(float p0);
public:
    
private:
    [[deprecated("MenuLayer::tryShowAd not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryShowAd(float p0);
public:
    
private:
    [[deprecated("MenuLayer::updateUserProfileButton not implemented")]]
    /**
     * @note[short] Windows: 0x314850
     * @note[short] iOS: 0x277728
     * @note[short] Android
     */
    void updateUserProfileButton();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsClosed not implemented")]]
    /**
     * @note[short] Android
     */
    void videoOptionsClosed();
public:
    
private:
    [[deprecated("MenuLayer::videoOptionsOpened not implemented")]]
    /**
     * @note[short] iOS: 0x277b54
     * @note[short] Android
     */
    void videoOptionsOpened();
public:
    
private:
    [[deprecated("MenuLayer::willClose not implemented")]]
    /**
     * @note[short] Windows: 0x315710
     * @note[short] iOS: 0x275e78
     * @note[short] Android
     */
    void willClose();
public:

    /**
     * @note[short] MacOS (ARM): 0x31af14
     * @note[short] MacOS (Intel): 0x392d40
     * @note[short] Windows: 0x3130f0
     * @note[short] iOS: 0x27604c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x31cdf4
     * @note[short] MacOS (Intel): 0x394cd0
     * @note[short] Windows: 0x3155e0
     * @note[short] iOS: 0x277b74
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x31d06c
     * @note[short] MacOS (Intel): 0x394f90
     * @note[short] Windows: 0x3159c0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x31cba8
     * @note[short] MacOS (Intel): 0x394a40
     * @note[short] Windows: 0x314fe0
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x31ce00
     * @note[short] MacOS (Intel): 0x394d00
     * @note[short] Windows: 0x3157b0
     * @note[short] iOS: 0x277c30
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};
