#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBEquipmentType.h"
#include "ESBParticleRelativeAxis.h"
#include "ESBShowParticleTarget.h"
#include "SBShowKey.h"
#include "SBShowParticleBase.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowParticleBase : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool bUseSocketScale;
    
    UPROPERTY(EditAnywhere)
    bool bImmediatelyDestroy;
    
    UPROPERTY(EditAnywhere)
    bool bAttach;
    
    UPROPERTY(EditAnywhere)
    bool bFollowing;
    
    UPROPERTY(EditAnywhere)
    bool bFollowSpring;
    
    UPROPERTY(EditAnywhere)
    float FollowingStiffness;
    
    UPROPERTY(EditAnywhere)
    float FollowingDamping;
    
    UPROPERTY(EditAnywhere)
    bool bPosOnly;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBParticleRelativeAxis::Type> RelativeLocationAxis;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBParticleRelativeAxis::Type> RelativeRotationAxis;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float ParticleScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterParticleScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharParticleScaleToRelativeLoc;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowParticleTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetComponentTag;
    
    UPROPERTY(EditAnywhere)
    FName TargetComponentTag;
    
    UPROPERTY(EditAnywhere)
    bool IsTickableWhenPaused;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRelativeLocationCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationXCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationYCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationZCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRelativeRotationCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationXCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationYCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationZCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableParticleScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ParticleScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRandomLocation;
    
    UPROPERTY(EditAnywhere)
    FVector RandomLocationMin;
    
    UPROPERTY(EditAnywhere)
    FVector RandomLocationMax;
    
    USBShowParticleBase();

};

