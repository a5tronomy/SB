#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBCharMovingStanceForceType.h"
#include "SBTableAliasName.h"
#include "SBCharMovingStanceData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SB_API FSBCharMovingStanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBCharMovingStanceForceType> ForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bManualForceCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ForceCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEffectInMinRadius;
    
    UPROPERTY(EditAnywhere)
    bool bActiveEffectInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceMinRadius;
    
    UPROPERTY(EditAnywhere)
    FSBTableAliasName EffectVolumeAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceDeltaForSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForce;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MoveMaxSpeedCurveAtDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceOnlyXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyForceAtCharacterPhysWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyForceAtCharacterPhysFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyForceAtCharacterPhysSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMoveSpeedScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* MoveSpeedScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MoveSpeedScaleBaseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* MoveSpeedScaleBetweenBaseRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceWalkingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalAnimRangeDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OverrideStanceAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMoveStruggleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockMoveTransitAnimAtSturggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveStruggleInDegreeForceToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplySpeedForIdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApplySpeedForIdleAnimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApplySpeedForIdleAnimDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseShotMoveToIdleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShotMoveToIdleDuration;
    
    FSBCharMovingStanceData();
};

