#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbWaitTimeRandom.generated.h"

UCLASS()
class SB_API USBBTTask_SbWaitTimeRandom : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinTime;
    
    UPROPERTY(EditAnywhere)
    float MaxTime;
    
    UPROPERTY(EditAnywhere)
    bool bReturnSucceeded;
    
    USBBTTask_SbWaitTimeRandom();

};

