#pragma once
#include "CoreMinimal.h"
#include "ESBSoundVolumeChannel.generated.h"

UENUM()
enum class ESBSoundVolumeChannel : uint8 {
    None,
    Master,
    BGM,
    TurntableMusic,
    PlayerCharacterSE,
    MonsterSE,
    NpcSE,
    WorldSE,
    Ambience,
    General,
    Boss,
    Dialog,
    UI,
    TrainingUI,
    Cinema,
    ActionVoice,
    TurntableMusicDuck,
    Haptic,
    Num,
};

