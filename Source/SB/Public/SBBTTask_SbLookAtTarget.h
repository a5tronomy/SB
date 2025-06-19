#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbLookAtTarget.generated.h"

UCLASS()
class SB_API USBBTTask_SbLookAtTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float YawRotationTime;
    
    USBBTTask_SbLookAtTarget();

};

