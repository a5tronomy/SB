#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBFootStepSetInfo.generated.h"

class USBPMaterialParticleSet;

USTRUCT(BlueprintType)
struct FSBFootStepSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBPMaterialParticleSet* PMatParticleSet;
    
    UPROPERTY(EditAnywhere)
    FName FootBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float OverrallParticleScaleMult;
    
    UPROPERTY(EditAnywhere)
    float OverrallDecalScaleMult;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bAttachSoundToFootBone;
    
    SB_API FSBFootStepSetInfo();
};

