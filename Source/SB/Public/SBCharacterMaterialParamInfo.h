#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBMaterialParamType.h"
#include "SBCharacterMaterialParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterMaterialParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName ParamName;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMaterialParamType> ParamType;
    
    UPROPERTY(Transient)
    float CurrentDuration;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    int32 RemainLoopCount;
    
    UPROPERTY(Transient)
    int32 MaterialIndex;
    
    UPROPERTY(Transient)
    int32 MeshIndex;
    
    UPROPERTY(Transient)
    bool bRestoreParamWhenFinished;
    
    UPROPERTY(Transient)
    FGuid ControlGUID;
    
    UPROPERTY(Transient)
    bool bPause;
    
    UPROPERTY(Transient)
    bool bParamCurveNormalizedAge;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve ParamValue1;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve ParamValue2;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve ParamValue3;
    
    UPROPERTY(Transient)
    bool bUpdatedTick;
    
    SB_API FSBCharacterMaterialParamInfo();
};

