#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "ESBActorStatType.h"
#include "ESBCompare.h"
#include "SBBTDecorator_SbCheckActorStat.generated.h"

UCLASS()
class USBBTDecorator_SbCheckActorStat : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> CheckStat;
    
    UPROPERTY(EditAnywhere)
    float CheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
    UPROPERTY(EditAnywhere)
    bool bRateValue;
    
    USBBTDecorator_SbCheckActorStat();

};

