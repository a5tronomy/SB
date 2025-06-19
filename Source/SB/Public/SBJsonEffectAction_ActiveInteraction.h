#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_ActiveInteraction.generated.h"

USTRUCT()
struct FSBJsonEffectAction_ActiveInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float InteractionRange;
    
    UPROPERTY(EditAnywhere, Transient)
    float InteractionAngle;
    
    UPROPERTY(EditAnywhere, Transient)
    FString Interaction;
    
    SB_API FSBJsonEffectAction_ActiveInteraction();
};

