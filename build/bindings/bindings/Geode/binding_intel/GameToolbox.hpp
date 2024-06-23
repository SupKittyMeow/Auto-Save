#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>


class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x45326c
     * @note[short] MacOS (Intel): 0x4fa520
     * @note[short] Windows: 0x63a20
     * @note[short] iOS: 0x4abd0
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* p0, cocos2d::CCMenuItem* p1);

    /**
     * @note[short] MacOS (ARM): 0x453354
     * @note[short] MacOS (Intel): 0x4fa5f0
     * @note[short] Windows: 0x63b00
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* p0);
    
private:
    [[deprecated("GameToolbox::alignItemsHorisontally not implemented")]]
    /**
     * @note[short] Windows: 0x62b20
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2, bool p3);
public:
    
private:
    [[deprecated("GameToolbox::alignItemsVertically not implemented")]]
    /**
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
public:
    
private:
    [[deprecated("GameToolbox::bounceTime not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn bounceTime(float p0);
public:
    
private:
    [[deprecated("GameToolbox::colorToSepia not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn colorToSepia(cocos2d::ccColor3B p0, float p1);
public:
    
private:
    [[deprecated("GameToolbox::contentScaleClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn contentScaleClipRect(cocos2d::CCRect& p0);
public:
    
private:
    [[deprecated("GameToolbox::createHashString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn createHashString(gd::string const& p0, int p1);
public:
    
private:
    [[deprecated("GameToolbox::createToggleButton not implemented")]]
    /**
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, cocos2d::CCArray* p7);
public:

    /**
     * @note[short] MacOS (ARM): 0x4528d0
     * @note[short] MacOS (Intel): 0x4f9b80
     * @note[short] Windows: 0x63080
     * @note[short] iOS: 0x4a4f8
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14);
    
private:
    [[deprecated("GameToolbox::doWeHaveInternet not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn doWeHaveInternet();
public:
    
private:
    [[deprecated("GameToolbox::easeToText not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn easeToText(int p0);
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_0_1 not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand_0_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand_minus1_1 not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand_minus1_1();
public:
    
private:
    [[deprecated("GameToolbox::fast_rand not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn fast_rand();
public:
    
private:
    [[deprecated("GameToolbox::fast_srand not implemented")]]
    /**
     * @note[short] Android
     */
    static void fast_srand(uint64_t p0);
public:
    
