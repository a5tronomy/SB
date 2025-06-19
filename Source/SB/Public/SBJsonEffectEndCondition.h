#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBCompare.h"
#include "ESBConditionCheckType.h"
#include "SBJsonEffectEndCondition.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonEffectEndCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bActive;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckDelayTime;
    
    UPROPERTY(EditAnywhere, Transient)
    FString DeactiveShowPath;
    
    UPROPERTY(EditAnywhere, Transient)
    FName ChainEffectAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsGround;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsJump;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsSwimming;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsSprint;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsWallHit;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsEventMoving;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsRunPathWay;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsAttachedLevelSeq;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBConditionCheckType> IsSlopeMoving;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBActorStatType> CheckActorStat;
    
    UPROPERTY(EditAnywhere, Transient)
    bool CheckActorStatMaxRatePercent;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBCompare::Type> CheckActorStatCompare;
    
    UPROPERTY(EditAnywhere, Transient)
    float CheckActorStatValue;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckConstructorTargetFilter;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckEncroachmentTargetDead;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> ItemCompare;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(EditAnywhere, Transient)
    bool ExecChainEffect;
    
    SB_API FSBJsonEffectEndCondition();
};

