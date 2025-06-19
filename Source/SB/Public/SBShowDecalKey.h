#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowDecalParamCurve.h"
#include "SBShowParticleBase.h"
#include "SBShowDecalKey.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class SB_API USBShowDecalKey : public USBShowParticleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeScreenSize;
    
    UPROPERTY(EditAnywhere)
    bool bWorldDecal;
    
    UPROPERTY(EditAnywhere)
    bool bOnGround;
    
    UPROPERTY(EditAnywhere)
    float GroundCheckDistance;
    
    UPROPERTY(EditAnywhere)
    FVector DecalSize;
    
    UPROPERTY(EditAnywhere)
    bool bUseMultiplyRandomScale;
    
    UPROPERTY(EditAnywhere)
    float RandomScaleOffsetMin;
    
    UPROPERTY(EditAnywhere)
    float RandomScaleOffsetMax;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseAddRandomRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator RandomRotationOffsetMin;
    
    UPROPERTY(EditAnywhere)
    FRotator RandomRotationOffsetMax;
    
    UPROPERTY(EditAnywhere)
    bool bCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowDecalParamCurve> ParamCurves;
    
    UPROPERTY(EditAnywhere)
    bool bUseScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bScaleCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleXCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleYCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleZCurve;
    
    UPROPERTY(EditAnywhere)
    bool bAttachTargetOnlyDecal;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> ApplyMeshSlotWhenTargetOnlyDecal;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreHairSlot;
    
    UPROPERTY(EditAnywhere)
    bool bWithBindingCharacter;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDecalSizeWhenAttach;
    
    UPROPERTY(EditAnywhere)
    float AutoDecalSizeScale;
    
    UPROPERTY(EditAnywhere)
    int32 SortOrder;
    
    UPROPERTY(EditAnywhere)
    int32 DecalChannelMask;
    
    USBShowDecalKey();

};

