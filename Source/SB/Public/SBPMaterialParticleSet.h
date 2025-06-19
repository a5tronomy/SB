#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBPMatParticleSetInfoArray.h"
#include "SBPMaterialParticleSet.generated.h"

UCLASS(BlueprintType)
class SB_API USBPMaterialParticleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FSBPMatParticleSetInfoArray> PhysParticleMap;
    
    USBPMaterialParticleSet();

    UFUNCTION(BlueprintCallable)
    FSBPMatParticleSetInfoArray GetSBPMatParticleSetInfoArray(TEnumAsByte<EPhysicalSurface> inSurface);
    
};

