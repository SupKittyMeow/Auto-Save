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
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "SetIDPopupDelegate.hpp"

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x1a7544
     * @note[short] MacOS (Intel): 0x1f42c0
     * @note[short] Windows: 0xd1980
     * @note[short] Android
     */
    virtual  ~EditLevelLayer();
    
private:
    [[deprecated("EditLevelLayer::create not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a757c
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::closeTextInputs not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn closeTextInputs();
public:
    
private:
    [[deprecated("EditLevelLayer::confirmClone not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::confirmDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::confirmMoveToTop not implemented")]]
    /**
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x1a7764
     * @note[short] MacOS (Intel): 0x1f4710
     * @note[short] Windows: 0xd1c80
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);
    
private:
    [[deprecated("EditLevelLayer::onBack not implemented")]]
    /**
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onClone not implemented")]]
    /**
     * @note[short] Android
     */
    void onClone();
public:
    
private:
    [[deprecated("EditLevelLayer::onDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void onDelete();
public:
    
private:
    [[deprecated("EditLevelLayer::onEdit not implemented")]]
    /**
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onGuidelines not implemented")]]
    /**
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onHelp not implemented")]]
    /**
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onLevelInfo not implemented")]]
    /**
     * @note[short] Windows: 0xd3270
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onLevelLeaderboard not implemented")]]
    /**
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onLowDetailMode not implemented")]]
    /**
     * @note[short] Android
     */
    void onLowDetailMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onMoveToTop not implemented")]]
    /**
     * @note[short] Android
     */
    void onMoveToTop();
public:
    
private:
    [[deprecated("EditLevelLayer::onPlay not implemented")]]
    /**
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onSetFolder not implemented")]]
    /**
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onShare not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x1a90d4
     * @note[short] Windows: 0xd4c80
     * @note[short] iOS: 0xebd04
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onTest not implemented")]]
    /**
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::onUpdateDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("EditLevelLayer::playStep2 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep2();
public:
    
private:
    [[deprecated("EditLevelLayer::playStep3 not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playStep3();
public:
    
private:
    [[deprecated("EditLevelLayer::scene not implemented")]]
    /**
     * @note[short] Windows: 0xd1af0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::setupLevelInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void setupLevelInfo();
public:
    
private:
    [[deprecated("EditLevelLayer::updateDescText not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateDescText(char const* p0);
public:
    
private:
    [[deprecated("EditLevelLayer::verifyLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyLevelName();
public:

    /**
     * @note[short] MacOS (ARM): 0x1abb90
     * @note[short] MacOS (Intel): 0x1f8d50
     * @note[short] Windows: 0xd62d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1abb9c
     * @note[short] MacOS (Intel): 0x1f8d80
     * @note[short] Windows: 0xd62e0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0);

    /**
     * @note[short] MacOS (ARM): 0x1aba88
     * @note[short] MacOS (Intel): 0x1f8c50
     * @note[short] Windows: 0xd5db0
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1ab64c
     * @note[short] MacOS (Intel): 0x1f8800
     * @note[short] Windows: 0xd5470
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1aacdc
     * @note[short] MacOS (Intel): 0x1f7e60
     * @note[short] Windows: 0xd4330
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aa8b4
     * @note[short] MacOS (Intel): 0x1f79e0
     * @note[short] Windows: 0xd3d30
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1aadec
     * @note[short] MacOS (Intel): 0x1f7f40
     * @note[short] Windows: 0xd44a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x1abc20
     * @note[short] MacOS (Intel): 0x1f8e20
     * @note[short] Windows: 0xd6350
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1abdc8
     * @note[short] MacOS (Intel): 0x1f8fc0
     * @note[short] Windows: 0xd6490
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x1abbd0
     * @note[short] MacOS (Intel): 0x1f8dd0
     * @note[short] Windows: 0xd6310
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    TextArea* m_descriptionInput;
    cocos2d::CCArray* m_someArray;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_unk;
    bool m_lowDetailModeTriggered;
    GJLevelType m_levelType;
};
