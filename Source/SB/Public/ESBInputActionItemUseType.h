#pragma once
#include "CoreMinimal.h"
#include "ESBInputActionItemUseType.generated.h"

UENUM()
enum class ESBInputActionItemUseType : uint8 {
    None,
    Heal,
    Util,
    Bullet,
};

