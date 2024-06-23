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
#include "ColorSelectDelegate.hpp"
#include "SelectArtDelegate.hpp"
#include "SelectSettingDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "CustomSongLayerDelegate.hpp"
#include "TextInputDelegate.hpp"

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x20e4dc
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4);
public:

    /**
     * @note[short] MacOS (ARM): 0x20e644
     * @note[short] Android
     */
    bool init(LevelSettingsObject* p0, LevelEditorLayer* p1);
    
private:
    [[deprecated("LevelSettingsLayer::onBGArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onCol not implemented")]]
    /**
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onDisable not implemented")]]
    /**
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onFGArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onGameplayMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onGArt not implemented")]]
    /**
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onLiveEdit not implemented")]]
    /**
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onOptionToggle not implemented")]]
    /**
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectFont not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSelectSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSettings not implemented")]]
    /**
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onShowPicker not implemented")]]
    /**
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::onSpeed not implemented")]]
    /**
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelSettingsLayer::showPicker not implemented")]]
    /**
     * @note[short] Android
     */
    void showPicker(ColorAction* p0);
public:
    
private:
    [[deprecated("LevelSettingsLayer::updateColorSprite not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprite(ColorChannelSprite* p0);
public:
    
private:
    [[deprecated("LevelSettingsLayer::updateColorSprites not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateColorSprites();
public:
    
private:
    [[deprecated("LevelSettingsLayer::updateGameplayModeButtons not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateGameplayModeButtons();
public:

    /**
     * @note[short] MacOS (ARM): 0x211810
     * @note[short] MacOS (Intel): 0x26ae10
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x212060
     * @note[short] MacOS (Intel): 0x26b740
     * @note[short] Windows: 0x301b50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x211c80
     * @note[short] MacOS (Intel): 0x26b2a0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x211bc8
     * @note[short] MacOS (Intel): 0x26b1c0
     * @note[short] Windows: 0x3013e0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x211e60
     * @note[short] MacOS (Intel): 0x26b4d0
     * @note[short] Windows: 0x301800
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x211654
     * @note[short] MacOS (Intel): 0x26ac40
     * @note[short] Windows: 0x300b30
     * @note[short] Android
     */
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x211868
     * @note[short] MacOS (Intel): 0x26ae60
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x211884
     * @note[short] MacOS (Intel): 0x26aea0
     * @note[short] Windows: 0x300fe0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
};
