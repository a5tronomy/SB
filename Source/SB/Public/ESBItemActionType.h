#pragma once
#include "CoreMinimal.h"
#include "ESBItemActionType.generated.h"

UENUM()
enum ESBItemActionType {
    ESBItemActionType_None,
    ESBItemActionType_Acquire,
    ESBItemActionType_Remove,
    ESBItemActionType_Consume,
    ESBItemActionType_MustAcquisition,
};

