#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_DisableIdleAdditiveAnim.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_DisableIdleAdditiveAnim : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDisableIdleAdditiveAnim;
    
    USBAnimNotify_DisableIdleAdditiveAnim();

};

