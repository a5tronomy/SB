#pragma once
#include "CoreMinimal.h"
#include "ESBSkillStep.generated.h"

UENUM()
enum ESBSkillStep {
    SkillStep_None,
    SkillStep_Cast,
    SkillStep_PreExec,
    SkillStep_Exec,
    SkillStep_Finish,
    SkillStep_Complete,
};

