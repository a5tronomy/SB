#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterInteractionMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterInteractionMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float StartTime;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    FVector Velocity;
    
    UPROPERTY(Transient)
    FVector StartLoc;
    
    UPROPERTY(Transient)
    FVector TargetLoc;
    
    UPROPERTY(Transient)
    FVector Forward;
    
    SB_API FSBCharacterInteractionMoveInfo();
};

