#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBAIWorldNodeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBAIWorldNodeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBAIWorldNodeComponent(const FObjectInitializer& ObjectInitializer);

};

