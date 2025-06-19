#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskDescriptionUIType.generated.h"

UENUM()
enum class ESBQuestTaskDescriptionUIType : uint8 {
    Always,
    AfterComplete,
};

