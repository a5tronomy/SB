#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBSoundIntParamInfo.h"
#include "SBAnimNotify_FootStep.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_FootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName FootStepSetKey;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSoundIntParamInfo> IntParams;
    
    UPROPERTY(EditAnywhere)
    bool PlayVibrationOnlyLocalPlayer;
    
    UPROPERTY(EditAnywhere)
    bool bPreviewVibration;
    
    USBAnimNotify_FootStep();

};

