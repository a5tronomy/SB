#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SBPhysicalMaterial.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories)
class SB_API USBPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FrictionToSlidingVelocity;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MoveScaleCurveOnSliding;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSliding;
    
    UPROPERTY(EditAnywhere)
    float StartSlidingDegree;
    
    UPROPERTY(EditAnywhere)
    float StartSlidingSlipDegree;
    
    UPROPERTY(EditAnywhere)
    float SlidingAcceleration;
    
    UPROPERTY(EditAnywhere)
    float SlidingSlipAcceleration;
    
    UPROPERTY(EditAnywhere)
    FString SlidingSlipStartAnimPath;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSlidingSlipStartAnimPath;
    
    UPROPERTY(VisibleAnywhere)
    float StartSlidingZ;
    
    UPROPERTY(VisibleAnywhere)
    float StartSlidingSlipZ;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCameraUnderBoundCollision;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWallRun;
    
    UPROPERTY(EditAnywhere)
    bool bEnableWallRunYawControl;
    
    UPROPERTY(EditAnywhere)
    float OverrideWallRunJumpScale;
    
    UPROPERTY(EditAnywhere)
    float MinDegreeWallRunByNormal;
    
    UPROPERTY(EditAnywhere)
    float MaxDegreeWallRunByNormal;
    
    UPROPERTY(EditAnywhere)
    bool bPhysicalForceInteractionForCharacter;
    
    UPROPERTY(EditAnywhere)
    FName PhysicalForceCenterBone;
    
    UPROPERTY(EditAnywhere)
    float PhysicalForceDist;
    
    UPROPERTY(EditAnywhere)
    int32 PhysicalForceInteractionMaxCount;
    
    UPROPERTY(EditAnywhere)
    float PhysicalForceInteractionActiveDegree;
    
    UPROPERTY(EditAnywhere)
    float PhysicalForceScale;
    
    UPROPERTY(EditAnywhere)
    float PhysicalForceInterval;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OverrideEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> OverrideEffectVolumeID;
    
    USBPhysicalMaterial();

};

