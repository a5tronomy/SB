#pragma once
#include "CoreMinimal.h"
#include "ESBSkillEnergyType.generated.h"

UENUM()
enum ESBSkillEnergyType {
    SkillEnergyType_None,
    SkillEnergyType_Mp,
    SkillEnergyType_Hp,
    SkillEnergyType_BetaGauge,
    SkillEnergyType_Stamina,
    SkillEnergyType_BurstGauge,
};

