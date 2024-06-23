#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x515b0
     * @note[short] MacOS (Intel): 0x5aea0
     * @note[short] Windows: 0x1c6e60
     * @note[short] iOS: 0x33601c
     * @note[short] Android
     */
    static GameStatsManager* sharedState();
    
private:
    [[deprecated("GameStatsManager::accountIDForIcon not implemented")]]
    /**
     * @note[short] Android
     */
    int accountIDForIcon(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::addSimpleSpecialChestReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn addSimpleSpecialChestReward(gd::string p0, UnlockType p1, int p2, bool p3);
public:
    
private:
    [[deprecated("GameStatsManager::addSpecialRewardDescription not implemented")]]
    /**
     * @note[short] Android
     */
    void addSpecialRewardDescription(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameStatsManager::addStoreItem not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5a4f0
     * @note[short] Windows: 0x1ca0b0
     * @note[short] Android
     */
    TodoReturn addStoreItem(int p0, int p1, int p2, int p3, ShopType p4);
public:
    
private:
    [[deprecated("GameStatsManager::areChallengesLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areChallengesLoaded();
public:
    
private:
    [[deprecated("GameStatsManager::areRewardsLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn areRewardsLoaded();
public:
    
private:
    [[deprecated("GameStatsManager::awardCurrencyForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d6500
     * @note[short] Android
     */
    void awardCurrencyForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::awardDiamondsForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn awardDiamondsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::awardSecretKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn awardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::checkAchievement not implemented")]]
    /**
     * @note[short] Windows: 0x1cb460
     * @note[short] Android
     */
    TodoReturn checkAchievement(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::checkCoinAchievement not implemented")]]
    /**
     * @note[short] Windows: 0x1d3430
     * @note[short] Android
     */
    void checkCoinAchievement(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::checkCoinsForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::claimListReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn claimListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::collectReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectReward(GJRewardType p0, GJRewardItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::collectVideoReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn collectVideoReward(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedChallenge(GJChallengeItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedDailyLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedDailyLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedDemonLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn completedMapPack(GJMapPack* p0);
public:
    
private:
    [[deprecated("GameStatsManager::completedStarLevel not implemented")]]
    /**
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::countSecretChests not implemented")]]
    /**
     * @note[short] iOS: 0x34d200
     * @note[short] Android
     */
    int countSecretChests(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::countUnlockedSecretChests not implemented")]]
    /**
     * @note[short] iOS: 0x34d244
     * @note[short] Android
     */
    int countUnlockedSecretChests(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::createSecretChestItems not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x538c4
     * @note[short] Android
     */
    TodoReturn createSecretChestItems();
public:
    
private:
    [[deprecated("GameStatsManager::createSecretChestRewards not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createSecretChestRewards();
public:
    
private:
    [[deprecated("GameStatsManager::createSpecialChestItems not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x53a08
     * @note[short] Windows: 0x1dae20
     * @note[short] Android
     */
    TodoReturn createSpecialChestItems();
public:
    
private:
    [[deprecated("GameStatsManager::createStoreItems not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x51980
     * @note[short] Windows: 0x1c78e0
     * @note[short] Android
     */
    TodoReturn createStoreItems();
public:
    
private:
    [[deprecated("GameStatsManager::dataLoaded not implemented")]]
    /**
     * @note[short] Windows: 0x1e5c00
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameStatsManager::encodeDataTo not implemented")]]
    /**
     * @note[short] Windows: 0x1e5950
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* p0);
public:
    
private:
    [[deprecated("GameStatsManager::firstSetup not implemented")]]
    /**
     * @note[short] Android
     */
    void firstSetup();
public:
    
private:
    [[deprecated("GameStatsManager::generateItemUnlockableData not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x598fc
     * @note[short] Android
     */
    TodoReturn generateItemUnlockableData();
public:
    
private:
    [[deprecated("GameStatsManager::getAwardedCurrencyForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d6020
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getAwardedDiamondsForLevel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getAwardedDiamondsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getBaseCurrency not implemented")]]
    /**
     * @note[short] Android
     */
    int getBaseCurrency(int p0, bool p1, int p2);
public:
    
private:
    [[deprecated("GameStatsManager::getBaseCurrencyForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d62c0
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x709e0
     * @note[short] Android
     */
    TodoReturn getBaseDiamonds(int p0);
    
private:
    [[deprecated("GameStatsManager::getBonusDiamonds not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getBonusDiamonds(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getChallenge not implemented")]]
    /**
     * @note[short] Windows: 0x1d76f0
     * @note[short] iOS: 0x343c80
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getChallengeKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getChallengeKey(GJChallengeItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getCollectedCoinsForLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d37d0
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getCompletedMapPacks not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCompletedMapPacks();
public:
    
private:
    [[deprecated("GameStatsManager::getCurrencyKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getCurrencyKey(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getDailyLevelKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDailyLevelKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getDemonLevelKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getDemonLevelKey(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6b494
     * @note[short] MacOS (Intel): 0x78b30
     * @note[short] Windows: 0x1de640
     * @note[short] Android
     */
    gd::string getGauntletRewardKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5a2d4
     * @note[short] MacOS (Intel): 0x65010
     * @note[short] Windows: 0x1d7230
     * @note[short] Android
     */
    gd::string getItemKey(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x6ad24
     * @note[short] MacOS (Intel): 0x78400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x345cf8
     * @note[short] Android
     */
    int getItemUnlockState(int itemID, UnlockType unlockType);
    
private:
    [[deprecated("GameStatsManager::getItemUnlockStateLite not implemented")]]
    /**
     * @note[short] Android
     */
    int getItemUnlockStateLite(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getLevelKey not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    gd::string getLevelKey(GJGameLevel* level);
public:
    
private:
    [[deprecated("GameStatsManager::getLevelKey not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x60dcc
     * @note[short] Windows: 0x1d3950
     * @note[short] Android
     */
    gd::string getLevelKey(int p0, bool p1, bool p2, bool p3);
public:
    
private:
    [[deprecated("GameStatsManager::getListRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getListRewardKey(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getMapPackKey not implemented")]]
    /**
     * @note[short] Android
     */
    char const* getMapPackKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getNextVideoAdReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextVideoAdReward();
public:
    
private:
    [[deprecated("GameStatsManager::getPathRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getPathRewardKey(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getQueuedChallenge not implemented")]]
    /**
     * @note[short] Windows: 0x1d77c0
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardForSecretChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardForSpecialChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardForSpecialChest(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardItem(GJRewardType p0);
public:
    
private:
    [[deprecated("GameStatsManager::getRewardKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getRewardKey(GJRewardType p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSecondaryQueuedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getSecretChestForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretChestForItem(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSecretCoinKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSecretCoinKey(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialChestKeyForItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialChestKeyForItem(int p0, UnlockType p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialRewardDescription not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getSpecialRewardDescription(gd::string p0, bool p1);
public:
    
private:
    [[deprecated("GameStatsManager::getSpecialUnlockDescription not implemented")]]
    /**
     * @note[short] Windows: 0x1de7b0
     * @note[short] Android
     */
    TodoReturn getSpecialUnlockDescription(int p0, UnlockType p1, bool p2);
public:
    
private:
    [[deprecated("GameStatsManager::getStarLevelKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStarLevelKey(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x5aa1c
     * @note[short] MacOS (Intel): 0x657a0
     * @note[short] Windows: 0x1cb1d0
     * @note[short] iOS: 0x33c328
     * @note[short] Android
     */
    int getStat(char const* p0);
    
private:
    [[deprecated("GameStatsManager::getStatFromKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStatFromKey(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::getStoreItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getStoreItem(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::getTotalCollectedCurrency not implemented")]]
    /**
     * @note[short] Windows: 0x1d8e50
     * @note[short] Android
     */
    int getTotalCollectedCurrency();
public:
    
private:
    [[deprecated("GameStatsManager::getTotalCollectedDiamonds not implemented")]]
    /**
     * @note[short] Windows: 0x1d9720
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();
public:
    
private:
    [[deprecated("GameStatsManager::hasClaimedListReward not implemented")]]
    /**
     * @note[short] Windows: 0x1d84b0
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedDailyLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d8590
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedDemonLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedGauntletLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d3d70
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x61134
     * @note[short] MacOS (Intel): 0x6d1d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x610a0
     * @note[short] MacOS (Intel): 0x6d160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasCompletedMainLevel(int levelID);
    
private:
    [[deprecated("GameStatsManager::hasCompletedMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedOnlineLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d3c40
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::hasCompletedStarLevel not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x63484
     * @note[short] MacOS (Intel): 0x6f5b0
     * @note[short] Windows: 0x1d5a00
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::hasRewardBeenCollected not implemented")]]
    /**
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::hasSecretCoin not implemented")]]
    /**
     * @note[short] Windows: 0x1d5ac0
     * @note[short] Android
     */
    bool hasSecretCoin(char const* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6356c
     * @note[short] MacOS (Intel): 0x6f690
     * @note[short] Windows: 0x1d5880
     * @note[short] Android
     */
    bool hasUserCoin(char const* p0);
    
private:
    [[deprecated("GameStatsManager::incrementActivePath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementActivePath(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::incrementChallenge not implemented")]]
    /**
     * @note[short] Windows: 0x1d7970
     * @note[short] Android
     */
    TodoReturn incrementChallenge(GJChallengeType p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x5ad30
     * @note[short] Windows: 0x1ca5b0
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::incrementStat not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn incrementStat(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::isGauntletChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::isItemEnabled not implemented")]]
    /**
     * @note[short] iOS: 0x345d80
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x5ead0
     * @note[short] MacOS (Intel): 0x6a450
     * @note[short] Windows: 0x1dabe0
     * @note[short] iOS: 0x33fda8
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType p0, int p1);
    
private:
    [[deprecated("GameStatsManager::isPathChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPathChestUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::isPathUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretChestUnlocked not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoin(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSecretCoinValid not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSecretCoinValid(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::isSpecialChestLiteUnlockable not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSpecialChestLiteUnlockable(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x6ac30
     * @note[short] MacOS (Intel): 0x78310
     * @note[short] Windows: 0x1de960
     * @note[short] Android
     */
    bool isSpecialChestUnlocked(gd::string p0);
    
private:
    [[deprecated("GameStatsManager::isStoreItemUnlocked not implemented")]]
    /**
     * @note[short] Windows: 0x1dec10
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::keyCostForSecretChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn keyCostForSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::logCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn logCoins();
public:
    
private:
    [[deprecated("GameStatsManager::markLevelAsCompletedAndClaimed not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn markLevelAsCompletedAndClaimed(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::postLoadGameStats not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn postLoadGameStats();
public:
    
private:
    [[deprecated("GameStatsManager::preProcessReward not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preProcessReward(GJRewardItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::preSaveGameStats not implemented")]]
    /**
     * @note[short] Windows: 0x1e6f10
     * @note[short] Android
     */
    TodoReturn preSaveGameStats();
public:
    
private:
    [[deprecated("GameStatsManager::processChallengeQueue not implemented")]]
    /**
     * @note[short] Windows: 0x1d81d0
     * @note[short] Android
     */
    TodoReturn processChallengeQueue(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::purchaseItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn purchaseItem(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::recountSpecialStats not implemented")]]
    /**
     * @note[short] Windows: 0x1d9a20
     * @note[short] Android
     */
    TodoReturn recountSpecialStats();
public:
    
private:
    [[deprecated("GameStatsManager::recountUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn recountUserCoins(bool p0);
public:
    
private:
    [[deprecated("GameStatsManager::registerRewardsFromItem not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerRewardsFromItem(GJRewardItem* p0);
public:
    
private:
    [[deprecated("GameStatsManager::removeChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::removeErrorFromSpecialChests not implemented")]]
    /**
     * @note[short] Windows: 0x1e6c00
     * @note[short] Android
     */
    TodoReturn removeErrorFromSpecialChests();
public:
    
private:
    [[deprecated("GameStatsManager::removeQueuedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeQueuedChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::removeQueuedSecondaryChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn removeQueuedSecondaryChallenge(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::resetChallengeTimer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetChallengeTimer();
public:
    
private:
    [[deprecated("GameStatsManager::resetPreSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetPreSync();
public:
    
private:
    [[deprecated("GameStatsManager::resetSpecialStatAchievements not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetSpecialStatAchievements();
public:
    
private:
    [[deprecated("GameStatsManager::resetUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resetUserCoins();
public:
    
private:
    [[deprecated("GameStatsManager::restorePostSync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn restorePostSync();
public:
    
private:
    [[deprecated("GameStatsManager::setAwardedBonusKeys not implemented")]]
    /**
     * @note[short] Android
     */
    void setAwardedBonusKeys(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::setStarsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    void setStarsForMapPack(int p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::setStat not implemented")]]
    /**
     * @note[short] Windows: 0x1cb2f0
     * @note[short] Android
     */
    void setStat(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::setStatIfHigher not implemented")]]
    /**
     * @note[short] Android
     */
    void setStatIfHigher(char const* p0, int p1);
public:
    
private:
    [[deprecated("GameStatsManager::setupIconCredits not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x2b9bf4
     * @note[short] Windows: 0x1ba150
     * @note[short] Android
     */
    TodoReturn setupIconCredits();
public:
    
private:
    [[deprecated("GameStatsManager::shopTypeForItemID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shopTypeForItemID(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::shouldAwardSecretKey not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn shouldAwardSecretKey();
public:
    
private:
    [[deprecated("GameStatsManager::starsForMapPack not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn starsForMapPack(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::storeChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeChallenge(int p0, GJChallengeItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::storeChallengeTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeChallengeTime(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::storePendingUserCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storePendingUserCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::storeQueuedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeQueuedChallenge(int p0, GJChallengeItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::storeRewardState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeRewardState(GJRewardType p0, int p1, int p2, gd::string p3);
public:
    
private:
    [[deprecated("GameStatsManager::storeSecondaryQueuedChallenge not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSecondaryQueuedChallenge(int p0, GJChallengeItem* p1);
public:
    
private:
    [[deprecated("GameStatsManager::storeSecretCoin not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeSecretCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::storeUserCoin not implemented")]]
    /**
     * @note[short] Android
     */
    void storeUserCoin(char const* p0);
public:
    
private:
    [[deprecated("GameStatsManager::tempClear not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn tempClear();
public:

    /**
     * @note[short] MacOS (ARM): 0x6b1cc
     * @note[short] MacOS (Intel): 0x78870
     * @note[short] Windows: 0x1dad90
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType p0, int p1, bool p2);
    
private:
    [[deprecated("GameStatsManager::trySelectActivePath not implemented")]]
    /**
     * @note[short] Windows: 0x1ca740
     * @note[short] Android
     */
    TodoReturn trySelectActivePath();
public:
    
private:
    [[deprecated("GameStatsManager::uncompleteLevel not implemented")]]
    /**
     * @note[short] Windows: 0x1d4740
     * @note[short] Android
     */
    void uncompleteLevel(GJGameLevel* p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockGauntletChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockGauntletChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockPathChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockPathChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockSecretChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockSecretChest(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::unlockSpecialChest not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unlockSpecialChest(gd::string p0);
public:
    
private:
    [[deprecated("GameStatsManager::updateActivePath not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateActivePath(StatKey p0);
public:
    
private:
    [[deprecated("GameStatsManager::usernameForAccountID not implemented")]]
    /**
     * @note[short] Android
     */
    gd::string usernameForAccountID(int p0);
public:
    
private:
    [[deprecated("GameStatsManager::verifyUserCoins not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn verifyUserCoins();
public:

    /**
     * @note[short] MacOS (ARM): 0x518d8
     * @note[short] MacOS (Intel): 0x5b350
     * @note[short] Windows: 0x1c7280
     * @note[short] Android
     */
    virtual bool init();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    gd::unordered_map<int, gd::string> m_specialRewardDescriptions;
    gd::unordered_map<int, gd::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    gd::unordered_map<int, int> m_playerStatsRandMap;
    gd::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueSRV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    bool m_unkBoolIncrementStat;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    gd::map<int, UnlockType> m_accountIDForIcon;
    gd::map<int, gd::string> m_usernameForAccountID;
    bool m_GS29;
    int m_activePath;
};
