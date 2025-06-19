#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIDetectResultType.h"
#include "SBBTDecorator_SbDetectResult.generated.h"

UCLASS()
class USBBTDecorator_SbDetectResult : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIDetectResultType> CompareDetectResult;
    
    UPROPERTY(EditAnywhere)
    bool bEqual;
    
    USBBTDecorator_SbDetectResult();

};

