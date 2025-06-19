#pragma once
#include "CoreMinimal.h"
#include "SBChunkParticleInfo.generated.h"

class USBPMaterialParticleSet;

USTRUCT(BlueprintType)
struct FSBChunkParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBPMaterialParticleSet* PMaterialParticleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinCollisionImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinOverlapImpulse;
    
    SB_API FSBChunkParticleInfo();
};

