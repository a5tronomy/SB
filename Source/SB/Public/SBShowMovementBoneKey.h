#pragma once
#include "CoreMinimal.h"
#include "ESBMovementBoneCurveType.h"
#include "ESBMovementBoneInterpType.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowMovementBoneKey.generated.h"

class USplineComponent;

UCLASS(EditInlineNew)
class SB_API USBShowMovementBoneKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ModifyBoneName;
    
    UPROPERTY(EditAnywhere)
    FName TargetBoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> OwnerMeshSlot;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> TargetMeshSlot;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementBoneInterpType> InterpolationType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementBoneCurveType> CurveType;
    
    UPROPERTY(EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(EditAnywhere)
    float KeepDuration;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* SplineComponent;
    
    USBShowMovementBoneKey();

};

