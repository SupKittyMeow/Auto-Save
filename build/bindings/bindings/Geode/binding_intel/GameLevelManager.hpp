#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x478590
     * @note[short] MacOS (Intel): 0x5233f0
     * @note[short] Windows: 0x13e1e0
     * @note[short] iOS: 0x8b5b8
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameLevelManager* get();
    
private:
    [[deprecated("GameLevelManager::acceptFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void acceptFriendRequest(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::accountIDForUserID not implemented")]]
    /**
     * @note[short] Android
     */
    int accountIDForUserID(int userID);
public:
    
private:
    [[deprecated("GameLevelManager::addDLToActive not implemented")]]
    /**
     * @note[short] Windows: 0x1445c0
     * @note[short] Android
     */
    void addDLToActive(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::areGauntletsLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool areGauntletsLoaded();
public:
    
private:
    [[deprecated("GameLevelManager::banUser not implemented")]]
    /**
     * @note[short] Android
     */
    void banUser(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::blockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void blockUser(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::cleanupDailyLevels not implemented")]]
    /**
     * @note[short] Windows: 0x1450c0
     * @note[short] Android
     */
    void cleanupDailyLevels();
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetAccountComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetAccountComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetCommentsFull not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetCommentsFull(gd::string p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelComments not implemented")]]
    /**
     * @note[short] Android
     */
    bool createAndGetLevelComments(gd::string p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelLists(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetLevels not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevels(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetMapPacks(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::createAndGetScores not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetScores(gd::string p0, GJScoreType p1);
public:
    
private:
    [[deprecated("GameLevelManager::createNewLevel not implemented")]]
    /**
     * @note[short] Windows: 0x13fe60
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();
public:
    
private:
    [[deprecated("GameLevelManager::createNewLevelList not implemented")]]
    /**
     * @note[short] Windows: 0x140910
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();
public:
    
private:
    [[deprecated("GameLevelManager::createPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createPageInfo(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::createSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::dataLoaded not implemented")]]
    /**
     * @note[short] Windows: 0x145db0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteAccountComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteAccountComment(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::deleteComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteComment(int p0, CommentType p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::deleteFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteFriendRequests(int p0, cocos2d::CCArray* p1, bool p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x4874e4
     * @note[short] MacOS (Intel): 0x533f10
     * @note[short] Windows: 0x140640
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* p0);
    
private:
    [[deprecated("GameLevelManager::deleteLevelComment not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevelComment(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::deleteLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x55bc60
     * @note[short] Android
     */
    void deleteSentFriendRequest(int p0);

    /**
     * @note[short] MacOS (ARM): 0x49e9a0
     * @note[short] MacOS (Intel): 0x54e760
     * @note[short] Windows: 0x14eb70
     * @note[short] Android
     */
    void deleteServerLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::deleteServerLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteServerLevelList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::deleteSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a5858
     * @note[short] MacOS (Intel): 0x5566e0
     * @note[short] Windows: 0x155680
     * @note[short] Android
     */
    void deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] MacOS (ARM): 0x49bed4
     * @note[short] MacOS (Intel): 0x54b6c0
     * @note[short] Windows: 0x14c650
     * @note[short] Android
     */
    void downloadLevel(int p0, bool p1);
    
private:
    [[deprecated("GameLevelManager::downloadUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void downloadUserMessage(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Windows: 0x1458b0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("GameLevelManager::followUser not implemented")]]
    /**
     * @note[short] Android
     */
    void followUser(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::friendRequestFromAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::friendRequestWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void friendRequestWasRemoved(int p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    char const* getAccountCommentKey(int p0, int p1);
    
private:
    [[deprecated("GameLevelManager::getAccountComments not implemented")]]
    /**
     * @note[short] Android
     */
    void getAccountComments(int accountID, int page, int total);
public:

    /**
     * @note[short] MacOS (Intel): 0x560ec0
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::getActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();
public:
    
private:
    [[deprecated("GameLevelManager::getAllSmartTemplates not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();
public:
    
private:
    [[deprecated("GameLevelManager::getBasePostString not implemented")]]
    /**
     * @note[short] Windows: 0x146db0
     * @note[short] Android
     */
    gd::string getBasePostString();
public:
    
private:
    [[deprecated("GameLevelManager::getBoolForKey not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getBoolForKey(char const* key);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    gd::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);
    
private:
    [[deprecated("GameLevelManager::getCompletedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x142d40
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x560e90
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType p0);

    /**
     * @note[short] MacOS (Intel): 0x560ef0
     * @note[short] Android
     */
    double getDailyTimer(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::getDeleteCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteCommentKey(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getDeleteMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDeleteMessageKey(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getDescKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDescKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getActiveDailyID not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getActiveDailyID(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getDiffKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getDiffVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getDiffVal(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getFolderName(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::getFriendRequestKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getFriendRequestKey(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getFriendRequests not implemented")]]
    /**
     * @note[short] Android
     */
    void getFriendRequests(bool p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::getGauntletKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getGauntletKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getGauntletLevels not implemented")]]
    /**
     * @note[short] Android
     */
    void getGauntletLevels(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getGauntlets not implemented")]]
    /**
     * @note[short] Android
     */
    void getGauntlets();
public:
    
private:
    [[deprecated("GameLevelManager::getGauntletsearchKey not implemented")]]
    /**
     * @note[short] Android
     */
    void getGauntletsearchKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getGJChallenges not implemented")]]
    /**
     * @note[short] Windows: 0x15fee0
     * @note[short] Android
     */
    void getGJChallenges();
public:
    
private:
    [[deprecated("GameLevelManager::getGJDailyLevelState not implemented")]]
    /**
     * @note[short] Windows: 0x161140
     * @note[short] Android
     */
    void getGJDailyLevelState(GJTimedLevelType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getGJRewards not implemented")]]
    /**
     * @note[short] Windows: 0x15eaa0
     * @note[short] Android
     */
    void getGJRewards(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a36d8
     * @note[short] MacOS (Intel): 0x5542e0
     * @note[short] Windows: 0x153fe0
     * @note[short] Android
     */
    void getGJUserInfo(int p0);

    /**
     * @note[short] MacOS (Intel): 0x53c1a0
     * @note[short] Android
     */
    int getHighestLevelOrder();
    
private:
    [[deprecated("GameLevelManager::getIntForKey not implemented")]]
    /**
     * @note[short] Android
     */
    int getIntForKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLeaderboardScores not implemented")]]
    /**
     * @note[short] Android
     */
    void getLeaderboardScores(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLengthStr not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getLengthStr(bool p0, bool p1, bool p2, bool p3, bool p4, bool p5);
public:
    
private:
    [[deprecated("GameLevelManager::getLenKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char * getLenKey(int len);
public:
    
private:
    [[deprecated("GameLevelManager::getLenVal not implemented")]]
    /**
     * @note[short] Android
     */
    bool getLenVal(int p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x557010
     * @note[short] Windows: 0x155fd0
     * @note[short] Android
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    const char* getLevelKey(int levelID);
    
private:
    [[deprecated("GameLevelManager::getLevelLeaderboard not implemented")]]
    /**
     * @note[short] Windows: 0x1527e0
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelLeaderboardKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelLeaderboardKey(int p0, LevelLeaderboardType p1, LevelLeaderboardMode p2);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelListKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLevelListKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLevelLists not implemented")]]
    /**
     * @note[short] Windows: 0x14af50
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x498ffc
     * @note[short] MacOS (Intel): 0x548020
     * @note[short] Windows: 0x149640
     * @note[short] iOS: 0xa04b0
     * @note[short] Android
     */
    void getLevelSaveData();
    
private:
    [[deprecated("GameLevelManager::getLikeAccountItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeAccountItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLikeItemKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getLikeItemKey(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getLocalLevelByName not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getLocalLevelByName(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::getAllUsedSongIDs not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getAllUsedSongIDs(int p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x53c1e0
     * @note[short] Android
     */
    int getLowestLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x486454
     * @note[short] MacOS (Intel): 0x532cb0
     * @note[short] Windows: 0x13fa40
     * @note[short] iOS: 0x94cbc
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int levelID, bool dontGetLevelString);
    
private:
    [[deprecated("GameLevelManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char* getMapPackKey(int pack);
public:
    
private:
    [[deprecated("GameLevelManager::getMapPacks not implemented")]]
    /**
     * @note[short] Windows: 0x149ce0
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getMessagesKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMessagesKey(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getNews not implemented")]]
    /**
     * @note[short] Android
     */
    void getNews();
public:
    
private:
    [[deprecated("GameLevelManager::getNextFreeTemplateID not implemented")]]
    /**
     * @note[short] Android
     */
    int getNextFreeTemplateID();
public:
    
private:
    [[deprecated("GameLevelManager::getNextLevelName not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string getNextLevelName(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x497fc0
     * @note[short] MacOS (Intel): 0x546bd0
     * @note[short] Windows: 0x148470
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::getPageInfo not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getPageInfo(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getPostCommentKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getRateStarsKey not implemented")]]
    /**
     * @note[short] Android
     */
    const char * getRateStarsKey(int key);
public:
    
private:
    [[deprecated("GameLevelManager::getReportKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getReportKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x490530
     * @note[short] MacOS (Intel): 0x53e2d0
     * @note[short] Windows: 0x143740
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int p0);

    /**
     * @note[short] MacOS (Intel): 0x53e5a0
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedGauntlet not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntlet(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedGauntletLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x490718
     * @note[short] MacOS (Intel): 0x53e4b0
     * @note[short] Windows: 0x143670
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int p0);
    
private:
    [[deprecated("GameLevelManager::getSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x1428f0
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getSavedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSavedMapPack(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSearchScene not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::getSplitIntFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredLevelComments not implemented")]]
    /**
     * @note[short] Windows: 0x157b80
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredLevelComments(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4914d8
     * @note[short] MacOS (Intel): 0x53f3e0
     * @note[short] Windows: 0x144320
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* p0);
    
private:
    [[deprecated("GameLevelManager::getStoredUserList not implemented")]]
    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType p0);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getStoredUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getTimeLeft not implemented")]]
    /**
     * @note[short] Windows: 0x144970
     * @note[short] Android
     */
    double getTimeLeft(char const* p0, float p1);
public:
    
private:
    [[deprecated("GameLevelManager::getTopArtists not implemented")]]
    /**
     * @note[short] Android
     */
    void getTopArtists(int page, int total);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    const char* getTopArtistsKey(int page);
    
private:
    [[deprecated("GameLevelManager::getUploadMessageKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUploadMessageKey(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::getUserInfoKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getUserInfoKey(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4aca14
     * @note[short] MacOS (Intel): 0x55df10
     * @note[short] Windows: 0x15c5e0
     * @note[short] Android
     */
    void getUserList(UserListType p0);
    
private:
    [[deprecated("GameLevelManager::getUserMessages not implemented")]]
    /**
     * @note[short] Android
     */
    void getUserMessages(bool p0, int p1, int p2);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a32f0
     * @note[short] MacOS (Intel): 0x553eb0
     * @note[short] Windows: 0x153920
     * @note[short] Android
     */
    void getUsers(GJSearchObject* p0);
    
private:
    [[deprecated("GameLevelManager::gotoLevelPage not implemented")]]
    /**
     * @note[short] Windows: 0x143f60
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::handleIt not implemented")]]
    /**
     * @note[short] Windows: 0x13e4c0
     * @note[short] Android
     */
    void handleIt(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GameLevelManager::handleItDelayed not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItDelayed(bool p0, gd::string p1, gd::string p2, GJHttpType p3);
public:
    
private:
    [[deprecated("GameLevelManager::handleItND not implemented")]]
    /**
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* p0, void* p1);
public:

    /**
     * @note[short] MacOS (Intel): 0x560e50
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::hasDownloadedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::hasDownloadedList not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasDownloadedList(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4ae4b0
     * @note[short] MacOS (Intel): 0x55fa60
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x4ae3b0
     * @note[short] MacOS (Intel): 0x55f970
     * @note[short] Windows: 0x15e9c0
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType p0, int p1, bool p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x4adaf4
     * @note[short] MacOS (Intel): 0x55f170
     * @note[short] Windows: 0x15e930
     * @note[short] Android
     */
    bool hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x49e8a8
     * @note[short] MacOS (Intel): 0x54e670
     * @note[short] Windows: 0x14eaa0
     * @note[short] Android
     */
    bool hasRatedDemon(int p0);

    /**
     * @note[short] MacOS (ARM): 0x49e4e8
     * @note[short] MacOS (Intel): 0x54e2c0
     * @note[short] Windows: 0x14e9d0
     * @note[short] Android
     */
    bool hasRatedLevelStars(int p0);
    
private:
    [[deprecated("GameLevelManager::hasReportedLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1623f0
     * @note[short] Android
     */
    bool hasReportedLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::invalidateMessages not implemented")]]
    /**
     * @note[short] Windows: 0x155e80
     * @note[short] Android
     */
    void invalidateMessages(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::invalidateRequests not implemented")]]
    /**
     * @note[short] Windows: 0x15d1b0
     * @note[short] Android
     */
    void invalidateRequests(bool p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::invalidateUserList not implemented")]]
    /**
     * @note[short] Windows: 0x15ce80
     * @note[short] Android
     */
    void invalidateUserList(UserListType p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::isDLActive not implemented")]]
    /**
     * @note[short] Windows: 0x144500
     * @note[short] Android
     */
    bool isDLActive(char const* tag);
public:

    /**
     * @note[short] MacOS (ARM): 0x492fc8
     * @note[short] MacOS (Intel): 0x541020
     * @note[short] Windows: 0x1452f0
     * @note[short] Android
     */
    bool isFollowingUser(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4915d8
     * @note[short] MacOS (Intel): 0x53f4d0
     * @note[short] Windows: 0x144830
     * @note[short] Android
     */
    bool isTimeValid(char const* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x49d9dc
     * @note[short] MacOS (Intel): 0x54d630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isUpdateValid(int id);
    
private:
    [[deprecated("GameLevelManager::itemIDFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::keyHasTimer not implemented")]]
    /**
     * @note[short] Android
     */
    bool keyHasTimer(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::levelIDFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::levelIDFromPostCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::likeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int likeFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::likeItem not implemented")]]
    /**
     * @note[short] Windows: 0x15d8b0
     * @note[short] Android
     */
    void likeItem(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::limitSavedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x144b70
     * @note[short] Android
     */
    void limitSavedLevels();
public:
    
private:
    [[deprecated("GameLevelManager::makeTimeStamp not implemented")]]
    /**
     * @note[short] Windows: 0x144730
     * @note[short] Android
     */
    void makeTimeStamp(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::markItemAsLiked not implemented")]]
    /**
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType p0, int p1, bool p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsDownloaded not implemented")]]
    /**
     * @note[short] Windows: 0x14dd80
     * @note[short] Android
     */
    void markLevelAsDownloaded(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsRatedStars not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsRatedStars(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markLevelAsReported not implemented")]]
    /**
     * @note[short] Android
     */
    void markLevelAsReported(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::markListAsDownloaded not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markListAsDownloaded(int id);
public:
    
private:
    [[deprecated("GameLevelManager::messageWasRemoved not implemented")]]
    /**
     * @note[short] Android
     */
    void messageWasRemoved(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::onAcceptFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onAcceptFriendRequestCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onBanUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onBanUserCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onBlockUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onBlockUserCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteCommentCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteCommentCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteFriendRequestCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteServerLevelCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteServerLevelCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteServerLevelListCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteServerLevelListCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDeleteUserMessagesCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDeleteUserMessagesCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDownloadLevelCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadLevelCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onDownloadUserMessageCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onDownloadUserMessageCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetAccountCommentsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetAccountCommentsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetFriendRequestsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x159b50
     * @note[short] Android
     */
    void onGetFriendRequestsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGauntletsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGauntletsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJChallengesCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGJChallengesCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJDailyLevelStateCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGJDailyLevelStateCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJRewardsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGJRewardsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetGJUserInfoCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetGJUserInfoCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLeaderboardScoresCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLeaderboardScoresCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLevelCommentsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelCommentsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLevelLeaderboardCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelLeaderboardCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLevelListsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelListsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetLevelSaveDataCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetLevelSaveDataCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetMapPacksCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x149ef0
     * @note[short] Android
     */
    void onGetMapPacksCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetNewsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetNewsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetOnlineLevelsCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x148cd0
     * @note[short] Android
     */
    void onGetOnlineLevelsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetTopArtistsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetTopArtistsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetUserListCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUserListCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetUserMessagesCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUserMessagesCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onGetUsersCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onGetUsersCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onLikeItemCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onLikeItemCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onProcessHttpRequestCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x13e3d0
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);
public:
    
private:
    [[deprecated("GameLevelManager::onRateDemonCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRateDemonCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onRateStarsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRateStarsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onReadFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onReadFriendRequestCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onRemoveFriendCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRemoveFriendCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onReportLevelCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onReportLevelCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onRequestUserAccessCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRequestUserAccessCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onRestoreItemsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onRestoreItemsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onSetLevelFeaturedCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSetLevelFeaturedCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onSetLevelStarsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSetLevelStarsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onSubmitUserInfoCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSubmitUserInfoCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onSuggestLevelStarsCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onSuggestLevelStarsCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUnblockUserCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUnblockUserCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUpdateDescriptionCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateDescriptionCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUpdateLevelCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateLevelCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUpdateUserScoreCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUpdateUserScoreCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadCommentCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x158540
     * @note[short] Android
     */
    void onUploadCommentCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadFriendRequestCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadFriendRequestCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadLevelCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x147aa0
     * @note[short] Android
     */
    void onUploadLevelCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadLevelListCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadLevelListCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::onUploadUserMessageCompleted not implemented")]]
    /**
     * @note[short] Android
     */
    void onUploadUserMessageCompleted(gd::string response, gd::string tag);
public:
    
private:
    [[deprecated("GameLevelManager::pageFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    int pageFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::parseRestoreData not implemented")]]
    /**
     * @note[short] Android
     */
    void parseRestoreData(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::performNetworkTest not implemented")]]
    /**
     * @note[short] iOS: 0x8b694
     * @note[short] Android
     */
    void performNetworkTest();
public:
    
private:
    [[deprecated("GameLevelManager::ProcessHttpRequest not implemented")]]
    /**
     * @note[short] Windows: 0x13e230
     * @note[short] Android
     */
    void ProcessHttpRequest(gd::string endpoint, gd::string params, gd::string tag, GJHttpType httpType);
public:
    
private:
    [[deprecated("GameLevelManager::processOnDownloadLevelCompleted not implemented")]]
    /**
     * @note[short] Windows: 0x14cbc0
     * @note[short] Android
     */
    void processOnDownloadLevelCompleted(gd::string response, gd::string tag, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::purgeUnusedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x144e10
     * @note[short] Android
     */
    void purgeUnusedLevels();
public:
    
private:
    [[deprecated("GameLevelManager::rateDemon not implemented")]]
    /**
     * @note[short] Android
     */
    void rateDemon(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::rateStars not implemented")]]
    /**
     * @note[short] Android
     */
    void rateStars(int p0, int p1);
public:
    
private:
    [[deprecated("GameLevelManager::readFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void readFriendRequest(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeDelimiterChars not implemented")]]
    /**
     * @note[short] Windows: 0x1626a0
     * @note[short] Android
     */
    TodoReturn removeDelimiterChars(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::removeDLFromActive not implemented")]]
    /**
     * @note[short] Windows: 0x144680
     * @note[short] Android
     */
    void removeDLFromActive(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeFriend not implemented")]]
    /**
     * @note[short] Android
     */
    void removeFriend(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeLevelDownloadedKeysFromDict not implemented")]]
    /**
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* p0);
public:
    
private:
    [[deprecated("GameLevelManager::removeUserFromList not implemented")]]
    /**
     * @note[short] Android
     */
    void removeUserFromList(int p0, UserListType p1);
public:
    
private:
    [[deprecated("GameLevelManager::reportLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void reportLevel(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::requestUserAccess not implemented")]]
    /**
     * @note[short] Android
     */
    void requestUserAccess();
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void resetAccountComments(int accountID);
    
private:
    [[deprecated("GameLevelManager::resetAllTimers not implemented")]]
    /**
     * @note[short] Android
     */
    void resetAllTimers();
public:
    
private:
    [[deprecated("GameLevelManager::resetCommentTimersForLevelID not implemented")]]
    /**
     * @note[short] Windows: 0x158ed0
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int p0, CommentKeyType p1);
public:

    /**
     * @note[short] MacOS (Intel): 0x560e10
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType p0);
    
private:
    [[deprecated("GameLevelManager::resetGauntlets not implemented")]]
    /**
     * @note[short] Android
     */
    void resetGauntlets();
public:
	inline void resetStoredUserInfo(int id) {
        m_storedUserInfo->removeObjectForKey(id);
    }
    
private:
    [[deprecated("GameLevelManager::resetStoredUserList not implemented")]]
    /**
     * @note[short] Android
     */
    void resetStoredUserList(UserListType p0);
public:
    
private:
    [[deprecated("GameLevelManager::resetTimerForKey not implemented")]]
    /**
     * @note[short] Windows: 0x144ac0
     * @note[short] Android
     */
    void resetTimerForKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::responseToDict not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::restoreItems not implemented")]]
    /**
     * @note[short] Android
     */
    void restoreItems();
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevelLists not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedLevels not implemented")]]
    /**
     * @note[short] Windows: 0x141e70
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveFetchedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveGauntlet not implemented")]]
    /**
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1438e0
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::saveLocalScore not implemented")]]
    /**
     * @note[short] Android
     */
    void saveLocalScore(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::saveMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setActiveSmartTemplate not implemented")]]
    /**
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* p0);
public:
    
private:
    [[deprecated("GameLevelManager::setBoolForKey not implemented")]]
    /**
     * @note[short] Android
     */
    void setBoolForKey(bool p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setDiffVal not implemented")]]
    /**
     * @note[short] Windows: 0x1624c0
     * @note[short] Android
     */
    void setDiffVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setFolderName not implemented")]]
    /**
     * @note[short] Android
     */
    void setFolderName(int p0, gd::string p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setIntForKey not implemented")]]
    /**
     * @note[short] Android
     */
    void setIntForKey(int p0, char const* p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLenVal not implemented")]]
    /**
     * @note[short] Windows: 0x1625b0
     * @note[short] Android
     */
    void setLenVal(int p0, bool p1);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelFeatured not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelFeatured(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::setLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    void setLevelStars(int p0, int p1, bool p2);
public:
    
private:
    [[deprecated("GameLevelManager::specialFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    int specialFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeCommentsResult not implemented")]]
    /**
     * @note[short] Android
     */
    void storeCommentsResult(cocos2d::CCArray* p0, gd::string p1, char const* p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeDailyLevelState not implemented")]]
    /**
     * @note[short] Android
     */
    void storeDailyLevelState(int p0, int p1, GJTimedLevelType p2);
public:
    
private:
    [[deprecated("GameLevelManager::storeFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeSearchResult not implemented")]]
    /**
     * @note[short] Windows: 0x144110
     * @note[short] Android
     */
    void storeSearchResult(cocos2d::CCArray* levels, gd::string pageInfo, char const* searchKey);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessage not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* p0);
public:
    
private:
    [[deprecated("GameLevelManager::storeUserMessageReply not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserMessageReply(int p0, GJUserMessage* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x4885f4
     * @note[short] MacOS (Intel): 0x5350e0
     * @note[short] Windows: 0x141300
     * @note[short] Android
     */
    void storeUserName(int userID, int accountID, gd::string userName);
    
private:
    [[deprecated("GameLevelManager::storeUserNames not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserNames(gd::string usernameString);
public:
    
private:
    [[deprecated("GameLevelManager::submitUserInfo not implemented")]]
    /**
     * @note[short] Android
     */
    void submitUserInfo();
public:
    
private:
    [[deprecated("GameLevelManager::suggestLevelStars not implemented")]]
    /**
     * @note[short] Android
     */
    void suggestLevelStars(int p0, int p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::tryGetUsername not implemented")]]
    /**
     * @note[short] Windows: 0x141660
     * @note[short] Android
     */
    gd::string tryGetUsername(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromCommentKey not implemented")]]
    /**
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::typeFromLikeKey not implemented")]]
    /**
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* p0);
public:
    
private:
    [[deprecated("GameLevelManager::unblockUser not implemented")]]
    /**
     * @note[short] Android
     */
    void unblockUser(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::unfollowUser not implemented")]]
    /**
     * @note[short] Android
     */
    void unfollowUser(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void updateDescription(int p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::updateLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateLevelOrders not implemented")]]
    /**
     * @note[short] Android
     */
    void updateLevelOrders();
public:
    
private:
    [[deprecated("GameLevelManager::updateLevelRewards not implemented")]]
    /**
     * @note[short] Windows: 0x1419b0
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateSavedLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameLevelManager::updateUsernames not implemented")]]
    /**
     * @note[short] Android
     */
    void updateUsernames();
public:

    /**
     * @note[short] MacOS (ARM): 0x49f9d0
     * @note[short] MacOS (Intel): 0x54f880
     * @note[short] Windows: 0x14ffb0
     * @note[short] iOS: 0xa4158
     * @note[short] Android
     */
    void updateUserScore();
    
private:
    [[deprecated("GameLevelManager::uploadAccountComment not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadAccountComment(gd::string p0);
public:
    
private:
    [[deprecated("GameLevelManager::uploadComment not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadComment(gd::string p0, CommentType p1, int p2, int p3);
public:
    
private:
    [[deprecated("GameLevelManager::uploadFriendRequest not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadFriendRequest(int p0, gd::string p1);
public:
    
private:
    [[deprecated("GameLevelManager::uploadLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::uploadLevelComment not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadLevelComment(int p0, gd::string p1, int p2);
public:
    
private:
    [[deprecated("GameLevelManager::uploadLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x4a5270
     * @note[short] MacOS (Intel): 0x556070
     * @note[short] Windows: 0x155010
     * @note[short] Android
     */
    void uploadUserMessage(int p0, gd::string p1, gd::string p2);
    
private:
    [[deprecated("GameLevelManager::userIDForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    int userIDForAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::userInfoForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::userNameForUserID not implemented")]]
    /**
     * @note[short] Windows: 0x1414e0
     * @note[short] Android
     */
    gd::string userNameForUserID(int p0);
public:
    
private:
    [[deprecated("GameLevelManager::verifyLevelState not implemented")]]
    /**
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameLevelManager::writeSpecialFilters not implemented")]]
    /**
     * @note[short] Windows: 0x1481b0
     * @note[short] Android
     */
    gd::string writeSpecialFilters(GJSearchObject* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x486344
     * @note[short] MacOS (Intel): 0x532b20
     * @note[short] Windows: 0x13f890
     * @note[short] Android
     */
    virtual bool init();
    GEODE_PAD(24);
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_GLM21;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_dailyIDUnk;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_weeklyIDUnk;
    int m_eventTimeLeft;
    int m_eventID;
    int m_eventIDUnk;
    cocos2d::CCDictionary* m_gauntletLevels;
    gd::map<gd::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_friendReqAndUserBlocks;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    gd::string m_searchSceneStr;
    gd::string m_searchType9Str;
    LeaderboardState m_leaderboardState;
    bool m_unkEditLevelLayerOnBack;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    UploadPopupDelegate* m_uploadPopupDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    OnlineListDelegate* m_onlineListDelegate;
    int m_unkDownload;
private:
    gd::string m_unkStr3;
public:
private:
    cocos2d::CCString* m_unkStr4;
public:
};
