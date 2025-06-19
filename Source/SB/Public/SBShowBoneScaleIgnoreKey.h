#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowBoneScaleIgnoreKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowBoneScaleIgnoreKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> IgnoreBones;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOuTime;
    
    USBShowBoneScaleIgnoreKey();

};

