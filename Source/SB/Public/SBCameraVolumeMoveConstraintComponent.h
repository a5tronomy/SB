#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBCameraVolumeMoveConstraintComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCameraVolumeMoveConstraintComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBCameraVolumeMoveConstraintComponent(const FObjectInitializer& ObjectInitializer);

};

