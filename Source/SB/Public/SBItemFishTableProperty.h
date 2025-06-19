#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBFishRarityType.h"
#include "SBTablePropertyBase.h"
#include "SBItemFishTableProperty.generated.h"

USTRUCT()
struct FSBItemFishTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBFishRarityType> FishRarity;
    
    UPROPERTY(EditAnywhere)
    bool bNikke;
    
    UPROPERTY(EditAnywhere)
    uint32 Stamina;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> RunAwayStaminaRate;
    
    UPROPERTY(EditAnywhere)
    uint32 RunAwayDistance;
    
    UPROPERTY(EditAnywhere)
    uint32 PullSpeed;
    
    UPROPERTY(EditAnywhere)
    float PullHitAreaSize;
    
    UPROPERTY(EditAnywhere)
    uint32 FightingTime;
    
    UPROPERTY(EditAnywhere)
    float LiftUpBobberScale;
    
    UPROPERTY(EditAnywhere)
    FVector LiftUpCamStartLocation;
    
    UPROPERTY(EditAnywhere)
    FVector LiftUpCamFinalLocation;
    
    UPROPERTY(EditAnywhere)
    FVector FishFinalLocation;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName ConditionRewardGroup;
    
    UPROPERTY(EditAnywhere)
    FName RewardGroup;
    
    UPROPERTY(EditAnywhere)
    FName RewardItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 RewardItemCount;
    
    UPROPERTY(EditAnywhere)
    FName MovePatternCurveDataPath1;
    
    UPROPERTY(EditAnywhere)
    uint32 MovePatternWeight1;
    
    UPROPERTY(EditAnywhere)
    FName MovePatternCurveDataPath2;
    
    UPROPERTY(EditAnywhere)
    uint32 MovePatternWeight2;
    
    UPROPERTY(EditAnywhere)
    FName MovePatternCurveDataPath3;
    
    UPROPERTY(EditAnywhere)
    uint32 MovePatternWeight3;
    
    UPROPERTY(EditAnywhere)
    FName MovePatternCurveDataPath4;
    
    UPROPERTY(EditAnywhere)
    uint32 MovePatternWeight4;
    
    UPROPERTY(EditAnywhere)
    FName MovePatternCurveDataPath5;
    
    UPROPERTY(EditAnywhere)
    uint32 MovePatternWeight5;
    
    UPROPERTY(EditAnywhere)
    float TimingPullArrowSpeed;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullGaugeReductionPerHit;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaStart1;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaSize1;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaStart2;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaSize2;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaStart3;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaSize3;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaStart4;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaSize4;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaStart5;
    
    UPROPERTY(EditAnywhere)
    uint32 TimingPullHitAreaSize5;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemFishTableProperty();
};

