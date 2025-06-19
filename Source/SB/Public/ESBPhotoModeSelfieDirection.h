#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeSelfieDirection.generated.h"

UENUM()
enum class ESBPhotoModeSelfieDirection : uint8 {
    ESBPhotoModeSelfieDirection_None,
    ESBPhotoModeSelfieDirection_Left,
    ESBPhotoModeSelfieDirection_Right,
};

