#pragma once
#include "CoreMinimal.h"
#include "ESBCameraDollySplineExtra.h"
#include "CameraDollySplineExtra.generated.h"

class USplineComponent;

USTRUCT(BlueprintType)
struct FCameraDollySplineExtra {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCameraDollySplineExtra> Type;
    
    UPROPERTY(Instanced, Transient)
    USplineComponent* DollySplineComponent;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    float BlendDuration;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBlendDuration;
    
    UPROPERTY(EditAnywhere)
    float OverrideProbeSize;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideProbeSize;
    
    SB_API FCameraDollySplineExtra();
};

