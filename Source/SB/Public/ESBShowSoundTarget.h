#pragma once
#include "CoreMinimal.h"
#include "ESBShowSoundTarget.generated.h"

UENUM()
enum ESBShowSoundTarget {
    ShowSoundTarget_MainActor,
    ShowSoundTarget_OtherActor,
    ShowSoundTarget_Input,
    ShowSoundTarget_World,
    ShowSoundTarget_HitLocation,
};

