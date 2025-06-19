#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.generated.h"

UENUM()
enum ESBPhotoModeCameraType {
    ESBPhotoModeCameraType_None,
    ESBPhotoModeCameraType_FreeCamera,
    ESBPhotoModeCameraType_SelfieCamera,
    ESBPhotoModeCameraType_CutSceneCamera,
};

