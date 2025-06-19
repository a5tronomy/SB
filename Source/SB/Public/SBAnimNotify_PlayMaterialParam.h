#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Curves/CurveFloat.h"
#include "ESBMaterialParamType.h"
#include "ESBSkelMeshSlot.h"
#include "SBAnimNotify_PlayMaterialParam.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_PlayMaterialParam : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMaterialParamType> ParamType;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue1;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue2;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParamValue3;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    int32 ApplyMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlotIndex;
    
    USBAnimNotify_PlayMaterialParam();

};

