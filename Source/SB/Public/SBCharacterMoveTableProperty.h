#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCheckType.h"
#include "ESBInterpType.h"
#include "ESBMoveDefaultInputDirection.h"
#include "ESBMoveDirectionAxis.h"
#include "ESBMovePositionType.h"
#include "ESBMoveRotationDirectionType.h"
#include "ESBMoveRotationType.h"
#include "ESBMoveTransformType.h"
#include "ESBRuleMoveBlockAreaTarget.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterMoveTableProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterMoveTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    bool bCheckCharacterWeight;
    
    UPROPERTY(EditAnywhere)
    FName RootMotionDataPath;
    
    UPROPERTY(EditAnywhere)
    float RootMotionTimeScale;
    
    UPROPERTY(EditAnywhere)
    float RootMotionStartTime;
    
    UPROPERTY(EditAnywhere)
    float RootMotionEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bRootMotionApplyPositionOnly;
    
    UPROPERTY(EditAnywhere)
    bool bRootMotionRealtimeLocalAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveTransformType> MoveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovePositionType> PositionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInterpType> PositionInterpType;
    
    UPROPERTY(EditAnywhere)
    bool bMoveToSafeLocation;
    
    UPROPERTY(EditAnywhere)
    FName PositionInterpCurveDataPath;
    
    UPROPERTY(EditAnywhere)
    bool PositionInterpCurveRealTime;
    
    UPROPERTY(EditAnywhere)
    FName StaticMoveZVAlueCurveDataPath;
    
    UPROPERTY(EditAnywhere)
    bool StaticMoveZVAlueCurveRealTime;
    
    UPROPERTY(EditAnywhere)
    FName MoveOffsetCurveDataPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveDirectionAxis> PositionDirectionAxis;
    
    UPROPERTY(EditAnywhere)
    FName LinkSocketName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveDefaultInputDirection> DefaultInputDirection;
    
    UPROPERTY(EditAnywhere)
    float StartDelayTime;
    
    UPROPERTY(EditAnywhere)
    int32 FrameDelayCount;
    
    UPROPERTY(EditAnywhere)
    float VelocityBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float VelocityBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float MoveStartTime;
    
    UPROPERTY(EditAnywhere)
    float MoveEndTime;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float MoveTimePerDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveAxisYawOffset;
    
    UPROPERTY(EditAnywhere)
    float ForwardValue;
    
    UPROPERTY(EditAnywhere)
    float RightValue;
    
    UPROPERTY(EditAnywhere)
    float UpValue;
    
    UPROPERTY(EditAnywhere)
    float ForwardValueWhenNoTarget;
    
    UPROPERTY(EditAnywhere)
    float RightValueWhenNoTarget;
    
    UPROPERTY(EditAnywhere)
    float UpValueWhenNoTarget;
    
    UPROPERTY(EditAnywhere)
    float KeepFallingTime;
    
    UPROPERTY(EditAnywhere)
    float LimitApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationStartTime;
    
    UPROPERTY(EditAnywhere)
    float RotationEndTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveRotationType> RotationType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveRotationDirectionType> RotationDirectionType;
    
    UPROPERTY(EditAnywhere)
    FName RotationInterpCurveDataPath;
    
    UPROPERTY(EditAnywhere)
    float RotationYawValue;
    
    UPROPERTY(EditAnywhere)
    bool bIndependentRotation;
    
    UPROPERTY(EditAnywhere)
    FName CollisionCheckBoneNameWhenLinkFrom;
    
    UPROPERTY(EditAnywhere)
    float DistanceToIgnoreRotationLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationLeftLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float RotationRightLimitAngle;
    
    UPROPERTY(EditAnywhere)
    bool bCheckFinalRotationLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float YawValue;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreCollision;
    
    UPROPERTY(EditAnywhere)
    bool bMoveIgnoreTargetCharacter;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreWorldStaticWhenLinkTo;
    
    UPROPERTY(EditAnywhere)
    bool bSaveTransform;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenCollision;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenWorldStaticCollision;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenClif;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenOnWater;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenBlockingFall;
    
    UPROPERTY(EditAnywhere)
    bool bCheckRuleMoveBlockArea;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBRuleMoveBlockAreaTarget> RuleMoveBlockAreaApplyToTarget;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenInvalidTarget;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenInvalidNavigation;
    
    UPROPERTY(EditAnywhere)
    bool bAllowWhenEventMove;
    
    UPROPERTY(EditAnywhere)
    bool bWallHit;
    
    UPROPERTY(EditAnywhere)
    float WallHitStartTime;
    
    UPROPERTY(EditAnywhere)
    float WallHitEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bTargetMovedBack;
    
    UPROPERTY(EditAnywhere)
    bool bOnGround;
    
    UPROPERTY(EditAnywhere)
    bool bZeroVelocityWhenEnd;
    
    UPROPERTY(EditAnywhere)
    bool bZeroGravity;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAcceleration;
    
    UPROPERTY(EditAnywhere)
    bool bAllowInvalidNavigation;
    
    UPROPERTY(EditAnywhere)
    float LimitJumpHeight;
    
    UPROPERTY(EditAnywhere)
    bool bWithDeactiveLinkToWhenLinkFrom;
    
    UPROPERTY(EditAnywhere)
    bool bStartLocationOnGround;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_UnderWater;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_Swimming;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PathWay;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterMoveTableProperty();
};

