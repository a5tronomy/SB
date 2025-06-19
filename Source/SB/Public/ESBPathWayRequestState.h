#pragma once
#include "CoreMinimal.h"
#include "ESBPathWayRequestState.generated.h"

UENUM()
enum ESBPathWayRequestState {
    ESBPathWayState_None,
    ESBPathWayState_Request,
    ESBPathWayState_AISuccess,
};

