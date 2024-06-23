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
#include "GooglePlayDelegate.hpp"
#include "GJDropDownLayerDelegate.hpp"

class MoreOptionsLayer : public FLAlertLayer, public TextInputDelegate, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)
    
private:
    [[deprecated("MoreOptionsLayer::create not implemented")]]
    /**
     * @note[short] iOS: 0xeed0c
     * @note[short] Android
     */
    static MoreOptionsLayer* create();
public:
    
private:
    [[deprecated("MoreOptionsLayer::addToggle not implemented")]]
    /**
     * @note[short] Windows: 0x353280
     * @note[short] iOS: 0xf00d0
     * @note[short] Android
     */
    void addToggle(char const* p0, char const* p1, char const* p2);
public:
    
private:
    [[deprecated("MoreOptionsLayer::countForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countForPage(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::goToPage not implemented")]]
    /**
     * @note[short] iOS: 0xf07e4
     * @note[short] Android
     */
    void goToPage(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::incrementCountForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementCountForPage(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::infoKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn infoKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::layerForPage not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerForPage(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::layerKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn layerKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::nextPosition not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::objectKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn objectKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::objectsForPage not implemented")]]
    /**
     * @note[short] iOS: 0xf0474
     * @note[short] Android
     */
    TodoReturn objectsForPage(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::offsetToNextPage not implemented")]]
    /**
     * @note[short] Android
     */
    void offsetToNextPage();
public:
    
private:
    [[deprecated("MoreOptionsLayer::onClose not implemented")]]
    /**
     * @note[short] iOS: 0xf0720
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onFMODDebug not implemented")]]
    /**
     * @note[short] iOS: 0xf05c0
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignIn not implemented")]]
    /**
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onGPSignOut not implemented")]]
    /**
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onKeybindings not implemented")]]
    /**
     * @note[short] Windows: 0xd9640
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onNextPage not implemented")]]
    /**
     * @note[short] iOS: 0xf07d8
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onParental not implemented")]]
    /**
     * @note[short] iOS: 0xf0704
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onPrevPage not implemented")]]
    /**
     * @note[short] iOS: 0xf07cc
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onSongBrowser not implemented")]]
    /**
     * @note[short] iOS: 0xf0568
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::onToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("MoreOptionsLayer::pageKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pageKey(int p0);
public:
    
private:
    [[deprecated("MoreOptionsLayer::toggleGP not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleGP();
public:

    /**
     * @note[short] MacOS (ARM): 0x6aed54
     * @note[short] MacOS (Intel): 0x7a79a0
     * @note[short] Windows: 0x351e90
     * @note[short] iOS: 0xeefb4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6b1f1c
     * @note[short] MacOS (Intel): 0x7aac00
     * @note[short] Windows: 0x355100
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6b1f28
     * @note[short] MacOS (Intel): 0x7aac30
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x6b1ff8
     * @note[short] MacOS (Intel): 0x7aacf0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x6b20b0
     * @note[short] MacOS (Intel): 0x7aada0
     * @note[short] Windows: 0x355110
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x6b1df8
     * @note[short] MacOS (Intel): 0x7aaa80
     * @note[short] Windows: 0x354c60
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);
};
