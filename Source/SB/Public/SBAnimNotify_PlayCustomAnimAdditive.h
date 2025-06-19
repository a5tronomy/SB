#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBCharaterAdditiveBodyType.h"
#include "SBAnimNotify_PlayCustomAnimAdditive.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_PlayCustomAnimAdditive : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AdditiveAnimation;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBCharaterAdditiveBodyType>> AdditiveBodyTypeArray;
    
    UPROPERTY(EditAnywhere)
    float EndDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bDisableIdleAdditiveAnim;
    
    USBAnimNotify_PlayCustomAnimAdditive();

};

