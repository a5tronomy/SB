#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbUseableTimeReset.generated.h"

UCLASS()
class SB_API USBBTTask_SbUseableTimeReset : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName KeyName;
    
    UPROPERTY(EditAnywhere)
    float SetInitialTimeValue;
    
    UPROPERTY(EditAnywhere)
    float SetCycleTimeValue;
    
    USBBTTask_SbUseableTimeReset();

};

