#pragma once
#include "CoreMinimal.h"
#include "ESBLocalClientStageType.generated.h"

UENUM()
enum ESBLocalClientStageType {
    ESBLocalClientStage_None,
    ESBLocalClientStage_Lobby,
    ESBLocalClientStage_Game,
};

