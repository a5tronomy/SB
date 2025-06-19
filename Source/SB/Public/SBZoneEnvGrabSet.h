#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "SBZoneEnvGrabSet.generated.h"

class UAnimSequence;
class UBlendSpaceBase;
class UCurveFloat;

UCLASS()
class SB_API USBZoneEnvGrabSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUseAcceleration;
    
    UPROPERTY(EditAnywhere)
    float Acceleration;
    
    UPROPERTY(EditAnywhere)
    float NonAccelSpeedArriveTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> NonAccelSpeedEasingFunc;
    
    UPROPERTY(EditAnywhere)
    float Deceleration;
    
    UPROPERTY(EditAnywhere)
    float RotationLerpAlpha;
    
    UPROPERTY(EditAnywhere)
    float ObjectPivotRotationLerpAlpha;
    
    UPROPERTY(EditAnywhere)
    bool UngrabClearVelocity;
    
    UPROPERTY(EditAnywhere)
    float GrabCheckMaxDist;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* BlendSpace;
    
    UPROPERTY(EditAnywhere)
    float AnimMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool AnimSpeedUseAccelation;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AnimSpeedAccelCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimSequence> TransitGrabStart;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CurveGrabIKStart;
    
    UPROPERTY(EditAnywhere)
    float BlockMoveTransitStartDuration;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimSequence> TransitGrabEnd;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CurveGrabIKEnd;
    
    UPROPERTY(EditAnywhere)
    float BlockMoveTransitEndDuration;
    
    UPROPERTY(EditAnywhere)
    float PenetrationMargin;
    
    USBZoneEnvGrabSet();

};

