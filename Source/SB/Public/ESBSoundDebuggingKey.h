#pragma once
#include "CoreMinimal.h"
#include "ESBSoundDebuggingKey.generated.h"

UENUM()
enum class ESBSoundDebuggingKey : uint8 {
    None,
    SoundEvent,
    SoundEvent_Zone,
    SoundEvent_ZoneTrigger,
    SoundEvent_LevelSequence,
    SoundEvent_Quest,
    SoundEvent_Dialogue,
    SoundEvent_Camp,
    SoundEvent_ActorStance,
    SoundEvent_ZoneEvent,
    SoundEvent_Achievement,
    SoundEvent_GameProgress,
    SoundEvent_AreaControlVolume,
    SoundEvent_Show,
    SoundEvent_Equipment,
    MainBGMTrack,
    AmbientBGMTrack,
    BGMState,
    BGMEventBattle,
    BGMStateRule,
    FootStep,
    IsHeadphonePluggedIn,
    AspectRatio,
    ETC,
};

