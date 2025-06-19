#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBTribeRelation.h"
#include "SBBTDecorator_SbCheckTarget.generated.h"

UCLASS()
class USBBTDecorator_SbCheckTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation;
    
    USBBTDecorator_SbCheckTarget();

};

