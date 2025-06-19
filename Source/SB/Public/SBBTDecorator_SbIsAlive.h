#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "ESBBTDecoratorAliveCheckType.h"
#include "SBBTDecorator_SbIsAlive.generated.h"

UCLASS()
class USBBTDecorator_SbIsAlive : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBTDecoratorAliveCheckType::Type> CheckType;
    
    USBBTDecorator_SbIsAlive();

};

