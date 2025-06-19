#pragma once
#include "CoreMinimal.h"
#include "ESBQuestUIType.generated.h"

UENUM()
enum class ESBQuestUIType : uint8 {
    ShowAll,
    HideAll,
    TaskNoticeOnly,
};

