#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbWait.generated.h"

UCLASS()
class SB_API USBBTTask_SbWait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bReturnSucceeded;
    
    USBBTTask_SbWait();

};

