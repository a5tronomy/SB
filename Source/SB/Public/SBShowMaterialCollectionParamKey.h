#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ESBMaterialParamType.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowMaterialCollectionParamKey.generated.h"

class UMaterialParameterCollection;

UCLASS(EditInlineNew)
class SB_API USBShowMaterialCollectionParamKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> PlayerCharacterCheckTarget;
    
    UPROPERTY(EditAnywhere)
    bool bCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue1;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue2;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue3;
    
    UPROPERTY(EditAnywhere)
    FName ParamValueName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMaterialParamType> ParamType;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreParamWhenFinished;
    
    USBShowMaterialCollectionParamKey();

};

