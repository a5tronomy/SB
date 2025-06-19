#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SBResetTimeLimit.generated.h"

UCLASS()
class SB_API USBBTTask_SBResetTimeLimit : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TimerName;
    
    UPROPERTY(EditAnywhere)
    float SetReactInterval;
    
    USBBTTask_SBResetTimeLimit();

};

