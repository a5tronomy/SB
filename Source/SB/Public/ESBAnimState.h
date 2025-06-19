#pragma once
#include "CoreMinimal.h"
#include "ESBAnimState.generated.h"

UENUM()
namespace ESBAnimState {
    enum Type {
        Walk,
        Swimming,
        UnderWaterSwimming,
        Sliding,
        SlopeMoving,
        EventMove_SideToSide,
        EventMove_Rod,
        EventMove_SideRod,
    };
}

