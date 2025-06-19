#pragma once
#include "CoreMinimal.h"
#include "ESBAttackedCollisionGroupResultType.generated.h"

UENUM()
enum ESBAttackedCollisionGroupResultType {
    AttackedCollisionGroupResultType_Default,
    AttackedCollisionGroupResultType_Parry,
    AttackedCollisionGroupResultType_Guard,
};

