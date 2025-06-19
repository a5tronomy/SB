#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBShowActorTarget.h"
#include "ESBShowWindVolumeDirectionType.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowWindVolumeKey.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class SB_API USBShowWindVolumeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSkelMeshSlot>> MeshSlots;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveFloat> Strength;
    
    UPROPERTY(EditAnywhere)
    float StrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float ClothWindMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SkeletalMeshForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float KawaiiPhysicsForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowWindVolumeDirectionType::Type> DirectionType;
    
    UPROPERTY(EditAnywhere)
    bool bKeepTrackLocalDirection;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerOnly;
    
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bRandomizeDirection;
    
    UPROPERTY(EditAnywhere)
    float MinAzimuthalAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAzimuthalAngle;
    
    UPROPERTY(EditAnywhere)
    float MinPolarAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxPolarAngle;
    
    UPROPERTY(EditAnywhere)
    FVector Bound;
    
    USBShowWindVolumeKey();

};

