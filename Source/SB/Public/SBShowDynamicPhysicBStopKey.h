#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowDynamicPhysicBStopKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowDynamicPhysicBStopKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    float PhysicBlendOutTime;
    
    USBShowDynamicPhysicBStopKey();

};

