#pragma once
#include "CoreMinimal.h"
#include "ESBShowParticleTarget.generated.h"

UENUM()
enum ESBShowParticleTarget {
    ShowParticleTarget_MainActor,
    ShowParticleTarget_OtherActor,
    ShowParticleTarget_Input,
    ShowParticleTarget_World,
    ShowParticleTarget_HitLocation,
    ShowParticleTarget_PlayerCamera,
};

