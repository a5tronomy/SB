#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBDecalParamCurve.h"
#include "SBPMaDecalInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSBPMaDecalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSBDecalParamCurve> ParamCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCurveNormalizedAge;
    
    SB_API FSBPMaDecalInfo();
};

