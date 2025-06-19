#pragma once
#include "CoreMinimal.h"
#include "ESBUIInteractableState.generated.h"

UENUM()
enum class ESBUIInteractableState {
    Interactable,
    Battle,
    Dialogue,
    Unknown,
};

