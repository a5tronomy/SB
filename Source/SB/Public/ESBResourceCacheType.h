#pragma once
#include "CoreMinimal.h"
#include "ESBResourceCacheType.generated.h"

UENUM()
enum class ESBResourceCacheType {
    ESBResourceCacheType_Uninitialized,
    ESBResourceCacheType_General,
    ESBResourceCacheType_Animation,
    ESBResourceCacheType_BehaviorTree,
    ESBResourceCacheType_Blueprint,
    ESBResourceCacheType_Blueprint_Character,
    ESBResourceCacheType_Blueprint_Projectile,
    ESBResourceCacheType_Blueprint_Item,
    ESBResourceCacheType_Curve,
    ESBResourceCacheType_InteractionGraph,
    ESBResourceCacheType_LevelSequence,
    ESBResourceCacheType_Material,
    ESBResourceCacheType_NiagaraSystem,
    ESBResourceCacheType_ParticleSystem = ESBResourceCacheType_NiagaraSystem,
    ESBResourceCacheType_PhysParticleSet,
    ESBResourceCacheType_Projectile,
    ESBResourceCacheType_RewardGroupSpawnFormation,
    ESBResourceCacheType_Show,
    ESBResourceCacheType_Skelmesh,
    ESBResourceCacheType_PhysicsAsset,
    ESBResourceCacheType_Texture,
    ESBResourceCacheType_Theater,
    ESBResourceCacheType_TheaterTemplate,
    ESBResourceCacheType_VibrationSet,
    ESBResourceCacheType_SoundMix,
    ESBResourceCacheType_CharacterSoundSet,
    ESBResourceCacheType_RootMotionData,
};

