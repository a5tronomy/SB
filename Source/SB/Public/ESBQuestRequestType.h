#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRequestType.generated.h"

UENUM()
enum class ESBQuestRequestType : uint8 {
    Normal,
    CantAccept,
};

