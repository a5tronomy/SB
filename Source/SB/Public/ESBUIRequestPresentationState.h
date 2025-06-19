#pragma once
#include "CoreMinimal.h"
#include "ESBUIRequestPresentationState.generated.h"

UENUM()
enum class ESBUIRequestPresentationState {
    None,
    ReadyTitleRefreshAni,
    PlayingTitleRefreshAni,
    FinishTitleRefreshAni,
};

