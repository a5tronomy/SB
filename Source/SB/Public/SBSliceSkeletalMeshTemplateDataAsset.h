#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSliceSkeletalMeshTemplateData.h"
#include "SBSliceSkeletalMeshTemplateDataAsset.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class SB_API USBSliceSkeletalMeshTemplateDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* CapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSBSliceSkeletalMeshTemplateData> SliceableBones;
    
    USBSliceSkeletalMeshTemplateDataAsset();

};

