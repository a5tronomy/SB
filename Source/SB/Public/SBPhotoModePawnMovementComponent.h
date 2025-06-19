#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawnMovement.h"
#include "SBPhotoModePawnMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBPhotoModePawnMovementComponent : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
    USBPhotoModePawnMovementComponent(const FObjectInitializer& ObjectInitializer);

};

