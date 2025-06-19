#pragma once
#include "CoreMinimal.h"
#include "ESBBlackboardVarType.generated.h"

UENUM()
namespace ESBBlackboardVarType {
    enum Type {
        INT,
        FLOAT,
        VECTOR,
        BOOL,
    };
}

