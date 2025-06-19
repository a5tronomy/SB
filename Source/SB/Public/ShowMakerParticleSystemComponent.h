#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "ShowMakerParticleSystemComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShowMakerParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UShowMakerParticleSystemComponent(const FObjectInitializer& ObjectInitializer);

};

