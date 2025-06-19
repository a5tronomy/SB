#pragma once
#include "CoreMinimal.h"
#include "ESBCompare.generated.h"

UENUM()
namespace ESBCompare {
    enum Type {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };
}

