#pragma once
#include "CoreMinimal.h"
#include "ESBBTDecoratorAliveCheckType.generated.h"

UENUM()
namespace ESBBTDecoratorAliveCheckType {
    enum Type {
        Alive,
        Dead,
        Coma,
    };
}

