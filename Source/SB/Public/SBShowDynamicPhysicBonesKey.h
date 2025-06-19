#pragma once
#include "CoreMinimal.h"
#include "ESBPhysicHitType.h"
#include "SBShowKey.h"
#include "SBShowDynamicPhysicBonesKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowDynamicPhysicBonesKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    float PhysicBlendWeight;
    
    UPROPERTY(EditAnywhere)
    float PhysicBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float PhysicBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float PhysicDuration;
    
    UPROPERTY(EditAnywhere)
    float PhysicHitPower;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhysicHitType> PhysicHitType;
    
    UPROPERTY(EditAnywhere)
    bool bSetAllBodiesBelowFromDynamicPhysBones;
    
    USBShowDynamicPhysicBonesKey();

};

