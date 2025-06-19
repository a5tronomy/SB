#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDefaultSubstanceTextureSize.h"
#include "ESubstanceEngineType.h"
#include "SubstanceSettings.generated.h"

class UMaterialInterface;

UCLASS(Config = Engine)
class SUBSTANCECORE_API USubstanceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 MemoryBudgetMb;
    
    UPROPERTY(Config, EditAnywhere)
    int32 CPUCores;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AsyncLoadMipClip;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxAsyncSubstancesRenderedPerFrame;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ESubstanceEngineType> SubstanceEngine;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeX;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeY;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial;
    
    USubstanceSettings();

};

