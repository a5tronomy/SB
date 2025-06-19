#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBCompare.h"
#include "SBBTDecorator_SbRandom.generated.h"

UCLASS()
class USBBTDecorator_SbRandom : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RandomRange;
    
    UPROPERTY(EditAnywhere)
    int32 CheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
    USBBTDecorator_SbRandom();

};

