#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionEventType.generated.h"

UENUM()
enum ESBInteractionEventType {
    ESBIAEvent_None,
    ESBIAEvent_ZoneEvent,
    ESBIAEvent_PlayTheater,
    ESBIAEvent_AcquireQuest,
    ESBIAEvent_PlayLevelSeq,
    ESBIAEvent_ChangeEnvState,
    ESBIAEvent_SetEnvActive,
    ESBIAEvent_ConsumeItem,
    ESBIAEvent_AcquireItem,
    ESBIAEvent_RemoveItem,
    ESBIAEvent_RewardGroup,
    ESBIAEvent_DespawnItem,
    ESBIAEvent_SupplyChargeItem,
    ESBIAEvent_Num,
};

