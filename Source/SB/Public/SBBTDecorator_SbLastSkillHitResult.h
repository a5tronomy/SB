#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBSkillHitResult.h"
#include "SBBTDecorator_SbLastSkillHitResult.generated.h"

UCLASS()
class USBBTDecorator_SbLastSkillHitResult : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillHitResult> HitResult;
    
    USBBTDecorator_SbLastSkillHitResult();

};

