#pragma once
#include "CoreMinimal.h"
#include "ESBEventMoveType.generated.h"

UENUM()
enum ESBEventMoveType {
    SBEventMove_SideToSide,
    SBEventMove_Rod,
    SBEventMove_SideRod,
    SBEventMove_BalanceBeam,
};

