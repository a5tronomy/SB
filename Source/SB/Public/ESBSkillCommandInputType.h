#pragma once
#include "CoreMinimal.h"
#include "ESBSkillCommandInputType.generated.h"

UENUM()
enum ESBSkillCommandInputType {
    SkillCommandInputType_Press,
    SkillCommandInputType_Release,
    SkillCommandInputType_Hold,
    SkillCommandInputType_HoldKeep,
    SkillCommandInputType_HoldAndRelease,
};

