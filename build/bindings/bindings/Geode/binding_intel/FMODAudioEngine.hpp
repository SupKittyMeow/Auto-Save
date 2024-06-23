#pragma once
#include <stdexcept>
#include <Geode/platform/platform.hpp>
#include <Geode/c++stl/gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>
#include <Geode/utils/SeedValue.hpp>

#include <fmod.hpp>
#include "FMODAudioState.hpp"
#include "FMODMusic.hpp"

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x360e54
     * @note[short] MacOS (Intel): 0x3e0a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e590
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();
    
private:
    [[deprecated("FMODAudioEngine::activateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn activateQueuedMusic(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3638d8
     * @note[short] MacOS (Intel): 0x3e4320
     * @note[short] Windows: 0x575d0
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int p0);
    
private:
    [[deprecated("FMODAudioEngine::channelForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelIDForUniqueID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelIDForUniqueID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelLinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelLinkSound(int p0, FMODSound* p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelStopped not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelStopped(FMOD::Channel* p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::channelUnlinkSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn channelUnlinkSound(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x3620ac
     * @note[short] MacOS (Intel): 0x3e1f70
     * @note[short] Windows: 0x54460
     * @note[short] Android
     */
    void clearAllAudio();
    
private:
    [[deprecated("FMODAudioEngine::countActiveEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::countActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn countActiveMusic();
public:
    
private:
    [[deprecated("FMODAudioEngine::createStream not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn createStream(gd::string p0);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void enableMetering();
    
private:
    [[deprecated("FMODAudioEngine::fadeInBackgroundMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn fadeInBackgroundMusic(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::fadeInMusic not implemented")]]
    /**
     * @note[short] Windows: 0x5b170
     * @note[short] Android
     */
    void fadeInMusic(float p0, int p1);
public:

    /**
     * @note[short] MacOS (ARM): 0x36bec0
     * @note[short] MacOS (Intel): 0x3ef250
     * @note[short] Windows: 0x5b2b0
     * @note[short] Android
     */
    float fadeOutMusic(float p0, int p1);
    
private:
    [[deprecated("FMODAudioEngine::getActiveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getActiveMusic(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x364ca8
     * @note[short] MacOS (Intel): 0x3e5fd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicChannel);
    
private:
    [[deprecated("FMODAudioEngine::getBackgroundMusicVolume not implemented")]]
    /**
     * @note[short] MacOS (ARM): 0x36927c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14341c
     * @note[short] Android
     */
    float getBackgroundMusicVolume();
public:
    
private:
    [[deprecated("FMODAudioEngine::getChannelGroup not implemented")]]
    /**
     * @note[short] Windows: 0x55c70
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int p0, bool p1);
public:

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x3eba70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14343c
     * @note[short] Android: Out of line
     */
    float getEffectsVolume();
    
private:
    [[deprecated("FMODAudioEngine::getFMODStatus not implemented")]]
    /**
     * @note[short] iOS: 0x1450f8
     * @note[short] Android
     */
    TodoReturn getFMODStatus(int p0);
public:

    /**
     * @note[short] MacOS (Intel): 0x3e7ec0
     * @note[short] Android
     */
    float getMeteringValue();
    
private:
    [[deprecated("FMODAudioEngine::getMusicChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicChannelID(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicLengthMS not implemented")]]
    /**
     * @note[short] Windows: 0x5b0e0
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicTime not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getMusicTime(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::getMusicTimeMS not implemented")]]
    /**
     * @note[short] Windows: 0x5b080
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);
public:
    
private:
    [[deprecated("FMODAudioEngine::getNextChannelID not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getNextChannelID();
public:
    
private:
    [[deprecated("FMODAudioEngine::getTweenContainer not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn getTweenContainer(AudioTargetType p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isChannelStopping not implemented")]]
    /**
     * @note[short] Android
     */
    bool isChannelStopping(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::isEffectLoaded not implemented")]]
    /**
     * @note[short] Android
     */
    bool isEffectLoaded(gd::string path);
public:

    /**
     * @note[short] MacOS (Intel): 0x3ebaa0
     * @note[short] Windows: 0x58f20
     * @note[short] Android
     */
    bool isMusicPlaying(gd::string path, int p1);
    
private:
    [[deprecated("FMODAudioEngine::isMusicPlaying not implemented")]]
    /**
     * @note[short] Windows: 0x58e50
     * @note[short] Android
     */
    bool isMusicPlaying(int channel);
public:
    
private:
    [[deprecated("FMODAudioEngine::isSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* sound);
public:
    
private:
    [[deprecated("FMODAudioEngine::lengthForSound not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn lengthForSound(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAndPlayMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAndPlayMusic(gd::string path, unsigned int p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadAudioState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn loadAudioState(FMODAudioState& p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadMusic not implemented")]]
    /**
     * @note[short] Windows: 0x592b0
     * @note[short] Android
     */
    void loadMusic(gd::string path, float speed, float p2, float volume, bool shouldLoop, int p5, int p6);
public:
    
private:
    [[deprecated("FMODAudioEngine::loadMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void loadMusic(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseAllAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseAllEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseAllMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void pauseAllMusic();
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pauseEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::pauseMusic not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);
public:
    
private:
    [[deprecated("FMODAudioEngine::pitchForIdx not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn pitchForIdx(int p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x366d7c
     * @note[short] MacOS (Intel): 0x3e8a40
     * @note[short] Windows: 0x55f60
     * @note[short] iOS: 0x141c24
     * @note[short] Android
     */
    void playEffect(gd::string path, float speed, float p2, float volume);

    /**
     * @note[short] MacOS (ARM): 0x366c7c
     * @note[short] MacOS (Intel): 0x3e8960
     * @note[short] Windows: 0x55ee0
     * @note[short] Android
     */
    void playEffect(gd::string path);

    /**
     * @note[short] MacOS (ARM): 0x364de4
     * @note[short] MacOS (Intel): 0x3e6190
     * @note[short] Windows: 0x56050
     * @note[short] Android
     */
    void playEffectAdvanced(gd::string path, float speed, float p2, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int p12, bool override, bool p14, int p15, int uniqueID, float minInterval, int sfxGroup);
    
private:
    [[deprecated("FMODAudioEngine::playEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn playEffectAsync(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::playMusic not implemented")]]
    /**
     * @note[short] Windows: 0x59140
     * @note[short] Android
     */
    void playMusic(gd::string path, bool shouldLoop, float fadeInTime, int channel);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadEffect not implemented")]]
    /**
     * @note[short] Windows: 0x583b0
     * @note[short] Android
     */
    void preloadEffect(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadEffectAsync not implemented")]]
    /**
     * @note[short] Android
     */
    void preloadEffectAsync(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::preloadMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn preloadMusic(gd::string path, bool p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::printResult not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn printResult(FMOD_RESULT p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::queuedEffectFinishedLoading not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queuedEffectFinishedLoading(gd::string p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::queuePlayEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn queuePlayEffect(gd::string p0, float p1, float p2, float p3, float p4, bool p5, bool p6, int p7, int p8, int p9, int p10, bool p11, int p12, bool p13, int p14, float p15, int p16);
public:
    
private:
    [[deprecated("FMODAudioEngine::queueStartMusic not implemented")]]
    /**
     * @note[short] Windows: 0x59a40
     * @note[short] Android
     */
    void queueStartMusic(gd::string audioFilename, float p1, float p2, float p3, bool p4, int ms, int p6, int p7, int p8, int p9, bool p10, int p11, bool p12);
public:
    
private:
    [[deprecated("FMODAudioEngine::registerChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn registerChannel(FMOD::Channel* p0, int p1, int p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::releaseRemovedSounds not implemented")]]
    /**
     * @note[short] Android
     */
    void releaseRemovedSounds();
public:

    /**
     * @note[short] MacOS (Intel): 0x3e1f20
     * @note[short] Android
     */
    TodoReturn resumeAllAudio();
    
private:
    [[deprecated("FMODAudioEngine::resumeAllEffects not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAllEffects();
public:

    /**
     * @note[short] MacOS (Intel): 0x3ebb30
     * @note[short] Windows: 0x58ec0
     * @note[short] Android
     */
    TodoReturn resumeAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::resumeAudio not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeAudio();
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn resumeEffect(unsigned int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::resumeMusic not implemented")]]
    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);
public:
    
private:
    [[deprecated("FMODAudioEngine::reverbToString not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn reverbToString(FMODReverbPreset p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::saveAudioState not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn saveAudioState(FMODAudioState& p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::setBackgroundMusicVolume not implemented")]]
    /**
     * @note[short] iOS: 0x143424
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::setChannelPitch not implemented")]]
    /**
     * @note[short] Android
     */
    void setChannelPitch(int p0, AudioTargetType p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::setChannelVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setChannelVolume(int p0, AudioTargetType p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::setChannelVolumeMod not implemented")]]
    /**
     * @note[short] Windows: 0x580d0
     * @note[short] Android
     */
    void setChannelVolumeMod(int p0, AudioTargetType p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::setEffectsVolume not implemented")]]
    /**
     * @note[short] Android
     */
    void setEffectsVolume(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::setMusicTimeMS not implemented")]]
    /**
     * @note[short] Windows: 0x5af40
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int ms, bool p1, int channel);
public:

    /**
     * @note[short] MacOS (ARM): 0x36103c
     * @note[short] MacOS (Intel): 0x3e0e30
     * @note[short] Windows: 0x52d40
     * @note[short] iOS: 0x13e5f0
     * @note[short] Android
     */
    void setup();
    
private:
    [[deprecated("FMODAudioEngine::setupAudioEngine not implemented")]]
    /**
     * @note[short] Windows: 0x53220
     * @note[short] Android
     */
    TodoReturn setupAudioEngine();
public:
    
private:
    [[deprecated("FMODAudioEngine::start not implemented")]]
    /**
     * @note[short] Windows: 0x54400
     * @note[short] Android
     */
    void start();
public:
    
private:
    [[deprecated("FMODAudioEngine::startMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn startMusic(int p0, int p1, int p2, int p3, bool p4, int p5);
public:
    
private:
    [[deprecated("FMODAudioEngine::stop not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stop();
public:

    /**
     * @note[short] MacOS (ARM): 0x362154
     * @note[short] MacOS (Intel): 0x3e2040
     * @note[short] Windows: 0x58a00
     * @note[short] iOS: 0x13f128
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x362440
     * @note[short] MacOS (Intel): 0x3e2820
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13f1d4
     * @note[short] Android
     */
    void stopAllMusic();
    
private:
    [[deprecated("FMODAudioEngine::stopAndGetFade not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndGetFade(FMOD::Channel* p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopAndRemoveMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopAndRemoveMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(FMOD::Channel* p0, bool p1, float p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0, AudioTargetType p1, bool p2, float p3);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTween not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTween(int p0, AudioTargetType p1, AudioModType p2);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopChannelTweens(int p0, AudioTargetType p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusic(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::stopMusicNotInSet not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn stopMusicNotInSet(std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >& p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::storeEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn storeEffect(FMOD::Sound* sound, gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::swapMusicIndex not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn swapMusicIndex(int p0, int p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::testFunction not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn testFunction(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::triggerQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn triggerQueuedMusic(FMODQueuedMusic p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::unloadAllEffects not implemented")]]
    /**
     * @note[short] Windows: 0x58bf0
     * @note[short] Android
     */
    TodoReturn unloadAllEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::unloadEffect not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unloadEffect(gd::string path);
public:
    
private:
    [[deprecated("FMODAudioEngine::unregisterChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn unregisterChannel(int p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateBackgroundFade not implemented")]]
    /**
     * @note[short] Android
     */
    void updateBackgroundFade();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateChannel not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChannel(int p0, AudioTargetType p1, AudioModType p2, float p3, float p4);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateChannelTweens not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn updateChannelTweens(float p0);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateMetering not implemented")]]
    /**
     * @note[short] Android
     */
    void updateMetering();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateQueuedEffects not implemented")]]
    /**
     * @note[short] Windows: 0x59cd0
     * @note[short] Android
     */
    void updateQueuedEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateQueuedMusic not implemented")]]
    /**
     * @note[short] Android
     */
    void updateQueuedMusic();
public:
    
private:
    [[deprecated("FMODAudioEngine::updateReverb not implemented")]]
    /**
     * @note[short] Windows: 0x53580
     * @note[short] Android
     */
    TodoReturn updateReverb(FMODReverbPreset p0, bool p1);
public:
    
private:
    [[deprecated("FMODAudioEngine::updateTemporaryEffects not implemented")]]
    /**
     * @note[short] Windows: 0x5a220
     * @note[short] Android
     */
    void updateTemporaryEffects();
public:
    
private:
    [[deprecated("FMODAudioEngine::waitUntilSoundReady not implemented")]]
    /**
     * @note[short] Android
     */
    TodoReturn waitUntilSoundReady(FMOD::Sound* p0);
public:

    /**
     * @note[short] MacOS (ARM): 0x362540
     * @note[short] MacOS (Intel): 0x3e2ac0
     * @note[short] Windows: 0x54510
     * @note[short] Android
     */
    virtual void update(float p0);
    gd::unordered_map<int, FMODMusic> m_musicChannels;
    gd::unordered_map<void*, void*> m_unkMap180;
    gd::unordered_map<void*, void*> m_unkMap1c0;
    float m_musicVolume;
    float m_sfxVolume;
    GEODE_PAD(8);
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::Channel* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::Sound* m_sound;
    FMOD::Channel* m_currentSoundChannel;
    FMOD::Channel* m_globalChannel;
    FMOD::DSP* m_DSP;
    FMOD_RESULT m_lastResult;
    int m_version;
    void* m_extraDriverData;
    int m_musicOffset;
    FMODAudioState m_audioState;
private:
    gd::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
public:
};
