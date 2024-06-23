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
#include "FLAlertLayerProtocol.hpp"
#include "UploadActionDelegate.hpp"
#include "UploadPopupDelegate.hpp"
#include "UserListDelegate.hpp"

class FriendsProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, FLAlertLayer)
    
private:
    [[deprecated("FriendsProfilePage::create not implemented")]]
    /**
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType p0);
public:
    
private:
    [[deprecated("FriendsProfilePage::init not implemented")]]
    /**
     * @note[short] Windows: 0x13b830
     * @note[short] Android
     */
    bool init(UserListType p0);
public:
    
private:
    [[deprecated("FriendsProfilePage::onBlocked not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlocked(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onClose not implemented")]]
    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::onUpdate not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("FriendsProfilePage::setupUsersBrowser not implemented")]]
    /**
     * @note[short] Windows: 0x13bf40
     * @note[short] Android
     */
    void setupUsersBrowser(cocos2d::CCArray* p0, UserListType p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x581780
     * @note[short] MacOS (Intel): 0x665540
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x581774
     * @note[short] MacOS (Intel): 0x665510
     * @note[short] Windows: 0x13c770
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5813f0
     * @note[short] MacOS (Intel): 0x665190
     * @note[short] Windows: 0x13c2a0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x581514
     * @note[short] MacOS (Intel): 0x6652d0
     * @note[short] Windows: 0x13c3f0
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x581644
     * @note[short] MacOS (Intel): 0x6653e0
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x581660
     * @note[short] MacOS (Intel): 0x665420
     * @note[short] Windows: 0x13c460
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType p0);
};
