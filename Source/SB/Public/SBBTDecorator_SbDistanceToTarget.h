#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBCompare.h"
#include "SBBTDecorator_SbDistanceToTarget.generated.h"

UCLASS()
class USBBTDecorator_SbDistanceToTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
    UPROPERTY(EditAnywhere)
    bool bSubTarget;
    
    USBBTDecorator_SbDistanceToTarget();

};

