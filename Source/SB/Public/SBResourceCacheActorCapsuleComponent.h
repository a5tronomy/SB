#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "SBResourceCacheActorCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBResourceCacheActorCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    USBResourceCacheActorCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

