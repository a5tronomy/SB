#pragma once
#include "CoreMinimal.h"
#include "ESBRopePendulumVelocityAxis.h"
#include "SBEventMoveData_RopeSwingProperty.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBEventMoveData_RopeSwingProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingVerticalMaxStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingHorizontalMaxStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingHorizontalMaxStrengthInv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingAddDirStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingStartMaxStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingAddDirDownDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingAddDirUpDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBRopePendulumVelocityAxis> AddDirApplySpeedAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingAddDirMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingAddDirMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingStartForceKeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingHitReflectStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingStartSwingImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSwingCanAdjustDirDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeSingAttachImpulseMaxForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeTopDownAttachImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeHitCollisionExtentWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeInputDirClampDegree;
    
    FSBEventMoveData_RopeSwingProperty();
};

