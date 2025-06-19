#pragma once
#include "CoreMinimal.h"
#include "ESBUIDeadHUDState.generated.h"

UENUM()
enum class ESBUIDeadHUDState {
    Hidden,
    Dead,
    DeadRespawn,
    Coma,
    ComaRevival,
    ComaRespawn,
    ExistBossChallenge,
};

