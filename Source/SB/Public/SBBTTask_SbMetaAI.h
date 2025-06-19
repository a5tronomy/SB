#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbMetaAI.generated.h"

UCLASS()
class SB_API USBBTTask_SbMetaAI : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBackgroundTask;
    
    USBBTTask_SbMetaAI();

};

