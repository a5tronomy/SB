#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBAttachParticleInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSBAttachParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector RelativeLocation;
    
    UPROPERTY(Transient)
    FRotator RelativeRotation;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* pAttachedComponent;
    
    SB_API FSBAttachParticleInfo();
};

