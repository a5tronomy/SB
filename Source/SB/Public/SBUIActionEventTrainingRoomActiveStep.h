#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTrainingRoomActiveStep.generated.h"

USTRUCT()
struct FSBUIActionEventTrainingRoomActiveStep : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StepAlias;
    
    SB_API FSBUIActionEventTrainingRoomActiveStep();
};

