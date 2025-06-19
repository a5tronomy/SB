#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "ESBAnimState.h"
#include "SBBTDecorator_SbCheckAnimState.generated.h"

UCLASS()
class USBBTDecorator_SbCheckAnimState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAnimState::Type> AnimState;
    
    USBBTDecorator_SbCheckAnimState();

};

