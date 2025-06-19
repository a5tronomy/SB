#pragma once
#include "CoreMinimal.h"
#include "ESBQuestEventTargetType.generated.h"

UENUM()
enum ESBQuestEventTargetType {
    ESBQuestEventTargetType_None,
    ESBQuestEventTargetType_Eventor,
    ESBQuestEventTargetType_LocalPlayer,
};

