#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBAimTargetComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBAimTargetComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CheckTargetCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float AimSlowdownPercent;
    
    USBAimTargetComponent(const FObjectInitializer& ObjectInitializer);

};

