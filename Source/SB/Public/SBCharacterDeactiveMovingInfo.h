#pragma once
#include "CoreMinimal.h"
#include "SBCharacterDeactiveMovingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterDeactiveMovingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool BlockWallAction;
    
    UPROPERTY(Transient)
    bool CliffAction;
    
    UPROPERTY(Transient)
    bool SlideSlip;
    
    SB_API FSBCharacterDeactiveMovingInfo();
};

