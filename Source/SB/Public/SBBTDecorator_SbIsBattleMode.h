#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "SBBTDecorator_SbIsBattleMode.generated.h"

UCLASS()
class USBBTDecorator_SbIsBattleMode : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    USBBTDecorator_SbIsBattleMode();

};

