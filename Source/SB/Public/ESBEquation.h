#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.generated.h"

UENUM()
enum ESBEquation {
    ESBEQ_None,
    ESBEQ_Equal,
    ESBEQ_NOT,
    ESBEQ_OR,
    ESBEQ_AND,
    ESBEQ_GEQ,
    ESBEQ_LEQ,
    ESBEQ_LESS,
    ESBEQ_GREATER,
};

