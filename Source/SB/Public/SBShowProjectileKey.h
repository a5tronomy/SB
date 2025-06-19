#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBMovementTargetRelativeAxisType.h"
#include "ESBMovementTargetUpdate.h"
#include "ESBProjectileMovementType.h"
#include "ESBProjectileTarget.h"
#include "ESBTargetLocationTransformType.h"
#include "SBProjectileUpdateInfo.h"
#include "SBShowKey.h"
#include "SBShowProjectileKey.generated.h"

class UCurveFloat;
class UCurveVector;

UCLASS(EditInlineNew)
class SB_API USBShowProjectileKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float EndWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bTableProjectileKey;
    
    UPROPERTY(EditAnywhere)
    FName TableAlias;
    
    UPROPERTY(EditAnywhere)
    float ShotTime;
    
    UPROPERTY(EditAnywhere)
    bool bWithTarget;
    
    UPROPERTY(EditAnywhere)
    FString ProjectileResourcePath;
    
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
    FRotator StartTargetRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetRelativeAxisType> StartTargetRelativeAxisType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileTarget::Type> DestTarget;
    
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
    UCurveVector* DestTargetRelativeLocationCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DestTargetRelativeLocationScaleCurve;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTargetRelativeAxisType> DestTargetRelativeAxisType;
    
    UPROPERTY(EditAnywhere)
    bool bDestTargetLocationToGround;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBProjectileMovementType::Type> MovementType;
    
    UPROPERTY(EditAnywhere)
    FSBProjectileUpdateInfo UpdateInfo;
    
    UPROPERTY(EditAnywhere)
    bool bPrintLog;
    
    USBShowProjectileKey();

};

