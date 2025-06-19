#pragma once
#include "CoreMinimal.h"
#include "ESBShowControlLockonTargetBone.h"
#include "SBShowKey.h"
#include "SBShowControlLockOnTargetBoneKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowControlLockOnTargetBoneKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowControlLockonTargetBone> PlayTarget;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    FName TargetBoneSocketName;
    
    UPROPERTY(EditAnywhere)
    float LockOnPitchMax;
    
    UPROPERTY(EditAnywhere)
    float BlendInDuration;
    
    UPROPERTY(EditAnywhere)
    float BlendOutDuration;
    
    USBShowControlLockOnTargetBoneKey();

};

