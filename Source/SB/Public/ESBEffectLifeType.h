#pragma once
#include "CoreMinimal.h"
#include "ESBEffectLifeType.generated.h"

UENUM()
enum ESBEffectLifeType {
    EffectLifeType_SkillDependent,
    EffectLifeType_StepDependent,
    EffectLifeType_IndependentTime,
    EffectLifeType_Infinite,
    EffectLifeType_StanceDependent,
    EffectLifeType_CharacterGetupTime,
    EffectLifeType_ProjectileDependent,
    EffectLifeType_BeforeNextSkill,
    EffectLifeType_CharacterGroggyEndTime,
    EffectLifeType_NextSkillDependent,
    EffectLifeType_LevelSequenceDependent,
    EffectLifeType_EquipmentDependent,
    EffectLifeType_LevelSequenceDependentWithoutPlayable,
};

