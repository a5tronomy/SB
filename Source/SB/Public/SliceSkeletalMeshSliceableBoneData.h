#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SliceSkeletalMeshSliceableBoneData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSliceSkeletalMeshSliceableBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimitAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimitAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMaterialInterface> OverrideCapMaterial;
    
    SB_API FSliceSkeletalMeshSliceableBoneData();
};

