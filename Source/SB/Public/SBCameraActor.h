#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "SBCameraActor.generated.h"

UCLASS()
class SB_API ASBCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ASBCameraActor(const FObjectInitializer& ObjectInitializer);

};

