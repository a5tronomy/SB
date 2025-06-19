#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SBAnimInstance.generated.h"

class USBSkeletalMeshComponent;

UCLASS(NonTransient)
class SB_API USBAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USBAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void Event_EventMove(USBSkeletalMeshComponent* PinActor, bool bInEnable);
    
};

