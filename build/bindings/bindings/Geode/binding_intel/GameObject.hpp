#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "CCSpritePlus.hpp"

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x4edac4
     * @note[short] MacOS (Intel): 0x5ad230
     * @note[short] Windows: 0x1847f0
     * @note[short] Android
     */
    void addColorSprite(gd::string p0);
    
private:
    [[deprecated("GameObject::addColorSpriteToParent not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSpriteToParent(bool p0);
public:
    
private:
    [[deprecated("GameObject::addColorSpriteToSelf not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addColorSpriteToSelf();
public:
    
private:
    [[deprecated("GameObject::addCustomBlackChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomBlackChild(gd::string p0, float p1, bool p2);
public:
    
private:
    [[deprecated("GameObject::addCustomChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addCustomColorChild(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addEmptyGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addEmptyGlow();
public:
    
private:
    [[deprecated("GameObject::addGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::addInternalChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalChild(cocos2d::CCSprite* p0, gd::string p1, cocos2d::CCPoint p2, int p3);
public:
    
private:
    [[deprecated("GameObject::addInternalCustomColorChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalCustomColorChild(gd::string p0, cocos2d::CCPoint p1, int p2);
public:
    
private:
    [[deprecated("GameObject::addInternalGlowChild not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addInternalGlowChild(gd::string p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope01Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope01Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02(bool p0);
public:
    
private:
    [[deprecated("GameObject::addNewSlope02Glow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addNewSlope02Glow(bool p0);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0, float p1);
public:
    
private:
    [[deprecated("GameObject::addRotation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addRotation(float p0);
public:
    
private:
    [[deprecated("GameObject::addToColorGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToColorGroup(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4f4054
     * @note[short] MacOS (Intel): 0x5c4cb0
     * @note[short] Android
     */
    void addToCustomScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f407c
     * @note[short] MacOS (Intel): 0x5c4cf0
     * @note[short] Android
     */
    void addToCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::addToOpacityGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToOpacityGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::addToTempOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToTempOffset(double p0, double p1);
public:
    
private:
    [[deprecated("GameObject::assignUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn assignUniqueID();
public:
    
private:
    [[deprecated("GameObject::belongsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn belongsToGroup(int p0);
public:
    
private:
    [[deprecated("GameObject::calculateOrientedBox not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn calculateOrientedBox();
public:
    
private:
    [[deprecated("GameObject::canChangeCustomColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeCustomColor();
public:
    
private:
    [[deprecated("GameObject::canChangeMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeMainColor();
public:
    
private:
    [[deprecated("GameObject::canChangeSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canChangeSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::canRotateFree not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canRotateFree();
public:
    
private:
    [[deprecated("GameObject::colorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn colorForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::commonInteractiveSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn commonInteractiveSetup();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ed04c
     * @note[short] MacOS (Intel): 0x5aa930
     * @note[short] Windows: 0x183d30
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (Intel): 0x5c70a0
     * @note[short] Windows: 0x192980
     * @note[short] Android
     */
    TodoReturn copyGroups(GameObject* p0);
    
private:
    [[deprecated("GameObject::createAndAddParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createAndAddParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
public:
    
private:
    [[deprecated("GameObject::createColorGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createColorGroupContainer(int p0);
public:
    
private:
    [[deprecated("GameObject::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::createGroupContainer not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);
public:
    
private:
    [[deprecated("GameObject::createOpacityGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOpacityGroupContainer(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4ed1f8
     * @note[short] MacOS (Intel): 0x5aaaf0
     * @note[short] Android
     */
    void createSpriteColor(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4ecf80
     * @note[short] MacOS (Intel): 0x5aa890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);
    
private:
    [[deprecated("GameObject::createWithKey not implemented")]]
    /**
     * @note[short] Windows: 0x181810
     * @note[short] Android
     */
    static GameObject* createWithKey(int p0);
public:
    
private:
    [[deprecated("GameObject::deselectObject not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObject();
public:
	inline void destroyObject() {
		m_unk34a = true;
		m_unk292 = true;
		setOpacity(0);
	}

    /**
     * @note[short] MacOS (Intel): 0x5c6ad0
     * @note[short] Windows: 0x192300
     * @note[short] Android
     */
    void determineSlopeDirection();
    
private:
    [[deprecated("GameObject::didScaleXChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleXChange();
public:
    
private:
    [[deprecated("GameObject::didScaleYChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn didScaleYChange();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectPos();
public:
    
private:
    [[deprecated("GameObject::dirtifyObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dirtifyObjectRect();
public:
    
private:
    [[deprecated("GameObject::disableObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableObject();
public:
    
private:
    [[deprecated("GameObject::dontCountTowardsLimit not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dontCountTowardsLimit();
public:
    
private:
    [[deprecated("GameObject::duplicateAttributes not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateAttributes(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::duplicateColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn duplicateColorMode(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::duplicateValues not implemented")]]
    /**
     * @note[short] Windows: 0x197e00
     * @note[short] Android
     */
    void duplicateValues(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::editorColorForCustomMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorColorForCustomMode(int p0);
public:
    
private:
    [[deprecated("GameObject::editorColorForMode not implemented")]]
    /**
     * @note[short] Windows: 0x197060
     * @note[short] Android
     */
    TodoReturn editorColorForMode(int p0);
public:
    
private:
    [[deprecated("GameObject::fastRotateObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fastRotateObject(float p0);
public:
    
private:
    [[deprecated("GameObject::getActiveColorForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveColorForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::getBallFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBallFrame(int p0);
public:
    
private:
    [[deprecated("GameObject::getBoundingRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoundingRect();
public:
    
private:
    [[deprecated("GameObject::getBoxOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBoxOffset();
public:
    
private:
    [[deprecated("GameObject::getColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getColorIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getColorIndex();
public:
    
private:
    [[deprecated("GameObject::getColorKey not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getColorKey(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::getCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCustomZLayer();
public:
    
private:
    [[deprecated("GameObject::getGlowFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGlowFrame(gd::string p0);
public:
    
private:
    [[deprecated("GameObject::getGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupDisabled();
public:

    /**
     * @note[short] MacOS (Intel): 0x5c7080
     * @note[short] Android
     */
    TodoReturn getGroupID(int p0);
    
private:
    [[deprecated("GameObject::getGroupString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupString();
public:

    /**
     * @note[short] MacOS (Intel): 0x5d3a00
     * @note[short] Android
     */
    TodoReturn getLastPosition();
    
private:
    [[deprecated("GameObject::getMainColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColor();
public:
    
private:
    [[deprecated("GameObject::getMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMainColorMode();
public:
    
private:
    [[deprecated("GameObject::getObjectDirection not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectDirection();
public:
    
private:
    [[deprecated("GameObject::getObjectRadius not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRadius();
public:
    
private:
    [[deprecated("GameObject::getObjectRectPointer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectRectPointer();
public:
    
private:
    [[deprecated("GameObject::getObjectZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectZLayer();
public:
    
private:
    [[deprecated("GameObject::getObjectZOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjectZOrder();
public:
    
private:
    [[deprecated("GameObject::getOuterObjectRect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getOuterObjectRect();
public:
    
private:
    [[deprecated("GameObject::getParentMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getParentMode();
public:
    
private:
    [[deprecated("GameObject::getRelativeSpriteColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeSpriteColor(int p0);
public:
    
private:
    [[deprecated("GameObject::getScalePosDelta not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getScalePosDelta();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::getSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::getSlopeAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSlopeAngle();
public:
    
private:
    [[deprecated("GameObject::getUnmodifiedPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getUnmodifiedPosition();
public:
    
private:
    [[deprecated("GameObject::groupColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupColor(cocos2d::ccColor3B const& p0, bool p1);
public:

    /**
     * @note[short] MacOS (Intel): 0x5c7ab0
     * @note[short] Windows: 0x192cf0
     * @note[short] Android
     */
    TodoReturn groupOpacityMod();
    
private:
    [[deprecated("GameObject::groupWasDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupWasDisabled();
public:
    
private:
    [[deprecated("GameObject::groupWasEnabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn groupWasEnabled();
public:
    
private:
    [[deprecated("GameObject::hasSecondaryColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hasSecondaryColor();
public:
    
private:
    [[deprecated("GameObject::ignoreEditorDuration not implemented")]]
    /**
     * @note[short] Android
     */
    bool ignoreEditorDuration();
public:
    
private:
    [[deprecated("GameObject::ignoreEnter not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreEnter();
public:
    
private:
    [[deprecated("GameObject::ignoreFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn ignoreFade();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ed010
     * @note[short] MacOS (Intel): 0x5aa900
     * @note[short] Android
     */
    bool init(char const* p0);
    
private:
    [[deprecated("GameObject::isBasicEnterEffect not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicEnterEffect(int p0);
public:
    
private:
    [[deprecated("GameObject::isBasicTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isBasicTrigger();
public:
    
private:
    [[deprecated("GameObject::isColorObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorObject();
public:
    
private:
    [[deprecated("GameObject::isColorTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isColorTrigger();
public:
    
private:
    [[deprecated("GameObject::isConfigurablePortal not implemented")]]
    /**
     * @note[short] Android
     */
    bool isConfigurablePortal();
public:
    
private:
    [[deprecated("GameObject::isEditorSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();
public:

    /**
     * @note[short] MacOS (ARM): 0x50012c
     * @note[short] MacOS (Intel): 0x5d2840
     * @note[short] Windows: 0x197950
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x5001d8
     * @note[short] MacOS (Intel): 0x5d28e0
     * @note[short] Windows: 0x197a10
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (Intel): 0x5d45e0
     * @note[short] Android
     */
    bool isSettingsObject();
    
private:
    [[deprecated("GameObject::isSpawnableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpawnableTrigger();
public:
    
private:
    [[deprecated("GameObject::isSpecialObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialObject();
public:
    
private:
    [[deprecated("GameObject::isSpeedObject not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpeedObject();
public:
    
private:
    [[deprecated("GameObject::isStoppableTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isStoppableTrigger();
public:
    
private:
    [[deprecated("GameObject::isTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isTrigger();
public:
    
private:
    [[deprecated("GameObject::loadGroupsFromString not implemented")]]
    /**
     * @note[short] Android
     */
    void loadGroupsFromString(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4f4c30
     * @note[short] MacOS (Intel): 0x5c59f0
     * @note[short] Android
     */
    TodoReturn makeInvisible();

    /**
     * @note[short] MacOS (ARM): 0x4f775c
     * @note[short] MacOS (Intel): 0x5c8800
     * @note[short] Windows: 0x193220
     * @note[short] Android
     */
    static GameObject* objectFromVector(gd::vector<gd::string>& p0, gd::vector<void*>& p1, GJBaseGameLayer* p2, bool p3);
    
private:
    [[deprecated("GameObject::opacityModForMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn opacityModForMode(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::parentForZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn parentForZLayer(int p0, bool p1, int p2);
public:
    
private:
    [[deprecated("GameObject::perspectiveColorFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveColorFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::perspectiveFrame not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn perspectiveFrame(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameObject::playDestroyObjectAnim not implemented")]]
    /**
     * @note[short] Windows: 0x1a04e0
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, float p10, float p11);
public:
    
private:
    [[deprecated("GameObject::playPickupAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playPickupAnimation(cocos2d::CCSprite* p0, float p1, float p2, float p3, float p4);
public:

    /**
     * @note[short] MacOS (ARM): 0x4f4cac
     * @note[short] MacOS (Intel): 0x5c5a90
     * @note[short] Windows: 0x18f3f0
     * @note[short] Android
     */
    void playShineEffect();
    
private:
    [[deprecated("GameObject::quickUpdatePosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition();
public:
    
private:
    [[deprecated("GameObject::quickUpdatePosition2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn quickUpdatePosition2();
public:
    
private:
    [[deprecated("GameObject::removeColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeColorSprite();
public:
    
private:
    [[deprecated("GameObject::removeGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeGlow();
public:
    
private:
    [[deprecated("GameObject::reorderColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reorderColorSprite();
public:
    
private:
    [[deprecated("GameObject::resetColorGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetColorGroups();
public:
    
private:
    [[deprecated("GameObject::resetGroupDisabled not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroupDisabled();
public:
    
private:
    [[deprecated("GameObject::resetGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetGroups();
public:
    
private:
    [[deprecated("GameObject::resetMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMainColorMode();
public:
    
private:
    [[deprecated("GameObject::resetMID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMID();
public:
    
private:
    [[deprecated("GameObject::resetMoveOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetMoveOffset();
public:
    
private:
    [[deprecated("GameObject::resetRScaleForced not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetRScaleForced();
public:
    
private:
    [[deprecated("GameObject::resetSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSecondaryColorMode();
public:
    
private:
    [[deprecated("GameObject::setAreaOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setAreaOpacity(float p0, float p1, int p2);
public:
    
private:
    [[deprecated("GameObject::setCustomZLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void setCustomZLayer(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setDefaultSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setGlowOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x501178
     * @note[short] MacOS (Intel): 0x5d3a10
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& p0);
    
private:
    [[deprecated("GameObject::setMainColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setMainColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setSecondaryColorMode not implemented")]]
    /**
     * @note[short] Android
     */
    void setSecondaryColorMode(int p0);
public:
    
private:
    [[deprecated("GameObject::setupColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupColorSprite(int p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::setupPixelScale not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupPixelScale();
public:
    
private:
    [[deprecated("GameObject::setupSpriteSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupSpriteSize();
public:
    
private:
    [[deprecated("GameObject::shouldBlendColor not implemented")]]
    /**
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* p0, bool p1);
public:
    
private:
    [[deprecated("GameObject::shouldLockX not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldLockX();
public:
    
private:
    [[deprecated("GameObject::shouldNotHideAnimFreeze not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldNotHideAnimFreeze();
public:
    
private:
    [[deprecated("GameObject::shouldShowPickupEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldShowPickupEffects();
public:
    
private:
    [[deprecated("GameObject::slopeFloorTop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeFloorTop();
public:
    
private:
    [[deprecated("GameObject::slopeWallLeft not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeWallLeft();
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Windows: 0x1973f0
     * @note[short] Android
     */
    double slopeYPos(float p0);
public:
    
private:
    [[deprecated("GameObject::slopeYPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn slopeYPos(GameObject* p0);
public:
    
private:
    [[deprecated("GameObject::spawnDefaultPickupParticle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn spawnDefaultPickupParticle(GJBaseGameLayer* p0);
public:
    
private:
    [[deprecated("GameObject::updateBlendMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateBlendMode();
public:
    
private:
    [[deprecated("GameObject::updateCustomColorType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateCustomColorType(short p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x5b24b0
     * @note[short] Windows: 0x18e690
     * @note[short] Android
     */
    void updateCustomScaleX(float p0);

    /**
     * @note[short] MacOS (Intel): 0x5b2530
     * @note[short] Windows: 0x18e720
     * @note[short] Android
     */
    void updateCustomScaleY(float p0);
    
private:
    [[deprecated("GameObject::updateHSVState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateHSVState();
public:

    /**
     * @note[short] MacOS (Intel): 0x5d2660
     * @note[short] Windows: 0x197770
     * @note[short] Android
     */
    TodoReturn updateIsOriented();
    
private:
    [[deprecated("GameObject::updateMainColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateMainOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateMainOpacity();
public:
    
private:
    [[deprecated("GameObject::updateObjectEditorColor not implemented")]]
    /**
     * @note[short] Windows: 0x197330
     * @note[short] Android
     */
    void updateObjectEditorColor();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryColorOnly not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryColorOnly();
public:
    
private:
    [[deprecated("GameObject::updateSecondaryOpacity not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSecondaryOpacity();
public:
    
private:
    [[deprecated("GameObject::updateStartPos not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateStartPos();
public:
    
private:
    [[deprecated("GameObject::updateUnmodifiedPositions not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateUnmodifiedPositions();
public:
    
private:
    [[deprecated("GameObject::usesFreezeAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesFreezeAnimation();
public:
    
private:
    [[deprecated("GameObject::usesSpecialAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn usesSpecialAnimation();
public:

    /**
     * @note[short] MacOS (ARM): 0x4ef094
     * @note[short] MacOS (Intel): 0x5b2ca0
     * @note[short] Android
     */
    virtual void update(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3d18
     * @note[short] MacOS (Intel): 0x5c4970
     * @note[short] Windows: 0x18e290
     * @note[short] Android
     */
    virtual void setScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3db8
     * @note[short] MacOS (Intel): 0x5c4a10
     * @note[short] Windows: 0x18e370
     * @note[short] Android
     */
    virtual void setScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3e58
     * @note[short] MacOS (Intel): 0x5c4ab0
     * @note[short] Windows: 0x18e460
     * @note[short] Android
     */
    virtual void setScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3740
     * @note[short] MacOS (Intel): 0x5c43f0
     * @note[short] Windows: 0x18dba0
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f44a8
     * @note[short] MacOS (Intel): 0x5c51b0
     * @note[short] Windows: 0x18ec90
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4f39e0
     * @note[short] MacOS (Intel): 0x5c4660
     * @note[short] Windows: 0x18de40
     * @note[short] Android
     */
    virtual void setRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3ac8
     * @note[short] MacOS (Intel): 0x5c4730
     * @note[short] Windows: 0x18df90
     * @note[short] Android
     */
    virtual void setRotationX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3ba4
     * @note[short] MacOS (Intel): 0x5c47f0
     * @note[short] Windows: 0x18e0e0
     * @note[short] Android
     */
    virtual void setRotationY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f417c
     * @note[short] MacOS (Intel): 0x5c4e10
     * @note[short] Windows: 0x18e840
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x4ed1c4
     * @note[short] MacOS (Intel): 0x5aaac0
     * @note[short] Windows: 0x183cf0
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    /**
     * @note[short] MacOS (ARM): 0x4ff270
     * @note[short] MacOS (Intel): 0x5d19c0
     * @note[short] Windows: 0x196e00
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3c70
     * @note[short] MacOS (Intel): 0x5c48d0
     * @note[short] Windows: 0x18e200
     * @note[short] Android
     */
    virtual void setFlipX(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3cc4
     * @note[short] MacOS (Intel): 0x5c4920
     * @note[short] Windows: 0x18e240
     * @note[short] Android
     */
    virtual void setFlipY(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x173c88
     * @note[short] MacOS (Intel): 0x1b64a0
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4ef098
     * @note[short] MacOS (Intel): 0x5b2cb0
     * @note[short] Windows: 0x186e60
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3bef18
     * @note[short] MacOS (Intel): 0x44d950
     * @note[short] Windows: 0x1a4f40
     * @note[short] Android
     */
    virtual void setupCustomSprites(gd::string p0);

    /**
     * @note[short] MacOS (ARM): 0x4f5a14
     * @note[short] MacOS (Intel): 0x5c67e0
     * @note[short] Windows: 0x191d90
     * @note[short] Android
     */
    virtual TodoReturn addMainSpriteToParent(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4ee694
     * @note[short] MacOS (Intel): 0x5b2160
     * @note[short] Windows: 0x186710
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x173904
     * @note[short] MacOS (Intel): 0x1b6120
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* p0, int p1, gd::vector<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x4eeb4c
     * @note[short] MacOS (Intel): 0x5b2780
     * @note[short] Windows: 0x186b20
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x4eeed0
     * @note[short] MacOS (Intel): 0x5b2af0
     * @note[short] Windows: 0x186bd0
     * @note[short] Android
     */
    virtual void deactivateObject(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3114
     * @note[short] MacOS (Intel): 0x5c3ce0
     * @note[short] Windows: 0x18d690
     * @note[short] Android
     */
    virtual TodoReturn transferObjectRect(cocos2d::CCRect& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f31ec
     * @note[short] MacOS (Intel): 0x5c3d50
     * @note[short] Windows: 0x18d6e0
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x4f31a0
     * @note[short] MacOS (Intel): 0x5c3d80
     * @note[short] Windows: 0x18d700
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4f3384
     * @note[short] MacOS (Intel): 0x5c3fc0
     * @note[short] Windows: 0x18d890
     * @note[short] Android
     */
    virtual TodoReturn getObjectRect2(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4f3448
     * @note[short] MacOS (Intel): 0x5c4090
     * @note[short] Windows: 0x18d930
     * @note[short] Android
     */
    virtual TodoReturn getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x4f36a0
     * @note[short] MacOS (Intel): 0x5c4330
     * @note[short] Windows: 0x18db60
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x4ee578
     * @note[short] MacOS (Intel): 0x5b2050
     * @note[short] Windows: 0x186590
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x4ee9dc
     * @note[short] MacOS (Intel): 0x5b25b0
     * @note[short] Windows: 0x186960
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): 0x326d1c
     * @note[short] MacOS (Intel): 0x39fd10
     * @note[short] Android
     */
    virtual void customObjectSetup(gd::vector<gd::string>& p0, gd::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x4f96a0
     * @note[short] MacOS (Intel): 0x5ca7c0
     * @note[short] Windows: 0x194d10
     * @note[short] Android
     */
    virtual gd::string getSaveString(GJBaseGameLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x4f45f0
     * @note[short] MacOS (Intel): 0x5c5310
     * @note[short] Windows: 0x18edb0
     * @note[short] Android
     */
    virtual TodoReturn claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4f4b90
     * @note[short] MacOS (Intel): 0x5c5910
     * @note[short] Windows: 0x18f2e0
     * @note[short] Android
     */
    virtual TodoReturn unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x4f4bf8
     * @note[short] MacOS (Intel): 0x5c5980
     * @note[short] Android
     */
    virtual TodoReturn particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x4f3c60
     * @note[short] MacOS (Intel): 0x5c48b0
     * @note[short] Windows: 0x18e1e0
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x4f3c68
     * @note[short] MacOS (Intel): 0x5c48c0
     * @note[short] Windows: 0x18e1f0
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x4f3ef8
     * @note[short] MacOS (Intel): 0x5c4b50
     * @note[short] Windows: 0x18e550
     * @note[short] Android
     */
    virtual void setRScaleX(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3f2c
     * @note[short] MacOS (Intel): 0x5c4b90
     * @note[short] Windows: 0x18e590
     * @note[short] Android
     */
    virtual void setRScaleY(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3f60
     * @note[short] MacOS (Intel): 0x5c4bd0
     * @note[short] Windows: 0x18e5d0
     * @note[short] Android
     */
    virtual void setRScale(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4f3fe4
     * @note[short] MacOS (Intel): 0x5c4c50
     * @note[short] Windows: 0x18e610
     * @note[short] Android
     */
    virtual TodoReturn getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x4f401c
     * @note[short] MacOS (Intel): 0x5c4c80
     * @note[short] Windows: 0x18e650
     * @note[short] Android
     */
    virtual TodoReturn getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x4f3948
     * @note[short] MacOS (Intel): 0x5c45e0
     * @note[short] Windows: 0x18ddb0
     * @note[short] Android
     */
    virtual void setRRotation(float p0);

    /**
     * @note[short] MacOS (ARM): 0x1a135c
     * @note[short] MacOS (Intel): 0x1ed230
     * @note[short] Android
     */
    virtual void triggerActivated(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4fef58
     * @note[short] MacOS (Intel): 0x5d16e0
     * @note[short] Windows: 0x196ac0
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4ff218
     * @note[short] MacOS (Intel): 0x5d1970
     * @note[short] Windows: 0x196db0
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f4c18
     * @note[short] MacOS (Intel): 0x5c59c0
     * @note[short] Windows: 0x18f3d0
     * @note[short] Android
     */
    virtual TodoReturn restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x1a1360
     * @note[short] MacOS (Intel): 0x1ed240
     * @note[short] Android
     */
    virtual TodoReturn animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x4ff2fc
     * @note[short] MacOS (Intel): 0x5d1a30
     * @note[short] Windows: 0x196e80
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1364
     * @note[short] MacOS (Intel): 0x1ed250
     * @note[short] Android
     */
    virtual TodoReturn activatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1368
     * @note[short] MacOS (Intel): 0x1ed260
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivatedByPlayer(PlayerObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1370
     * @note[short] MacOS (Intel): 0x1ed270
     * @note[short] Android
     */
    virtual TodoReturn hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x4ffd60
     * @note[short] MacOS (Intel): 0x5d2440
     * @note[short] Windows: 0x197550
     * @note[short] Android
     */
    virtual TodoReturn getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x4ffdf4
     * @note[short] MacOS (Intel): 0x5d24c0
     * @note[short] Windows: 0x1975b0
     * @note[short] Android
     */
    virtual TodoReturn updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5058b0
     * @note[short] MacOS (Intel): 0x5dac70
     * @note[short] Windows: 0x197530
     * @note[short] Android
     */
    virtual TodoReturn getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x500864
     * @note[short] MacOS (Intel): 0x5d30c0
     * @note[short] Windows: 0x197fb0
     * @note[short] Android
     */
    virtual TodoReturn updateMainColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x500d6c
     * @note[short] MacOS (Intel): 0x5d35d0
     * @note[short] Windows: 0x197fc0
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f6170
     * @note[short] MacOS (Intel): 0x5c6f40
     * @note[short] Windows: 0x1927d0
     * @note[short] Android
     */
    virtual void addToGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4f624c
     * @note[short] MacOS (Intel): 0x5c6ff0
     * @note[short] Windows: 0x1928f0
     * @note[short] Android
     */
    virtual void removeFromGroup(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4feda0
     * @note[short] MacOS (Intel): 0x5d1520
     * @note[short] Windows: 0x196910
     * @note[short] Android
     */
    virtual TodoReturn saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x1a1378
     * @note[short] MacOS (Intel): 0x1ed280
     * @note[short] Windows: 0x133ad0
     * @note[short] Android
     */
    virtual TodoReturn spawnXPosition();

    /**
     * @note[short] MacOS (ARM): 0x1a1398
     * @note[short] MacOS (Intel): 0x1ed2a0
     * @note[short] Android
     */
    virtual TodoReturn canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): 0x1a13a0
     * @note[short] MacOS (Intel): 0x1ed2b0
     * @note[short] Android
     */
    virtual TodoReturn blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x4ff150
     * @note[short] MacOS (Intel): 0x5d18b0
     * @note[short] Windows: 0x196ca0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4f4420
     * @note[short] MacOS (Intel): 0x5c5130
     * @note[short] Windows: 0x18eae0
     * @note[short] Android
     */
    virtual TodoReturn updateParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1a13a4
     * @note[short] MacOS (Intel): 0x1ed2c0
     * @note[short] Android
     */
    virtual TodoReturn updateMainParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1a13a8
     * @note[short] MacOS (Intel): 0x1ed2d0
     * @note[short] Android
     */
    virtual TodoReturn updateSecondaryParticleOpacity(unsigned char p0);

    /**
     * @note[short] MacOS (ARM): 0x1a13ac
     * @note[short] MacOS (Intel): 0x1ed2e0
     * @note[short] Android
     */
    virtual TodoReturn canReverse();

    /**
     * @note[short] MacOS (ARM): 0x1a13b4
     * @note[short] MacOS (Intel): 0x1ed2f0
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): 0x1a13bc
     * @note[short] MacOS (Intel): 0x1ed300
     * @note[short] Android
     */
    virtual TodoReturn canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x1a13c4
     * @note[short] MacOS (Intel): 0x1ed310
     * @note[short] Android
     */
    virtual TodoReturn getObjectLabel();

    /**
     * @note[short] MacOS (ARM): 0x1a13cc
     * @note[short] MacOS (Intel): 0x1ed320
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* p0);

    /**
     * @note[short] MacOS (ARM): 0x501ae4
     * @note[short] MacOS (Intel): 0x5d4710
     * @note[short] Android
     */
    virtual TodoReturn shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): 0x1a13d0
     * @note[short] MacOS (Intel): 0x1ed330
     * @note[short] Android
     */
    virtual TodoReturn getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1a13d8
     * @note[short] MacOS (Intel): 0x1ed340
     * @note[short] Android
     */
    virtual TodoReturn getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x1a13e0
     * @note[short] MacOS (Intel): 0x1ed350
     * @note[short] Android
     */
    virtual TodoReturn canMultiActivate(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1a13e8
     * @note[short] MacOS (Intel): 0x1ed360
     * @note[short] Android
     */
    virtual TodoReturn updateTextKerning(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1a13ec
     * @note[short] MacOS (Intel): 0x1ed370
     * @note[short] Android
     */
    virtual TodoReturn getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x1a13f4
     * @note[short] MacOS (Intel): 0x1ed380
     * @note[short] Windows: 0x133af0
     * @note[short] Android
     */
    virtual TodoReturn getObjectRectDirty();

    /**
     * @note[short] MacOS (ARM): 0x1a13fc
     * @note[short] MacOS (Intel): 0x1ed390
     * @note[short] Windows: 0x133b00
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1404
     * @note[short] MacOS (Intel): 0x1ed3a0
     * @note[short] Windows: 0x133b10
     * @note[short] Android
     */
    virtual TodoReturn getOrientedRectDirty();

    /**
     * @note[short] MacOS (ARM): 0x1a140c
     * @note[short] MacOS (Intel): 0x1ed3b0
     * @note[short] Windows: 0x133b20
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1414
     * @note[short] MacOS (Intel): 0x1ed3c0
     * @note[short] Android
     */
    virtual GameObjectType getType();

    /**
     * @note[short] MacOS (ARM): 0x1a141c
     * @note[short] MacOS (Intel): 0x1ed3d0
     * @note[short] Windows: 0x133b40
     * @note[short] Android
     */
    virtual void setType(GameObjectType p0);

    /**
     * @note[short] MacOS (ARM): 0x1a1424
     * @note[short] MacOS (Intel): 0x1ed3e0
     * @note[short] Android
     */
    virtual cocos2d::CCPoint* getStartPos(cocos2d::CCPoint* p0);
    GEODE_PAD(5);
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    GEODE_PAD(19);
    int m_activeMainColorID;
    int m_activeDetailColorID;
    GEODE_PAD(84);
    cocos2d::CCSprite* m_glowSprite;
    GEODE_PAD(4);
    float m_unk288;
    float m_unk28c;
    short m_unk290;
    bool m_unk292;
    GEODE_PAD(5);
    gd::string m_particleString;
    GEODE_PAD(1);
    bool m_particleUseObjectColor;
    GEODE_PAD(62);
    int m_linkedGroup;
    GEODE_PAD(12);
    cocos2d::CCSprite* m_colorSprite;
    GEODE_PAD(19);
    int m_uniqueID;
    GameObjectType m_objectType;
    int m_unk326;
    GEODE_PAD(10);
    double m_realXPosition;
    double m_realYPosition;
    cocos2d::CCPoint m_startPosition;
    GEODE_PAD(1);
    bool m_hasNoAudioScale;
    bool m_unk34a;
    GEODE_PAD(17);
    float m_currentScaleX;
    float m_currentScaleY;
    GEODE_PAD(16);
    short m_enterChannel;
    short m_objectMaterial;
    GEODE_PAD(4);
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    GEODE_PAD(8);
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    GEODE_PAD(22);
    int m_property53;
    GEODE_PAD(24);
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    GEODE_PAD(12);
    ZLayer m_zLayer;
    int m_zOrder;
    GEODE_PAD(1);
    bool m_isSelected;
    GEODE_PAD(14);
    bool m_shouldUpdateColorSprite;
    GEODE_PAD(1);
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    GEODE_PAD(8);
    bool m_isNoTouch;
    GEODE_PAD(9);
    cocos2d::CCPoint m_lastPosition;
    GEODE_PAD(27);
    bool m_isHighDetail;
    GEODE_PAD(33);
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    GEODE_PAD(17);
    int m_property155;
    int m_property156;
    GEODE_PAD(18);
};
