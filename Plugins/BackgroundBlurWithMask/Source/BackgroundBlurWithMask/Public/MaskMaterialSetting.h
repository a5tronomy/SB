#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMaskMaterialRedrawMethod.h"
#include "MaskMaterialSetting.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaskMaterialSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint ToTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaskMaterialRedrawMethod> RedrawMethod;
    
    BACKGROUNDBLURWITHMASK_API FMaskMaterialSetting();
};

