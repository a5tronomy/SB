#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "ESBActorState.h"
#include "SBBTDecorator_SbCheckActorState.generated.h"

UCLASS()
class USBBTDecorator_SbCheckActorState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> CheckState;
    
    USBBTDecorator_SbCheckActorState();

};

