#pragma once
#include "CoreMinimal.h"
#include "ESBSkillActiveStepType.generated.h"

UENUM()
enum ESBSkillActiveStepType {
    SkillActiveStepType_None,
    SkillActiveStepType_Hit,
    SkillActiveStepType_Parry,
    SkillActiveStepType_SuperParry,
    SkillActiveStepType_Hold,
    SkillActiveStepType_Guard,
    SkillActiveStepType_Item,
};

