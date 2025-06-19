#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "SBBTDecorator_SbCheckZoneEnvState.generated.h"

UCLASS()
class USBBTDecorator_SbCheckZoneEnvState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    FName StateTagName;
    
    USBBTDecorator_SbCheckZoneEnvState();

};

