#pragma once
#include "CoreMinimal.h"
#include "ESBShowCamShakeTarget.generated.h"

UENUM()
enum ESBShowCamShakeTarget {
    ShowCamShakeTarget_MainActor,
    ShowCamShakeTarget_OtherActor,
    ShowCamShakeTarget_Input,
};

