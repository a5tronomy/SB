#pragma once
#include "CoreMinimal.h"
#include "ESBEnvProgressNotifyFireType.generated.h"

UENUM()
enum ESBEnvProgressNotifyFireType {
    ESBEnvProgressNotifyFire_Always,
    ESBEnvProgressNotifyFire_Once,
    ESBEnvProgressNotifyFire_Ignore,
};

