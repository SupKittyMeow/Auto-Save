#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "EnhancedGameObject.hpp"

class EffectGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EffectGameObject, EnhancedGameObject)
    
private:
    [[deprecated("EffectGameObject::create not implemented")]]
    /**
     * @note[short] Android
     */
    static EffectGameObject* create(char const* p0);
public:
    
private:
    [[deprecated("EffectGameObject::getTargetColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTargetColorIndex();
public:
    
private:
    [[deprecated("EffectGameObject::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(char const* p0);
public:
    
private:
    [[deprecated("EffectGameObject::playTriggerEffect not implemented")]]
    /**
     * @note[short] Windows: 0x4798b0
     * @note[short] Android
     */
    TodoReturn playTriggerEffect();
public:
    
private:
    [[deprecated("EffectGameObject::resetSpawnTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSpawnTrigger();
public:
    
private:
    [[deprecated("EffectGameObject::setTargetID not implemented")]]
    /**
     * @note[short] Android
     */
    void setTargetID(int p0);
public:
    
private:
    [[deprecated("EffectGameObject::setTargetID2 not implemented")]]
    /**
     * @note[short] Android
     */
    void setTargetID2(int p0);
public:
    
private:
    [[deprecated("EffectGameObject::triggerEffectFinished not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerEffectFinished();
public:
    
private:
    [[deprecated("EffectGameObject::updateInteractiveHover not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateInteractiveHover(float p0);
public:
    
private:
    [[deprecated("EffectGameObject::updateSpecialColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialColor();
public:
    
private:
    [[deprecated("EffectGameObject::updateSpeedModType not implemented")]]
    /**
     * @note[short] Windows: 0x47f6c0
     * @note[short] Android
     */
    TodoReturn updateSpeedModType();
public:

    /**
     * @note[short] MacOS (ARM): 0x1727fc
     * @note[short] MacOS (Intel): 0x1b46e0
     * @note[short] Windows: 0x479d90
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x173c70
     * @note[short] MacOS (Intel): 0x1b6480
     * @note[short] Windows: 0x47c680
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x1562b4
     * @note[short] MacOS (Intel): 0x192590
     * @note[short] Windows: 0x47c6a0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x172880
     * @note[short] MacOS (Intel): 0x1b4760
     * @note[short] Windows: 0x479dd0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x157800
     * @note[short] MacOS (Intel): 0x193820
     * @note[short] Windows: 0x47c900
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x14e5e8
     * @note[short] MacOS (Intel): 0x188160
     * @note[short] Windows: 0x47f960
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x172504
     * @note[short] MacOS (Intel): 0x1b4370
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x172514
     * @note[short] MacOS (Intel): 0x1b4390
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x173be8
     * @note[short] MacOS (Intel): 0x1b6410
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x173998
     * @note[short] MacOS (Intel): 0x1b61d0
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x173ba8
     * @note[short] MacOS (Intel): 0x1b63d0
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();

    /**
     * @note[short] MacOS (ARM): 0x173df0
     * @note[short] MacOS (Intel): 0x1b6570
     * @note[short] Android
     */
    virtual TodoReturn canReverse();

    /**
     * @note[short] MacOS (ARM): 0x173e7c
     * @note[short] MacOS (Intel): 0x1b65e0
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): 0x173e84
     * @note[short] MacOS (Intel): 0x1b65f0
     * @note[short] Android
     */
    virtual TodoReturn canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x1a1550
     * @note[short] MacOS (Intel): 0x1ed550
     * @note[short] Android
     */
    virtual TodoReturn getObjectLabel();

    /**
     * @note[short] MacOS (ARM): 0x1a1558
     * @note[short] MacOS (Intel): 0x1ed560
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS (ARM): 0x173908
     * @note[short] MacOS (Intel): 0x1b6130
     * @note[short] Android
     */
    virtual TodoReturn stateSensitiveOff(GJBaseGameLayer* p0);
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
private:
    int m_targetGroupID;
public:
private:
    int m_centerGroupID;
public:
private:
    bool m_isTouchTriggered;
public:
private:
    bool m_isSpawnTriggered;
public:
private:
    bool m_hasCenterEffect;
public:
private:
    float m_shakeStrength;
public:
private:
    float m_shakeInterval;
public:
private:
    bool m_tintGround;
public:
private:
    bool m_usesPlayerColor1;
public:
private:
    bool m_usesPlayerColor2;
public:
private:
    bool m_usesBlending;
public:
private:
    float m_moveOffsetX;
public:
private:
    float m_moveOffsetY;
public:
private:
    EasingType m_easingType;
public:
private:
    float m_easingRate;
public:
private:
    bool m_lockToPlayerX;
public:
private:
    bool m_lockToPlayerY;
public:
private:
    bool m_lockToCameraX;
public:
private:
    bool m_lockToCameraY;
public:
private:
    bool m_useMoveTarget;
public:
private:
    MoveTargetType m_moveTargetMode;
public:
private:
    float m_moveModX;
public:
private:
    float m_moveModY;
public:
private:
    bool m_property393;
public:
private:
    bool m_isDirectionFollowSnap360;
public:
private:
    int m_targetModCenterID;
public:
private:
    float m_directionModeDistance;
public:
private:
    bool m_isDynamicMode;
public:
private:
    bool m_isSilent;
public:
private:
    float m_rotationDegrees;
public:
private:
    int m_times360;
public:
private:
    bool m_lockObjectRotation;
public:
private:
    int m_rotationTargetID;
public:
private:
    float m_rotationOffset;
public:
private:
    EasingType m_dynamicModeEasing;
public:
private:
    float m_followXMod;
public:
private:
    float m_followYMod;
public:
private:
    float m_followYSpeed;
public:
private:
    float m_followYDelay;
public:
private:
    int m_followYOffset;
public:
private:
    float m_followYMaxSpeed;
public:
private:
    float m_fadeInDuration;
public:
private:
    float m_holdDuration;
public:
private:
    float m_fadeOutDuration;
public:
private:
    int m_pulseMode;
public:
private:
    int m_pulseTargetType;
public:
private:
    cocos2d::ccHSVValue m_hsvValue;
public:
private:
    int m_copyColorID;
public:
private:
    bool m_copyOpacity;
public:
private:
    bool m_pulseMainOnly;
public:
private:
    bool m_pulseDetailOnly;
public:
private:
    bool m_pulseExclusive;
public:
private:
    bool m_property210;
public:
private:
    bool m_activateGroup;
public:
private:
    bool m_touchHoldMode;
public:
private:
    TouchToggleMode m_touchToggleMode;
public:
private:
    int m_touchPlayerMode;
public:
private:
    bool m_isDualMode;
public:
private:
    int m_animationID;
public:
private:
    bool m_isMultiTriggered;
public:
private:
    bool m_triggerOnExit;
public:
private:
    int m_itemID2;
public:
private:
    int m_property534;
public:
private:
    bool m_isDynamicBlock;
public:
private:
    int m_itemID;
public:
private:
    bool m_targetPlayer1;
public:
private:
    bool m_targetPlayer2;
public:
private:
    bool m_followCPP;
public:
private:
    bool m_subtractCount;
public:
private:
    bool m_collectibleIsPickupItem;
public:
private:
    bool m_collectibleIsToggleTrigger;
public:
private:
    int m_collectibleParticleID;
public:
private:
    int m_collectiblePoints;
public:
private:
    bool m_hasNoAnimation;
public:
private:
    float m_gravityValue;
public:
private:
    bool m_isSinglePTouch;
public:
private:
    float m_zoomValue;
public:
private:
    bool m_cameraIsFreeMode;
public:
private:
    bool m_cameraEditCameraSettings;
public:
private:
    float m_cameraEasingValue;
public:
private:
    float m_cameraPaddingValue;
public:
private:
    bool m_cameraDisableGridSnap;
public:
private:
    bool m_property118;
public:
private:
    float m_timeWarpTimeMod;
public:
private:
    bool m_shouldPreview;
public:
private:
    int m_ordValue;
public:
private:
    int m_channelValue;
public:
private:
    bool m_isReverse;
public:
private:
    int m_secretCoinID;
public:
private:
    bool m_ignoreGroupParent;
public:
private:
    bool m_ignoreLinkedObjects;
public:
};
