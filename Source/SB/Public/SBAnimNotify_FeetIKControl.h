#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_FeetIKControl.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_FeetIKControl : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceScale_FeetIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceScale_Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootIKSetPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableFeetIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlatGroundBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlantGroundBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoverPendingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoverFlatGroundBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoverSlantGroundBlendTime;
    
    USBAnimNotify_FeetIKControl();

};

