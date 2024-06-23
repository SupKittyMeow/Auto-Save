#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJTransformState.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "ColorSelectDelegate.hpp"
#include "GJRotationControlDelegate.hpp"
#include "GJScaleControlDelegate.hpp"
#include "GJTransformControlDelegate.hpp"
#include "MusicDownloadDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)
    
private:
    [[deprecated("EditorUI::create not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x9460
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static EditorUI* get();
    
private:
    [[deprecated("EditorUI::activateRotationControl not implemented")]]
    /**
     * @note[short] Windows: 0x11efb0
     * @note[short] Android
     */
    TodoReturn activateRotationControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::activateScaleControl not implemented")]]
    /**
     * @note[short] Android
     */
    void activateScaleControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::activateTransformControl not implemented")]]
    /**
     * @note[short] Windows: 0x111460
     * @note[short] Android
     */
    void activateTransformControl(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::addObjectsToSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToSmartTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::addSnapPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSnapPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::alignObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn alignObjects(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::applyOffset not implemented")]]
    /**
     * @note[short] Windows: 0x11e8d0
     * @note[short] Android
     */
    TodoReturn applyOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::applySpecialOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn applySpecialOffset(cocos2d::CCPoint p0, GameObject* p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("EditorUI::arrayContainsClass not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn arrayContainsClass(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::assignNewGroups not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn assignNewGroups(bool p0);
public:
    
private:
    [[deprecated("EditorUI::canAllowMultiActivate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canAllowMultiActivate(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::canSelectObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn canSelectObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::centerCameraOnObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn centerCameraOnObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::changeSelectedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn changeSelectedObjects(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::checkDiffAfterTransformAnchor not implemented")]]
    /**
     * @note[short] Windows: 0x111c70
     * @note[short] Android
     */
    TodoReturn checkDiffAfterTransformAnchor(cocos2d::CCPoint p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::checkLiveColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn checkLiveColorSelect();
public:
    
private:
    [[deprecated("EditorUI::clickOnPosition not implemented")]]
    /**
     * @note[short] Windows: 0xdebe0
     * @note[short] Android
     */
    void clickOnPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::closeLiveColorSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeLiveColorSelect();
public:
    
private:
    [[deprecated("EditorUI::closeLiveHSVSelect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeLiveHSVSelect();
public:
    
private:
    [[deprecated("EditorUI::colorSelectClosed not implemented")]]
    /**
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("EditorUI::constrainGameLayerPosition not implemented")]]
    /**
     * @note[short] Android
     */
    void constrainGameLayerPosition();
public:
    
private:
    [[deprecated("EditorUI::constrainGameLayerPosition not implemented")]]
    /**
     * @note[short] Windows: 0x11e960
     * @note[short] Android
     */
    void constrainGameLayerPosition(float p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::convertKeyBasedOnNeighbors not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertKeyBasedOnNeighbors(int p0, int p1, cocos2d::CCPoint p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::convertToBaseKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn convertToBaseKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::copyObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyObjects(cocos2d::CCArray* p0, bool p1, bool p2);
public:
    
private:
    [[deprecated("EditorUI::copyObjectsDetailed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn copyObjectsDetailed(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createCustomItems not implemented")]]
    /**
     * @note[short] Windows: 0xe0c80
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();
public:
    
private:
    [[deprecated("EditorUI::createEdgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createEdgeForObject(GameObject* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::createExtraObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtraObject(int p0, cocos2d::CCPoint p1, GameObject* p2, cocos2d::CCArray* p3, int p4, int p5);
public:
    
private:
    [[deprecated("EditorUI::createExtras not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtras(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createExtrasForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createExtrasForObject(int p0, GameObject* p1, cocos2d::CCArray* p2);
public:
    
private:
    [[deprecated("EditorUI::createGlow not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createGlow();
public:
    
private:
    [[deprecated("EditorUI::createLoop not implemented")]]
    /**
     * @note[short] Android
     */
    void createLoop();
public:
    
private:
    [[deprecated("EditorUI::createMoveMenu not implemented")]]
    /**
     * @note[short] Android
     */
    void createMoveMenu();
public:
    
private:
    [[deprecated("EditorUI::createNewKeyframeAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createNewKeyframeAnim();
public:
    
private:
    [[deprecated("EditorUI::createObject not implemented")]]
    /**
     * @note[short] Windows: 0x10c3e0
     * @note[short] Android
     */
    TodoReturn createObject(int p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("EditorUI::createOutlines not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createOutlines(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createPrefab not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPrefab(GJSmartTemplate* p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("EditorUI::createRockBases not implemented")]]
    /**
     * @note[short] Windows: 0x12b590
     * @note[short] Android
     */
    TodoReturn createRockBases(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createRockEdges not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createRockEdges(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromTemplate(GJSmartTemplate* p0, cocos2d::CCArray* p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("EditorUI::createSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSmartObjectsFromType(int p0, cocos2d::CCArray* p1, bool p2, bool p3);
public:
    
private:
    [[deprecated("EditorUI::createUndoObject not implemented")]]
    /**
     * @note[short] Windows: 0x10d3d0
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::createUndoSelectObject not implemented")]]
    /**
     * @note[short] Windows: 0x10d6f0
     * @note[short] Android
     */
    TodoReturn createUndoSelectObject(bool p0);
public:
    
private:
    [[deprecated("EditorUI::deactivateRotationControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deactivateRotationControl();
public:
    
private:
    [[deprecated("EditorUI::deactivateScaleControl not implemented")]]
    /**
     * @note[short] Windows: 0x111010
     * @note[short] Android
     */
    TodoReturn deactivateScaleControl();
public:
    
private:
    [[deprecated("EditorUI::deactivateTransformControl not implemented")]]
    /**
     * @note[short] Windows: 0x111660
     * @note[short] Android
     */
    TodoReturn deactivateTransformControl();
public:
    
private:
    [[deprecated("EditorUI::deleteObject not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteObject(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::deleteSmartBlocksFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteSmartBlocksFromObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::deleteTypeFromObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deleteTypeFromObjects(int p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::deselectAll not implemented")]]
    /**
     * @note[short] Windows: 0x10d920
     * @note[short] Android
     */
    void deselectAll();
public:
    
private:
    [[deprecated("EditorUI::deselectObject not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObject();
public:
    
private:
    [[deprecated("EditorUI::deselectObject not implemented")]]
    /**
     * @note[short] Windows: 0x10d800
     * @note[short] Android
     */
    void deselectObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::deselectObjectsColor not implemented")]]
    /**
     * @note[short] Android
     */
    void deselectObjectsColor();
public:
    
private:
    [[deprecated("EditorUI::deselectTargetPortals not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn deselectTargetPortals();
public:
    
private:
    [[deprecated("EditorUI::disableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn disableButton(CreateMenuItem* p0);
public:
    
private:
    [[deprecated("EditorUI::doCopyObjects not implemented")]]
    /**
     * @note[short] Windows: 0x10f490
     * @note[short] Android
     */
    void doCopyObjects(bool p0);
public:
    
private:
    [[deprecated("EditorUI::doPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn doPasteInPlace(bool p0);
public:
    
private:
    [[deprecated("EditorUI::doPasteObjects not implemented")]]
    /**
     * @note[short] Windows: 0x10f620
     * @note[short] Android
     */
    void doPasteObjects(bool p0);
public:
    
private:
    [[deprecated("EditorUI::dynamicGroupUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn dynamicGroupUpdate(bool p0);
public:
    
private:
    [[deprecated("EditorUI::edgeForObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn edgeForObject(int p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::editButton2Usable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editButton2Usable();
public:
    
private:
    [[deprecated("EditorUI::editButtonUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editButtonUsable();
public:
    
private:
    [[deprecated("EditorUI::editColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editColor();
public:
    
private:
    [[deprecated("EditorUI::editColorButtonUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editColorButtonUsable();
public:

    /**
     * @note[short] MacOS (ARM): 0x2cf3c
     * @note[short] MacOS (Intel): 0x2c790
     * @note[short] Windows: 0x11b410
     * @note[short] Android
     */
    void editGroup(cocos2d::CCObject* p0);
    
private:
    [[deprecated("EditorUI::editHSV not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editHSV();
public:
    
private:
    [[deprecated("EditorUI::editObject not implemented")]]
    /**
     * @note[short] Windows: 0x1180a0
     * @note[short] Android
     */
    TodoReturn editObject(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::editObject2 not implemented")]]
    /**
     * @note[short] Windows: 0x11a030
     * @note[short] Android
     */
    TodoReturn editObject2(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::editObject3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObject3(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::editObjectSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editObjectSpecial(int p0);
public:
    
private:
    [[deprecated("EditorUI::editorLayerForArray not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn editorLayerForArray(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::enableButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn enableButton(CreateMenuItem* p0);
public:
    
private:
    [[deprecated("EditorUI::findAndSelectObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findAndSelectObject(int p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Windows: 0x11f220
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findSnapObject not implemented")]]
    /**
     * @note[short] Windows: 0x11f320
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint p0, float p1);
public:
    
private:
    [[deprecated("EditorUI::findTriggerTest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn findTriggerTest();
public:
    
private:
    [[deprecated("EditorUI::flipObjectsX not implemented")]]
    /**
     * @note[short] Windows: 0x11cc80
     * @note[short] Android
     */
    void flipObjectsX(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::flipObjectsY not implemented")]]
    /**
     * @note[short] Windows: 0x11ce60
     * @note[short] Android
     */
    void flipObjectsY(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::getButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getButton(char const* p0, int p1, cocos2d::SEL_MenuHandler p2, cocos2d::CCMenu* p3);
public:
    
private:
    [[deprecated("EditorUI::getCreateBtn not implemented")]]
    /**
     * @note[short] Windows: 0x10ae40
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);
public:
    
private:
    [[deprecated("EditorUI::getCreateMenuItemButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCreateMenuItemButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getCycledObject not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCycledObject(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::getEditColorTargets not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getEditColorTargets(ColorAction*& p0, ColorAction*& p1, EffectGameObject*& p2);
public:
    
private:
    [[deprecated("EditorUI::getGridSnappedPos not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint pos);
public:
    
private:
    [[deprecated("EditorUI::getGroupCenter not implemented")]]
    /**
     * @note[short] Windows: 0x11ed20
     * @note[short] Android
     */
    TodoReturn getGroupCenter(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::getGroupInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getGroupInfo(GameObject* p0, cocos2d::CCArray* p1, int& p2, int& p3, int& p4);
public:
    
private:
    [[deprecated("EditorUI::getLimitedPosition not implemented")]]
    /**
     * @note[short] Windows: 0x11c280
     * @note[short] Android
     */
    cocos2d::CCPoint getLimitedPosition(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::getModeBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getModeBtn(char const* p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::getNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNeighbor(int p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getRandomStartKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRandomStartKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::getRelativeOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRelativeOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::getSelectedObjects not implemented")]]
    /**
     * @note[short] Windows: 0x10d320
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();
public:
    
private:
    [[deprecated("EditorUI::getSimpleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSimpleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2);
public:
    
private:
    [[deprecated("EditorUI::getSmartNeighbor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartNeighbor(SmartGameObject* p0, cocos2d::CCPoint p1, GJSmartDirection p2, cocos2d::CCArray* p3);
public:
    
private:
    [[deprecated("EditorUI::getSmartObjectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSmartObjectKey(int p0, GJSmartDirection p1);
public:
    
private:
    [[deprecated("EditorUI::getSnapAngle not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSnapAngle(GameObject* p0, cocos2d::CCArray* p1);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);
public:
    
private:
    [[deprecated("EditorUI::getSpriteButton not implemented")]]
    /**
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3, int p4, cocos2d::CCPoint p5);
public:
    
private:
    [[deprecated("EditorUI::getTouchPoint not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTouchPoint(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::getTransformState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTransformState();
public:
    
private:
    [[deprecated("EditorUI::getXMin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getXMin(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xb790
     * @note[short] MacOS (Intel): 0x94c0
     * @note[short] Windows: 0xdba20
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);
    
private:
    [[deprecated("EditorUI::isLiveColorSelectTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::isSpecialSnapObject not implemented")]]
    /**
     * @note[short] Windows: 0x124e40
     * @note[short] Android
     */
    bool isSpecialSnapObject(int p0);
public:
    
private:
    [[deprecated("EditorUI::liveEditColorUsable not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn liveEditColorUsable();
public:
    
private:
    [[deprecated("EditorUI::menuItemFromObjectString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn menuItemFromObjectString(gd::string p0, int p1);
public:
    
private:
    [[deprecated("EditorUI::moveForCommand not implemented")]]
    /**
     * @note[short] Windows: 0x11b9b0
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);
public:
    
private:
    [[deprecated("EditorUI::moveGamelayer not implemented")]]
    /**
     * @note[short] Windows: 0xdf250
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::moveObject not implemented")]]
    /**
     * @note[short] Windows: 0x11be20
     * @note[short] Android
     */
    void moveObject(GameObject* p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("EditorUI::moveObjectCall not implemented")]]
    /**
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::moveObjectCall not implemented")]]
    /**
     * @note[short] Windows: 0x11bb90
     * @note[short] Android
     */
    void moveObjectCall(EditCommand p0);
public:
    
private:
    [[deprecated("EditorUI::offsetForKey not implemented")]]
    /**
     * @note[short] Windows: 0x122780
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::onAssignNewGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onAssignNewGroupID();
public:
    
private:
    [[deprecated("EditorUI::onColorFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onCopy not implemented")]]
    /**
     * @note[short] Windows: 0x10f480
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onCopyState not implemented")]]
    /**
     * @note[short] Windows: 0x110650
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onCreate not implemented")]]
    /**
     * @note[short] Windows: 0x10b8b0
     * @note[short] Android
     */
    bool onCreate();
public:
    
private:
    [[deprecated("EditorUI::onCreateButton not implemented")]]
    /**
     * @note[short] Windows: 0x10b420
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onCreateObject not implemented")]]
    /**
     * @note[short] Windows: 0x10bab0
     * @note[short] Android
     */
    void onCreateObject(int p0);
public:
    
private:
    [[deprecated("EditorUI::onDelete not implemented")]]
    /**
     * @note[short] Windows: 0xe2300
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteAll not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteCustomItem not implemented")]]
    /**
     * @note[short] Windows: 0xe0a20
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteSelected not implemented")]]
    /**
     * @note[short] Windows: 0xe2920
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteSelectedType not implemented")]]
    /**
     * @note[short] Windows: 0xe2eb0
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeleteStartPos not implemented")]]
    /**
     * @note[short] Windows: 0xe2f00
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDeselectAll not implemented")]]
    /**
     * @note[short] Windows: 0x10d8e0
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onDuplicate not implemented")]]
    /**
     * @note[short] Windows: 0x10ef70
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onEditColor not implemented")]]
    /**
     * @note[short] Windows: 0x11ac40
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onFindObject not implemented")]]
    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGoToBaseLayer not implemented")]]
    /**
     * @note[short] Windows: 0x110ad0
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGoToLayer not implemented")]]
    /**
     * @note[short] Windows: 0x110970
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupDown not implemented")]]
    /**
     * @note[short] Windows: 0x11b620
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupIDFilter not implemented")]]
    /**
     * @note[short] Windows: 0xe3620
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupSticky not implemented")]]
    /**
     * @note[short] Windows: 0x10ec80
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onGroupUp not implemented")]]
    /**
     * @note[short] Windows: 0x11b600
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onLockLayer not implemented")]]
    /**
     * @note[short] Windows: 0x11b790
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onNewCustomItem not implemented")]]
    /**
     * @note[short] Windows: 0xe0530
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPaste not implemented")]]
    /**
     * @note[short] Windows: 0x10f610
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPasteColor not implemented")]]
    /**
     * @note[short] Windows: 0x110860
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPasteInPlace not implemented")]]
    /**
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPasteState not implemented")]]
    /**
     * @note[short] Windows: 0x1106d0
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onPause not implemented")]]
    /**
     * @note[short] Windows: 0xddf70
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0xe734
     * @note[short] Windows: 0x10df30
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xe948
     * @note[short] MacOS (Intel): 0xca00
     * @note[short] Windows: 0x10e540
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onResetSpecialFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onSelectBuildTab not implemented")]]
    /**
     * @note[short] Windows: 0x110af0
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onSettings not implemented")]]
    /**
     * @note[short] Windows: 0xddf10
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0xeb88
     * @note[short] Windows: 0x10e8d0
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);
    
private:
    [[deprecated("EditorUI::onTargetIDChange not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onTargetIDChange(int p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleGuide not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onToggleSelectedOrder not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onToggleSelectedOrder(EffectGameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::onUngroupSticky not implemented")]]
    /**
     * @note[short] Windows: 0x10ecc0
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::onUpdateDeleteFilter not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditorUI::orderDownCustomItem not implemented")]]
    /**
     * @note[short] Windows: 0xe0bf0
     * @note[short] Android
     */
    void orderDownCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::orderUpCustomItem not implemented")]]
    /**
     * @note[short] Windows: 0xe0b60
     * @note[short] Android
     */
    void orderUpCustomItem(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::pasteObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pasteObjects(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::playCircleAnim not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playCircleAnim(cocos2d::CCPoint p0, float p1, float p2);
public:
    
private:
    [[deprecated("EditorUI::playerTouchBegan not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::playerTouchEnded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playerTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
public:
    
private:
    [[deprecated("EditorUI::playtestStopped not implemented")]]
    /**
     * @note[short] Windows: 0x10e910
     * @note[short] Android
     */
    TodoReturn playtestStopped();
public:
    
private:
    [[deprecated("EditorUI::positionIsInSnapped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionIsInSnapped(cocos2d::CCPoint p0);
public:
    
private:
    [[deprecated("EditorUI::positionWithoutOffset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn positionWithoutOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::processSelectObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSelectObjects(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::processSmartObjectsFromType not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn processSmartObjectsFromType(int p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2, cocos2d::CCArray* p3, cocos2d::CCArray* p4);
public:

    /**
     * @note[short] MacOS (ARM): 0x322b8
     * @note[short] Android
     */
    void recreateButtonTabs();
    
private:
    [[deprecated("EditorUI::redoLastAction not implemented")]]
    /**
     * @note[short] Windows: 0x10dd30
     * @note[short] Android
     */
    void redoLastAction(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::reloadCustomItems not implemented")]]
    /**
     * @note[short] Windows: 0xe1190
     * @note[short] Android
     */
    void reloadCustomItems();
public:
    
private:
    [[deprecated("EditorUI::removeOffset not implemented")]]
    /**
     * @note[short] Windows: 0x11e840
     * @note[short] Android
     */
    TodoReturn removeOffset(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::replaceGroupID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn replaceGroupID(GameObject* p0, int p1, int p2);
public:
    
private:
    [[deprecated("EditorUI::repositionObjectsToCenter not implemented")]]
    /**
     * @note[short] Windows: 0x1105b0
     * @note[short] Android
     */
    TodoReturn repositionObjectsToCenter(cocos2d::CCArray* p0, cocos2d::CCPoint p1, bool p2);
public:
    
private:
    [[deprecated("EditorUI::resetObjectEditorValues not implemented")]]
    /**
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("EditorUI::resetSelectedObjectsColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSelectedObjectsColor();
public:
    
private:
    [[deprecated("EditorUI::resetUI not implemented")]]
    /**
     * @note[short] Android
     */
    void resetUI();
public:
    
private:
    [[deprecated("EditorUI::rotateObjects not implemented")]]
    /**
     * @note[short] Windows: 0x11d040
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("EditorUI::rotationforCommand not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn rotationforCommand(EditCommand p0);
public:
    
private:
    [[deprecated("EditorUI::scaleObjects not implemented")]]
    /**
     * @note[short] Windows: 0x11d460
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* p0, float p1, float p2, cocos2d::CCPoint p3, ObjectScaleType p4, bool p5);
public:
    
private:
    [[deprecated("EditorUI::selectAll not implemented")]]
    /**
     * @note[short] Android
     */
    void selectAll();
public:
    
private:
    [[deprecated("EditorUI::selectAllWithDirection not implemented")]]
    /**
     * @note[short] Android
     */
    void selectAllWithDirection(bool p0);
public:
    
private:
    [[deprecated("EditorUI::selectBuildTab not implemented")]]
    /**
     * @note[short] Windows: 0x110b20
     * @note[short] Android
     */
    void selectBuildTab(int p0);
public:
    
private:
    [[deprecated("EditorUI::selectObject not implemented")]]
    /**
     * @note[short] Windows: 0x10c9f0
     * @note[short] Android
     */
    void selectObject(GameObject* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::selectObjects not implemented")]]
    /**
     * @note[short] Windows: 0x10cce0
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* p0, bool p1);
public:
    
private:
    [[deprecated("EditorUI::selectObjectsInRect not implemented")]]
    /**
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("EditorUI::setupCreateMenu not implemented")]]
    /**
     * @note[short] Windows: 0xe44b0
     * @note[short] Android
     */
    void setupCreateMenu();
public:
    
private:
    [[deprecated("EditorUI::setupDeleteMenu not implemented")]]
    /**
     * @note[short] Android
     */
    void setupDeleteMenu();
public:
    
private:
    [[deprecated("EditorUI::setupEditMenu not implemented")]]
    /**
     * @note[short] Android
     */
    void setupEditMenu();
public:
    
private:
    [[deprecated("EditorUI::setupTransformControl not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setupTransformControl();
public:
    
private:
    [[deprecated("EditorUI::shouldDeleteObject not implemented")]]
    /**
     * @note[short] Android
     */
    static bool shouldDeleteObject(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::shouldSnap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldSnap(GameObject* p0);
public:
    
private:
    [[deprecated("EditorUI::showDeleteConfirmation not implemented")]]
    /**
     * @note[short] Android
     */
    void showDeleteConfirmation();
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForMode not implemented")]]
    /**
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int p0);
public:
    
private:
    [[deprecated("EditorUI::showLiveColorSelectForModeSpecial not implemented")]]
    /**
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int p0);
public:
    
private:
    [[deprecated("EditorUI::showMaxBasicError not implemented")]]
    /**
     * @note[short] Android
     */
    void showMaxBasicError();
public:
    
private:
    [[deprecated("EditorUI::showMaxCoinError not implemented")]]
    /**
     * @note[short] Android
     */
    void showMaxCoinError();
public:
    
private:
    [[deprecated("EditorUI::showMaxError not implemented")]]
    /**
     * @note[short] Windows: 0x10ed00
     * @note[short] Android
     */
    void showMaxError();
public:

    /**
     * @note[short] MacOS (ARM): 0x392e4
     * @note[short] Windows: 0x10dda0
     * @note[short] Android
     */
    void showUI(bool p0);
    
private:
    [[deprecated("EditorUI::sliderChanged not implemented")]]
    /**
     * @note[short] Windows: 0xdef40
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::smartTypeForKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn smartTypeForKey(int p0);
public:
    
private:
    [[deprecated("EditorUI::spriteFromObjectString not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteFromObjectString(gd::string p0, bool p1, bool p2, int p3, cocos2d::CCArray* p4, cocos2d::CCArray* p5, GameObject* p6);
public:
    
private:
    [[deprecated("EditorUI::toggleDuplicateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleDuplicateButton();
public:
    
private:
    [[deprecated("EditorUI::toggleEditObjectButton not implemented")]]
    /**
     * @note[short] Windows: 0x116aa0
     * @note[short] Android
     */
    TodoReturn toggleEditObjectButton();
public:
    
private:
    [[deprecated("EditorUI::toggleEnableRotate not implemented")]]
    /**
     * @note[short] Windows: 0x10c6a0
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::toggleFreeMove not implemented")]]
    /**
     * @note[short] Windows: 0x10c520
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2dc08
     * @note[short] MacOS (Intel): 0x2d5a0
     * @note[short] Android
     */
    TodoReturn toggleLockUI(bool p0);
    
private:
    [[deprecated("EditorUI::toggleMode not implemented")]]
    /**
     * @note[short] Windows: 0xe1390
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::toggleObjectInfoLabel not implemented")]]
    /**
     * @note[short] Windows: 0xdf2d0
     * @note[short] Android
     */
    TodoReturn toggleObjectInfoLabel();
public:
    
private:
    [[deprecated("EditorUI::toggleSnap not implemented")]]
    /**
     * @note[short] Windows: 0x10c5c0
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::toggleSpecialEditButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleSpecialEditButtons();
public:
    
private:
    [[deprecated("EditorUI::toggleStickyControls not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleStickyControls(bool p0);
public:
    
private:
    [[deprecated("EditorUI::toggleSwipe not implemented")]]
    /**
     * @note[short] Windows: 0x10c480
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::transformObject not implemented")]]
    /**
     * @note[short] Windows: 0x11c890
     * @note[short] Android
     */
    void transformObject(GameObject* p0, EditCommand p1, bool p2);
public:
    
private:
    [[deprecated("EditorUI::transformObjectCall not implemented")]]
    /**
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::transformObjectCall not implemented")]]
    /**
     * @note[short] Windows: 0x11c340
     * @note[short] Android
     */
    void transformObjectCall(EditCommand p0);
public:
    
private:
    [[deprecated("EditorUI::transformObjects not implemented")]]
    /**
     * @note[short] Windows: 0x11da50
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* p0, cocos2d::CCPoint p1, float p2, float p3, float p4, float p5, float p6, float p7);
public:
    
private:
    [[deprecated("EditorUI::transformObjectsActive not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformObjectsActive();
public:
    
private:
    [[deprecated("EditorUI::transformObjectsReset not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn transformObjectsReset();
public:
    
private:
    [[deprecated("EditorUI::triggerSwipeMode not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerSwipeMode();
public:
    
private:
    [[deprecated("EditorUI::tryUpdateTimeMarkers not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tryUpdateTimeMarkers();
public:
    
private:
    [[deprecated("EditorUI::undoLastAction not implemented")]]
    /**
     * @note[short] Windows: 0x10dcc0
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditorUI::updateButtons not implemented")]]
    /**
     * @note[short] Windows: 0xde380
     * @note[short] Android
     */
    void updateButtons();
public:
    
private:
    [[deprecated("EditorUI::updateCreateMenu not implemented")]]
    /**
     * @note[short] Windows: 0x10b460
     * @note[short] Android
     */
    TodoReturn updateCreateMenu(bool p0);
public:
    
private:
    [[deprecated("EditorUI::updateDeleteButtons not implemented")]]
    /**
     * @note[short] Windows: 0xe3b50
     * @note[short] Android
     */
    TodoReturn updateDeleteButtons();
public:
    
private:
    [[deprecated("EditorUI::updateDeleteMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDeleteMenu();
public:
    
private:
    [[deprecated("EditorUI::updateEditButtonColor not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditButtonColor(int p0, cocos2d::ccColor3B p1);
public:
    
private:
    [[deprecated("EditorUI::updateEditColorButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditColorButton();
public:
    
private:
    [[deprecated("EditorUI::updateEditMenu not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateEditMenu();
public:
    
private:
    [[deprecated("EditorUI::updateGridNodeSize not implemented")]]
    /**
     * @note[short] Windows: 0xdf100
     * @note[short] Android
     */
    void updateGridNodeSize();
public:
    
private:
    [[deprecated("EditorUI::updateGridNodeSize not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGridNodeSize(int p0);
public:
    
private:
    [[deprecated("EditorUI::updateGroupIDBtn2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGroupIDBtn2();
public:
    
private:
    [[deprecated("EditorUI::updateGroupIDLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateGroupIDLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x2fc24
     * @note[short] MacOS (Intel): 0x2f660
     * @note[short] Windows: 0xdf360
     * @note[short] Android
     */
    void updateObjectInfoLabel();
    
private:
    [[deprecated("EditorUI::updatePlaybackBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("EditorUI::updateSlider not implemented")]]
    /**
     * @note[short] Windows: 0xdf040
     * @note[short] Android
     */
    TodoReturn updateSlider();
public:
    
private:
    [[deprecated("EditorUI::updateSpecialUIElements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateSpecialUIElements();
public:

    /**
     * @note[short] MacOS (ARM): 0x39504
     * @note[short] Android
     */
    void updateZoom(float p0);
    
private:
    [[deprecated("EditorUI::valueFromXPos not implemented")]]
    /**
     * @note[short] Android
     */
    float valueFromXPos(float p0);
public:
    
private:
    [[deprecated("EditorUI::xPosFromValue not implemented")]]
    /**
     * @note[short] Android
     */
    float xPosFromValue(float p0);
public:
    
private:
    [[deprecated("EditorUI::zoomGameLayer not implemented")]]
    /**
     * @note[short] Android
     */
    void zoomGameLayer(bool p0);
public:

    /**
     * @note[short] MacOS (ARM): 0xec6c
     * @note[short] Windows: 0x10e9e0
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xecbc
     * @note[short] Windows: 0x10ea30
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x47170
     * @note[short] MacOS (Intel): 0x4eba0
     * @note[short] Windows: 0x11ecb0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x47b58
     * @note[short] MacOS (Intel): 0x4f660
     * @note[short] Windows: 0x11f7f0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x48138
     * @note[short] MacOS (Intel): 0x4fc80
     * @note[short] Windows: 0x11fe70
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x48650
     * @note[short] MacOS (Intel): 0x50240
     * @note[short] Windows: 0x1205c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x48e14
     * @note[short] MacOS (Intel): 0x50b70
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x48e30
     * @note[short] MacOS (Intel): 0x50bb0
     * @note[short] Windows: 0x99990
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3a68c
     * @note[short] MacOS (Intel): 0x3f200
     * @note[short] Windows: 0x110c70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x48e68
     * @note[short] MacOS (Intel): 0x50bf0
     * @note[short] Windows: 0x121300
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x4c3cc
     * @note[short] MacOS (Intel): 0x54b00
     * @note[short] Windows: 0xdb4b0
     * @note[short] Android
     */
    virtual TodoReturn getUI();

    /**
     * @note[short] MacOS (ARM): 0x338c4
     * @note[short] MacOS (Intel): 0x335e0
     * @note[short] Windows: 0xe3120
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x336f4
     * @note[short] MacOS (Intel): 0x33450
     * @note[short] Windows: 0xe2f30
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3bda4
     * @note[short] MacOS (Intel): 0x40c50
     * @note[short] Windows: 0x1116f0
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x3c65c
     * @note[short] MacOS (Intel): 0x41600
     * @note[short] Windows: 0x111be0
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x4c3d0
     * @note[short] MacOS (Intel): 0x54b10
     * @note[short] Windows: 0xdb4c0
     * @note[short] Android
     */
    virtual TodoReturn getTransformNode();

    /**
     * @note[short] MacOS (ARM): 0x45c34
     * @note[short] MacOS (Intel): 0x4d3d0
     * @note[short] Windows: 0x11d830
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45dfc
     * @note[short] MacOS (Intel): 0x4d5e0
     * @note[short] Windows: 0x11d850
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x45f30
     * @note[short] MacOS (Intel): 0x4d740
     * @note[short] Windows: 0x11d870
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x46068
     * @note[short] MacOS (Intel): 0x4d8b0
     * @note[short] Windows: 0x11d890
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x4619c
     * @note[short] MacOS (Intel): 0x4da10
     * @note[short] Windows: 0x11d8b0
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x462d0
     * @note[short] MacOS (Intel): 0x4db70
     * @note[short] Windows: 0x11d8d0
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x46404
     * @note[short] MacOS (Intel): 0x4dcd0
     * @note[short] Windows: 0x11d8f0
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x46538
     * @note[short] MacOS (Intel): 0x4de30
     * @note[short] Windows: 0x11d910
     * @note[short] Android
     */
    virtual void transformRotationChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x46670
     * @note[short] MacOS (Intel): 0x4dfa0
     * @note[short] Windows: 0x11d930
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS (ARM): 0x46728
     * @note[short] MacOS (Intel): 0x4e090
     * @note[short] Windows: 0x11d960
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS (ARM): 0x39438
     * @note[short] MacOS (Intel): 0x3dec0
     * @note[short] Windows: 0x10e530
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x44150
     * @note[short] MacOS (Intel): 0x4a930
     * @note[short] Windows: 0x11b860
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x49b30
     * @note[short] MacOS (Intel): 0x51cf0
     * @note[short] Windows: 0x122590
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x49ba8
     * @note[short] MacOS (Intel): 0x51d90
     * @note[short] Windows: 0x1225d0
     * @note[short] Android
     */
    virtual void scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x47248
     * @note[short] MacOS (Intel): 0x4ec80
     * @note[short] Windows: 0x11f0f0
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x4726c
     * @note[short] MacOS (Intel): 0x4ece0
     * @note[short] Windows: 0x11f100
     * @note[short] Android
     */
    virtual void angleChanged(float p0);

    /**
     * @note[short] MacOS (ARM): 0x3aa7c
     * @note[short] MacOS (Intel): 0x3f640
     * @note[short] Windows: 0x1110e0
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x3c710
     * @note[short] MacOS (Intel): 0x41700
     * @note[short] Windows: 0x111bf0
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x3b070
     * @note[short] MacOS (Intel): 0x3fd70
     * @note[short] Windows: 0x111240
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x3b094
     * @note[short] MacOS (Intel): 0x3fdd0
     * @note[short] Windows: 0x111250
     * @note[short] Android
     */
    virtual void scaleXChanged(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3b6cc
     * @note[short] MacOS (Intel): 0x40540
     * @note[short] Windows: 0x111300
     * @note[short] Android
     */
    virtual void scaleYChanged(float p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3b810
     * @note[short] MacOS (Intel): 0x40690
     * @note[short] Windows: 0x1113b0
     * @note[short] Android
     */
    virtual void scaleXYChanged(float p0, float p1, bool p2);
    GEODE_PAD(40);
    GJTransformState m_transformState;
    bool m_isPlayingMusic;
    EditButtonBar* m_buttonBar;
    GEODE_PAD(8);
    cocos2d::CCArray* m_unk1cc;
    float m_gridSize;
    GEODE_PAD(52);
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    GEODE_PAD(8);
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_unk220;
    cocos2d::CCNode* m_unk224;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk238;
    float m_unk23c;
    float m_toolbarHeight;
    float m_unk244;
    bool m_updatedSpeedObjects;
    GEODE_PAD(15);
    cocos2d::CCArray* m_unk258;
    GEODE_PAD(8);
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_unknownArray4;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    GEODE_PAD(8);
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_idkSprite0;
    cocos2d::CCSprite* m_idkSprite1;
    CCMenuItemSpriteExtra* m_button27;
    CCMenuItemSpriteExtra* m_button28;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_unk31c;
    ButtonSprite* m_unk320;
    int m_selectedCreateObjectID;
    GEODE_PAD(16);
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_unknownArray9;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    GEODE_PAD(8);
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    void* m_unk538;
    void* m_unk540;
    int m_selectedTab;
private:
    bool m_unk3b4;
public:
};
