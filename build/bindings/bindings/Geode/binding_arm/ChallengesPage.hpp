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
#include "FLAlertLayerProtocol.hpp"
#include "GJChallengeDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)
    
private:
    [[deprecated("ChallengesPage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static ChallengesPage* create();
public:
    
private:
    [[deprecated("ChallengesPage::claimItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimItem(ChallengeNode* p0, GJChallengeItem* p1, cocos2d::CCPoint p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x327c74
     * @note[short] MacOS (Intel): 0x3a0dd0
     * @note[short] Windows: 0x849f0
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);
    
private:
    [[deprecated("ChallengesPage::exitNodeAtSlot not implemented")]]
    /**
     * @note[short] Windows: 0x84c80
     * @note[short] Android
     */
    TodoReturn exitNodeAtSlot(int p0, float p1);
public:
    
private:
    [[deprecated("ChallengesPage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("ChallengesPage::tryGetChallenges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetChallenges();
public:
    
private:
    [[deprecated("ChallengesPage::updateDots not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDots();
public:
    
private:
    [[deprecated("ChallengesPage::updateTimers not implemented")]]
    /**
     * @note[short] Windows: 0x84d70
     * @note[short] Android
     */
    void updateTimers(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x326f90
     * @note[short] MacOS (Intel): 0x3a0090
     * @note[short] Windows: 0x83ca0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3285b8
     * @note[short] MacOS (Intel): 0x3a17c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x32851c
     * @note[short] MacOS (Intel): 0x3a1730
     * @note[short] Windows: 0x85190
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x328390
     * @note[short] MacOS (Intel): 0x3a1590
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x327ef8
     * @note[short] MacOS (Intel): 0x3a1090
     * @note[short] Windows: 0x84690
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x3281b0
     * @note[short] MacOS (Intel): 0x3a13a0
     * @note[short] Windows: 0x848d0
     * @note[short] Android
     */
    virtual TodoReturn challengeStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x328720
     * @note[short] MacOS (Intel): 0x3a1930
     * @note[short] Windows: 0x85470
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
