#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBVFXParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSBVFXParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteRotation;
    
    SB_API FSBVFXParticle();
};

