#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBJsonEffectAction_TPSMiniGame.generated.h"

USTRUCT()
struct FSBJsonEffectAction_TPSMiniGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FVector TargetLocation;
    
    SB_API FSBJsonEffectAction_TPSMiniGame();
};

