#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIAggroLevel.h"
#include "SBBTDecorator_SbAggroLevel.generated.h"

UCLASS()
class USBBTDecorator_SbAggroLevel : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBAIAggroLevel>> CompareAggroLevelArray;
    
    UPROPERTY(EditAnywhere)
    bool bEqual;
    
    USBBTDecorator_SbAggroLevel();

};

