#pragma once
#include "CoreMinimal.h"
#include "ESBParticleDynamicInstanceParameterType.generated.h"

UENUM()
namespace ESBParticleDynamicInstanceParameterType {
    enum Type {
        Scalar,
        Vector,
        SocketLocation,
    };
}

