#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBParticleSetInfoArray.h"
#include "SBCharacterParticleSet.generated.h"

UCLASS()
class SB_API USBCharacterParticleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBParticleSetInfoArray> Particles;
    
    USBCharacterParticleSet();

};

