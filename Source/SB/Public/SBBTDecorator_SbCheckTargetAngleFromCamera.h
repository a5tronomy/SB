#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbCheckTargetAngleFromCamera.generated.h"

UCLASS()
class USBBTDecorator_SbCheckTargetAngleFromCamera : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float angle;
    
    USBBTDecorator_SbCheckTargetAngleFromCamera();

};

