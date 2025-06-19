#pragma once
#include "CoreMinimal.h"
#include "SBShowAnimKeyStep.generated.h"

USTRUCT(BlueprintType)
struct FSBShowAnimKeyStep {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHoldEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bStopAtMove;
    
    UPROPERTY(EditAnywhere)
    bool bStopAtLand;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    bool bFixedBodyLookAtLocation;
    
    UPROPERTY(EditAnywhere)
    FName LookAtTargetSocket;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetZOffset;
    
    SB_API FSBShowAnimKeyStep();
};

