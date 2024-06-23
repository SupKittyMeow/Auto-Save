#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include "GJAssetDownloadAction.hpp"
#include "MusicDownloadDelegate.hpp"
#include "FLAlertLayerProtocol.hpp"

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)
    
private:
    [[deprecated("CustomSongWidget::create not implemented")]]
    /**
     * @note[short] Windows: 0xc56f0
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);
public:
    
private:
    [[deprecated("CustomSongWidget::deleteSong not implemented")]]
    /**
     * @note[short] Windows: 0xc7360
     * @note[short] Android
     */
    void deleteSong();
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFailed not implemented")]]
    /**
     * @note[short] Windows: 0xca6a0
     * @note[short] Android
     */
    void downloadAssetFailed(int p0, GJAssetType p1, GJSongError p2);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadAssetFinished not implemented")]]
    /**
     * @note[short] Windows: 0xca5e0
     * @note[short] Android
     */
    void downloadAssetFinished(int p0, GJAssetType p1);
public:
    
private:
    [[deprecated("CustomSongWidget::downloadFailed not implemented")]]
    /**
     * @note[short] Windows: 0xca840
     * @note[short] Android
     */
    void downloadFailed();
public:
    
private:
    [[deprecated("CustomSongWidget::getSongInfoIfUnloaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSongInfoIfUnloaded();
public:

    /**
     * @note[short] MacOS (ARM): 0x5477dc
     * @note[short] MacOS (Intel): 0x625c40
     * @note[short] Windows: 0xc5900
     * @note[short] Android
     */
    bool init(SongInfoObject* songInfo, CustomSongDelegate* songDelegate, bool showSongSelect, bool showPlayMusic, bool showDownload, bool isRobtopSong, bool unkBool, bool isMusicLibrary, int unk);
    
private:
    [[deprecated("CustomSongWidget::onCancelDownload not implemented")]]
    /**
     * @note[short] Windows: 0xc7db0
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onDelete not implemented")]]
    /**
     * @note[short] Windows: 0xc7240
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onDownload not implemented")]]
    /**
     * @note[short] Windows: 0xc7ed0
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onGetSongInfo not implemented")]]
    /**
     * @note[short] Windows: 0xc7e40
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onInfo not implemented")]]
    /**
     * @note[short] Windows: 0xc6f50
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onMore not implemented")]]
    /**
     * @note[short] Windows: 0xc7560
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onPlayback not implemented")]]
    /**
     * @note[short] Windows: 0xc81d0
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::onSelect not implemented")]]
    /**
     * @note[short] Windows: 0xc8170
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
public:
    
private:
    [[deprecated("CustomSongWidget::processNextMultiAsset not implemented")]]
    /**
     * @note[short] Windows: 0xca440
     * @note[short] Android
     */
    void processNextMultiAsset();
public:
    
private:
    [[deprecated("CustomSongWidget::showError not implemented")]]
    /**
     * @note[short] Windows: 0xca910
     * @note[short] Android
     */
    void showError(bool p0);
public:
    
private:
    [[deprecated("CustomSongWidget::startDownload not implemented")]]
    /**
     * @note[short] Windows: 0xc80b0
     * @note[short] Android
     */
    void startDownload();
public:
    
private:
    [[deprecated("CustomSongWidget::startMonitorDownload not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMonitorDownload();
public:
    
private:
    [[deprecated("CustomSongWidget::startMultiAssetDownload not implemented")]]
    /**
     * @note[short] Windows: 0xca2a0
     * @note[short] Android
     */
    void startMultiAssetDownload();
public:
    
private:
    [[deprecated("CustomSongWidget::toggleUpdateButton not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn toggleUpdateButton(bool p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateDownloadProgress not implemented")]]
    /**
     * @note[short] Windows: 0xc6ac0
     * @note[short] Android
     */
    void updateDownloadProgress(float p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateError not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateError(GJSongError p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateLengthMod not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateLengthMod(float p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateMultiAssetInfo not implemented")]]
    /**
     * @note[short] Windows: 0xc9960
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updatePlaybackBtn not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updatePlaybackBtn();
public:
    
private:
    [[deprecated("CustomSongWidget::updateProgressBar not implemented")]]
    /**
     * @note[short] Windows: 0xc86a0
     * @note[short] Android
     */
    void updateProgressBar(int p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateSongInfo not implemented")]]
    /**
     * @note[short] Windows: 0xc8800
     * @note[short] Android
     */
    void updateSongInfo();
public:
    
private:
    [[deprecated("CustomSongWidget::updateSongObject not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* p0);
public:
    
private:
    [[deprecated("CustomSongWidget::updateWithMultiAssets not implemented")]]
    /**
     * @note[short] Windows: 0xc9610
     * @note[short] Android
     */
    void updateWithMultiAssets(gd::string p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("CustomSongWidget::verifySongID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifySongID(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x54cf6c
     * @note[short] MacOS (Intel): 0x62bd50
     * @note[short] Windows: 0xc9f40
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x54d118
     * @note[short] MacOS (Intel): 0x62bf40
     * @note[short] Windows: 0xca090
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54d38c
     * @note[short] MacOS (Intel): 0x62c190
     * @note[short] Windows: 0xca120
     * @note[short] Android
     */
    virtual void downloadSongFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54d64c
     * @note[short] MacOS (Intel): 0x62c470
     * @note[short] Windows: 0xca1e0
     * @note[short] Android
     */
    virtual void downloadSongFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54d798
     * @note[short] MacOS (Intel): 0x62c600
     * @note[short] Windows: 0xca260
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54d7ac
     * @note[short] MacOS (Intel): 0x62c630
     * @note[short] Windows: 0xca280
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int p0, GJSongError p1);

    /**
     * @note[short] MacOS (ARM): 0x54da5c
     * @note[short] MacOS (Intel): 0x62c930
     * @note[short] Windows: 0xca7c0
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x54da9c
     * @note[short] MacOS (Intel): 0x62c990
     * @note[short] Windows: 0xca7f0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x54c158
     * @note[short] MacOS (Intel): 0x62ad60
     * @note[short] Windows: 0xc87d0
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x54db38
     * @note[short] MacOS (Intel): 0x62ca30
     * @note[short] Windows: 0xcab60
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    int m_customSongID;
    float m_unkFloat;
    void* m_unkPtr;
    void* m_unkPtr2;
    bool m_hasLibrarySongs;
    bool m_hasSFX;
    bool m_unkBool2;
    gd::map<int, bool> m_songs;
    gd::map<int, bool> m_sfx;
    gd::vector<CCObject*> m_undownloadedAssets;
};
