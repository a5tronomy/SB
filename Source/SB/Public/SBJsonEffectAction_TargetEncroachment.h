#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_TargetEncroachment.generated.h"

USTRUCT()
struct FSBJsonEffectAction_TargetEncroachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    float BindingTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float RotationStartTime;
    
    UPROPERTY(EditAnywhere, Transient)
    float RotationEndTime;
    
    UPROPERTY(EditAnywhere, Transient)
    FString BindingIdleBlendSpace;
    
    UPROPERTY(EditAnywhere, Transient)
    FString BindingPhysicsAsset;
    
    UPROPERTY(EditAnywhere, Transient)
    float TargetDistanceWhenUnbinding;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bEnablePhysicsBodyCollision;
    
    SB_API FSBJsonEffectAction_TargetEncroachment();
};

