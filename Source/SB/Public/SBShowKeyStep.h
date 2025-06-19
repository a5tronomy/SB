#pragma once
#include "CoreMinimal.h"
#include "SBSkillActiveStepTableProperty.h"
#include "SBShowKeyStep.generated.h"

USTRUCT(BlueprintType)
struct FSBShowKeyStep {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float StepDuration;
    
    UPROPERTY(EditAnywhere)
    FSBSkillActiveStepTableProperty StepProperty;
    
    SB_API FSBShowKeyStep();
};

