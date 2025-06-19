#pragma once
#include "CoreMinimal.h"
#include "ESBSaveGameDataType.generated.h"

UENUM()
enum ESBSaveGameDataType {
    ESBSaveGameDataType_None,
    ESBSaveGameDataType_GameData,
    ESBSaveGameDataType_OptionData,
};

