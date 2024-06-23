#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJGameState.hpp"
#include "PlayerButtonCommand.hpp"
#include "TriggerEffectDelegate.hpp"

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJBaseGameLayer* get();
    
private:
    [[deprecated("GJBaseGameLayer::activateCustomRing not implemented")]]
    /**
     * @note[short] Android
     */
    void activateCustomRing(RingObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatedAudioTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateEventTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateEventTrigger(EventLinkTrigger* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemCompareTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemCompareTrigger(ItemTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateItemEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateItemEditTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateObjectControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePersistentItemTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activatePersistentItemTrigger(ItemTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activatePlayerControlTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void activatePlayerControlTrigger(PlayerControlGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateResetTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateResetTrigger(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateSFXEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void activateSFXEditTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateSFXTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x230d50
     * @note[short] Android
     */
    void activateSFXTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateSongEditTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x230f50
     * @note[short] Android
     */
    void activateSongEditTrigger(SongTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateSongTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x2306d0
     * @note[short] Android
     */
    void activateSongTrigger(SongTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::activateTimerTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateTimerTrigger(TimerTriggerGameObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJAreaActionType p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    void addCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addGuideArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGuideArt(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addObjectCounter not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x141020
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addPickupTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPickupTrigger(CountTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addPoints not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addPoints(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addProximityVolumeEffect not implemented")]]
    /**
     * @note[short] Android
     */
    void addProximityVolumeEffect(int p0, int p1, SFXTriggerGameObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addRemapTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRemapTargets(gd::set<int>& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToGroupParents not implemented")]]
    /**
     * @note[short] Android
     */
    void addToGroupParents(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToGroups not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1319f0
     * @note[short] Windows: 0x214730
     * @note[short] Android
     */
    void addToGroups(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addToObjectsToShow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToObjectsToShow(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::addUIObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addUIObject(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateInDualGroundNew not implemented")]]
    /**
     * @note[short] Windows: 0x203ed0
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* p0, float p1, bool p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateInGroundNew not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animateInGroundNew(bool p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animateOutGroundNew not implemented")]]
    /**
     * @note[short] Android
     */
    void animateOutGroundNew(bool p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::animatePortalY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn animatePortalY(float p0, float p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyLevelSettings not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyLevelSettings(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applyRemap(EffectGameObject* p0, gd::vector<int> const& p1, gd::unordered_map<int, int>& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applySFXEditTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void applySFXEditTrigger(int p0, int p1, SFXTriggerGameObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::applyShake not implemented")]]
    /**
     * @note[short] Android
     */
    void applyShake(cocos2d::CCPoint& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::assignNewStickyGroups not implemented")]]
    /**
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncBGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncBGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::asyncMGLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn asyncMGLoaded(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::atlasValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn atlasValue(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xf8a24
     * @note[short] MacOS (Intel): 0x11c6d0
     * @note[short] Windows: 0x208260
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::buttonIDToButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonIDToButton(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::calculateColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateColorGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveX(float p0, float p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::cameraMoveY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn cameraMoveY(float p0, float p1, float p2, bool p3);
public:

    /**
     * @note[short] MacOS (ARM): 0xf8624
     * @note[short] MacOS (Intel): 0x11c270
     * @note[short] Windows: 0x208150
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::canProcessSFX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canProcessSFX(SFXTriggerState& p0, gd::unordered_map<int, int>& p1, gd::unordered_map<int, float>& p2, gd::vector<SFXTriggerState>& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::canTouchObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canTouchObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xf2bcc
     * @note[short] MacOS (Intel): 0x115690
     * @note[short] Windows: 0x229770
     * @note[short] Android
     */
    TodoReturn checkCameraLimitAfterTeleport(PlayerObject* p0, float p1);
    
private:
    [[deprecated("GJBaseGameLayer::checkCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkCollision(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkCollisionBlocks not implemented")]]
    /**
     * @note[short] Windows: 0x209650
     * @note[short] Android
     */
    TodoReturn checkCollisionBlocks(EffectGameObject* p0, gd::vector<EffectGameObject*>* p1, int p2);
public:

    /**
     * @note[short] MacOS (ARM): 0xf661c
     * @note[short] MacOS (Intel): 0x119810
     * @note[short] Windows: 0x204350
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* p0, float p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::checkRepellPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x2294a0
     * @note[short] Android
     */
    TodoReturn checkRepellPlayer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::checkSpawnObjects not implemented")]]
    /**
     * @note[short] Windows: 0x20b080
     * @note[short] Android
     */
    TodoReturn checkSpawnObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimMoveAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimMoveAction(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimParticle(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::claimRotationAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimRotationAction(int p0, int p1, float& p2, float& p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::clearActivatedAudioTriggers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearActivatedAudioTriggers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::clearPickedUpItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn clearPickedUpItems();
public:
    
private:
    [[deprecated("GJBaseGameLayer::collectedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectedObject(EffectGameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xf7500
     * @note[short] MacOS (Intel): 0x11a8f0
     * @note[short] Windows: 0x205420
     * @note[short] Android
     */
    void collisionCheckObjects(PlayerObject* p0, gd::vector<GameObject*>* p1, int p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::controlAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAdvancedFollowCommand(AdvancedFollowTriggerObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffect(EnterEffectObject* p0, gd::vector<EnterEffectInstance>* p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlAreaEffectWithID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlAreaEffectWithID(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicCommand(EffectGameObject* p0, int p1, gd::vector<DynamicObjectAction>& p2, GJActionCommand p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicMoveCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlDynamicRotateCommand(EffectGameObject* p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlEventLink not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlEventLink(int p0, int p1, GJActionCommand p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlGradientTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlGradientTrigger(GradientTriggerObject* p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersInGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersInGroup(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::controlTriggersWithControlID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn controlTriggersWithControlID(int p0, GJActionCommand p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::convertToClosestDirection not implemented")]]
    /**
     * @note[short] Windows: 0x21f0b0
     * @note[short] Android
     */
    TodoReturn convertToClosestDirection(float p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xe7620
     * @note[short] MacOS (Intel): 0x107650
     * @note[short] Windows: 0x1fc5d0
     * @note[short] Android
     */
    void createBackground(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::createGroundLayer not implemented")]]
    /**
     * @note[short] Windows: 0x1fca10
     * @note[short] Android
     */
    void createGroundLayer(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createMiddleground not implemented")]]
    /**
     * @note[short] Windows: 0x1fc890
     * @note[short] Android
     */
    void createMiddleground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createNewKeyframeAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();
public:
    
private:
    [[deprecated("GJBaseGameLayer::createParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::createPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x1fc0c0
     * @note[short] Android
     */
    TodoReturn createPlayer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::createPlayerCollisionBlock not implemented")]]
    /**
     * @note[short] Windows: 0x208c00
     * @note[short] Android
     */
    TodoReturn createPlayerCollisionBlock();
public:
    
private:
    [[deprecated("GJBaseGameLayer::createTextLayers not implemented")]]
    /**
     * @note[short] Windows: 0x1ffa50
     * @note[short] Android
     */
    void createTextLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::damagingObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn damagingObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::destroyObject not implemented")]]
    /**
     * @note[short] Windows: 0x206b50
     * @note[short] Android
     */
    void destroyObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xfa400
     * @note[short] MacOS (Intel): 0x11e160
     * @note[short] Android
     */
    void enterDualMode(GameObject* p0, bool p1);
    
private:
    [[deprecated("GJBaseGameLayer::exitStaticCamera not implemented")]]
    /**
     * @note[short] Windows: 0x22e7a0
     * @note[short] Android
     */
    void exitStaticCamera(bool p0, bool p1, float p2, int p3, float p4, bool p5, float p6, bool p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::flipFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipFinished();
public:

    /**
     * @note[short] MacOS (ARM): 0xf58a4
     * @note[short] MacOS (Intel): 0x118870
     * @note[short] Windows: 0x203660
     * @note[short] Android
     */
    void flipGravity(PlayerObject* p0, bool p1, bool p2);
    
private:
    [[deprecated("GJBaseGameLayer::flipObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::gameEventToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gameEventToString(GJGameEvent p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xf2c98
     * @note[short] MacOS (Intel): 0x115740
     * @note[short] Windows: 0x221fb0
     * @note[short] Android
     */
    void gameEventTriggered(GJGameEvent p0, int p1, int p2);
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffer(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateEnterEasingBuffers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateEnterEasingBuffers(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generatePickupAnimRandVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generatePickupAnimRandVal(GameObject* p0, float& p1, float& p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateSpawnRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateSpawnRemap();
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateTargetGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateTargetGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::generateVisibilityGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn generateVisibilityGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getActiveOrderSpawnObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveOrderSpawnObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getAreaObjectValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAreaObjectValue(EnterEffectInstance* p0, GameObject* p1, cocos2d::CCPoint& p2, bool& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getBumpMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBumpMod(PlayerObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCameraEdgeValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCameraEdgeValue(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCapacityString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCapacityString();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCenterGroupObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCenterGroupObject(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEasedAreaValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEasedAreaValue(GameObject* p0, EnterEffectInstance* p1, float p2, bool p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingKey(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getEnterEasingValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEnterEasingValue(float p0, int p1, float p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getFollowSpeedVal not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getFollowSpeedVal(GameObject* p0, int p1, int p2, float p3, float p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeight not implemented")]]
    /**
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroundHeightForMode not implemented")]]
    /**
     * @note[short] Windows: 0x2028b0
     * @note[short] Android
     */
    TodoReturn getGroundHeightForMode(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroup not implemented")]]
    /**
     * @note[short] Windows: 0x214a70
     * @note[short] Android
     */
    TodoReturn getGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getGroupParentsString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupParentsString(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getItemValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getItemValue(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMaxPortalY not implemented")]]
    /**
     * @note[short] Windows: 0x2042d0
     * @note[short] Android
     */
    float getMaxPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMinDistance not implemented")]]
    /**
     * @note[short] Windows: 0x231ac0
     * @note[short] Android
     */
    TodoReturn getMinDistance(cocos2d::CCPoint p0, cocos2d::CCArray* p1, float p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMinPortalY not implemented")]]
    /**
     * @note[short] Windows: 0x2041f0
     * @note[short] Android
     */
    float getMinPortalY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getModifiedDelta not implemented")]]
    /**
     * @note[short] Windows: 0x227730
     * @note[short] Android
     */
    float getModifiedDelta(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getMoveTargetDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMoveTargetDelta(EffectGameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getOptimizedGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOptimizedGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getOtherPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOtherPlayer(PlayerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getParticleKey2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParticleKey2(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayerButtonID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayerButtonID(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerFullSeconds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerFullSeconds();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPlayTimerMilli not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPlayTimerMilli();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTarget not implemented")]]
    /**
     * @note[short] Android
     */
    TeleportPortalObject* getPortalTarget(TeleportPortalObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getPortalTargetPos not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalTargetPos(TeleportPortalObject* p0, GameObject* p1, PlayerObject* p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRecordString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRecordString();
public:
    
private:
    [[deprecated("GJBaseGameLayer::getRotateCommandTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRotateCommandTargets(EnhancedTriggerObject* p0, GameObject*& p1, GameObject*& p2, GameObject*& p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSavedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedPosition(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getScaledGroundHeight not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScaledGroundHeight(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSingleGroupObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSingleGroupObject(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getSpecialKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialKey(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getStaticGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStaticGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getStickyGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStickyGroup(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetFlyCameraY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetFlyCameraY(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroup(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::getTargetGroupOrigin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetGroupOrigin(int p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xf8c48
     * @note[short] MacOS (Intel): 0x11c8e0
     * @note[short] Android
     */
    TodoReturn gravBumpPlayer(PlayerObject* p0, EffectGameObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::groupStickyObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x114ea0
     * @note[short] MacOS (Intel): 0x13fc40
     * @note[short] Windows: 0x2238a0
     * @note[short] Android
     */
    void handleButton(bool down, int button, bool isPlayer1);
    
private:
    [[deprecated("GJBaseGameLayer::hasItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasItem(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::hasUniqueCoin not implemented")]]
    /**
     * @note[short] Windows: 0x207020
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::increaseBatchNodeCapacity not implemented")]]
    /**
     * @note[short] Windows: 0x1fd9d0
     * @note[short] Android
     */
    void increaseBatchNodeCapacity();
public:
    
private:
    [[deprecated("GJBaseGameLayer::isFlipping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isFlipping();
public:
    
private:
    [[deprecated("GJBaseGameLayer::isPlayer2Button not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPlayer2Button(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::lightningFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadGroupParentsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadGroupParentsFromString(GameObject* p0, gd::string p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x11edfc
     * @note[short] MacOS (Intel): 0x14cce0
     * @note[short] Windows: 0x229e30
     * @note[short] Android
     */
    void loadLevelSettings();
    
private:
    [[deprecated("GJBaseGameLayer::loadStartPosObject not implemented")]]
    /**
     * @note[short] Windows: 0x225710
     * @note[short] Android
     */
    void loadStartPosObject();
public:
    
private:
    [[deprecated("GJBaseGameLayer::loadUpToPosition not implemented")]]
    /**
     * @note[short] Windows: 0x2258b0
     * @note[short] Android
     */
    TodoReturn loadUpToPosition(float p0, int p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::maxZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn maxZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::minZOrderForShaderZ not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn minZOrderForShaderZ(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyGroupPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyGroupPhysics(AdvancedFollowEditObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::modifyObjectPhysics not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modifyObjectPhysics(AdvancedFollowEditObject* p0, GameObjectPhysics& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveAreaObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveAreaObject(GameObject* p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveCameraToPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn moveCameraToPos(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObject not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObject(GameObject* p0, double p1, double p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* p0, double p1, double p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::moveObjectsSilent not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObjectsSilent(int p0, double p1, double p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::objectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectIntersectsCircle(GameObject* p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xf5ca0
     * @note[short] MacOS (Intel): 0x118d00
     * @note[short] Windows: 0x222520
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::optimizeMoveGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn optimizeMoveGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::orderSpawnObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn orderSpawnObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2, int p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x11a3b8
     * @note[short] MacOS (Intel): 0x146fa0
     * @note[short] Windows: 0x227430
     * @note[short] Android
     */
    void pauseAudio();
    
private:
    [[deprecated("GJBaseGameLayer::performMathOperation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathOperation(double p0, double p1, int p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::performMathRounding not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performMathRounding(double p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::pickupItem not implemented")]]
    /**
     * @note[short] Windows: 0x206c70
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playAnimationCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playAnimationCommand(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerCircleCollision not implemented")]]
    /**
     * @note[short] Windows: 0x202950
     * @note[short] Android
     */
    TodoReturn playerCircleCollision(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIntersectsCircle(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    void playerTouchedObject(PlayerObject* p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xf8dd0
     * @note[short] MacOS (Intel): 0x11ca30
     * @note[short] Windows: 0x2086d0
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* p0, RingObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::playerTouchedTrigger not implemented")]]
    /**
     * @note[short] Windows: 0x2087e0
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* p0, EffectGameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerWasTouchingObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerWasTouchingObject(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playerWillSwitchMode not implemented")]]
    /**
     * @note[short] Windows: 0x203a50
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playExitDualEffect not implemented")]]
    /**
     * @note[short] Windows: 0x207710
     * @note[short] Android
     */
    void playExitDualEffect(PlayerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playFlashEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playFlashEffect(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playKeyframeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playKeyframeAnimation(KeyframeAnimTriggerObject* p0, gd::vector<int> const& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::playSpeedParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playSpeedParticle(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::positionForShaderTarget not implemented")]]
    /**
     * @note[short] Windows: 0x213d40
     * @note[short] Android
     */
    TodoReturn positionForShaderTarget(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::positionUIObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionUIObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::prepareSavePositionObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareSavePositionObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::prepareTransformParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn prepareTransformParent(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x11a3ac
     * @note[short] Android
     */
    TodoReturn preResumeGame();
    
private:
    [[deprecated("GJBaseGameLayer::preUpdateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preUpdateVisibility(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processActivatedAudioTriggers not implemented")]]
    /**
     * @note[short] Windows: 0x232a70
     * @note[short] Android
     */
    void processActivatedAudioTriggers(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowAction(AdvancedFollowInstance& p0, bool p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAdvancedFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAdvancedFollowActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaActions(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaEffects not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1358e0
     * @note[short] Android
     */
    TodoReturn processAreaEffects(gd::vector<EnterEffectInstance>* p0, GJAreaActionType p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaFadeGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaFadeGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaMoveGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaMoveGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaRotateGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaRotateGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTintGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTintGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaTransformGroupAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processAreaTransformGroupAction(cocos2d::CCArray* p0, EnterEffectInstance* p1, cocos2d::CCPoint p2, int p3, int p4, int p5, int p6, int p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processAreaVisualActions not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1389e0
     * @note[short] Android
     */
    TodoReturn processAreaVisualActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processCameraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processCameraObject(GameObject* p0, PlayerObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x11b6d8
     * @note[short] MacOS (Intel): 0x148740
     * @note[short] Windows: 0x229830
     * @note[short] Android
     */
    void processCommands(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::processDynamicObjectActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processDynamicObjectActions(int p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processFollowActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processItems not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processItems();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processMoveActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processMoveActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processMoveActionsStep not implemented")]]
    /**
     * @note[short] Windows: 0x21bde0
     * @note[short] Android
     */
    TodoReturn processMoveActionsStep(float p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processOptionsTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processOptionsTrigger(GameOptionsTrigger* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processPlayerFollowActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processPlayerFollowActions(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processQueuedAudioTriggers not implemented")]]
    /**
     * @note[short] Windows: 0x22ac10
     * @note[short] Android
     */
    void processQueuedAudioTriggers();
public:

    /**
     * @note[short] MacOS (ARM): 0x114e04
     * @note[short] MacOS (Intel): 0x13fbc0
     * @note[short] Windows: 0x221f00
     * @note[short] Android
     */
    TodoReturn processQueuedButtons();
    
private:
    [[deprecated("GJBaseGameLayer::processRotationActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processRotationActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSFXObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSFXObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSFXState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSFXState(SFXTriggerState* p0, SFXTriggerState* p1, int p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processSongState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSongState(int p0, float p1, float p2, int p3, float p4, float p5, gd::vector<SongTriggerState>* p6);
public:
    
private:
    [[deprecated("GJBaseGameLayer::processStateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processStateObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::processTransformActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processTransformActions(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x114c98
     * @note[short] MacOS (Intel): 0x13fa20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueButton(int button, bool push, bool isPlayer2);
    
private:
    [[deprecated("GJBaseGameLayer::reAddToStickyGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reAddToStickyGroup(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::recordAction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recordAction(int p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rectIntersectsCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x117998
     * @note[short] Windows: 0x225560
     * @note[short] Android
     */
    void refreshCounterLabels();

    /**
     * @note[short] MacOS (ARM): 0xeecfc
     * @note[short] MacOS (Intel): 0x111860
     * @note[short] Android
     */
    void refreshKeyframeAnims();
    
private:
    [[deprecated("GJBaseGameLayer::regenerateEnterEasingBuffers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn regenerateEnterEasingBuffers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::registerSpawnRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerSpawnRemap(gd::vector<ChanceObject>& p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::registerStateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerStateObject(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeBackground();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeCustomEnterEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeCustomEnterEffects(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeFromGroupParents not implemented")]]
    /**
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeFromGroups not implemented")]]
    /**
     * @note[short] Windows: 0x2148b0
     * @note[short] Android
     */
    void removeFromGroups(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeFromStickyGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeFromStickyGroup(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeGroundLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGroundLayer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeKeyframe not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeKeyframe(KeyframeGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeMiddleground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeMiddleground();
public:

    /**
     * @note[short] MacOS (ARM): 0xfb364
     * @note[short] MacOS (Intel): 0x1332c0
     * @note[short] Windows: 0x2175f0
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::removePlayer2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlayer2();
public:
    
private:
    [[deprecated("GJBaseGameLayer::removeTemporaryParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeTemporaryParticles();
public:
    
private:
    [[deprecated("GJBaseGameLayer::reorderObjectSection not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x11f2d0
     * @note[short] Android
     */
    TodoReturn reorderObjectSection(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x63fd70
     * @note[short] Android
     */
    TodoReturn reparentObject(cocos2d::CCNode* p0, cocos2d::CCNode* p1);

    /**
     * @note[short] MacOS (ARM): 0xef414
     * @note[short] Windows: 0x1ff150
     * @note[short] Android
     */
    void resetActiveEnterEffects();
    
private:
    [[deprecated("GJBaseGameLayer::resetAreaObjectValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAreaObjectValues(GameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x11a408
     * @note[short] MacOS (Intel): 0x147000
     * @note[short] Windows: 0x227690
     * @note[short] Android
     */
    void resetAudio();

    /**
     * @note[short] MacOS (ARM): 0x11fd2c
     * @note[short] MacOS (Intel): 0x14e1b0
     * @note[short] Windows: 0x22ec30
     * @note[short] Android
     */
    void resetCamera();
    
private:
    [[deprecated("GJBaseGameLayer::resetGradientLayers not implemented")]]
    /**
     * @note[short] Windows: 0x211790
     * @note[short] Android
     */
    void resetGradientLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetGroupCounters not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupCounters(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x11f244
     * @note[short] MacOS (Intel): 0x14d150
     * @note[short] Windows: 0x22a170
     * @note[short] iOS: 0x20c9c8
     * @note[short] Android
     */
    void resetLevelVariables();
    
private:
    [[deprecated("GJBaseGameLayer::resetMoveOptimizedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOptimizedValue();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x202c10
     * @note[short] Android
     */
    void resetPlayer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetSongTriggerValues not implemented")]]
    /**
     * @note[short] Windows: 0x5ceb0
     * @note[short] Android
     */
    void resetSongTriggerValues();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetSpawnChannelIndex not implemented")]]
    /**
     * @note[short] Windows: 0x234ed0
     * @note[short] Android
     */
    TodoReturn resetSpawnChannelIndex();
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStaticCamera not implemented")]]
    /**
     * @note[short] Windows: 0x22eef0
     * @note[short] Android
     */
    void resetStaticCamera(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resetStoppedAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStoppedAreaObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreAllUIObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreAllUIObjects();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreDefaultGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreDefaultGameplayOffsetY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::restoreRemap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restoreRemap(EffectGameObject* p0, gd::unordered_map<int, int>& p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::resumeAudio not implemented")]]
    /**
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x227580
     * @note[short] Android
     */
    void resumeAudio();
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, bool p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotateObject(GameObject* p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::rotateObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, cocos2d::CCPoint p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::setGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    void setGroupParent(GameObject* p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xf48a8
     * @note[short] MacOS (Intel): 0x1176d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setStartPosObject(StartPosObject* startPos);

    /**
     * @note[short] MacOS (ARM): 0xe4c84
     * @note[short] Windows: 0x1f9870
     * @note[short] Android
     */
    void setupLayers();

    /**
     * @note[short] MacOS (ARM): 0xf48f0
     * @note[short] Windows: 0x202d80
     * @note[short] Android
     */
    void setupLevelStart(LevelSettingsObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::setupReplay not implemented")]]
    /**
     * @note[short] Windows: 0x229a20
     * @note[short] Android
     */
    void setupReplay(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::shakeCamera not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x14f790
     * @note[short] Android
     */
    TodoReturn shakeCamera(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::shouldExitHackedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldExitHackedLevel();
public:
    
private:
    [[deprecated("GJBaseGameLayer::sortAllGroupsX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortAllGroupsX();
public:
    
private:
    [[deprecated("GJBaseGameLayer::sortGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortGroups();
public:

    /**
     * @note[short] MacOS (ARM): 0x10bec0
     * @note[short] Windows: 0x217830
     * @note[short] Android
     */
    TodoReturn sortSectionVector();
    
private:
    [[deprecated("GJBaseGameLayer::sortStickyGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn sortStickyGroups();
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnGroupTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    void spawnGroupTriggered(int groupID, float p1, bool p2, gd::vector<int> const& p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnObjectsInOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnObjectsInOrder(cocos2d::CCArray* p0, double p1, gd::vector<int> const& p2, int p3, int p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticle not implemented")]]
    /**
     * @note[short] Android
     */
    void spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(int p0, cocos2d::CCPoint p1, float p2, float p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnParticleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnParticleTrigger(SpawnParticleGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::spawnPlayer2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnPlayer2();
public:
    
private:
    [[deprecated("GJBaseGameLayer::speedForShaderTarget not implemented")]]
    /**
     * @note[short] Windows: 0x213df0
     * @note[short] Android
     */
    TodoReturn speedForShaderTarget(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::staticObjectsInRect not implemented")]]
    /**
     * @note[short] Windows: 0x201e90
     * @note[short] Android
     */
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopAllGroundActions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAllGroundActions();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCameraShake not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCameraShake();
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopCustomEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopCustomEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::stopSFXTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopSFXTrigger(SFXTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapBackground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapBackground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapGround(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::swapMiddleground not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMiddleground(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::switchToFlyMode not implemented")]]
    /**
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::switchToRobotMode not implemented")]]
    /**
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::switchToRollMode not implemented")]]
    /**
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::switchToSpiderMode not implemented")]]
    /**
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x11f12c
     * @note[short] Windows: 0x22a0d0
     * @note[short] Android
     */
    TodoReturn syncBGTextures();

    /**
     * @note[short] MacOS (ARM): 0xf2288
     * @note[short] Windows: 0x200b70
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* p0, PlayerObject* p1);
    
private:
    [[deprecated("GJBaseGameLayer::testInstantCountTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4, gd::vector<int> const& p5, int p6, int p7);
public:

    /**
     * @note[short] MacOS (ARM): 0xe4b14
     * @note[short] MacOS (Intel): 0x1047d0
     * @note[short] Windows: 0x237b90
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xf5020
     * @note[short] MacOS (Intel): 0x117fa0
     * @note[short] Windows: 0x207160
     * @note[short] Android
     */
    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);
    
private:
    [[deprecated("GJBaseGameLayer::toggleFlipped not implemented")]]
    /**
     * @note[short] Windows: 0x235880
     * @note[short] Android
     */
    void toggleFlipped(bool p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleGroup not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x131520
     * @note[short] Android
     */
    TodoReturn toggleGroup(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::toggleLockPlayer not implemented")]]
    /**
     * @note[short] Windows: 0x37d510
     * @note[short] Android
     */
    TodoReturn toggleLockPlayer(bool p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x10994c
     * @note[short] MacOS (Intel): 0x131910
     * @note[short] Android
     */
    void togglePlayerStreakBlend(bool p0);
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible, bool player1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::togglePlayerVisibility not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible);
public:
    
private:
    [[deprecated("GJBaseGameLayer::transformAreaObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformAreaObjects(GameObject* p0, cocos2d::CCArray* p1, float p2, float p3, bool p4);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAdvancedFollowEditCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerAreaEffectAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerAreaEffectAnimation(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerDynamicRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerDynamicRotateCommand(EnhancedTriggerObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x106014
     * @note[short] MacOS (Intel): 0x12d9e0
     * @note[short] Windows: 0x210020
     * @note[short] Android
     */
    TodoReturn triggerGradientCommand(GradientTriggerObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::triggerGravityChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerGravityChange(EffectGameObject* p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerMoveCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerMoveCommand(EffectGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerRotateCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerRotateCommand(EnhancedTriggerObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerShaderCommand not implemented")]]
    /**
     * @note[short] Android
     */
    bool triggerShaderCommand(ShaderGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::triggerTransformCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerTransformCommand(TransformTriggerGameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetGroupParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryGetGroupParent(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetMainObject not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x11ea90
     * @note[short] Windows: 0x214d10
     * @note[short] Android
     */
    TodoReturn tryGetMainObject(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryGetObject not implemented")]]
    /**
     * @note[short] Windows: 0x214d80
     * @note[short] Android
     */
    TodoReturn tryGetObject(int p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::tryResumeAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryResumeAudio();
public:
    
private:
    [[deprecated("GJBaseGameLayer::unclaimParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::ungroupStickyObjects not implemented")]]
    /**
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::unlinkAllEvents not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlinkAllEvents();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateActiveEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActiveEnterEffect(EnterEffectObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAllObjectSection not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAllObjectSection();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAreaObjectLastValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateAreaObjectLastValues(GameObject* p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateAudioVisualizer not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1485d0
     * @note[short] Windows: 0x237930
     * @note[short] Android
     */
    TodoReturn updateAudioVisualizer();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateBGArtSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBGArtSpeed(float p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x11bb40
     * @note[short] MacOS (Intel): 0x148c00
     * @note[short] Windows: 0x22ae20
     * @note[short] Android
     */
    void updateCamera(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraBGArt not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraBGArt(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraEdge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCameraEdge(int p0, int p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCameraMode not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x118618
     * @note[short] MacOS (Intel): 0x144270
     * @note[short] Windows: 0x225f20
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetX(float p0, float p1, int p2, float p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x1186ec
     * @note[short] MacOS (Intel): 0x144370
     * @note[short] Windows: 0x225fc0
     * @note[short] Android
     */
    TodoReturn updateCameraOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
    
private:
    [[deprecated("GJBaseGameLayer::updateCollisionBlocks not implemented")]]
    /**
     * @note[short] Windows: 0x209060
     * @note[short] Android
     */
    TodoReturn updateCollisionBlocks();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateCounters not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCounters(int p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0xf568c
     * @note[short] MacOS (Intel): 0x118660
     * @note[short] Windows: 0x203ce0
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* p0, int p1, bool p2, float p3);
    
private:
    [[deprecated("GJBaseGameLayer::updateEnterEffects not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x113110
     * @note[short] Android
     */
    TodoReturn updateEnterEffects(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtendedCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateExtendedCollision(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateExtraGameLayers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateExtraGameLayers();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetX(int p0, bool p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGameplayOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayOffsetY(int p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1066a4
     * @note[short] MacOS (Intel): 0x12e160
     * @note[short] Windows: 0x2104b0
     * @note[short] Android
     */
    TodoReturn updateGradientLayers();
    
private:
    [[deprecated("GJBaseGameLayer::updateGroundShadows not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroundShadows();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateGuideArt not implemented")]]
    /**
     * @note[short] Windows: 0x235770
     * @note[short] Android
     */
    TodoReturn updateGuideArt();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetX(float p0, float p1, float p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateInternalCamOffsetY not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInternalCamOffsetY(float p0, float p1, float p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x115808
     * @note[short] Android
     */
    TodoReturn updateKeyframeOrder(int p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateLayerCapacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLayerCapacity(gd::string p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateLegacyLayerCapacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateLevelColors not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x1078c0
     * @note[short] Windows: 0x1fd240
     * @note[short] Android
     */
    TodoReturn updateLevelColors();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMaxGameplayY not implemented")]]
    /**
     * @note[short] Windows: 0x229ff0
     * @note[short] Android
     */
    void updateMaxGameplayY();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMGArtSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMGArtSpeed(float p0, float p1);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateMGOffsetY not implemented")]]
    /**
     * @note[short] Windows: 0x226060
     * @note[short] Android
     */
    void updateMGOffsetY(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateOBB2 not implemented")]]
    /**
     * @note[short] Windows: 0x6c560
     * @note[short] Android
     */
    TodoReturn updateOBB2(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateParticles not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x152c60
     * @note[short] Android
     */
    TodoReturn updateParticles(float p0);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updatePlatformerTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlatformerTime();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updatePlayerCollisionBlocks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerCollisionBlocks();
public:

    /**
     * @note[short] MacOS (ARM): 0x11dcb4
     * @note[short] Windows: 0x231420
     * @note[short] Android
     */
    void updateProximityVolumeEffects();
    
private:
    [[deprecated("GJBaseGameLayer::updateQueuedLabels not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateQueuedLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateReplay not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateReplay();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateSavePositionObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSavePositionObjects();
public:

    /**
     * @note[short] MacOS (ARM): 0x107d80
     * @note[short] MacOS (Intel): 0x12fdd0
     * @note[short] Windows: 0x212aa0
     * @note[short] Android
     */
    TodoReturn updateShaderLayer(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateSpecialGroupData not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x10aa20
     * @note[short] Windows: 0x1fecf0
     * @note[short] Android
     */
    TodoReturn updateSpecialGroupData();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateSpecialLabels not implemented")]]
    /**
     * @note[short] Windows: 0x228fb0
     * @note[short] Android
     */
    TodoReturn updateSpecialLabels();
public:

    /**
     * @note[short] MacOS (ARM): 0xf60ec
     * @note[short] MacOS (Intel): 0x1191c0
     * @note[short] Windows: 0x22e360
     * @note[short] Android
     */
    void updateStaticCameraPos(cocos2d::CCPoint p0, bool p1, bool p2, bool p3, float p4, int p5, float p6);
    
private:
    [[deprecated("GJBaseGameLayer::updateStaticCameraPosToGroup not implemented")]]
    /**
     * @note[short] Windows: 0x22df70
     * @note[short] Android
     */
    TodoReturn updateStaticCameraPosToGroup(int p0, bool p1, bool p2, bool p3, float p4, float p5, int p6, float p7, bool p8, float p9);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimeMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateTimeMod(float p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateTimerLabels not implemented")]]
    /**
     * @note[short] Windows: 0x2251f0
     * @note[short] Android
     */
    TodoReturn updateTimerLabels();
public:
    
private:
    [[deprecated("GJBaseGameLayer::updateZoom not implemented")]]
    /**
     * @note[short] Windows: 0x225ca0
     * @note[short] Android
     */
    void updateZoom(float p0, float p1, int p2, float p3, int p4, int p5);
public:
    
private:
    [[deprecated("GJBaseGameLayer::visitWithColorFlash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn visitWithColorFlash();
public:
    
private:
    [[deprecated("GJBaseGameLayer::volumeForProximityEffect not implemented")]]
    /**
     * @note[short] Windows: 0x2316f0
     * @note[short] Android
     */
    TodoReturn volumeForProximityEffect(SFXTriggerInstance& p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x11a52c
     * @note[short] MacOS (Intel): 0x147140
     * @note[short] Windows: 0x2277d0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0xe38c8
     * @note[short] MacOS (Intel): 0x102b70
     * @note[short] Windows: 0x1f7dd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x127d48
     * @note[short] MacOS (Intel): 0x1581b0
     * @note[short] Windows: 0x235f90
     * @note[short] Android
     */
    virtual void visit();
    
private:
    [[deprecated("GJBaseGameLayer::postUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void postUpdate(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xdf6c8
     * @note[short] MacOS (Intel): 0xfd990
     * @note[short] Android
     */
    virtual TodoReturn checkForEnd();

    /**
     * @note[short] MacOS (ARM): 0xdf6cc
     * @note[short] MacOS (Intel): 0xfd9a0
     * @note[short] Android
     */
    virtual TodoReturn testTime();

    /**
     * @note[short] MacOS (ARM): 0xdf6d0
     * @note[short] MacOS (Intel): 0xfd9b0
     * @note[short] Android
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): 0xdf6d4
     * @note[short] MacOS (Intel): 0xfd9c0
     * @note[short] Android
     */
    virtual void updateAttemptTime(float p0);
    
private:
    [[deprecated("GJBaseGameLayer::updateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    virtual void updateVisibility(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xab56c
     * @note[short] MacOS (Intel): 0xc0020
     * @note[short] Android
     */
    virtual TodoReturn playerTookDamage(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x11a318
     * @note[short] MacOS (Intel): 0x146f00
     * @note[short] Windows: 0x2273b0
     * @note[short] Android
     */
    virtual TodoReturn opacityForObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xab570
     * @note[short] MacOS (Intel): 0xc0030
     * @note[short] Android
     */
    virtual TodoReturn addToSpeedObjects(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xfbafc
     * @note[short] MacOS (Intel): 0x11faa0
     * @note[short] Windows: 0x209900
     * @note[short] Android
     */
    virtual void objectsCollided(int p0, int p1);
    
private:
    [[deprecated("GJBaseGameLayer::updateColor not implemented")]]
    /**
     * @note[short] Windows: 0x214160
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& p0, float p1, int p2, bool p3, float p4, cocos2d::ccHSVValue& p5, int p6, bool p7, EffectGameObject* p8, int p9, int p10);
public:

    /**
     * @note[short] MacOS (ARM): 0x109540
     * @note[short] MacOS (Intel): 0x1314b0
     * @note[short] Windows: 0x214340
     * @note[short] Android
     */
    virtual void toggleGroupTriggered(int p0, bool p1, gd::vector<int> const& p2, int p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0xfcb44
     * @note[short] MacOS (Intel): 0x1210c0
     * @note[short] Windows: 0x20b310
     * @note[short] Android
     */
    virtual void spawnGroup(int p0, bool p1, double p2, gd::vector<int> const& p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0xfcf18
     * @note[short] MacOS (Intel): 0x121460
     * @note[short] Windows: 0x20b7d0
     * @note[short] Android
     */
    virtual void spawnObject(GameObject* p0, double p1, gd::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0xdf6d8
     * @note[short] MacOS (Intel): 0xfd9d0
     * @note[short] Android
     */
    virtual TodoReturn activateEndTrigger(int p0, bool p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xdf6dc
     * @note[short] MacOS (Intel): 0xfd9e0
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* p0, gd::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0xdf6e0
     * @note[short] MacOS (Intel): 0xfd9f0
     * @note[short] Android
     */
    virtual void toggleGlitter(bool p0);

    /**
     * @note[short] MacOS (ARM): 0xdf6e4
     * @note[short] MacOS (Intel): 0xfda00
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0xf2fe4
     * @note[short] MacOS (Intel): 0x115b10
     * @note[short] Windows: 0x2015c0
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x10b35c
     * @note[short] MacOS (Intel): 0x1336e0
     * @note[short] Windows: 0x216dc0
     * @note[short] Android
     */
    virtual void addToSection(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x109a60
     * @note[short] MacOS (Intel): 0x131a60
     * @note[short] Windows: 0x2147c0
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x109cb4
     * @note[short] MacOS (Intel): 0x131c90
     * @note[short] Windows: 0x214940
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x10c98c
     * @note[short] MacOS (Intel): 0x1357e0
     * @note[short] Windows: 0x2187e0
     * @note[short] Android
     */
    virtual TodoReturn updateObjectSection(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xab574
     * @note[short] MacOS (Intel): 0xc0040
     * @note[short] Android
     */
    virtual TodoReturn updateDisabledObjectsLastPos(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x1182dc
     * @note[short] MacOS (Intel): 0x143e70
     * @note[short] Android
     */
    virtual TodoReturn toggleGroundVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1182e0
     * @note[short] MacOS (Intel): 0x143e80
     * @note[short] Android
     */
    virtual TodoReturn toggleMGVisibility(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1182e4
     * @note[short] MacOS (Intel): 0x143e90
     * @note[short] Android
     */
    virtual TodoReturn toggleHideAttempts(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float posForTime(float p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x118430
     * @note[short] MacOS (Intel): 0x144030
     * @note[short] Windows: 0x225e30
     * @note[short] Android
     */
    virtual TodoReturn updateScreenRotation(float p0, bool p1, bool p2, float p3, int p4, float p5, int p6, int p7);

    /**
     * @note[short] MacOS (ARM): 0xfad8c
     * @note[short] MacOS (Intel): 0x11ec40
     * @note[short] Windows: 0x2089f0
     * @note[short] Android
     */
    virtual TodoReturn reverseDirection(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xfadd0
     * @note[short] MacOS (Intel): 0x11ec80
     * @note[short] Windows: 0x208a50
     * @note[short] Android
     */
    virtual TodoReturn rotateGameplay(RotateGameplayGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xab578
     * @note[short] MacOS (Intel): 0xc0050
     * @note[short] Android
     */
    virtual TodoReturn didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0x118a98
     * @note[short] MacOS (Intel): 0x1447d0
     * @note[short] Windows: 0x226110
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(float p0);

    /**
     * @note[short] MacOS (ARM): 0x118aa4
     * @note[short] MacOS (Intel): 0x1447b0
     * @note[short] Windows: 0x226100
     * @note[short] Android
     */
    virtual TodoReturn updateTimeWarp(GameObject* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x118ae0
     * @note[short] MacOS (Intel): 0x144820
     * @note[short] Windows: 0x226160
     * @note[short] Android
     */
    virtual TodoReturn applyTimeWarp(float p0);

    /**
     * @note[short] MacOS (ARM): 0xdf6e8
     * @note[short] MacOS (Intel): 0xfda10
     * @note[short] Android
     */
    virtual TodoReturn playGravityEffect(bool p0);
    
private:
    [[deprecated("GJBaseGameLayer::manualUpdateObjectColors not implemented")]]
    /**
     * @note[short] Android
     */
    virtual TodoReturn manualUpdateObjectColors(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1234a8
     * @note[short] MacOS (Intel): 0x152660
     * @note[short] Windows: 0x22fe90
     * @note[short] Android
     */
    virtual TodoReturn createCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x123828
     * @note[short] MacOS (Intel): 0x1529b0
     * @note[short] Windows: 0x230190
     * @note[short] Android
     */
    virtual TodoReturn claimCustomParticle(gd::string const& p0, cocos2d::ParticleStruct const& p1, int p2, int p3, int p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x123a68
     * @note[short] MacOS (Intel): 0x152bb0
     * @note[short] Windows: 0x230390
     * @note[short] Android
     */
    virtual TodoReturn unclaimCustomParticle(gd::string const& p0, cocos2d::CCParticleSystemQuad* p1);

    /**
     * @note[short] MacOS (ARM): 0x1247e0
     * @note[short] MacOS (Intel): 0x153b30
     * @note[short] Android
     */
    virtual TodoReturn activatedAudioTrigger(SFXTriggerGameObject* p0);
    
private:
    [[deprecated("GJBaseGameLayer::checkpointActivated not implemented")]]
    /**
     * @note[short] Windows: 0x235b70
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x127a88
     * @note[short] MacOS (Intel): 0x157ec0
     * @note[short] Android
     */
    virtual TodoReturn flipArt(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x115768
     * @note[short] MacOS (Intel): 0x1405b0
     * @note[short] Windows: 0x223b30
     * @note[short] Android
     */
    virtual TodoReturn addKeyframe(KeyframeGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xdf6ec
     * @note[short] MacOS (Intel): 0xfda20
     * @note[short] Android
     */
    virtual void updateTimeLabel(int p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0xdf6f0
     * @note[short] MacOS (Intel): 0xfda30
     * @note[short] Android
     */
    virtual TodoReturn checkSnapshot();

    /**
     * @note[short] MacOS (ARM): 0xdf6f4
     * @note[short] MacOS (Intel): 0xfda40
     * @note[short] Android
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): 0xdf6f8
     * @note[short] MacOS (Intel): 0xfda50
     * @note[short] Android
     */
    virtual TodoReturn toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0xdf6fc
     * @note[short] MacOS (Intel): 0xfda60
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0xdf700
     * @note[short] MacOS (Intel): 0xfda70
     * @note[short] Android
     */
    virtual TodoReturn toggleMusicInPractice();
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    PlaybackMode m_playbackMode;
    bool m_decimalPercentage;
    bool m_extraLDM;
    bool m_0173;
    GEODE_PAD(172);
    GJEffectManager* m_effectManager;
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk958;
    cocos2d::CCSpriteBatchNode* m_unk960;
    cocos2d::CCSpriteBatchNode* m_unk968;
    cocos2d::CCSpriteBatchNode* m_unk970;
    cocos2d::CCSpriteBatchNode* m_unk978;
    cocos2d::CCSpriteBatchNode* m_unk980;
    cocos2d::CCSpriteBatchNode* m_unk988;
    CCNodeContainer* m_unk990;
    cocos2d::CCSpriteBatchNode* m_unk998;
    cocos2d::CCSpriteBatchNode* m_unk9a0;
    cocos2d::CCSpriteBatchNode* m_unk9a8;
    cocos2d::CCSpriteBatchNode* m_unk9b0;
    cocos2d::CCSpriteBatchNode* m_unk9b8;
    cocos2d::CCSpriteBatchNode* m_unk9c0;
    cocos2d::CCSpriteBatchNode* m_unk9c8;
    cocos2d::CCSpriteBatchNode* m_unk9d0;
    cocos2d::CCSpriteBatchNode* m_unk9d8;
    cocos2d::CCSpriteBatchNode* m_unk9e0;
    cocos2d::CCSpriteBatchNode* m_unk9e8;
    cocos2d::CCSpriteBatchNode* m_unk9f0;
    cocos2d::CCSpriteBatchNode* m_unk9f8;
    CCNodeContainer* m_unka00;
    cocos2d::CCSpriteBatchNode* m_unka08;
    cocos2d::CCSpriteBatchNode* m_unka10;
    cocos2d::CCSpriteBatchNode* m_unka18;
    cocos2d::CCSpriteBatchNode* m_unka20;
    cocos2d::CCSpriteBatchNode* m_unka28;
    cocos2d::CCSpriteBatchNode* m_unka30;
    cocos2d::CCSpriteBatchNode* m_unka38;
    cocos2d::CCSpriteBatchNode* m_unka40;
    cocos2d::CCSpriteBatchNode* m_unka48;
    cocos2d::CCSpriteBatchNode* m_unka50;
    cocos2d::CCSpriteBatchNode* m_unka58;
    cocos2d::CCSpriteBatchNode* m_unka60;
    cocos2d::CCSpriteBatchNode* m_unka68;
    CCNodeContainer* m_unka70;
    cocos2d::CCSpriteBatchNode* m_unka78;
    cocos2d::CCSpriteBatchNode* m_unka80;
    cocos2d::CCSpriteBatchNode* m_unka88;
    cocos2d::CCSpriteBatchNode* m_unka90;
    cocos2d::CCSpriteBatchNode* m_unka98;
    cocos2d::CCSpriteBatchNode* m_unkaa0;
    cocos2d::CCSpriteBatchNode* m_unkaa8;
    cocos2d::CCSpriteBatchNode* m_unkab0;
    cocos2d::CCSpriteBatchNode* m_unkab8;
    cocos2d::CCSpriteBatchNode* m_unkac0;
    cocos2d::CCSpriteBatchNode* m_unkac8;
    cocos2d::CCSpriteBatchNode* m_unkad0;
    cocos2d::CCSpriteBatchNode* m_unkad8;
    CCNodeContainer* m_unkae0;
    cocos2d::CCSpriteBatchNode* m_unkae8;
    cocos2d::CCSpriteBatchNode* m_unkaf0;
    cocos2d::CCSpriteBatchNode* m_unkaf8;
    cocos2d::CCSpriteBatchNode* m_unkb00;
    cocos2d::CCSpriteBatchNode* m_unkb08;
    cocos2d::CCSpriteBatchNode* m_unkb10;
    cocos2d::CCSpriteBatchNode* m_unkb18;
    cocos2d::CCSpriteBatchNode* m_unkb20;
    cocos2d::CCSpriteBatchNode* m_unkb28;
    cocos2d::CCSpriteBatchNode* m_unkb30;
    cocos2d::CCSpriteBatchNode* m_unkb38;
    cocos2d::CCSpriteBatchNode* m_unkb40;
    cocos2d::CCSpriteBatchNode* m_unkb48;
    cocos2d::CCSpriteBatchNode* m_unkb50;
    void* m_unkb5c;
    cocos2d::CCSpriteBatchNode* m_unkb60;
    cocos2d::CCSpriteBatchNode* m_unkb68;
    cocos2d::CCSpriteBatchNode* m_unkb70;
    cocos2d::CCSpriteBatchNode* m_unkb78;
    CCNodeContainer* m_unkb80;
    cocos2d::CCSpriteBatchNode* m_unkb88;
    cocos2d::CCSpriteBatchNode* m_unkb90;
    cocos2d::CCSpriteBatchNode* m_unkb98;
    cocos2d::CCSpriteBatchNode* m_unkba0;
    cocos2d::CCSpriteBatchNode* m_unkba8;
    cocos2d::CCSpriteBatchNode* m_unkbb0;
    cocos2d::CCSpriteBatchNode* m_unkbb8;
    cocos2d::CCSpriteBatchNode* m_unkbc0;
    cocos2d::CCSpriteBatchNode* m_unkbc8;
    cocos2d::CCSpriteBatchNode* m_unkbd0;
    cocos2d::CCSpriteBatchNode* m_unkbd8;
    cocos2d::CCSpriteBatchNode* m_unkbe0;
    cocos2d::CCSpriteBatchNode* m_unkbe8;
    CCNodeContainer* m_unkbf0;
    cocos2d::CCSpriteBatchNode* m_unkbf8;
    cocos2d::CCSpriteBatchNode* m_unkc00;
    cocos2d::CCSpriteBatchNode* m_unkc08;
    cocos2d::CCSpriteBatchNode* m_unkc10;
    cocos2d::CCSpriteBatchNode* m_unkc18;
    cocos2d::CCSpriteBatchNode* m_unkc20;
    cocos2d::CCSpriteBatchNode* m_unkc28;
    cocos2d::CCSpriteBatchNode* m_unkc30;
    cocos2d::CCSpriteBatchNode* m_unkc38;
    cocos2d::CCSpriteBatchNode* m_unkc40;
    cocos2d::CCSpriteBatchNode* m_unkc48;
    cocos2d::CCSpriteBatchNode* m_unkc50;
    cocos2d::CCSpriteBatchNode* m_unkc58;
    CCNodeContainer* m_unkc60;
    cocos2d::CCSpriteBatchNode* m_unkc68;
    cocos2d::CCSpriteBatchNode* m_unkc70;
    cocos2d::CCSpriteBatchNode* m_unkc78;
    cocos2d::CCSpriteBatchNode* m_unkc80;
    cocos2d::CCSpriteBatchNode* m_unkc88;
    cocos2d::CCSpriteBatchNode* m_unkc90;
    cocos2d::CCSpriteBatchNode* m_unkc98;
    cocos2d::CCSpriteBatchNode* m_unkca0;
    cocos2d::CCSpriteBatchNode* m_unkca8;
    cocos2d::CCSpriteBatchNode* m_unkcb0;
    cocos2d::CCSpriteBatchNode* m_unkcb8;
    cocos2d::CCSpriteBatchNode* m_unkcc0;
    cocos2d::CCSpriteBatchNode* m_unkcc8;
    CCNodeContainer* m_unkcd0;
    cocos2d::CCSpriteBatchNode* m_unkcd8;
    cocos2d::CCSpriteBatchNode* m_unkce0;
    cocos2d::CCSpriteBatchNode* m_unkce8;
    cocos2d::CCSpriteBatchNode* m_unkcf0;
    cocos2d::CCSpriteBatchNode* m_unkcf8;
    cocos2d::CCSpriteBatchNode* m_unkd00;
    cocos2d::CCSpriteBatchNode* m_unkd08;
    cocos2d::CCSpriteBatchNode* m_unkd10;
    cocos2d::CCSpriteBatchNode* m_unkd18;
    cocos2d::CCSpriteBatchNode* m_unkd20;
    cocos2d::CCSpriteBatchNode* m_unkd28;
    cocos2d::CCSpriteBatchNode* m_unkd30;
    cocos2d::CCSpriteBatchNode* m_unkd38;
    CCNodeContainer* m_unkd40;
    cocos2d::CCSpriteBatchNode* m_unkd48;
    cocos2d::CCSpriteBatchNode* m_unkd50;
    cocos2d::CCSpriteBatchNode* m_unkd58;
    cocos2d::CCSpriteBatchNode* m_unkd60;
    cocos2d::CCSpriteBatchNode* m_unkd68;
    cocos2d::CCSpriteBatchNode* m_unkd70;
    cocos2d::CCSpriteBatchNode* m_unkd78;
    cocos2d::CCSpriteBatchNode* m_unkd80;
    cocos2d::CCSpriteBatchNode* m_unkd88;
    cocos2d::CCSpriteBatchNode* m_unkd90;
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_unknownCB0;
    cocos2d::CCArray* m_unknownCB8;
    cocos2d::CCDictionary* m_unknownCC0;
    cocos2d::CCNode* m_unknownCC8;
    gd::vector<GameObject*> m_unknownCD0;
    gd::vector<GameObject*> m_unknownCE8;
    gd::vector<GameObject*> m_unknownD00;
    gd::vector<GameObject*> m_unknownD18;
    gd::vector<GameObject*> m_unknownD30;
    gd::unordered_map<int, gd::vector<GameObject*>> m_unknownD48;
    gd::vector<GameObject*> m_unknownD70;
    gd::unordered_map<int, gd::vector<GameObject*>> m_unknownD88;
    GEODE_PAD(40);
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    gd::vector<cocos2d::CCArray*> m_groups;
    gd::vector<cocos2d::CCArray*> m_staticGroups;
    gd::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_unknownE38;
    cocos2d::CCDictionary* m_unknownE40;
    cocos2d::CCDictionary* m_unknownE48;
    cocos2d::CCArray* m_unknownE50;
    gd::unordered_map<int, std::pair<int, int>> m_unknownE58;
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_unknownE90;
    cocos2d::CCNode* m_unknownE98;
    cocos2d::CCNode* m_unknownEA0;
    cocos2d::CCLayer* m_objectLayer;
    cocos2d::CCLayer* m_unkff8;
    cocos2d::CCLayer* m_unk1000;
    cocos2d::CCSprite* m_unk1008;
    void* m_unk1010;
    GJGroundLayer* m_groundLayer;
    GJGroundLayer* m_groundLayer2;
    void* m_unk1028;
    cocos2d::CCArray* m_unk1030;
    cocos2d::CCDictionary* m_unk1038;
    void* m_unk1040;
    GEODE_PAD(100);
    std::array<float, 2000> m_massiveFloatArray;
    GEODE_PAD(112);
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    GEODE_PAD(156);
    cocos2d::CCDictionary* m_unk2a50;
    void* m_unk2a54;
    ShaderLayer* m_shaderLayer;
    GEODE_PAD(8);
    StartPosObject* m_startPosObject;
    GEODE_PAD(96);
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_loadingProgress;
    cocos2d::CCNode* m_unk2a84;
    int m_unk2a88;
    float m_unk2a8c;
    int m_unk2a90;
    int m_unk2a94;
    int m_unk2a98;
    cocos2d::CCDictionary* m_unk2a9c;
    float m_levelLength;
    int m_unk2aa4;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    bool m_unk3089;
    bool m_unk308a;
    int m_unk322c;
    int m_unk3230;
    bool m_unk3234;
    cocos2d::CCParticleSystemQuad* m_unk3238;
    int m_unk323c;
    GEODE_PAD(6);
    bool m_started;
    GEODE_PAD(160);
    gd::vector<PlayerButtonCommand> m_queuedButtons;
    GEODE_PAD(280);
    cocos2d::CCDictionary* m_unk3458;
    int m_unk3460;
    UILayer* m_uiLayer;
    cocos2d::CCArray* m_unk3470;
    cocos2d::CCDictionary* m_unk3478;
    cocos2d::CCNode* m_unk3480;
    float m_unk3484;
    GEODE_PAD(60);
    gd::vector<gd::vector<gd::vector<GameObject*>*>*> m_sections;
    GEODE_PAD(232);
    gd::vector<gd::vector<int>*> m_nonEffectObjectsPerSection;
    GEODE_PAD(16);
    FMODLevelVisualizer* m_fModVisualizerBG;
    FMODLevelVisualizer* m_fModVisualizerSFX;
    bool m_showAudioVisualizer;
    GEODE_PAD(103);
    GJGameLoadingLayer* m_loadingLayer;
    cocos2d::CCDrawNode* m_debugDrawNode;
    void* m_unk3678;
    bool m_isDebugDrawEnabled;
    bool m_unk3501;
    GameObject* m_unk3688;
};
