#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "SBRagdollInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBRagdollInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 EnableRagdollCount;
    
    UPROPERTY(Transient)
    bool bRagdollStopWhenZeroVelocity;
    
    UPROPERTY(Transient)
    float WaitZeroVelocityTime;
    
    UPROPERTY(Transient)
    FName ImpulseBoneName;
    
    UPROPERTY(Transient)
    FVector ImpulseValue;
    
    UPROPERTY(Transient)
    FVector HitLocation;
    
    UPROPERTY(Transient)
    float ImpulseDelayTime;
    
    UPROPERTY(Transient)
    bool bRegisterPoseSnapshot;
    
    UPROPERTY(Transient)
    float PoseSnapshotDelayTime;
    
    UPROPERTY(Transient)
    bool bPoseSnapshot;
    
    UPROPERTY(Transient)
    int32 RegisterStopFrameDelay;
    
    UPROPERTY(Transient)
    float FadeInTime;
    
    UPROPERTY(Transient)
    float FadeOutTime;
    
    UPROPERTY(Transient)
    float BlendWeight;
    
    UPROPERTY(Transient)
    bool bAllBodies;
    
    UPROPERTY(Transient)
    bool bStopSimulatePhysics;
    
    UPROPERTY(Transient)
    float CurrentActiveTime;
    
    UPROPERTY(Transient)
    bool bUseMassScale;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve MassScaleCurve;
    
    UPROPERTY(Transient)
    FName CapsuleComponentFollowingSocket;
    
    UPROPERTY(Transient)
    FVector CapsuleComponentLocation;
    
    UPROPERTY(Transient)
    float ImpulseLimitVelocity;
    
    UPROPERTY(Transient)
    FName RootBoneName;
    
    SB_API FSBRagdollInfo();
};