private:
    [[deprecated("GameToolbox::gen_random not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn gen_random(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWDelay not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWDelay(float p0, float p1, float p2, cocos2d::CCNode* p3, cocos2d::SEL_CallFunc p4);
public:
    
private:
    [[deprecated("GameToolbox::getDropActionWEnd not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getDropActionWEnd(float p0, float p1, float p2, cocos2d::CCAction* p3, float p4);
public:
    
private:
    [[deprecated("GameToolbox::getEasedAction not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::getEasedValue not implemented")]]
    /**
     * @note[short] Windows: 0x67550
     * @note[short] Android
     */
    static TodoReturn getEasedValue(float p0, int p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::getfast_srand not implemented")]]
    /**
     * @note[short] Android
     */
    static uint64_t getfast_srand();
public:
    
private:
    [[deprecated("GameToolbox::getInvertedEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getInvertedEasing(int p0);
public:
    
private:
    [[deprecated("GameToolbox::getLargestMergedIntDicts not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getLargestMergedIntDicts(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::getMultipliedHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getMultipliedHSV(cocos2d::ccHSVValue const& p0, float p1);
public:
    
private:
    [[deprecated("GameToolbox::getRelativeOffset not implemented")]]
    /**
     * @note[short] Windows: 0x63380
     * @note[short] Android
     */
    static TodoReturn getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1);
public:
    
private:
    [[deprecated("GameToolbox::getResponse not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn getResponse(cocos2d::extension::CCHttpResponse* p0);
public:
    
private:
    [[deprecated("GameToolbox::getTimeString not implemented")]]
    /**
     * @note[short] Windows: 0x64830
     * @note[short] Android
     */
    static gd::string getTimeString(int p0, bool p1);
public:
    
private:
    [[deprecated("GameToolbox::hsvFromString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn hsvFromString(gd::string const& p0, char const* p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x459ec8
     * @note[short] MacOS (Intel): 0x501e80
     * @note[short] Windows: 0x67b30
     * @note[short] Android
     */
    static gd::string intToShortString(int p0);
    
private:
    [[deprecated("GameToolbox::intToString not implemented")]]
    /**
     * @note[short] Windows: 0x67a70
     * @note[short] Android
     */
    static TodoReturn intToString(int p0);
public:
    
private:
    [[deprecated("GameToolbox::isIOS not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isIOS();
public:
    
private:
    [[deprecated("GameToolbox::isRateEasing not implemented")]]
    /**
     * @note[short] Android
     */
    static bool isRateEasing(int p0);
public:
    
private:
    [[deprecated("GameToolbox::mergeDictsSaveLargestInt not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn mergeDictsSaveLargestInt(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::mergeDictsSkipConflict not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn mergeDictsSkipConflict(cocos2d::CCDictionary* p0, cocos2d::CCDictionary* p1);
public:
    
private:
    [[deprecated("GameToolbox::msToTimeString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn msToTimeString(int p0, int p1);
public:
    
private:
    [[deprecated("GameToolbox::multipliedColorValue not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn multipliedColorValue(cocos2d::ccColor3B p0, cocos2d::ccColor3B p1, float p2);
public:
    
private:
    [[deprecated("GameToolbox::openAppPage not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openAppPage();
public:
    
private:
    [[deprecated("GameToolbox::openRateURL not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn openRateURL(gd::string p0, gd::string p1);
public:
    
private:
    [[deprecated("GameToolbox::particleFromString not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(gd::string const& str, cocos2d::CCParticleSystemQuad* system, bool p2);
public:
    
private:
    [[deprecated("GameToolbox::particleFromStruct not implemented")]]
    /**
     * @note[short] Windows: 0x66a10
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& p0, cocos2d::CCParticleSystemQuad* p1, bool p2);
public:
    
private:
    [[deprecated("GameToolbox::particleStringToStruct not implemented")]]
    /**
     * @note[short] Windows: 0x65f50
     * @note[short] Android
     */
    static void particleStringToStruct(gd::string const& p0, cocos2d::ParticleStruct& p1);
public:
    
private:
    [[deprecated("GameToolbox::pointsToString not implemented")]]
    /**
     * @note[short] Windows: 0x68170
     * @note[short] Android
     */
    static TodoReturn pointsToString(int p0);
public:
    
private:
    [[deprecated("GameToolbox::postClipVisit not implemented")]]
    /**
     * @note[short] iOS: 0x4a3bc
     * @note[short] Android
     */
    static TodoReturn postClipVisit();
public:
    
private:
    [[deprecated("GameToolbox::preVisitWithClippingRect not implemented")]]
    /**
     * @note[short] Windows: 0x62fd0
     * @note[short] iOS: 0x4a2d8
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
public:
    
private:
    [[deprecated("GameToolbox::preVisitWithClipRect not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn preVisitWithClipRect(cocos2d::CCRect p0);
public:
    
private:
    [[deprecated("GameToolbox::saveParticleToString not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveParticleToString(cocos2d::CCParticleSystemQuad* p0);
public:
    
private:
    [[deprecated("GameToolbox::saveStringToFile not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn saveStringToFile(gd::string const& p0, gd::string const& p1);
public:
    
private:
    [[deprecated("GameToolbox::stringFromHSV not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn stringFromHSV(cocos2d::ccHSVValue p0, char const* p1);
public:

    /**
     * @note[short] MacOS (Intel): 0x4fbb70
     * @note[short] Windows: 0x64640
     * @note[short] Android
     */
    static cocos2d::CCDictionary* stringSetupToDict(gd::string const& p0, char const* p1);
    
private:
    [[deprecated("GameToolbox::stringSetupToMap not implemented")]]
    /**
     * @note[short] Windows: 0x642a0
     * @note[short] Android
     */
    static gd::map<gd::string,gd::string> stringSetupToMap(gd::string const& p0, char const* p1, gd::map<gd::string, gd::string>& p2);
public:
    
private:
    [[deprecated("GameToolbox::strongColor not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn strongColor(cocos2d::ccColor3B p0);
public:
    
private:
    [[deprecated("GameToolbox::timestampToHumanReadable not implemented")]]
    /**
     * @note[short] Windows: 0x67cd0
     * @note[short] Android
     */
    static gd::string timestampToHumanReadable(time_t p0, time_t p1);
public:
    
private:
    [[deprecated("GameToolbox::transformColor not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, cocos2d::ccHSVValue p1);
public:
    
private:
    [[deprecated("GameToolbox::transformColor not implemented")]]
    /**
     * @note[short] Android
     */
    static TodoReturn transformColor(cocos2d::ccColor3B const& p0, float p1, float p2, float p3);
public:
};
