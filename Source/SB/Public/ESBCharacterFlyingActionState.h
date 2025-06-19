#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterFlyingActionState.generated.h"

UENUM()
enum ESBCharacterFlyingActionState {
    FlyingAction_None,
    FlyingAction_Prepare,
    FlyingAction_Play,
};

