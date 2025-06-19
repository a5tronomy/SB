#pragma once
#include "CoreMinimal.h"
#include "ESBRequestGameDataType.generated.h"

UENUM()
enum ESBRequestGameDataType {
    ESBRequestGameDataType_None,
    ESBRequestGameDataType_NewGame,
    ESBRequestGameDataType_LoadGame,
    ESBRequestGameDataType_LoadMap,
};

