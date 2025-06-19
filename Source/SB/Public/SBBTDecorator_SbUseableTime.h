#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbUseableTime.generated.h"

UCLASS()
class USBBTDecorator_SbUseableTime : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName KeyName;
    
    USBBTDecorator_SbUseableTime();

};

