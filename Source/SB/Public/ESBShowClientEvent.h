#pragma once
#include "CoreMinimal.h"
#include "ESBShowClientEvent.generated.h"

UENUM()
enum ESBShowClientEvent {
    ESBShowClientEvent_CompletedMountingEquipment,
    ESBShowClientEvent_CompleteChangeEquipmentShow,
    ESBShowClientEvent_SetAIDecoratorData,
};

