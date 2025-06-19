#pragma once
#include "CoreMinimal.h"
#include "ESBEventGiftType.generated.h"

UENUM()
enum ESBEventGiftType {
    ESBEventGiftType_None,
    ESBEventGiftType_BossChallenge,
    ESBEventGiftType_Event,
    ESBEventGiftType_FusionEndingGift,
    ESBEventGiftType_PSN,
};

