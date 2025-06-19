#pragma once
#include "CoreMinimal.h"
#include "ESBAIDetectTargetFindOP.generated.h"

UENUM()
enum ESBAIDetectTargetFindOP {
    ESBAIDetectTargetFindOP_Near,
    ESBAIDetectTargetFindOP_Far,
    ESBAIDetectTargetFindOP_MinHP,
    ESBAIDetectTargetFindOP_MaxHP,
};

