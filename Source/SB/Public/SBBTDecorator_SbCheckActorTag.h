#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBActorTagCheckType.h"
#include "SBBTDecorator_SbCheckActorTag.generated.h"

UCLASS()
class USBBTDecorator_SbCheckActorTag : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBActorTagCheckType CheckType;
    
    UPROPERTY(EditAnywhere)
    FName ActorTag;
    
    USBBTDecorator_SbCheckActorTag();

};

