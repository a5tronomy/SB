#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbMoveToFlyingPoint.generated.h"

UCLASS()
class SB_API USBBTTask_SbMoveToFlyingPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> FlyingPoints;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    USBBTTask_SbMoveToFlyingPoint();

};

