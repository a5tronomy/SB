#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBMovementCurveType.h"
#include "SBProjectileUpdateInfo.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct SB_API FSBProjectileUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Accelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpeedFromDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementCurveRepeatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementCurveScaleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBMovementCurveType> MovementCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoGenerationMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AutoGenerationMovementCurveMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AutoGenerationMovementCurveMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AutoGenerationMovementCurveRecordTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMovementCurveAxisPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* MovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedLocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedLocationRemainingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedLocationAdditiveForwardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedFromMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedFromMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParabolicMotionXYSpeedPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAdditiveLocationByTargetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditiveDestTargetForwardDistanceWhenVelocityMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMinDistancePowerWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMaxDistancePowerWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMinDistanceWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMaxDistanceWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomVelocityMinWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomVelocityMaxWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomYawMinWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomYawMaxWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPitchMinWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPitchMaxWhenGuidedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBeamTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamTrackingStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamTrackingBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamTrackingEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamTrackingBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamTrackingTargetDistacne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBeamTrackingTargetFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeamFixedDistance;
    
    FSBProjectileUpdateInfo();
};

