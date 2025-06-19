#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBItemBulletTableProperty.generated.h"

USTRUCT()
struct FSBItemBulletTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName BulletAimImageType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BulletStartEffectArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BulletDroneStartEffectArray;
    
    UPROPERTY(EditAnywhere)
    bool bTPSAimSlowDown;
    
    UPROPERTY(EditAnywhere)
    float TPS_TargetCheckCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float TPS_ControllerYawDegree;
    
    UPROPERTY(EditAnywhere)
    float TPS_ControllerPitchDegree;
    
    UPROPERTY(EditAnywhere)
    bool TPS_EnableDamping;
    
    UPROPERTY(EditAnywhere)
    float TPS_DampingForce;
    
    UPROPERTY(EditAnywhere)
    float TPS_BulletMagnetismDegree;
    
    UPROPERTY(EditAnywhere)
    bool bAimLockOnTarget;
    
    UPROPERTY(EditAnywhere)
    int32 AimLockOnTargetMaxCount;
    
    UPROPERTY(EditAnywhere)
    int32 AimLockOnTargetOverlapCount;
    
    UPROPERTY(EditAnywhere)
    bool bHideWeakPoint;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemBulletTableProperty();
};

