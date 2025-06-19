#pragma once
#include "CoreMinimal.h"
#include "EStreamlineFeatureRequirementsFlags.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineVersion.h"
#include "StreamlineFeatureRequirements.generated.h"

USTRUCT(BlueprintType)
struct FStreamlineFeatureRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EStreamlineFeatureSupport Support;
    
    UPROPERTY(BlueprintReadWrite)
    EStreamlineFeatureRequirementsFlags Requirements;
    
    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion RequiredOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion DetectedOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion RequiredDriverVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FStreamlineVersion DetectedDriverVersion;
    
    STREAMLINEBLUEPRINT_API FStreamlineFeatureRequirements();
};

