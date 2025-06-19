#pragma once
#include "CoreMinimal.h"
#include "ESBSkillTreeUnlockProgressType.h"
#include "ESBUISkillTreeType.h"
#include "ESBUISkillUnlockPresentationType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventSkillTreeUnlock.generated.h"

USTRUCT()
struct FSBUIActionEventSkillTreeUnlock : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUISkillTreeType SkillTreeType;
    
    UPROPERTY()
    ESBSkillTreeUnlockProgressType ProgressType;
    
    UPROPERTY()
    ESBUISkillUnlockPresentationType UnlockPresentationType;
    
    UPROPERTY()
    FName AchievementAlias;
    
    SB_API FSBUIActionEventSkillTreeUnlock();
};

