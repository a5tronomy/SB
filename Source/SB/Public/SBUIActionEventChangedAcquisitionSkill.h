#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventChangedAcquisitionSkill.generated.h"

USTRUCT()
struct FSBUIActionEventChangedAcquisitionSkill : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    SB_API FSBUIActionEventChangedAcquisitionSkill();
};

