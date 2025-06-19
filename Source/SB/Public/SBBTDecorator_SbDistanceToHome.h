#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBCompare.h"
#include "SBBTDecorator_SbDistanceToHome.generated.h"

UCLASS()
class USBBTDecorator_SbDistanceToHome : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
    USBBTDecorator_SbDistanceToHome();

};

