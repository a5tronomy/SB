#pragma once
#include "CoreMinimal.h"
#include "ESBProjectileState.generated.h"

UENUM()
enum ESBProjectileState {
    ProjectileState_Wait,
    ProjectileState_Create,
    ProjectileState_Shot,
    ProjectileState_EndWait,
    ProjectileState_End,
};

