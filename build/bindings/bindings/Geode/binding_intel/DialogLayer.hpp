#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextAreaDelegate.hpp"

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (Intel): 0x3cac60
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* p0, int p1);
    
private:
    [[deprecated("DialogLayer::addToMainScene not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addToMainScene();
public:
    
private:
    [[deprecated("DialogLayer::animateIn not implemented")]]
    /**
     * @note[short] iOS: 0x8aff8
     * @note[short] Android
     */
    void animateIn(DialogAnimationType p0);
public:
    
private:
    [[deprecated("DialogLayer::animateInDialog not implemented")]]
    /**
     * @note[short] Android
     */
    void animateInDialog();
public:
    
private:
    [[deprecated("DialogLayer::animateInRandomSide not implemented")]]
    /**
     * @note[short] Windows: 0xd09b0
     * @note[short] Android
     */
    void animateInRandomSide();
public:

    /**
     * @note[short] MacOS (Intel): 0x3cac70
     * @note[short] Windows: 0xcfcd0
     * @note[short] iOS: 0x8a28c
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (Intel): 0x3cadb0
     * @note[short] iOS: 0x8a318
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* p0, int p1);
    
private:
    [[deprecated("DialogLayer::displayDialogObject not implemented")]]
    /**
     * @note[short] Windows: 0xd02e0
     * @note[short] Android
     */
    TodoReturn displayDialogObject(DialogObject* p0);
public:
    
private:
    [[deprecated("DialogLayer::displayNextObject not implemented")]]
    /**
     * @note[short] Windows: 0xd0280
     * @note[short] Android
     */
    TodoReturn displayNextObject();
public:
    
private:
    [[deprecated("DialogLayer::finishCurrentAnimation not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn finishCurrentAnimation();
public:
    
private:
    [[deprecated("DialogLayer::handleDialogTap not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn handleDialogTap();
public:

    /**
     * @note[short] MacOS (Intel): 0x3cadd0
     * @note[short] Windows: 0xcfe20
     * @note[short] Android
     */
    bool init(DialogObject* p0, cocos2d::CCArray* p1, int p2);
    
private:
    [[deprecated("DialogLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn onClose();
public:
    
private:
    [[deprecated("DialogLayer::updateChatPlacement not implemented")]]
    /**
     * @note[short] iOS: 0x8ab34
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement p0);
public:
    
private:
    [[deprecated("DialogLayer::updateNavButtonFrame not implemented")]]
    /**
     * @note[short] Windows: 0xd0630
     * @note[short] Android
     */
    void updateNavButtonFrame();
public:

    /**
     * @note[short] MacOS (Intel): 0x3cbe80
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x34e8b0
     * @note[short] MacOS (Intel): 0x3cbd30
     * @note[short] Windows: 0xd08d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e928
     * @note[short] MacOS (Intel): 0x3cbd90
     * @note[short] Windows: 0xd0900
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e968
     * @note[short] MacOS (Intel): 0x3cbdf0
     * @note[short] Windows: 0xd0920
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x34e9ac
     * @note[short] MacOS (Intel): 0x3cbe40
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x34e78c
     * @note[short] MacOS (Intel): 0x3cbc00
     * @note[short] Windows: 0xd0840
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34ed5c
     * @note[short] MacOS (Intel): 0x3cc220
     * @note[short] Windows: 0xd0bf0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x34e9e8
     * @note[short] MacOS (Intel): 0x3cbe90
     * @note[short] Windows: 0xd0940
     * @note[short] Android
     */
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
};
