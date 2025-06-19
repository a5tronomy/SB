#pragma once
#include "CoreMinimal.h"
#include "ESBShowAnimCheckActiveType.generated.h"

UENUM()
namespace ESBShowAnimCheckActiveType {
    enum Type {
        NoneCheck,
        SelfForwardVectorAndSelfToTargetAngle,
    };
}

