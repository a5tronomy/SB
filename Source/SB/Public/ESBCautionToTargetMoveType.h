#pragma once
#include "CoreMinimal.h"
#include "ESBCautionToTargetMoveType.generated.h"

UENUM()
namespace ESBCautionToTargetMoveType {
    enum Type {
        All,
        Side,
        ForwardAndSide,
    };
}

