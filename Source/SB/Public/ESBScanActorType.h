#pragma once
#include "CoreMinimal.h"
#include "ESBScanActorType.generated.h"

UENUM()
enum ESBScanActorType {
    ESBScanActorType_None,
    ESBScanActorType_Character,
    ESBScanActorType_Item,
    ESBScanActorType_EventMove,
    ESBScanActorType_ZoneEnv,
};

