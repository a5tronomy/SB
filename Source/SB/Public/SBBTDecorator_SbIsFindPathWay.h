#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbIsFindPathWay.generated.h"

UCLASS()
class USBBTDecorator_SbIsFindPathWay : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PathWayAlias;
    
    UPROPERTY(EditAnywhere)
    bool bUseSpawnPath;
    
    USBBTDecorator_SbIsFindPathWay();

};

