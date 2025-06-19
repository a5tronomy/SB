#pragma once
#include "CoreMinimal.h"
#include "ESBTargetGameWorldState.generated.h"

UENUM()
enum ESBTargetGameWorldState {
    ESBTargetGameWorldState_None,
    ESBTargetGameWorldState_CreateZone,
    ESBTargetGameWorldState_DestoryZone,
    ESBTargetGameWorldState_InteractZone,
};

