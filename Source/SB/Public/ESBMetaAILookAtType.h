#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAILookAtType.generated.h"

UENUM()
enum class ESBMetaAILookAtType : uint8 {
    None,
    Ignore,
    Once,
    Always,
};

