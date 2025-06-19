#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBRagdollLockLocationType.h"
#include "ESBShowActorTarget.h"
#include "ESBShowRagdollDirectionType.h"
#include "SBShowKey.h"
#include "SBShowRagdollKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowRagdollKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBRagdollLockLocationType::Type> LockBodyLocationType;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenZeroVelocity;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bDisableGravity;
    
    UPROPERTY(EditAnywhere)
    bool bUseMassScale;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePhysicsBodyCollision;
    
    UPROPERTY(EditAnywhere)
    FName CapsuleComponentFollowingSocketName;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve MassScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float PoseSnapshotDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseImpulse;
    
    UPROPERTY(EditAnywhere)
    float ImpulseDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideHitBone;
    
    UPROPERTY(EditAnywhere)
    FName ImpulseBoneName;
    
    UPROPERTY(EditAnywhere)
    float ImpulsePower;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowRagdollDirectionType::Type> DirectionType;
    
    UPROPERTY(EditAnywhere)
    float AdditiveDirectionPercent;
    
    UPROPERTY(EditAnywhere)
    bool bCheckAdditiveDirectionNearlyParallel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowRagdollDirectionType::Type> AdditiveDirectionType;
    
    UPROPERTY(EditAnywhere)
    bool bAdditiveDirectionWhenNotStatic;
    
    UPROPERTY(EditAnywhere)
    FVector ImpulseDirection;
    
    UPROPERTY(EditAnywhere)
    float ImpulseLimitVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bUseForce;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ForceBoneArray;
    
    UPROPERTY(EditAnywhere)
    FVector Force;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ForceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bIgnorePlayer;
    
    USBShowRagdollKey();

};

