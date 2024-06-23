#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "TextInputDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"
#include "DialogDelegate.hpp"

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)
    
private:
    [[deprecated("SecretLayer2::create not implemented")]]
    /**
     * @note[short] Android
     */
    static SecretLayer2* create();
public:
    
private:
    [[deprecated("SecretLayer2::getBasicMessage not implemented")]]
    /**
     * @note[short] Windows: 0x3c22a0
     * @note[short] Android
     */
    gd::string getBasicMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getErrorMessage not implemented")]]
    /**
     * @note[short] Windows: 0x3c2e00
     * @note[short] Android
     */
    gd::string getErrorMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getMessage not implemented")]]
    /**
     * @note[short] Windows: 0x3c19d0
     * @note[short] Android
     */
    gd::string getMessage();
public:
    
private:
    [[deprecated("SecretLayer2::getThreadMessage not implemented")]]
    /**
     * @note[short] Windows: 0x3c1bb0
     * @note[short] Android
     */
    gd::string getThreadMessage();
public:
    
private:
    [[deprecated("SecretLayer2::nodeWithTag not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn nodeWithTag(int p0);
public:
    
private:
    [[deprecated("SecretLayer2::onBack not implemented")]]
    /**
     * @note[short] Windows: 0x3c3f00
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onDoor not implemented")]]
    /**
     * @note[short] Windows: 0x3bf060
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onSecretLevel not implemented")]]
    /**
     * @note[short] Windows: 0x3bede0
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::onSubmit not implemented")]]
    /**
     * @note[short] Windows: 0x3bf9c0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("SecretLayer2::playCoinEffect not implemented")]]
    /**
     * @note[short] Windows: 0x3c3a80
     * @note[short] Android
     */
    void playCoinEffect();
public:
    
private:
    [[deprecated("SecretLayer2::scene not implemented")]]
    /**
     * @note[short] Windows: 0x3bc910
     * @note[short] Android
     */
    TodoReturn scene();
public:
    
private:
    [[deprecated("SecretLayer2::selectAThread not implemented")]]
    /**
     * @note[short] Android
     */
    void selectAThread();
public:
    
private:
    [[deprecated("SecretLayer2::showCompletedLevel not implemented")]]
    /**
     * @note[short] Windows: 0x3be090
     * @note[short] Android
     */
    void showCompletedLevel();
public:
    
private:
    [[deprecated("SecretLayer2::showSecretLevel not implemented")]]
    /**
     * @note[short] Windows: 0x3bdf20
     * @note[short] Android
     */
    void showSecretLevel();
public:
    
private:
    [[deprecated("SecretLayer2::updateMessageLabel not implemented")]]
    /**
     * @note[short] Windows: 0x3c1940
     * @note[short] Android
     */
    void updateMessageLabel(gd::string p0);
public:
    
private:
    [[deprecated("SecretLayer2::updateSearchLabel not implemented")]]
    /**
     * @note[short] Windows: 0x3c1650
     * @note[short] Android
     */
    void updateSearchLabel(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x40a32c
     * @note[short] MacOS (Intel): 0x4a6f10
     * @note[short] Windows: 0x3bca90
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x410058
     * @note[short] MacOS (Intel): 0x4ad060
     * @note[short] Windows: 0x3c3fc0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x40ff6c
     * @note[short] MacOS (Intel): 0x4acf70
     * @note[short] Windows: 0x3c3fb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x40efbc
     * @note[short] MacOS (Intel): 0x4abff0
     * @note[short] Windows: 0x3c1430
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x40f09c
     * @note[short] MacOS (Intel): 0x4ac0c0
     * @note[short] Windows: 0x3c1580
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x40f1ac
     * @note[short] MacOS (Intel): 0x4ac190
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
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x40d9f4
     * @note[short] MacOS (Intel): 0x4aaa60
     * @note[short] Windows: 0x3bed40
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* p0);
};
