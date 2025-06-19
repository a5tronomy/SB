#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventAcquireSkill.generated.h"

USTRUCT()
struct FSBUIActionEventAcquireSkill : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 AcquisitionSkillId;
    
    SB_API FSBUIActionEventAcquireSkill();
};

