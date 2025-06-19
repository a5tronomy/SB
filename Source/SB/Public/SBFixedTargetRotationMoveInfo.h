#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBFixedRotationAxisType.h"
#include "SBFixedTargetRotationMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBFixedTargetRotationMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bActive;
    
    UPROPERTY(Transient)
    bool bDoneRotation;
    
    UPROPERTY(Transient)
    float StartDelayTime;
    
    UPROPERTY(Transient)
    float CurrentDuration;
    
    UPROPERTY(Transient)
    float CurrentAnimDuration;
    
    UPROPERTY(Transient)
    float DelayTime;
    
    UPROPERTY(Transient)
    float RotatinoRate;
    
    UPROPERTY(Transient)
    float RotationRateScale;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBFixedRotationAxisType> AxisType;
    
    UPROPERTY(Transient)
    int32 ActiveSlotIndex;
    
    UPROPERTY(Transient)
    FVector PreCharacterForwardVector;
    
    UPROPERTY(Transient)
    FVector DesiredDirection;
    
    UPROPERTY(Transient)
    bool bBlockRequestPathMove;
    
    UPROPERTY(Transient)
    float AnimBlendInTime;
    
    UPROPERTY(Transient)
    float AnimBlendOutTime;
    
    SB_API FSBFixedTargetRotationMoveInfo();
};

