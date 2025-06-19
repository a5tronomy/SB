#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ESBEquipmentType.h"
#include "ESBMaterialParamType.h"
#include "ESBMovementTarget.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowMaterialParamKey.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowMaterialParamKey : public USBShowKey {
    GENERATED_BODY()
public:
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
    bool bUniqueRun;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ESBSkelMeshSlot> ApplyMeshIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSkelMeshSlot>> ApplyMeshIndexArray;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ApplyMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreParamWhenFinished;
    
    UPROPERTY(EditAnywhere)
    bool bForceApplyKeyWhenStoped;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    USBShowMaterialParamKey();

};

