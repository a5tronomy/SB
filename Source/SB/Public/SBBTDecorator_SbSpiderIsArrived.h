#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbSpiderIsArrived.generated.h"

UCLASS()
class SB_API USBBTDecorator_SbSpiderIsArrived : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    USBBTDecorator_SbSpiderIsArrived();

};

