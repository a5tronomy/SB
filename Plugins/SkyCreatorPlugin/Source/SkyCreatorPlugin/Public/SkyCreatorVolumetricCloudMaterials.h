#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorVolumetricCloudMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSkyCreatorVolumetricCloudMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC0;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC2;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC0;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC2;
    
    SKYCREATORPLUGIN_API FSkyCreatorVolumetricCloudMaterials();
};

