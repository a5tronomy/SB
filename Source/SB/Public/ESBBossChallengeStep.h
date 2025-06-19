#pragma once
#include "CoreMinimal.h"
#include "ESBBossChallengeStep.generated.h"

UENUM()
enum ESBBossChallengeStep {
    ESBBossChallengeStep_None,
    ESBBossChallengeStep_RequestEnter,
    ESBBossChallengeStep_EnterComplete,
    ESBBossChallengeStep_FinishStep,
    ESBBossChallengeStep_CompleteFinishStep,
};

