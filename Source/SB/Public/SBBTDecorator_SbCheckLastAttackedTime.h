#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "SBBTDecorator_SbCheckLastAttackedTime.generated.h"

UCLASS()
class USBBTDecorator_SbCheckLastAttackedTime : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    float CheckTime;
    
    UPROPERTY(EditAnywhere)
    bool bLess;
    
    USBBTDecorator_SbCheckLastAttackedTime();

};

