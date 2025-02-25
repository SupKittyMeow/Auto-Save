#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";
    
private:
    [[deprecated("LevelTools::artistForAudio not implemented")]]
    /**
     * @note[short] Windows: 0x308880
     * @note[short] Android
     */
    static int artistForAudio(int p0);
public:
    
private:
    [[deprecated("LevelTools::base64DecodeString not implemented")]]
    /**
     * @note[short] Android
     */
    static gd::string base64DecodeString(gd::string p0);
public:
    
private:
    [[deprecated("LevelTools::base64EncodeString not implemented")]]
    /**
     * @note[short] Android
     */
    static gd::string base64EncodeString(gd::string p0);
public:
    
private:
    [[deprecated("LevelTools::createStarPackDict not implemented")]]
    /**
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();
public:
    
private:
    [[deprecated("LevelTools::fbURLForArtist not implemented")]]
    /**
     * @note[short] Windows: 0x30a990
     * @note[short] Android
     */
    static gd::string fbURLForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::getAudioBPM not implemented")]]
    /**
     * @note[short] Android
     */
    static int getAudioBPM(int p0);
public:
    
private:
    [[deprecated("LevelTools::getAudioFileName not implemented")]]
    /**
     * @note[short] Windows: 0x307cb0
     * @note[short] Android
     */
    static gd::string getAudioFileName(int p0);
public:
    
private:
    [[deprecated("LevelTools::getAudioString not implemented")]]
    /**
     * @note[short] Android
     */
    static gd::string getAudioString(int p0);
public:
    
private:
    [[deprecated("LevelTools::getAudioTitle not implemented")]]
    /**
     * @note[short] Windows: 0x307130
     * @note[short] Android
     */
    static gd::string getAudioTitle(int p0);
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayReversed not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastGameplayReversed();
public:
    
private:
    [[deprecated("LevelTools::getLastGameplayRotated not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastGameplayRotated();
public:
    
private:
    [[deprecated("LevelTools::getLastTimewarp not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLastTimewarp();
public:
    
private:
    [[deprecated("LevelTools::getLevel not implemented")]]
    /**
     * @note[short] Windows: 0x304880
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int p0, bool p1);
public:
    
private:
    [[deprecated("LevelTools::getLevelList not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLevelList();
public:
    
private:
    [[deprecated("LevelTools::getSongObject not implemented")]]
    /**
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int p0);
public:
    
private:
    [[deprecated("LevelTools::moveTriggerObjectsToArray not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn moveTriggerObjectsToArray(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, int p2);
public:
    
private:
    [[deprecated("LevelTools::nameForArtist not implemented")]]
    /**
     * @note[short] Windows: 0x308950
     * @note[short] Android
     */
    static gd::string nameForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::ngURLForArtist not implemented")]]
    /**
     * @note[short] Windows: 0x309f70
     * @note[short] Android
     */
    static gd::string ngURLForArtist(int p0);
public:
    
private:
    [[deprecated("LevelTools::offsetBPMForTrack not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn offsetBPMForTrack(int p0);
public:
    
private:
    [[deprecated("LevelTools::posForTime not implemented")]]
    /**
     * @note[short] Android
     */
    static float posForTime(float p0, cocos2d::CCArray* p1, int p2, bool p3, int& p4);
public:
    
private:
    [[deprecated("LevelTools::posForTimeInternal not implemented")]]
    /**
     * @note[short] Android
     */
    static float posForTimeInternal(float p0, cocos2d::CCArray* p1, int p2, bool p3, bool p4, bool p5, int& p6, int p7);
public:
    
private:
    [[deprecated("LevelTools::sortChannelOrderObjects not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn sortChannelOrderObjects(cocos2d::CCArray* p0, cocos2d::CCDictionary* p1, bool p2);
public:
    
private:
    [[deprecated("LevelTools::sortSpeedObjects not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn sortSpeedObjects(cocos2d::CCArray* p0, GJBaseGameLayer* p1);
public:
    
private:
    [[deprecated("LevelTools::timeForPos not implemented")]]
    /**
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint p0, cocos2d::CCArray* p1, int p2, int p3, int p4, bool p5, bool p6, bool p7, bool p8, int p9);
public:
    
private:
    [[deprecated("LevelTools::toggleDebugLogging not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn toggleDebugLogging(bool p0);
public:
    
private:
    [[deprecated("LevelTools::urlForAudio not implemented")]]
    /**
     * @note[short] Windows: 0x308c50
     * @note[short] Android
     */
    static gd::string urlForAudio(int p0);
public:
    
private:
    [[deprecated("LevelTools::valueForSpeedMod not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn valueForSpeedMod(int p0);
public:
    
private:
    [[deprecated("LevelTools::verifyLevelIntegrity not implemented")]]
    /**
     * @note[short] Windows: 0x30ca60
     * @note[short] Android
     */
    static bool verifyLevelIntegrity(gd::string p0, int p1);
public:
    
private:
    [[deprecated("LevelTools::ytURLForArtist not implemented")]]
    /**
     * @note[short] Windows: 0x30a410
     * @note[short] Android
     */
    static gd::string ytURLForArtist(int p0);
public:
};
