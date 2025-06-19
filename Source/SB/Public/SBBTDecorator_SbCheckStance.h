#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "ESBCheckStanceCompareType.h"
#include "SBBTDecorator_SbCheckStance.generated.h"

UCLASS()
class USBBTDecorator_SbCheckStance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    FName StanceName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StanceNameArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCheckStanceCompareType> CompareType;
    
    USBBTDecorator_SbCheckStance();

};

