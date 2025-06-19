#pragma once
#include "CoreMinimal.h"
#include "ESBClientTargetGameStep.generated.h"

UENUM()
enum ESBClientTargetGameStep {
    ESBClientTargetGameStep_None,
    ESBClientTargetGameStep_EnterLevel,
    ESBClientTargetGameStep_EnterZone,
    ESBClientTargetGameStep_EnterLobby,
};

