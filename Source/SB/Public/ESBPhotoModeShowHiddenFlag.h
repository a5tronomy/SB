#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeShowHiddenFlag.generated.h"

UENUM()
enum class ESBPhotoModeShowHiddenFlag : uint8 {
    None,
    ShowHiddenOnPoseChange,
};

