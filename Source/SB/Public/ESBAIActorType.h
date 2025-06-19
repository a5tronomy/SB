#pragma once
#include "CoreMinimal.h"
#include "ESBAIActorType.generated.h"

UENUM()
namespace ESBAIActorType {
    enum Type {
        Self,
        Target,
        Owner,
        SubTarget,
    };
}

