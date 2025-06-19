#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Engine/Scene.h"
#include "SBShowKey.h"
#include "SBShowMaterialParamCurve.h"
#include "SBShowPostProcessMaterialKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowPostProcessMaterialKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomCamera;
    
    UPROPERTY(EditAnywhere)
    FName CustomMaterialTag;
    
    UPROPERTY(EditAnywhere)
    FWeightedBlendables PostProcessMaterials;
    
    UPROPERTY(EditAnywhere)
    bool bBlendWeightCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve BlendWeightCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowMaterialParamCurve> MaterialParamCurves;
    
    USBShowPostProcessMaterialKey();

};

