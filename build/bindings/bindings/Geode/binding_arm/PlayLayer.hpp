#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJBaseGameLayer.hpp"
#include "CCCircleWaveDelegate.hpp"
#include "CurrencyRewardDelegate.hpp"
#include "DialogDelegate.hpp"

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] MacOS (ARM): 0x9a050
     * @note[short] MacOS (Intel): 0xab7d0
     * @note[short] Windows: 0x382540
     * @note[short] Android
     */
    virtual  ~PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x9a148
     * @note[short] MacOS (Intel): 0xabbf0
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* level, bool useReplay, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] MacOS (ARM): 0x9f734
     * @note[short] MacOS (Intel): 0xb24e0
     * @note[short] Windows: 0x38a990
     * @note[short] Android
     */
    void addObject(GameObject* p0);
    
private:
    [[deprecated("PlayLayer::addToGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    void addToGroupOld(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::applyCustomEnterEffect not implemented")]]
    /**
     * @note[short] Windows: 0x38d580
     * @note[short] Android
     */
    void applyCustomEnterEffect(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayLayer::applyEnterEffect not implemented")]]
    /**
     * @note[short] Windows: 0x38e270
     * @note[short] Android
     */
    void applyEnterEffect(GameObject* p0, int p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0xaac6c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canPauseGame();
    
private:
    [[deprecated("PlayLayer::checkpointWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkpointWithID(int p0);
public:
    
private:
    [[deprecated("PlayLayer::colorObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorObject(int p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("PlayLayer::commitJumps not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commitJumps();
public:
    
private:
    [[deprecated("PlayLayer::compareStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn compareStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::createCheckpoint not implemented")]]
    /**
     * @note[short] Windows: 0x391b00
     * @note[short] Android
     */
    CheckpointObject* createCheckpoint();
public:
    
private:
    [[deprecated("PlayLayer::createObjectsFromSetupFinished not implemented")]]
    /**
     * @note[short] Windows: 0x38a4f0
     * @note[short] Android
     */
    void createObjectsFromSetupFinished();
public:
    
private:
    [[deprecated("PlayLayer::delayedFullReset not implemented")]]
    /**
     * @note[short] Android
     */
    void delayedFullReset();
public:

    /**
     * @note[short] MacOS (ARM): 0xa79c8
     * @note[short] MacOS (Intel): 0xbb940
     * @note[short] Windows: 0x395700
     * @note[short] Android
     */
    void delayedResetLevel();

    /**
     * @note[short] MacOS (ARM): 0xaa510
     * @note[short] MacOS (Intel): 0xbee70
     * @note[short] Windows: 0x395600
     * @note[short] Android
     */
    void fullReset();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x390520
     * @note[short] Android
     */
    float getCurrentPercent();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getCurrentPercentInt();
    
private:
    [[deprecated("PlayLayer::getEndPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEndPosition();
public:
    
private:
    [[deprecated("PlayLayer::getLastCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getLastCheckpoint();
public:
    
private:
    [[deprecated("PlayLayer::getRelativeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("PlayLayer::getRelativeModNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeModNew(cocos2d::CCPoint p0, float p1, float p2, bool p3, bool p4);
public:
    
private:
    [[deprecated("PlayLayer::getTempMilliTime not implemented")]]
    /**
     * @note[short] Windows: 0x3c070
     * @note[short] Android
     */
    TodoReturn getTempMilliTime();
public:
    
private:
    [[deprecated("PlayLayer::gravityEffectFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityEffectFinished();
public:

    /**
     * @note[short] MacOS (ARM): 0xaabec
     * @note[short] MacOS (Intel): 0xbf5a0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x9a1e4
     * @note[short] MacOS (Intel): 0xabc70
     * @note[short] Windows: 0x382890
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::isGameplayActive not implemented")]]
    /**
     * @note[short] Android
     */
    bool isGameplayActive();
public:

    /**
     * @note[short] MacOS (ARM): 0xa1078
     * @note[short] MacOS (Intel): 0xb4290
     * @note[short] Windows: 0x384850
     * @note[short] Android
     */
    void levelComplete();
    
private:
    [[deprecated("PlayLayer::loadActiveSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x9f46c
     * @note[short] Android
     */
    TodoReturn loadDefaultColors();

    /**
     * @note[short] MacOS (ARM): 0xaa070
     * @note[short] MacOS (Intel): 0xbe9d0
     * @note[short] Android
     */
    TodoReturn loadDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);

    /**
     * @note[short] MacOS (ARM): 0xa9b90
     * @note[short] MacOS (Intel): 0xbe490
     * @note[short] Windows: 0x394180
     * @note[short] Android
     */
    void loadFromCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::loadLastCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadLastCheckpoint();
public:

    /**
     * @note[short] MacOS (ARM): 0xa7d28
     * @note[short] MacOS (Intel): 0xbbd80
     * @note[short] Windows: 0x3940b0
     * @note[short] Android
     */
    CheckpointObject * markCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0xa0cb0
     * @note[short] MacOS (Intel): 0xb3e90
     * @note[short] Windows: 0x397540
     * @note[short] Android
     */
    void onQuit();
    
private:
    [[deprecated("PlayLayer::optimizeColorGroups not implemented")]]
    /**
     * @note[short] Windows: 0x38b7f0
     * @note[short] Android
     */
    TodoReturn optimizeColorGroups();
public:
    
private:
    [[deprecated("PlayLayer::optimizeOpacityGroups not implemented")]]
    /**
     * @note[short] Windows: 0x38ba80
     * @note[short] Android
     */
    TodoReturn optimizeOpacityGroups();
public:

    /**
     * @note[short] MacOS (ARM): 0xaac94
     * @note[short] MacOS (Intel): 0xbf630
     * @note[short] Windows: 0x396a50
     * @note[short] Android
     */
    void pauseGame(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa3680
     * @note[short] MacOS (Intel): 0xb6ca0
     * @note[short] Windows: 0x388570
     * @note[short] Android
     */
    void playEndAnimationToPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0xa3bb8
     * @note[short] MacOS (Intel): 0xb7260
     * @note[short] Windows: 0x388f00
     * @note[short] Android
     */
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint p0, bool p1);
    
private:
    [[deprecated("PlayLayer::playReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playReplay(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x9b03c
     * @note[short] MacOS (Intel): 0xaccb0
     * @note[short] Windows: 0x389a50
     * @note[short] Android
     */
    void prepareCreateObjectsFromSetup(gd::string& p0);
    
private:
    [[deprecated("PlayLayer::prepareMusic not implemented")]]
    /**
     * @note[short] Windows: 0x3972a0
     * @note[short] Android
     */
    void prepareMusic(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x9b3fc
     * @note[short] MacOS (Intel): 0xad0e0
     * @note[short] Windows: 0x389d00
     * @note[short] Android
     */
    void processCreateObjectsFromSetup();
    
private:
    [[deprecated("PlayLayer::processLoadedMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processLoadedMoveActions();
public:
    
private:
    [[deprecated("PlayLayer::queueCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queueCheckpoint();
public:
    
private:
    [[deprecated("PlayLayer::removeAllObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void removeAllObjects();
public:
    
private:
    [[deprecated("PlayLayer::removeCheckpoint not implemented")]]
    /**
     * @note[short] Windows: 0x394910
     * @note[short] Android
     */
    void removeCheckpoint(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::removeFromGroupOld not implemented")]]
    /**
     * @note[short] Android
     */
    void removeFromGroupOld(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xa01f0
     * @note[short] MacOS (Intel): 0xb32d0
     * @note[short] Windows: 0x3958b0
     * @note[short] iOS: 0x11baf4
     * @note[short] Android
     */
    void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0xaa7c0
     * @note[short] Windows: 0x395710
     * @note[short] Android
     */
    void resetLevelFromStart();
    
private:
    [[deprecated("PlayLayer::resume not implemented")]]
    /**
     * @note[short] Android
     */
    void resume();
public:

    /**
     * @note[short] MacOS (ARM): 0xaaddc
     * @note[short] MacOS (Intel): 0xbf770
     * @note[short] Windows: 0x396d10
     * @note[short] Android
     */
    void resumeAndRestart(bool p0);
    
private:
    [[deprecated("PlayLayer::saveActiveSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveActiveSaveObjects(gd::vector<SavedActiveObjectState>& p0, gd::vector<SavedSpecialObjectState>& p1);
public:
    
private:
    [[deprecated("PlayLayer::saveDynamicSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveDynamicSaveObjects(gd::vector<SavedObjectStateRef>& p0);
public:
    
private:
    [[deprecated("PlayLayer::scanActiveSaveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn scanActiveSaveObjects();
public:
    
private:
    [[deprecated("PlayLayer::scanDynamicSaveObjects not implemented")]]
    /**
     * @note[short] Windows: 0x394aa0
     * @note[short] Android
     */
    TodoReturn scanDynamicSaveObjects();
public:

    /**
     * @note[short] MacOS (ARM): 0x9a088
     * @note[short] MacOS (Intel): 0xabb40
     * @note[short] Windows: 0x3827e0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
    
private:
    [[deprecated("PlayLayer::screenFlipObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn screenFlipObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayLayer::setDamageVerifiedIdx not implemented")]]
    /**
     * @note[short] Android
     */
    void setDamageVerifiedIdx(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x9bc4c
     * @note[short] MacOS (Intel): 0xadb00
     * @note[short] Windows: 0x3835e0
     * @note[short] Android
     */
    void setupHasCompleted();
    
private:
    [[deprecated("PlayLayer::shouldBlend not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldBlend(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xa1b28
     * @note[short] MacOS (Intel): 0xb4f00
     * @note[short] Windows: 0x385aa0
     * @note[short] Android
     */
    void showCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0xa1f00
     * @note[short] MacOS (Intel): 0xb5380
     * @note[short] Windows: 0x385470
     * @note[short] Android
     */
    void showCompleteText();
    
private:
    [[deprecated("PlayLayer::showEndLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void showEndLayer();
public:
    
private:
    [[deprecated("PlayLayer::showHint not implemented")]]
    /**
     * @note[short] Windows: 0x3912c0
     * @note[short] Android
     */
    void showHint();
public:

    /**
     * @note[short] MacOS (ARM): 0xa2ac8
     * @note[short] MacOS (Intel): 0xb5fd0
     * @note[short] Windows: 0x3860c0
     * @note[short] iOS: 0x11db7c
     * @note[short] Android
     */
    void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
    
private:
    [[deprecated("PlayLayer::showRetryLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void showRetryLayer();
public:
    
private:
    [[deprecated("PlayLayer::showTwoPlayerGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void showTwoPlayerGuide();
public:
    
private:
    [[deprecated("PlayLayer::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayLayer::spawnFirework not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnFirework();
public:

    /**
     * @note[short] MacOS (ARM): 0xa0c54
     * @note[short] Windows: 0x3847f0
     * @note[short] Android
     */
    void startGame();
    
private:
    [[deprecated("PlayLayer::startGameDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void startGameDelayed();
public:

    /**
     * @note[short] MacOS (ARM): 0xa0f20
     * @note[short] Windows: 0x3973f0
     * @note[short] Android
     */
    void startMusic();
    
private:
    [[deprecated("PlayLayer::startRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecording();
public:
    
private:
    [[deprecated("PlayLayer::startRecordingDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startRecordingDelayed();
public:
    
private:
    [[deprecated("PlayLayer::stopRecording not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRecording();
public:

    /**
     * @note[short] MacOS (ARM): 0xa99ac
     * @note[short] Windows: 0x393fe0
     * @note[short] Android
     */
    void storeCheckpoint(CheckpointObject* p0);
    
private:
    [[deprecated("PlayLayer::takeStateSnapshot not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn takeStateSnapshot();
public:
    
private:
    [[deprecated("PlayLayer::toggleBGEffectVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleBGEffectVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayLayer::toggleGhostEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGhostEffect(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xaa64c
     * @note[short] MacOS (Intel): 0xbefe0
     * @note[short] Windows: 0x396780
     * @note[short] Android
     */
    void togglePracticeMode(bool p0);
    
private:
    [[deprecated("PlayLayer::tryStartRecord not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryStartRecord();
public:

    /**
     * @note[short] MacOS (ARM): 0xaa844
     * @note[short] Windows: 0x396540
     * @note[short] Android
     */
    void updateAttempts();
    
private:
    [[deprecated("PlayLayer::updateEffectPositions not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0xbba40
     * @note[short] Android
     */
    void updateEffectPositions();
public:
    
private:
    [[deprecated("PlayLayer::updateInfoLabel not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0xb0120
     * @note[short] Windows: 0x38f640
     * @note[short] Android
     */
    void updateInfoLabel();
public:
    
private:
    [[deprecated("PlayLayer::updateInvisibleBlock not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInvisibleBlock(GameObject* p0, float p1, float p2, float p3, float p4, cocos2d::ccColor3B const& p5);
public:

    /**
     * @note[short] MacOS (ARM): 0x9f28c
     * @note[short] MacOS (Intel): 0xb1f90
     * @note[short] Windows: 0x38efd0
     * @note[short] Android
     */
    void updateProgressbar();
    
private:
    [[deprecated("PlayLayer::updateScreenRotation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateScreenRotation(int p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);
public:
    
private:
    [[deprecated("PlayLayer::updateTimeWarp not implemented")]]
    /**
     * @note[short] Android
     */
    void updateTimeWarp(EffectGameObject* p0, float p1);
public:
    
private:
    [[deprecated("PlayLayer::updateTestModeLabel not implemented")]]
    /**
     * @note[short] Windows: 0x384760
     * @note[short] Android
     */
    void updateTestModeLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0xab0c4
     * @note[short] MacOS (Intel): 0xbfa80
     * @note[short] Windows: 0x397920
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0xab108
     * @note[short] MacOS (Intel): 0xbfab0
     * @note[short] Windows: 0x397950
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0xa7b08
     * @note[short] MacOS (Intel): 0xbbb10
     * @note[short] Windows: 0x391460
     * @note[short] Android
     */
    virtual void postUpdate(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa7dec
     * @note[short] MacOS (Intel): 0xbbe40
     * @note[short] Windows: 0x391830
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();

    /**
     * @note[short] MacOS (ARM): 0xab568
     * @note[short] MacOS (Intel): 0xc0010
     * @note[short] Android
     */
    virtual TodoReturn testTime();

    /**
     * @note[short] MacOS (ARM): 0xa7ee8
     * @note[short] MacOS (Intel): 0xbbf30
     * @note[short] Windows: 0x391a00
     * @note[short] Android
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): 0xa7f98
     * @note[short] MacOS (Intel): 0xbbfd0
     * @note[short] Windows: 0x391aa0
     * @note[short] Android
     */
    virtual void updateAttemptTime(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa4664
     * @note[short] MacOS (Intel): 0xb7dd0
     * @note[short] Windows: 0x38bfc0
     * @note[short] Android
     */
    virtual void updateVisibility(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa63cc
     * @note[short] MacOS (Intel): 0xba170
     * @note[short] Windows: 0x38cef0
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xa648c
     * @note[short] MacOS (Intel): 0xba250
     * @note[short] Windows: 0x38eba0
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);

    /**
     * @note[short] MacOS (ARM): 0xa367c
     * @note[short] MacOS (Intel): 0xb6c90
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xa3ab0
     * @note[short] MacOS (Intel): 0xb7170
     * @note[short] Windows: 0x388df0
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0xa6f00
     * @note[short] MacOS (Intel): 0xbad40
     * @note[short] Windows: 0x390480
     * @note[short] Android
     */
    virtual void toggleGlitter(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa6fd8
     * @note[short] MacOS (Intel): 0xbae00
     * @note[short] Windows: 0x3905a0
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xa6e14
     * @note[short] MacOS (Intel): 0xbac50
     * @note[short] Windows: 0x3902d0
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa6e44
     * @note[short] MacOS (Intel): 0xbac80
     * @note[short] Windows: 0x390350
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa6e54
     * @note[short] MacOS (Intel): 0xbaca0
     * @note[short] Windows: 0x390390
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa6d3c
     * @note[short] MacOS (Intel): 0xbab30
     * @note[short] Windows: 0x3901a0
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0xa6db0
     * @note[short] MacOS (Intel): 0xbabb0
     * @note[short] Windows: 0x390230
     * @note[short] Android
     */
    virtual float posForTime(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa6dd0
     * @note[short] MacOS (Intel): 0xbac00
     * @note[short] Windows: 0x390290
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0xa3594
     * @note[short] MacOS (Intel): 0xb6b80
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);

    /**
     * @note[short] MacOS (ARM): 0xa64f8
     * @note[short] MacOS (Intel): 0xba2c0
     * @note[short] Windows: 0x38ec60
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa63d4
     * @note[short] MacOS (Intel): 0xba180
     * @note[short] Windows: 0x38cf00
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xa800c
     * @note[short] MacOS (Intel): 0xbc040
     * @note[short] Windows: 0x391ae0
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xa6cd8
     * @note[short] MacOS (Intel): 0xbaab0
     * @note[short] Windows: 0x38f610
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xa68fc
     * @note[short] MacOS (Intel): 0xba6f0
     * @note[short] Windows: 0x38f170
     * @note[short] Android
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xaa490
     * @note[short] MacOS (Intel): 0xbede0
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();

    /**
     * @note[short] MacOS (ARM): 0xa6ad4
     * @note[short] MacOS (Intel): 0xba8c0
     * @note[short] Windows: 0x38f370
     * @note[short] Android
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): 0xa6cf8
     * @note[short] MacOS (Intel): 0xbaaf0
     * @note[short] Windows: 0x390120
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xaa298
     * @note[short] MacOS (Intel): 0xbebd0
     * @note[short] Windows: 0x394a50
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0xa6c4c
     * @note[short] MacOS (Intel): 0xbaa50
     * @note[short] Windows: 0x38f510
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): 0xa79dc
     * @note[short] MacOS (Intel): 0xbb960
     * @note[short] Windows: 0x391280
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0xa7a3c
     * @note[short] MacOS (Intel): 0xbba00
     * @note[short] Windows: 0x391440
     * @note[short] Android
     */
    virtual void circleWaveWillBeRemoved(CCCircleWave* p0);

    /**
     * @note[short] MacOS (ARM): 0xa7a08
     * @note[short] MacOS (Intel): 0xbb9a0
     * @note[short] Windows: 0x3912a0
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
    GEODE_PAD(48);
    cocos2d::CCArray* m_coinArray;
    GEODE_PAD(112);
    cocos2d::CCLabelBMFont* m_statusLabel;
    int m_unk3778;
    GEODE_PAD(24);
    float m_unkSomeFloat;
    CheckpointObject* m_currentCheckpoint;
    cocos2d::CCArray* m_checkpointArray;
    cocos2d::CCArray* m_unk37a8;
    int m_unk37b0;
    int m_unk37b4;
    int m_unk37b8;
    cocos2d::CCArray* m_unk37c0;
    int m_unk37c8;
    int m_unk37cc;
    cocos2d::CCArray* m_circleWaveArray;
    cocos2d::CCArray* m_unk37d8;
    int m_unk37e0;
    int m_unk37e4;
    float m_unk37e8;
    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    bool m_0126;
    cocos2d::CCSprite* m_progressBar;
    cocos2d::CCSprite* m_progressFill;
    GEODE_PAD(101);
    bool m_hasCompletedLevel;
    GEODE_PAD(6);
    bool m_endLayerStars;
    GEODE_PAD(98);
    bool m_isPaused;
private:
    cocos2d::CCDictionary* m_colorKeyDict;
public:
private:
    gd::vector<int> m_keyColors;
public:
private:
    gd::vector<int> m_keyOpacities;
public:
private:
    gd::vector<int> m_keyPulses;
public:
private:
    int m_nextColorKey;
public:
    GEODE_PAD(36);
};
