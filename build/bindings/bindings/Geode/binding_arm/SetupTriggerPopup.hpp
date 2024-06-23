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
#include "TextInputDelegate.hpp"
#include "ConfigureValuePopupDelegate.hpp"
#include "SliderDelegate.hpp"

class SetupTriggerPopup : public FLAlertLayer, public TextInputDelegate, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addCloseButton not implemented")]]
    /**
     * @note[short] Android
     */
    void addCloseButton(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addHelpButton not implemented")]]
    /**
     * @note[short] Android
     */
    void addHelpButton(gd::string p0, gd::string p1, float p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addInfoLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void addInfoLabel(gd::string p0, float p1, cocos2d::CCPoint p2, int p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToGroup(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectsToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectsToPage(cocos2d::CCArray* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addObjectToPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addObjectToPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::addTitle not implemented")]]
    /**
     * @note[short] Android
     */
    void addTitle(gd::string p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::closeInputNodes not implemented")]]
    /**
     * @note[short] Android
     */
    void closeInputNodes();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomButton not implemented")]]
    /**
     * @note[short] Android
     */
    void createCustomButton(int p0, gd::string p1, gd::string p2, cocos2d::CCPoint p3, float p4, float p5, bool p6, int p7, int p8);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomEasingControls not implemented")]]
    /**
     * @note[short] Android
     */
    void createCustomEasingControls(gd::string p0, cocos2d::CCPoint p1, float p2, int p3, int p4, int p5, int p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createCustomToggleValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    void createCustomToggleValueControl(int p0, bool p1, bool p2, gd::string p3, cocos2d::CCPoint p4, bool p5, int p6, int p7);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createEasingControls not implemented")]]
    /**
     * @note[short] Android
     */
    void createEasingControls(cocos2d::CCPoint p0, float p1, int p2, int p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItems not implemented")]]
    /**
     * @note[short] Android
     */
    void createMultiTriggerItems(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsCorner not implemented")]]
    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsCorner();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefault not implemented")]]
    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefault();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultHorizontal not implemented")]]
    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultHorizontal();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createMultiTriggerItemsDefaultVertical not implemented")]]
    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultVertical();
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPageButtons not implemented")]]
    /**
     * @note[short] Android
     */
    void createPageButtons(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createPlusButton not implemented")]]
    /**
     * @note[short] Android
     */
    void createPlusButton(int p0, cocos2d::CCPoint p1, float p2, gd::string p3, int p4, int p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCPoint p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    void createToggleValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createToggleValueControlAdvanced not implemented")]]
    /**
     * @note[short] Android
     */
    void createToggleValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, bool p3, int p4, int p5, float p6, float p7, float p8, cocos2d::CCPoint p9);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControl not implemented")]]
    /**
     * @note[short] Android
     */
    void createValueControl(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, float p4, float p5);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlAdvanced not implemented")]]
    /**
     * @note[short] Windows: 0x44a3a0
     * @note[short] Android
     */
    void createValueControlAdvanced(int p0, gd::string p1, cocos2d::CCPoint p2, float p3, bool p4, InputValueType p5, int p6, bool p7, float p8, float p9, int p10, int p11, GJInputStyle p12, int p13, bool p14);
public:
    
private:
    [[deprecated("SetupTriggerPopup::createValueControlWArrows not implemented")]]
    /**
     * @note[short] Android
     */
    void createValueControlWArrows(int p0, gd::string p1, cocos2d::CCPoint p2, float p3);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getGroupContainer not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getGroupContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMaxSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMaxSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getMinSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMinSliderValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getObjects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getObjects();
public:
    
private:
    [[deprecated("SetupTriggerPopup::getPageContainer not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTriggerValue not implemented")]]
    /**
     * @note[short] Android
     */
    float getTriggerValue(int p0, GameObject* p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTruncatedValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::getTruncatedValueByTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTruncatedValueByTag(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::goToPage not implemented")]]
    /**
     * @note[short] Android
     */
    void goToPage(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::hideAll not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn hideAll();
public:
    
private:
    [[deprecated("SetupTriggerPopup::init not implemented")]]
    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseArrow(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowDown not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseArrowUp not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onCustomEaseRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onDisableValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEase not implemented")]]
    /**
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onEaseRate not implemented")]]
    /**
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onMultiTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onPage not implemented")]]
    /**
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onSpawnedByTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onToggleTriggerValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::onTouchTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetupTriggerPopup::postSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::preSetup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preSetup();
public:
    
private:
    [[deprecated("SetupTriggerPopup::refreshGroupVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    void refreshGroupVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromGroup not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeObjectFromGroup(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::removeObjectFromPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeObjectFromPage(cocos2d::CCObject* p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::resetDisabledValues not implemented")]]
    /**
     * @note[short] Android
     */
    void resetDisabledValues();
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMaxSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setMaxSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::setMinSliderValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn setMinSliderValue(float p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::shouldLimitValue not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldLimitValue(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleBG not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleBG(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleCustomEaseRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleCustomEaseRateVisibility(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleDisableButtons not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleDisableButtons(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleEaseRateVisibility not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleEaseRateVisibility();
public:
    
private:
    [[deprecated("SetupTriggerPopup::toggleLimitValue not implemented")]]
    /**
     * @note[short] Android
     */
    void toggleLimitValue(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::togglePageArrows not implemented")]]
    /**
     * @note[short] Android
     */
    void togglePageArrows(bool p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowChanged not implemented")]]
    /**
     * @note[short] Android
     */
    void triggerArrowChanged(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowLeft not implemented")]]
    /**
     * @note[short] Android
     */
    void triggerArrowLeft(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerArrowRight not implemented")]]
    /**
     * @note[short] Android
     */
    void triggerArrowRight(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::triggerSliderChanged not implemented")]]
    /**
     * @note[short] Android
     */
    void triggerSliderChanged(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCustomEaseLabel(int p0, int p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomEaseRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCustomEaseRateLabel(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateCustomToggleTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void updateCustomToggleTrigger(int p0, bool p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateEaseLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEaseRateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateEaseRateLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateEditorLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateEditorLabel();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateInputNodeLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateInputNodeLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateLabel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLabel(int p0, gd::string p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateMultiTriggerBtn not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMultiTriggerBtn();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSlider(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSlider not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSlider(int p0);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateSpawnedByTrigger not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSpawnedByTrigger();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateTouchTriggered not implemented")]]
    /**
     * @note[short] Android
     */
    void updateTouchTriggered();
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValue not implemented")]]
    /**
     * @note[short] Android
     */
    void updateValue(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::updateValueControls not implemented")]]
    /**
     * @note[short] Android
     */
    void updateValueControls(int p0, float p1);
public:
    
private:
    [[deprecated("SetupTriggerPopup::valueChanged not implemented")]]
    /**
     * @note[short] Android
     */
    void valueChanged(int p0, float p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x1e6b38
     * @note[short] MacOS (Intel): 0x23b510
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x1e0f74
     * @note[short] MacOS (Intel): 0x234a10
     * @note[short] Windows: 0x43b940
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1e0df0
     * @note[short] MacOS (Intel): 0x234850
     * @note[short] Windows: 0x8a220
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
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x1dea6c
     * @note[short] MacOS (Intel): 0x231150
     * @note[short] Windows: 0x448a80
     * @note[short] Android
     */
    virtual TodoReturn toggleGroup(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1dfbdc
     * @note[short] MacOS (Intel): 0x232430
     * @note[short] Windows: 0x4497d0
     * @note[short] Android
     */
    virtual TodoReturn determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1e0e3c
     * @note[short] MacOS (Intel): 0x2348b0
     * @note[short] Windows: 0x449e10
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dfee4
     * @note[short] MacOS (Intel): 0x2327b0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1dff00
     * @note[short] MacOS (Intel): 0x2327f0
     * @note[short] Windows: 0x449c50
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e0f98
     * @note[short] MacOS (Intel): 0x234a50
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1e1068
     * @note[short] MacOS (Intel): 0x234b10
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateInputValue(int p0, float& p1);

    /**
     * @note[short] MacOS (ARM): 0x1e1120
     * @note[short] MacOS (Intel): 0x234bc0
     * @note[short] Windows: 0x449f50
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e11f8
     * @note[short] MacOS (Intel): 0x234ca0
     * @note[short] Windows: 0x44a020
     * @note[short] Android
     */
    virtual TodoReturn sliderEnded(Slider* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e374c
     * @note[short] MacOS (Intel): 0x237210
     * @note[short] Windows: 0x44bae0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x1e473c
     * @note[short] MacOS (Intel): 0x239290
     * @note[short] Windows: 0x44bfd0
     * @note[short] Android
     */
    virtual TodoReturn updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1e49c0
     * @note[short] MacOS (Intel): 0x2394e0
     * @note[short] Windows: 0x44c370
     * @note[short] Android
     */
    virtual TodoReturn updateToggleItem(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1e4a78
     * @note[short] MacOS (Intel): 0x2395a0
     * @note[short] Windows: 0x44c3e0
     * @note[short] Android
     */
    virtual TodoReturn getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1e4e8c
     * @note[short] MacOS (Intel): 0x2399a0
     * @note[short] Windows: 0x450300
     * @note[short] Android
     */
    virtual TodoReturn triggerValueFromSliderValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x1e4f18
     * @note[short] MacOS (Intel): 0x239a20
     * @note[short] Windows: 0x450390
     * @note[short] Android
     */
    virtual TodoReturn triggerSliderValueFromValue(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e5b60
     * @note[short] MacOS (Intel): 0x23a630
     * @note[short] Windows: 0x4512a0
     * @note[short] Android
     */
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};
