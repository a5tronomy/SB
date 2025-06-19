#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeNotifyType.generated.h"

UENUM()
enum class ESBPhotoModeNotifyType {
    ESBPhotoModeNotifyType_FailSweepCheck,
    ESBPhotoModeNotifyType_AutoFocus,
    ESBPhotoModeNotifyType_Cancel,
    ESBPhotoModeNotifyType_AutoFocus_OutsideCameraFrustum,
};

