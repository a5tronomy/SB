#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SBBTDecorator_SbIsTPS.generated.h"

UCLASS()
class USBBTDecorator_SbIsTPS : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTPS;
    
    USBBTDecorator_SbIsTPS();

};

