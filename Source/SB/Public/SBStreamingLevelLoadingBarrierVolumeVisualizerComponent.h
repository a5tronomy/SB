#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBStreamingLevelLoadingBarrierVolumeVisualizerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBStreamingLevelLoadingBarrierVolumeVisualizerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBStreamingLevelLoadingBarrierVolumeVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

