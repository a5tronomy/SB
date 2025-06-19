#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_SetAnimBPFloatProperty.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_SetAnimBPFloatProperty : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    USBAnimNotify_SetAnimBPFloatProperty();

};

