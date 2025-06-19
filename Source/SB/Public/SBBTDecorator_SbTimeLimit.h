#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbTimeLimit.generated.h"

UCLASS()
class USBBTDecorator_SbTimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TimerName;
    
    UPROPERTY(EditAnywhere)
    float LimitTime;
    
    UPROPERTY(EditAnywhere)
    float ReactInterval;
    
    USBBTDecorator_SbTimeLimit();

};

