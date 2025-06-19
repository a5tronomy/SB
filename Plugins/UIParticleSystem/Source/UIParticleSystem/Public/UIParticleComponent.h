#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "UIParticleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIPARTICLESYSTEM_API UUIParticleComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UUIParticleComponent(const FObjectInitializer& ObjectInitializer);

};

