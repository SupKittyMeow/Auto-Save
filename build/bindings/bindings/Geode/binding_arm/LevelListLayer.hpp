#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "LevelBrowserLayer.hpp"
#include "TextInputDelegate.hpp"
#include "SelectListIconDelegate.hpp"
#include "LikeItemDelegate.hpp"
#include "LevelListDeleteDelegate.hpp"

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e9ff4
     * @note[short] MacOS (Intel): 0x35c7c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* list);
    
private:
    [[deprecated("LevelListLayer::cloneList not implemented")]]
    /**
     * @note[short] Android
     */
    void cloneList();
public:
    
private:
    [[deprecated("LevelListLayer::confirmClone not implemented")]]
    /**
     * @note[short] Windows: 0x2e7bc0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmDelete not implemented")]]
    /**
     * @note[short] Windows: 0x2e7f40
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* p0);
public:
    
private:
    [[deprecated("LevelListLayer::confirmOwnerDelete not implemented")]]
    /**
     * @note[short] Windows: 0x2e8070
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x2ea074
     * @note[short] MacOS (Intel): 0x35c820
     * @note[short] Windows: 0x2e3190
     * @note[short] Android
     */
    bool init(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::onClaimReward not implemented")]]
    /**
     * @note[short] Windows: 0x2e5bb0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onDelete not implemented")]]
    /**
     * @note[short] Windows: 0x2e7cb0
     * @note[short] Android
     */
    void onDelete();
public:
    
private:
    [[deprecated("LevelListLayer::onDescription not implemented")]]
    /**
     * @note[short] Windows: 0x2e7330
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onFavorite not implemented")]]
    /**
     * @note[short] Windows: 0x2e7200
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onInfo not implemented")]]
    /**
     * @note[short] Windows: 0x2e7500
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onLike not implemented")]]
    /**
     * @note[short] Windows: 0x2e7540
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onListInfo not implemented")]]
    /**
     * @note[short] Windows: 0x2e4c10
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onRefreshLevelList not implemented")]]
    /**
     * @note[short] Windows: 0x2e61e0
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);
public:

    /**
     * @note[short] MacOS (ARM): 0x2ec3f0
     * @note[short] MacOS (Intel): 0x35ee60
     * @note[short] Windows: 0x2e7780
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);
    
private:
    [[deprecated("LevelListLayer::onShare not implemented")]]
    /**
     * @note[short] MacOS (Intel): 0x35eeb0
     * @note[short] Windows: 0x2e78f0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onToggleEditMode not implemented")]]
    /**
     * @note[short] Windows: 0x2e7b80
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::onViewProfile not implemented")]]
    /**
     * @note[short] Windows: 0x2e71c0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("LevelListLayer::ownerDelete not implemented")]]
    /**
     * @note[short] Android
     */
    void ownerDelete();
public:

    /**
     * @note[short] MacOS (ARM): 0x2e9f54
     * @note[short] MacOS (Intel): 0x35c730
     * @note[short] Windows: 0x2e2f60
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* p0);
    
private:
    [[deprecated("LevelListLayer::updateEditMode not implemented")]]
    /**
     * @note[short] Android
     */
    void updateEditMode();
public:
    
private:
    [[deprecated("LevelListLayer::updateSideButtons not implemented")]]
    /**
     * @note[short] Windows: 0x2e7680
     * @note[short] Android
     */
    void updateSideButtons();
public:
    
private:
    [[deprecated("LevelListLayer::updateStatsArt not implemented")]]
    /**
     * @note[short] Windows: 0x2e4c70
     * @note[short] Android
     */
    void updateStatsArt();
public:
    
private:
    [[deprecated("LevelListLayer::verifyListName not implemented")]]
    /**
     * @note[short] Android
     */
    void verifyListName();
public:

    /**
     * @note[short] MacOS (ARM): 0x2ed43c
     * @note[short] MacOS (Intel): 0x35ff50
     * @note[short] Windows: 0x2e4c20
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x2ed474
     * @note[short] MacOS (Intel): 0x35ff80
     * @note[short] Windows: 0x2e4c50
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2ed888
     * @note[short] MacOS (Intel): 0x360390
     * @note[short] Windows: 0x2e63a0
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x2edb20
     * @note[short] MacOS (Intel): 0x360630
     * @note[short] Windows: 0x2b90e0
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2edf8c
     * @note[short] MacOS (Intel): 0x360b70
     * @note[short] Windows: 0x2e6c00
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee934
     * @note[short] MacOS (Intel): 0x361580
     * @note[short] Windows: 0x2e7400
     * @note[short] Android
     */
    virtual void shareCommentClosed(gd::string p0, ShareCommentLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x2ee4d4
     * @note[short] MacOS (Intel): 0x3610c0
     * @note[short] Windows: 0x2e7020
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x2ede40
     * @note[short] MacOS (Intel): 0x360a10
     * @note[short] Windows: 0x2e6b50
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2edf84
     * @note[short] MacOS (Intel): 0x360b50
     * @note[short] Windows: 0x2e6bf0
     * @note[short] Android
     */
    virtual void updateResultArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x2edb2c
     * @note[short] MacOS (Intel): 0x360660
     * @note[short] Windows: 0x2e6700
     * @note[short] Android
     */
    virtual void cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x2eea78
     * @note[short] MacOS (Intel): 0x3616c0
     * @note[short] Windows: 0x2e7620
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x2eec58
     * @note[short] MacOS (Intel): 0x361900
     * @note[short] Windows: 0x2e78d0
     * @note[short] Android
     */
    virtual void iconSelectClosed(SelectListIconLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x2eed88
     * @note[short] MacOS (Intel): 0x361a90
     * @note[short] Windows: 0x2e81f0
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2eee74
     * @note[short] MacOS (Intel): 0x361b90
     * @note[short] Windows: 0x2e8320
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2ef1b4
     * @note[short] MacOS (Intel): 0x361ee0
     * @note[short] Windows: 0x2e86e0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2eef60
     * @note[short] MacOS (Intel): 0x361c90
     * @note[short] Windows: 0x2e8450
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x2ef2b8
     * @note[short] MacOS (Intel): 0x361fb0
     * @note[short] Windows: 0x2e8840
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);
    cocos2d::CCMenu* m_buttonMenu;
    gd::string m_searchKey1;
    GJLevelList* m_levelList;
    gd::string m_searchKey2;
    CCMenuItemSpriteExtra* m_likeButton;
    bool m_deleted;
    CCTextInputNode* m_titleInput;
    int m_editMode;
    cocos2d::CCArray* m_objects;
    cocos2d::CCSprite* m_diffSprite;
    cocos2d::CCSprite* m_featureSprite;
    cocos2d::CCPoint m_rewardPosition;
    bool m_exited;
};
