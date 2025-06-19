#pragma once
#include "CoreMinimal.h"
#include "ESBActorType.h"
#include "ESBActorWeightType.h"
#include "ESBItemBucketType.h"
#include "SBActorCustomRecord.h"
#include "SBItemInstance.h"
#include "SBActorProperty.generated.h"

USTRUCT()
struct FSBActorProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Stat[131];
    
    UPROPERTY()
    TEnumAsByte<ESBActorWeightType> WeightType;
    
    UPROPERTY()
    float TargetFilterRadius;
    
    UPROPERTY()
    float ProjectileTargetFilterRadius;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    float Exp;
    
    UPROPERTY()
    float MaxEXP;
    
    UPROPERTY()
    FName RewardGroupAlias;
    
    UPROPERTY()
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY()
    float RunSpeed;
    
    UPROPERTY()
    float WalkSpeed;
    
    UPROPERTY()
    float LockOnRunSpeed;
    
    UPROPERTY()
    float LockOnWalkSpeed;
    
    UPROPERTY()
    float JoggingRunSpeed;
    
    UPROPERTY()
    float RotateAnglePerSecond;
    
    UPROPERTY()
    FName Tribe;
    
    UPROPERTY()
    TEnumAsByte<ESBActorType> ActorType;
    
    UPROPERTY()
    TArray<FName> Tags;
    
    UPROPERTY()
    FName Flag;
    
    UPROPERTY()
    TArray<uint32> LevelArray;
    
    UPROPERTY()
    TMap<FName, float> AdditiveSkillDamageRateMap;
    
    UPROPERTY()
    TMap<int32, FSBItemInstance> Equipment;
    
    UPROPERTY(Transient)
    FSBActorCustomRecord CustomRecord;
    
    UPROPERTY()
    uint32 MultiMapLevel;
    
    SB_API FSBActorProperty();
};

