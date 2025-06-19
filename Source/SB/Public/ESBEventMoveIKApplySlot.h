#pragma once
#include "CoreMinimal.h"
#include "ESBEventMoveIKApplySlot.generated.h"

UENUM()
enum ESBEventMoveIKApplySlot {
    ESBEventMoveIK_Hand_L,
    ESBEventMoveIK_Hand_R,
    ESBEventMoveIK_Foot_L,
    ESBEventMoveIK_Foot_R,
    ESBEventMoveIK_All,
};

