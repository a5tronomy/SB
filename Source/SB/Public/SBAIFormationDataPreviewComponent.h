#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBAIFormationDataPreviewComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBAIFormationDataPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBAIFormationDataPreviewComponent(const FObjectInitializer& ObjectInitializer);

};

