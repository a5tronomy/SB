#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbSpiderMoveToRandomLocation.generated.h"

UCLASS(BlueprintType)
class SB_API USBBTTask_SbSpiderMoveToRandomLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSearchDistance;
    
    USBBTTask_SbSpiderMoveToRandomLocation();

};

