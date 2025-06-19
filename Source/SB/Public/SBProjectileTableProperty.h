#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBElementType.h"
#include "ESBMovementCurveType.h"
#include "ESBMovementTargetRelativeAxisType.h"
#include "ESBMovementTargetUpdate.h"
#include "ESBProjectileDestroyType.h"
#include "ESBProjectileHitType.h"
#include "ESBProjectileLifeType.h"
#include "ESBProjectileMovementType.h"
#include "ESBProjectilePhysicsType.h"
#include "ESBProjectileTarget.h"
#include "ESBTargetLocationTransformType.h"
#include "SBJsonEffect.h"
#include "SBTablePropertyBase.h"
#include "SBProjectileTableProperty.generated.h"

USTRUCT()
struct FSBProjectileTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString ResourcePath;
    
    UPROPERTY(EditAnywhere)
    bool bGroupProjectile;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileLifeType> LifeType;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileDestroyType> DestroyType;
    
    UPROPERTY(EditAnywhere)
    float DestroyWaitTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectilePhysicsType> PhysicsType;
    
    UPROPERTY(EditAnywhere)
    float AttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    float ShieldAttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileHitType> HitType;
    
    UPROPERTY(EditAnywhere)
    float HitRepeatInterval;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilterAlias;
    
    UPROPERTY()
    FString ProjectileShotEffectAlias;
    
    UPROPERTY()
    FString ProjectileArriveEffectAlias;
    
    UPROPERTY()
    FString ProjectileEndEffectAlias;
    
    UPROPERTY()
    FString ProjectileLifeTimeEndEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBElementType> ElementType;
    
    UPROPERTY(EditAnywhere)
    float ElementAmount;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CreateProjectileAliasArrayWhenDestruction;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ProjectileEndCreateProjectileAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bDisableProjectileEndCreateProjectileWhenDestruction;
    
    UPROPERTY(EditAnywhere)
    bool bDisableProjectileEndCreateProjectileWhenHitGround;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorTriggerTag;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileHit;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileSuperParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileGuard;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileJustParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileJustGuard;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenProjectileReflectHit;
    
    UPROPERTY(EditAnywhere)
    FName TargetDeadType;
    
    UPROPERTY(EditAnywhere)
    bool bLockOnHitTarget;
    
    UPROPERTY(EditAnywhere)
    FString EndLocationDecalShowPath;
    
    UPROPERTY(EditAnywhere)
    bool AvailableParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableSuperParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableGuard;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustGuard;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustAction;
    
    UPROPERTY(EditAnywhere)
    float DecalPlayExceptTime;
    
    UPROPERTY(EditAnywhere)
    bool bImpossibleReflect;
    
    UPROPERTY(EditAnywhere)
    float ReflectYawRandMin;
    
    UPROPERTY(EditAnywhere)
    float ReflectYawRandMax;
    
    UPROPERTY(EditAnywhere)
    float ReflectPitchRandMin;
    
    UPROPERTY(EditAnywhere)
    float ReflectPitchRandMax;
    
    UPROPERTY(EditAnywhere)
    FName ReflectDestTargetOverrideAlias;
    
    UPROPERTY(EditAnywhere)
    FName ReflectTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    FName ReflectJustActionTargetFilterAlias;
    
    UPROPERTY()
    FString ReflectProjectileArriveEffectAlias;
    
    UPROPERTY(EditAnywhere)
    bool bDisableUIEvent;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreNoDamageState;
    
    UPROPERTY(EditAnywhere)
    bool bProjectileAttackPossible;
    
    UPROPERTY(EditAnywhere)
    float ProjectileAttackDamage;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreCollision;
    
    UPROPERTY(EditAnywhere)
    bool bDestructible;
    
    UPROPERTY(EditAnywhere)
    float Life;
    
    UPROPERTY()
    FString ProjectileDestructionAttackerEffectAlias;
    
    UPROPERTY()
    FString ProjectileDestructionOwnerEffectAlias;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventDestructionDelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventDestructionDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    bool bCheckShotPosition;
    
    UPROPERTY(EditAnywhere)
    FName CheckShotPositionSocketName;
    
    UPROPERTY(EditAnywhere)
    float StartDelayTime;
    
    UPROPERTY(EditAnywhere)
    float ShotTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileMovementType::Type> MovementType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileTarget::Type> StartTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetUpdate> StartTargetUpdate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTargetLocationTransformType> StartTargetTransformType;
    
    UPROPERTY(EditAnywhere)
    FName StartTargetTransformName;
    
    UPROPERTY(EditAnywhere)
    bool bStartTargetTransformRotation;
    
    UPROPERTY(EditAnywhere)
    FVector StartTargetRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    float StartTargetRelativeRotationPitch;
    
    UPROPERTY(EditAnywhere)
    float StartTargetRelativeRotationYaw;
    
    UPROPERTY(EditAnywhere)
    float StartTargetRelativeRotationRoll;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetRelativeAxisType> StartTargetRelativeAxisType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileTarget::Type> DestTarget;
    
    UPROPERTY(EditAnywhere)
    bool bDestTargetUpdateWhenSpawn;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetUpdate> DestTargetUpdate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTargetLocationTransformType> DestTargetTransformType;
    
    UPROPERTY(EditAnywhere)
    FName DestTargetTransformName;
    
    UPROPERTY(EditAnywhere)
    FVector DestTargetRandomRange;
    
    UPROPERTY(EditAnywhere)
    FVector DestTargetRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FString DestTargetRelativeLocationCurvePath;
    
    UPROPERTY(EditAnywhere)
    FString DestTargetRelativeLocationScaleCurvePath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetRelativeAxisType> DestTargetRelativeAxisType;
    
    UPROPERTY(EditAnywhere)
    bool bDestTargetLocationToGround;
    
    UPROPERTY(EditAnywhere)
    float FixedLocationTime;
    
    UPROPERTY(EditAnywhere)
    float FixedLocationRemainingDistance;
    
    UPROPERTY(EditAnywhere)
    float FixedLocationAdditiveForwardDistance;
    
    UPROPERTY(EditAnywhere)
    float StartToDestDirectionDistance;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float SpeedRandom;
    
    UPROPERTY(EditAnywhere)
    float Accelation;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bSpeedFromDuration;
    
    UPROPERTY(EditAnywhere)
    float MovementCurveRepeatDistance;
    
    UPROPERTY(EditAnywhere)
    float MovementCurveScaleDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementCurveType> MovementCurveType;
    
    UPROPERTY(EditAnywhere)
    FString MovementCurve;
    
    UPROPERTY(EditAnywhere)
    bool bAutoGenerationMovementCurve;
    
    UPROPERTY(EditAnywhere)
    FVector AutoGenerationMovementCurveMin;
    
    UPROPERTY(EditAnywhere)
    FVector AutoGenerationMovementCurveMax;
    
    UPROPERTY(EditAnywhere)
    FVector AutoGenerationMovementCurveRecordTime;
    
    UPROPERTY(EditAnywhere)
    float Gravity;
    
    UPROPERTY(EditAnywhere)
    float SpeedFromMinDistance;
    
    UPROPERTY(EditAnywhere)
    float SpeedFromMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float ParabolicMotionXYSpeedPerSecond;
    
    UPROPERTY(EditAnywhere)
    bool bAdditiveLocationByTargetVelocity;
    
    UPROPERTY(EditAnywhere)
    float AdditiveDestTargetForwardDistanceWhenVelocityMove;
    
    UPROPERTY(EditAnywhere)
    float RotationMinDistancePowerWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxDistancePowerWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RotationMinDistanceWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxDistanceWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomVelocityMinWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomVelocityMaxWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomYawMinWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomYawMaxWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomPitchMinWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    float RandomPitchMaxWhenGuidedMissile;
    
    UPROPERTY(EditAnywhere)
    FVector MissOffsetRandomRangeMin;
    
    UPROPERTY(EditAnywhere)
    FVector MissOffsetRandomRangeMax;
    
    UPROPERTY(EditAnywhere)
    bool bBeamTracking;
    
    UPROPERTY(EditAnywhere)
    float BeamTrackingStartTime;
    
    UPROPERTY(EditAnywhere)
    float BeamTrackingBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BeamTrackingEndTime;
    
    UPROPERTY(EditAnywhere)
    float BeamTrackingBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BeamTrackingTargetDistacne;
    
    UPROPERTY(EditAnywhere)
    bool bBeamTrackingTargetFollow;
    
    UPROPERTY(EditAnywhere)
    float BeamFixedDistance;
    
    UPROPERTY(EditAnywhere)
    int32 ChainAttackCount;
    
    UPROPERTY(EditAnywhere)
    int32 PoolCount;
    
    UPROPERTY(EditAnywhere)
    bool bSignalUI;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileShotEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileArriveEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileEndEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileLifeTimeEndEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ReflectProjectileArriveEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileDestructionAttackerEffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ProjectileDestructionOwnerEffectAliasArray;
    
    SB_API FSBProjectileTableProperty();
};

