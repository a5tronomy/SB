#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBCompare.h"
#include "SBBTDecorator_SbCheckSummonedCount.generated.h"

UCLASS()
class USBBTDecorator_SbCheckSummonedCount : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinionCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
    USBBTDecorator_SbCheckSummonedCount();

};

