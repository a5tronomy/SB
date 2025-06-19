#pragma once
#include "CoreMinimal.h"
#include "ESBShowAnimSequencePlayType.generated.h"

UENUM()
namespace ESBShowAnimSequencePlayType {
    enum Type {
        Default,
        UseDirectionalBlend,
        UseMoveWeight,
        UseAreaDirectionCheck,
        DirectionalAnimation,
        CheckFootLeftRight,
        XZ_DirectionalBlend,
    };
}

