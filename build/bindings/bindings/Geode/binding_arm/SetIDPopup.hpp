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

class SetIDPopup : public FLAlertLayer, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x24875c
     * @note[short] MacOS (Intel): 0x2a6f20
     * @note[short] Windows: 0x289030
     * @note[short] Android
     */
    static SetIDPopup* create(int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9);
    
private:
    [[deprecated("SetIDPopup::init not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x2a7270
     * @note[short] Windows: 0x289160
     * @note[short] Android
     */
    bool init(int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9);
public:
    
private:
    [[deprecated("SetIDPopup::onCancel not implemented")]]
    /**
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onItemIDArrow not implemented")]]
    /**
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::onResetValue not implemented")]]
    /**
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SetIDPopup::updateTextInputLabel not implemented")]]
    /**
     * @note[short] Windows: 0x289c90
     * @note[short] Android
     */
    TodoReturn updateTextInputLabel();
public:

    /**
     * @note[short] MacOS (ARM): 0x2497c0
     * @note[short] MacOS (Intel): 0x2a7fc0
     * @note[short] Windows: 0x289f10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24973c
     * @note[short] MacOS (Intel): 0x2a7f40
     * @note[short] Windows: 0x289d40
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2495c8
     * @note[short] MacOS (Intel): 0x2a7de0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2495e4
     * @note[short] MacOS (Intel): 0x2a7e20
     * @note[short] Windows: 0x289b90
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueChanged();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_unkBool;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
