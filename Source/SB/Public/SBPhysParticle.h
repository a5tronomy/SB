#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBPhysParticle.generated.h"

class UParticleSystem;

USTRUCT()
struct FSBPhysParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    SB_API FSBPhysParticle();
};

