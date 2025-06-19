#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraDollySplineBlend.generated.h"

USTRUCT(BlueprintType)
struct FCameraDollySplineBlend {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Type;
    
    UPROPERTY(Transient)
    float RemainDuration;
    
    UPROPERTY(Transient)
    float InitialDuration;
    
    UPROPERTY(Transient)
    FVector LastLocation;
    
    SB_API FCameraDollySplineBlend();
};

