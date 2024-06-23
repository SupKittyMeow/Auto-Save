#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GameObject.hpp"
#include "AnimatedSpriteDelegate.hpp"

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x37c5c0
     * @note[short] MacOS (Intel): 0x403500
     * @note[short] Windows: 0x3648d0
     * @note[short] Android
     */
    static PlayerObject* create(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);

    /**
     * @note[short] MacOS (ARM): 0x38447c
     * @note[short] Windows: 0x37e0a0
     * @note[short] Android
     */
    void activateStreak();
    
private:
    [[deprecated("PlayerObject::addAllParticles not implemented")]]
    /**
     * @note[short] Windows: 0x3667d0
     * @note[short] Android
     */
    TodoReturn addAllParticles();
public:

    /**
     * @note[short] MacOS (ARM): 0x393d24
     * @note[short] MacOS (Intel): 0x41ecf0
     * @note[short] Android
     */
    TodoReturn addToTouchedRings(RingObject* p0);
    
private:
    [[deprecated("PlayerObject::addToYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToYVelocity(double p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x384c3c
     * @note[short] MacOS (Intel): 0x40cdb0
     * @note[short] Windows: 0x36adb0
     * @note[short] Android
     */
    void animatePlatformerJump(float p0);

    /**
     * @note[short] MacOS (ARM): 0x386edc
     * @note[short] Windows: 0x37def0
     * @note[short] Android
     */
    void boostPlayer(float p0);

    /**
     * @note[short] MacOS (ARM): 0x398b20
     * @note[short] MacOS (Intel): 0x423f30
     * @note[short] Windows: 0x37d6b0
     * @note[short] Android
     */
    void bumpPlayer(float p0, int p1, bool p2, GameObject* p3);
    
private:
    [[deprecated("PlayerObject::buttonDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn buttonDown(PlayerButton p0);
public:
    
private:
    [[deprecated("PlayerObject::canStickToGround not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canStickToGround();
public:
    
private:
    [[deprecated("PlayerObject::checkSnapJumpToObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkSnapJumpToObject(GameObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x38714c
     * @note[short] MacOS (Intel): 0x40fa20
     * @note[short] Windows: 0x36fa40
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x38c4ec
     * @note[short] MacOS (Intel): 0x416340
     * @note[short] Android
     */
    void collidedWithObject(float p0, GameObject* p1);

    /**
     * @note[short] MacOS (ARM): 0x388d80
     * @note[short] MacOS (Intel): 0x411b50
     * @note[short] Windows: 0x36fb00
     * @note[short] Android
     */
    void collidedWithObjectInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
    
private:
    [[deprecated("PlayerObject::collidedWithSlope not implemented")]]
    /**
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool forced);
public:
    
private:
    [[deprecated("PlayerObject::collidedWithSlopeInternal not implemented")]]
    /**
     * @note[short] Windows: 0x36d8a0
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);
public:
    
private:
    [[deprecated("PlayerObject::convertToClosestRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToClosestRotation(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3994b4
     * @note[short] MacOS (Intel): 0x4249f0
     * @note[short] Windows: 0x37e4b0
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* p0);
    
private:
    [[deprecated("PlayerObject::createFadeOutDartStreak not implemented")]]
    /**
     * @note[short] Windows: 0x376690
     * @note[short] Android
     */
    void createFadeOutDartStreak();
public:
    
private:
    [[deprecated("PlayerObject::createRobot not implemented")]]
    /**
     * @note[short] Windows: 0x366050
     * @note[short] Android
     */
    void createRobot(int p0);
public:
    
private:
    [[deprecated("PlayerObject::createSpider not implemented")]]
    /**
     * @note[short] Windows: 0x366410
     * @note[short] Android
     */
    void createSpider(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3828c8
     * @note[short] MacOS (Intel): 0x40a870
     * @note[short] Android
     */
    void deactivateParticle();
    
private:
    [[deprecated("PlayerObject::deactivateStreak not implemented")]]
    /**
     * @note[short] Android
     */
    void deactivateStreak(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::destroyFromHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn destroyFromHitHead();
public:
    
private:
    [[deprecated("PlayerObject::didHitHead not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didHitHead();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableCustomGlowColor();
    
private:
    [[deprecated("PlayerObject::disablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disablePlayerControls();
public:

    /**
     * @note[short] MacOS (ARM): 0x3924d4
     * @note[short] MacOS (Intel): 0x41d060
     * @note[short] Windows: 0x378f10
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x383584
     * @note[short] MacOS (Intel): 0x40b5e0
     * @note[short] Windows: 0x376540
     * @note[short] Android
     */
    void doReversePlayer(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void enableCustomGlowColor(cocos2d::_ccColor3B const& color);
    
private:
    [[deprecated("PlayerObject::enablePlayerControls not implemented")]]
    /**
     * @note[short] Android
     */
    void enablePlayerControls();
public:
    
private:
    [[deprecated("PlayerObject::exitPlatformerAnimateJump not implemented")]]
    /**
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();
public:

    /**
     * @note[short] MacOS (ARM): 0x392438
     * @note[short] MacOS (Intel): 0x41cfd0
     * @note[short] Windows: 0x37e1a0
     * @note[short] Android
     */
    void fadeOutStreak2(float p0);
    
private:
    [[deprecated("PlayerObject::flashPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    void flashPlayer(float p0, float p1, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);
public:

    /**
     * @note[short] MacOS (ARM): 0x3848b4
     * @note[short] MacOS (Intel): 0x40c9c0
     * @note[short] Windows: 0x3781e0
     * @note[short] Android
     */
    void flipGravity(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::flipMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn flipMod();
public:

    /**
     * @note[short] MacOS (ARM): 0xf2c98
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x394684
     * @note[short] MacOS (Intel): 0x41f680
     * @note[short] Android
     */
    bool getActiveMode();
    
private:
    [[deprecated("PlayerObject::getCurrentXVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrentXVelocity();
public:
    
private:
    [[deprecated("PlayerObject::getModifiedSlopeYVel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModifiedSlopeYVel();
public:
    
private:
    [[deprecated("PlayerObject::getOldPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOldPosition(float p0);
public:
    
private:
    [[deprecated("PlayerObject::getSecondColor not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();
public:
    
private:
    [[deprecated("PlayerObject::getYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getYVelocity();
public:
    
private:
    [[deprecated("PlayerObject::gravityDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityDown();
public:
    
private:
    [[deprecated("PlayerObject::gravityUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn gravityUp();
public:
    
private:
    [[deprecated("PlayerObject::handlePlayerCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handlePlayerCommand(int p0);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedCollisionInternal not implemented")]]
    /**
     * @note[short] Windows: 0x36d1d0
     * @note[short] Android
     */
    TodoReturn handleRotatedCollisionInternal(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedObjectCollision not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    TodoReturn handleRotatedObjectCollision(float p0, GameObject* p1, cocos2d::CCRect p2, bool p3);
public:
    
private:
    [[deprecated("PlayerObject::handleRotatedSlopeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleRotatedSlopeCollision(float p0, GameObject* p1, bool p2);
public:
    
private:
    [[deprecated("PlayerObject::hardFlipGravity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hardFlipGravity();
public:
    
private:
    [[deprecated("PlayerObject::hitGround not implemented")]]
    /**
     * @note[short] Windows: 0x379f40
     * @note[short] Android
     */
    TodoReturn hitGround(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::hitGroundNoJump not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hitGroundNoJump(GameObject* p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x38487c
     * @note[short] MacOS (Intel): 0x40c980
     * @note[short] Windows: 0x36acd0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x37c678
     * @note[short] MacOS (Intel): 0x403590
     * @note[short] Windows: 0x364970
     * @note[short] Android
     */
    bool init(int p0, int p1, GJBaseGameLayer* p2, cocos2d::CCLayer* p3, bool p4);
    
private:
    [[deprecated("PlayerObject::isBoostValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBoostValid(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x38285c
     * @note[short] MacOS (Intel): 0x40a810
     * @note[short] Android
     */
    bool isFlying();
    
private:
    [[deprecated("PlayerObject::isInBasicMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInBasicMode();
public:
    
private:
    [[deprecated("PlayerObject::isInNormalMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isInNormalMode();
public:
    
private:
    [[deprecated("PlayerObject::isSafeFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeHeadTest not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeHeadTest();
public:
    
private:
    [[deprecated("PlayerObject::isSafeMode not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeMode(float p0);
public:
    
private:
    [[deprecated("PlayerObject::isSafeSpiderFlip not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float p0);
public:
    
private:
    [[deprecated("PlayerObject::levelFlipFinished not implemented")]]
    /**
     * @note[short] Windows: 0x3698a0
     * @note[short] Android
     */
    TodoReturn levelFlipFinished();
public:
    
private:
    [[deprecated("PlayerObject::levelFlipping not implemented")]]
    /**
     * @note[short] Windows: 0x379500
     * @note[short] Android
     */
    bool levelFlipping();
public:
    
private:
    [[deprecated("PlayerObject::levelWillFlip not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn levelWillFlip();
public:

    /**
     * @note[short] MacOS (ARM): 0x399e74
     * @note[short] MacOS (Intel): 0x425520
     * @note[short] Windows: 0x37f9d0
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* p0);

    /**
     * @note[short] MacOS (ARM): 0x3986a8
     * @note[short] MacOS (Intel): 0x423ad0
     * @note[short] Windows: 0x37d2e0
     * @note[short] Android
     */
    void lockPlayer();
    
private:
    [[deprecated("PlayerObject::logValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logValues();
public:
    
private:
    [[deprecated("PlayerObject::modeDidChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn modeDidChange();
public:
    
private:
    [[deprecated("PlayerObject::performSlideCheck not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn performSlideCheck();
public:
    
private:
    [[deprecated("PlayerObject::placeStreakPoint not implemented")]]
    /**
     * @note[short] Windows: 0x37e690
     * @note[short] Android
     */
    void placeStreakPoint();
public:
    
private:
    [[deprecated("PlayerObject::playBumpEffect not implemented")]]
    /**
     * @note[short] Windows: 0x37da60
     * @note[short] Android
     */
    TodoReturn playBumpEffect(int p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::playBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playBurstEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x1bfebc
     * @note[short] MacOS (Intel): 0x20eb00
     * @note[short] Windows: 0x3621d0
     * @note[short] Android
     */
    void playCompleteEffect(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1b7ef4
     * @note[short] MacOS (Intel): 0x206990
     * @note[short] Windows: 0x35d0c0
     * @note[short] Android
     */
    void playDeathEffect();
    
private:
    [[deprecated("PlayerObject::playDynamicSpiderRun not implemented")]]
    /**
     * @note[short] Windows: 0x37f4e0
     * @note[short] Android
     */
    void playDynamicSpiderRun();
public:

    /**
     * @note[short] MacOS (ARM): 0x392264
     * @note[short] MacOS (Intel): 0x41cdd0
     * @note[short] Windows: 0x375d70
     * @note[short] Android
     */
    void playerDestroyed(bool p0);
    
private:
    [[deprecated("PlayerObject::playerIsFalling not implemented")]]
    /**
     * @note[short] Android
     */
    bool playerIsFalling(float p0);
public:
    
private:
    [[deprecated("PlayerObject::playerIsFallingBugged not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsFallingBugged();
public:
    
private:
    [[deprecated("PlayerObject::playerIsMovingUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerIsMovingUp();
public:
    
private:
    [[deprecated("PlayerObject::playerTeleported not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTeleported();
public:

    /**
     * @note[short] MacOS (ARM): 0x398a84
     * @note[short] MacOS (Intel): 0x423eb0
     * @note[short] Android
     */
    TodoReturn playingEndEffect();
    
private:
    [[deprecated("PlayerObject::playSpawnEffect not implemented")]]
    /**
     * @note[short] Windows: 0x3754b0
     * @note[short] Android
     */
    void playSpawnEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x38d940
     * @note[short] MacOS (Intel): 0x417a50
     * @note[short] Windows: 0x373200
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);
    
private:
    [[deprecated("PlayerObject::postCollision not implemented")]]
    /**
     * @note[short] Windows: 0x36b6b0
     * @note[short] Android
     */
    void postCollision(float p0);
public:
    
private:
    [[deprecated("PlayerObject::preCollision not implemented")]]
    /**
     * @note[short] Android
     */
    void preCollision();
public:
    
private:
    [[deprecated("PlayerObject::preSlopeCollision not implemented")]]
    /**
     * @note[short] Windows: 0x36d370
     * @note[short] Android
     */
    bool preSlopeCollision(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x398e28
     * @note[short] MacOS (Intel): 0x424240
     * @note[short] Windows: 0x37d860
     * @note[short] Android
     */
    void propellPlayer(float p0, bool p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x27f4b0
     * @note[short] MacOS (Intel): 0x41d330
     * @note[short] Windows: 0x375f70
     * @note[short] Android
     */
    void pushButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::pushDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pushDown();
public:
    
private:
    [[deprecated("PlayerObject::pushPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    void pushPlayer(float p0);
public:
    
private:
    [[deprecated("PlayerObject::redirectDash not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redirectDash(float p0);
public:
    
private:
    [[deprecated("PlayerObject::redirectPlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn redirectPlayerForce(float p0, float p1, float p2, float p3);
public:

    /**
     * @note[short] MacOS (ARM): 0x398664
     * @note[short] MacOS (Intel): 0x423a90
     * @note[short] Windows: 0x37d110
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x393880
     * @note[short] MacOS (Intel): 0x41e7b0
     * @note[short] Windows: 0x376200
     * @note[short] Android
     */
    void releaseButton(PlayerButton p0);
    
private:
    [[deprecated("PlayerObject::removeAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeAllParticles();
public:
    
private:
    [[deprecated("PlayerObject::removePendingCheckpoint not implemented")]]
    /**
     * @note[short] Windows: 0x3801a0
     * @note[short] Android
     */
    void removePendingCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::removePlacedCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removePlacedCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::resetAllParticles not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetAllParticles();
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionLog not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionLog(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::resetCollisionValues not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetCollisionValues();
public:

    /**
     * @note[short] MacOS (ARM): 0x394f20
     * @note[short] MacOS (Intel): 0x41ffb0
     * @note[short] Windows: 0x3792f0
     * @note[short] Android
     */
    void resetPlayerIcon();
    
private:
    [[deprecated("PlayerObject::resetStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::resetStreak not implemented")]]
    /**
     * @note[short] Windows: 0x369730
     * @note[short] Android
     */
    void resetStreak();
public:
    
private:
    [[deprecated("PlayerObject::resetTouchedRings not implemented")]]
    /**
     * @note[short] Windows: 0x376310
     * @note[short] Android
     */
    TodoReturn resetTouchedRings();
public:
    
private:
    [[deprecated("PlayerObject::reverseMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverseMod();
public:

    /**
     * @note[short] MacOS (ARM): 0x393d7c
     * @note[short] MacOS (Intel): 0x41ed50
     * @note[short] Windows: 0x376460
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x392b20
     * @note[short] MacOS (Intel): 0x41d7c0
     * @note[short] Windows: 0x376c30
     * @note[short] Android
     */
    void ringJump(RingObject* p0, bool p1);
    
private:
    [[deprecated("PlayerObject::rotateGameplay not implemented")]]
    /**
     * @note[short] Android
     */
    void rotateGameplay(int p0, int p1, bool p2, float p3, float p4, bool p5, bool p6);
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplayObject not implemented")]]
    /**
     * @note[short] Windows: 0x36f480
     * @note[short] Android
     */
    TodoReturn rotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::rotateGameplayOnly not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void rotateGameplayOnly(bool param);
public:
    
private:
    [[deprecated("PlayerObject::rotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::runBallRotation not implemented")]]
    /**
     * @note[short] Windows: 0x36b350
     * @note[short] Android
     */
    void runBallRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::runBallRotation2 not implemented")]]
    /**
     * @note[short] Windows: 0x36b5b0
     * @note[short] Android
     */
    void runBallRotation2();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x408ef0
     * @note[short] MacOS (Intel): 0x408ef0
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void runNormalRotation(bool p0, float p1);
    
private:
    [[deprecated("PlayerObject::runRotateAction not implemented")]]
    /**
     * @note[short] Windows: 0x36b480
     * @note[short] Android
     */
    void runRotateAction(bool p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::saveToCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveToCheckpoint(PlayerCheckpoint* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x37fac8
     * @note[short] MacOS (Intel): 0x407090
     * @note[short] Windows: 0x37b3b0
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x37e59c
     * @note[short] MacOS (Intel): 0x405810
     * @note[short] Windows: 0x366920
     * @note[short] Android
     */
    void setupStreak();
    
private:
    [[deprecated("PlayerObject::setYVelocity not implemented")]]
    /**
     * @note[short] Windows: 0x366e70
     * @note[short] Android
     */
    void setYVelocity(double p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnCircle2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnCircle2();
public:
    
private:
    [[deprecated("PlayerObject::spawnDualCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDualCircle();
public:
    
private:
    [[deprecated("PlayerObject::spawnFromPlayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnFromPlayer(PlayerObject* p0, bool p1);
public:
    
private:
    [[deprecated("PlayerObject::spawnPortalCircle not implemented")]]
    /**
     * @note[short] Windows: 0x375790
     * @note[short] Android
     */
    TodoReturn spawnPortalCircle(cocos2d::ccColor3B p0, float p1);
public:
    
private:
    [[deprecated("PlayerObject::spawnScaleCircle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnScaleCircle();
public:
    
private:
    [[deprecated("PlayerObject::specialGroundHit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn specialGroundHit();
public:
    
private:
    [[deprecated("PlayerObject::speedDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedDown();
public:
    
private:
    [[deprecated("PlayerObject::speedUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn speedUp();
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJump not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x40c870
     * @note[short] Windows: 0x3723d0
     * @note[short] Android
     */
    void spiderTestJump(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x38cd24
     * @note[short] MacOS (Intel): 0x416c70
     * @note[short] Windows: 0x372480
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool p0);
    
private:
    [[deprecated("PlayerObject::spiderTestJumpX not implemented")]]
    /**
     * @note[short] Android
     */
    void spiderTestJumpX(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::spiderTestJumpY not implemented")]]
    /**
     * @note[short] Android
     */
    void spiderTestJumpY(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::startDashing not implemented")]]
    /**
     * @note[short] Windows: 0x3739a0
     * @note[short] Android
     */
    void startDashing(DashRingObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::stopBurstEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopBurstEffect();
public:

    /**
     * @note[short] MacOS (ARM): 0x382b40
     * @note[short] MacOS (Intel): 0x40ab10
     * @note[short] Windows: 0x3746b0
     * @note[short] Android
     */
    void stopDashing();
    
private:
    [[deprecated("PlayerObject::stopParticles not implemented")]]
    /**
     * @note[short] Windows: 0x3699b0
     * @note[short] Android
     */
    void stopParticles();
public:

    /**
     * @note[short] MacOS (ARM): 0x3850f0
     * @note[short] MacOS (Intel): 0x40d290
     * @note[short] Windows: 0x36b190
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();
    
private:
    [[deprecated("PlayerObject::stopRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopRotation(bool p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x39934c
     * @note[short] MacOS (Intel): 0x424840
     * @note[short] Android
     */
    void stopStreak2();
    
private:
    [[deprecated("PlayerObject::storeCollision not implemented")]]
    /**
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection p0, int p1);
public:
    
private:
    [[deprecated("PlayerObject::switchedDirTo not implemented")]]
    /**
     * @note[short] Windows: 0x375e60
     * @note[short] Android
     */
    TodoReturn switchedDirTo(PlayerButton p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x391544
     * @note[short] MacOS (Intel): 0x41bfc0
     * @note[short] Windows: 0x379e40
     * @note[short] Android
     */
    void switchedToMode(GameObjectType p0);
    
private:
    [[deprecated("PlayerObject::testForMoving not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testForMoving(float p0, GameObject* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x395124
     * @note[short] MacOS (Intel): 0x4201d0
     * @note[short] Windows: 0x378830
     * @note[short] Android
     */
    void toggleBirdMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396120
     * @note[short] MacOS (Intel): 0x421270
     * @note[short] Windows: 0x378fa0
     * @note[short] Android
     */
    void toggleDartMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3946ec
     * @note[short] MacOS (Intel): 0x41f6e0
     * @note[short] Windows: 0x378500
     * @note[short] Android
     */
    void toggleFlyMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x391a70
     * @note[short] MacOS (Intel): 0x41c590
     * @note[short] Windows: 0x37ce40
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x3916bc
     * @note[short] MacOS (Intel): 0x41c110
     * @note[short] Windows: 0x37e710
     * @note[short] Android
     */
    void togglePlayerScale(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396af0
     * @note[short] MacOS (Intel): 0x421cf0
     * @note[short] Windows: 0x379700
     * @note[short] Android
     */
    void toggleRobotMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396724
     * @note[short] MacOS (Intel): 0x421930
     * @note[short] Windows: 0x379580
     * @note[short] Android
     */
    void toggleRollMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x396f64
     * @note[short] MacOS (Intel): 0x4221b0
     * @note[short] Windows: 0x379a80
     * @note[short] Android
     */
    void toggleSpiderMode(bool p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x395760
     * @note[short] MacOS (Intel): 0x420890
     * @note[short] Windows: 0x378b30
     * @note[short] Android
     */
    void toggleSwingMode(bool p0, bool p1);
    
private:
    [[deprecated("PlayerObject::toggleVisibility not implemented")]]
    /**
     * @note[short] Windows: 0x369590
     * @note[short] Android
     */
    void toggleVisibility(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::touchedObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn touchedObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::tryPlaceCheckpoint not implemented")]]
    /**
     * @note[short] Android
     */
    void tryPlaceCheckpoint();
public:
    
private:
    [[deprecated("PlayerObject::unrotateGameplayObject not implemented")]]
    /**
     * @note[short] Windows: 0x36f770
     * @note[short] Android
     */
    TodoReturn unrotateGameplayObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::unrotatePreSlopeObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unrotatePreSlopeObjects();
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointMode(bool p0);
public:
    
private:
    [[deprecated("PlayerObject::updateCheckpointTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCheckpointTest();
public:
    
private:
    [[deprecated("PlayerObject::updateCollide not implemented")]]
    /**
     * @note[short] Windows: 0x372080
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideBottom not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideBottom(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideLeft(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideRight not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideRight(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateCollideTop not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCollideTop(float p0, GameObject* p1);
public:
    
private:
    [[deprecated("PlayerObject::updateDashAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDashAnimation();
public:
    
private:
    [[deprecated("PlayerObject::updateDashArt not implemented")]]
    /**
     * @note[short] Windows: 0x3741f0
     * @note[short] Android
     */
    void updateDashArt();
public:
    
private:
    [[deprecated("PlayerObject::updateEffects not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x40bd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEffects(float param);
public:

    /**
     * @note[short] MacOS (ARM): 0x397f58
     * @note[short] MacOS (Intel): 0x423390
     * @note[short] Windows: 0x37b440
     * @note[short] Android
     */
    void updateGlowColor();
    
private:
    [[deprecated("PlayerObject::updateInternalActions not implemented")]]
    /**
     * @note[short] Windows: 0x380e60
     * @note[short] Android
     */
    TodoReturn updateInternalActions(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x37fb30
     * @note[short] MacOS (Intel): 0x407100
     * @note[short] Windows: 0x369a50
     * @note[short] Android
     */
    void updateJump(float p0);
    
private:
    [[deprecated("PlayerObject::updateJumpVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateJumpVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateLastGroundObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLastGroundObject(GameObject* p0);
public:
    
private:
    [[deprecated("PlayerObject::updateMove not implemented")]]
    /**
     * @note[short] Windows: 0x368220
     * @note[short] Android
     */
    TodoReturn updateMove(float p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3940fc
     * @note[short] Windows: 0x376890
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x3954e0
     * @note[short] MacOS (Intel): 0x4205f0
     * @note[short] Windows: 0x37c2f0
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3964f0
     * @note[short] MacOS (Intel): 0x4216e0
     * @note[short] Windows: 0x37c9f0
     * @note[short] Android
     */
    void updatePlayerDartFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerForce not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x395e20
     * @note[short] MacOS (Intel): 0x420f90
     * @note[short] Windows: 0x37bc60
     * @note[short] Android
     */
    void updatePlayerFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x393f3c
     * @note[short] MacOS (Intel): 0x41ef10
     * @note[short] Windows: 0x37e2b0
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x394cf4
     * @note[short] MacOS (Intel): 0x41fd80
     * @note[short] Windows: 0x37c0c0
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x398634
     * @note[short] MacOS (Intel): 0x423a50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int id);

    /**
     * @note[short] MacOS (ARM): 0x3968c4
     * @note[short] MacOS (Intel): 0x421ac0
     * @note[short] Windows: 0x37c590
     * @note[short] Android
     */
    void updatePlayerRollFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updatePlayerScale not implemented")]]
    /**
     * @note[short] Windows: 0x37e230
     * @note[short] Android
     */
    void updatePlayerScale();
public:

    /**
     * @note[short] MacOS (ARM): 0x394ac8
     * @note[short] MacOS (Intel): 0x41fb40
     * @note[short] Windows: 0x37be90
     * @note[short] Android
     */
    void updatePlayerShipFrame(int p0);

    /**
     * @note[short] MacOS (ARM): 0x39864c
     * @note[short] MacOS (Intel): 0x423a70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int id);
    
private:
    [[deprecated("PlayerObject::updatePlayerSpriteExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x395b5c
     * @note[short] MacOS (Intel): 0x420cd0
     * @note[short] Windows: 0x37c7c0
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int p0);
    
private:
    [[deprecated("PlayerObject::updateRobotAnimationSpeed not implemented")]]
    /**
     * @note[short] Windows: 0x37f0f0
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();
public:
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     * @note[short] Windows: 0x36b230
     * @note[short] Android
     */
    void updateRotation(float p0, float p1);
public:
    
private:
    [[deprecated("PlayerObject::updateRotation not implemented")]]
    /**
     * @note[short] Windows: 0x36f0b0
     * @note[short] Android
     */
    void updateRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateShipRotation not implemented")]]
    /**
     * @note[short] Windows: 0x36ecd0
     * @note[short] Android
     */
    void updateShipRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateShipSpriteExtra not implemented")]]
    /**
     * @note[short] Android
     */
    void updateShipSpriteExtra(gd::string p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeRotation(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSlopeYVelocity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSlopeYVelocity(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSpecial(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateStateVariables not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStateVariables();
public:
    
private:
    [[deprecated("PlayerObject::updateStaticForce not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStaticForce(float p0, float p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x10994c
     * @note[short] MacOS (Intel): 0x405e50
     * @note[short] Android
     */
    void updateStreakBlend(bool p0);
    
private:
    [[deprecated("PlayerObject::updateStreaks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStreaks(float p0);
public:
    
private:
    [[deprecated("PlayerObject::updateSwingFire not implemented")]]
    /**
     * @note[short] Windows: 0x378de0
     * @note[short] Android
     */
    void updateSwingFire();
public:

    /**
     * @note[short] MacOS (ARM): 0x37e3e4
     * @note[short] MacOS (Intel): 0x405680
     * @note[short] Windows: 0x37ed60
     * @note[short] Android
     */
    void updateTimeMod(float p0, bool p1);
    
private:
    [[deprecated("PlayerObject::usingWallLimitedMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usingWallLimitedMode();
public:
    
private:
    [[deprecated("PlayerObject::yStartDown not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartDown();
public:
    
private:
    [[deprecated("PlayerObject::yStartUp not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn yStartUp();
public:

    /**
     * @note[short] MacOS (ARM): 0x37ec58
     * @note[short] MacOS (Intel): 0x405f60
     * @note[short] Windows: 0x366ee0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4ec
     * @note[short] MacOS (Intel): 0x425cd0
     * @note[short] Windows: 0x380860
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f0
     * @note[short] MacOS (Intel): 0x425ce0
     * @note[short] Windows: 0x380870
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f4
     * @note[short] MacOS (Intel): 0x425cf0
     * @note[short] Windows: 0x380880
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3973cc
     * @note[short] MacOS (Intel): 0x422650
     * @note[short] Windows: 0x37a650
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x39a4f8
     * @note[short] MacOS (Intel): 0x425d00
     * @note[short] Windows: 0x380890
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x39a47c
     * @note[short] MacOS (Intel): 0x425c40
     * @note[short] Windows: 0x380790
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x398408
     * @note[short] MacOS (Intel): 0x423850
     * @note[short] Windows: 0x37bb00
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x397e20
     * @note[short] MacOS (Intel): 0x423230
     * @note[short] Windows: 0x37b320
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x39a480
     * @note[short] MacOS (Intel): 0x425c50
     * @note[short] Windows: 0x3807a0
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);
    
private:
    [[deprecated("PlayerObject::setFlipY not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x425cc0
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x390ae4
     * @note[short] MacOS (Intel): 0x41b180
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x398604
     * @note[short] MacOS (Intel): 0x423a20
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x3997ac
     * @note[short] MacOS (Intel): 0x424d80
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x3997d8
     * @note[short] MacOS (Intel): 0x424da0
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x39a5d0
     * @note[short] MacOS (Intel): 0x425df0
     * @note[short] Windows: 0x3808b0
     * @note[short] Android
     */
    virtual void animationFinished(char const* p0);
    cocos2d::CCNode* m_mainLayer;
    GEODE_PAD(72);
    cocos2d::CCNode* m_unk4e4;
    cocos2d::CCDictionary* m_unk4e8;
    cocos2d::CCDictionary* m_unk4ec;
    cocos2d::CCDictionary* m_unk4f0;
    cocos2d::CCDictionary* m_unk4f4;
    GEODE_PAD(32);
    float m_unk518;
    bool m_unk51c;
    bool m_unk51d;
    bool m_unk51e;
    bool m_unk51f;
    GEODE_PAD(4);
    GameObject* m_collidedObject;
    GEODE_PAD(80);
    float m_unk568;
    cocos2d::CCSprite* m_unk56c;
    GEODE_PAD(4);
    GameObject* m_unk574;
    GameObject* m_unk578;
    // no padding
    float unk_584;
    int unk_588;
    GEODE_PAD(4);
    cocos2d::CCArray* m_particleSystems;
    gd::unordered_map<int, GJPointDouble> m_unk594;
    gd::unordered_map<int, GameObject*> m_unk5b4;
    void* m_unk5d4;
    float m_rotationSpeed;
    float m_unk5dc;
    bool m_isRotating;
    bool m_unk5e1;
    bool m_hasGlow;
    bool m_isHidden;
    int m_hasGhostTrail;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_unk604;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_unk61c;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    float m_unk62c;
    int m_unk630;
    float m_unk634;
    int m_unk638;
    float m_unk63c;
    int m_unk640;
    float m_unk644;
    float m_unk648;
    GEODE_PAD(8);
    bool m_unk658;
    bool m_unk659;
    bool m_unk65a;
    bool m_unk65b;
    bool m_playEffects;
    bool m_unk65d;
    bool m_unk65e;
    bool m_unk65f;
    GEODE_PAD(40);
    float m_unk688;
    float m_unk68c;
    GEODE_PAD(18);
    bool m_gv0096;
    bool m_gv0100;
    GEODE_PAD(24);
    gd::unordered_set<int> m_unk6a4;
    GameObject* m_objectSnappedTo;
    int m_unk6c0;
    GEODE_PAD(12);
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    GEODE_PAD(8);
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    GEODE_PAD(4);
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_unk70c;
    float m_unk710;
    int m_playerStreak;
    GEODE_PAD(92);
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    GEODE_PAD(24);
    double m_yVelocity;
    GEODE_PAD(8);
    bool m_isOnSlope;
    bool m_wasOnSlope;
    GEODE_PAD(7);
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    GEODE_PAD(16);
    float m_unk7c8;
    float m_unk7cc;
    float m_unk7d0;
    bool m_isDashing;
    GEODE_PAD(8);
    float m_vehicleSize;
    float m_playerSpeed;
    float m_unk7e0;
    float m_unk7e4;
    cocos2d::CCPoint m_unk7e8;
    cocos2d::CCPoint m_unk7f0;
    bool m_unk7f8;
    GEODE_PAD(29);
    bool m_isLocked;
    bool m_unka2b;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    gd::unordered_set<int> m_unk828;
    GameObject* m_lastActivatedPortal;
    bool m_unk814;
    bool m_unk815;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    GEODE_PAD(32);
    bool m_gamevar0060;
    bool m_gamevar0061;
    bool m_gamevar0062;
    GEODE_PAD(4);
    gd::vector<float> m_unk880;
    float m_unk838;
    GEODE_PAD(24);
    double m_platformerXVelocity;
    GEODE_PAD(112);
    bool m_isPlatformer;
    int m_unk8ec;
    int m_unk8f0;
    int m_unk8f4;
    int m_unk8f8;
    float m_gravityMod;
    GEODE_PAD(4);
    cocos2d::CCPoint m_unk904;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk910;
    float m_unk918;
    float m_unk91c;
    GEODE_PAD(4);
    gd::map<int, bool> m_unk924;
    GEODE_PAD(4);
    gd::string m_unk930;
    bool m_unk948;
    GEODE_PAD(3);
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_unk950;
    cocos2d::CCSpriteBatchNode* m_unk954;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    GEODE_PAD(8);
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    GEODE_PAD(4);
    float m_unk974;
    bool m_unk978;
    bool m_unk979;
    bool m_unk97a;
    bool m_unk97b;
    GEODE_PAD(4);
};
