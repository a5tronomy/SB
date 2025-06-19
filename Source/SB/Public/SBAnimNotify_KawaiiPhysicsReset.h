#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_KawaiiPhysicsReset.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_KawaiiPhysicsReset : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float WaitingTime;
    
    UPROPERTY(EditAnywhere)
    float TargetAlpha;
    
    USBAnimNotify_KawaiiPhysicsReset();

};

