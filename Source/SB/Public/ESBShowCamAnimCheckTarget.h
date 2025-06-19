#pragma once
#include "CoreMinimal.h"
#include "ESBShowCamAnimCheckTarget.generated.h"

UENUM()
enum ESBShowCamAnimCheckTarget {
    ShowCamAnimCheckTarget_MainActor,
    ShowCamAnimCheckTarget_OtherActor,
    ShowCamAnimCheckTarget_Input,
};

