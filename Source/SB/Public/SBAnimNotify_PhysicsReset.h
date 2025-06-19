#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBSkelMeshSlot.h"
#include "SBAnimNotify_PhysicsReset.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_PhysicsReset : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> PhysicsResetSlot;
    
    UPROPERTY(EditAnywhere)
    float PhysicsWeightFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float PhysicsWeightFadeOutTime;
    
    USBAnimNotify_PhysicsReset();

};

