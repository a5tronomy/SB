#pragma once
#include "CoreMinimal.h"
#include "SBSliceSkeletalMeshTemplateData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimitAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimitAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverrideCapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideImpulsePower;
    
    SB_API FSBSliceSkeletalMeshTemplateData();
};

