#pragma once
#include "CoreMinimal.h"
#include "SBSoundInfo.generated.h"

class USBVibrationSet;
class USoundAttenuation;
class USoundBase;
class USoundClass;

USTRUCT(BlueprintType)
struct FSBSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundSource;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PtichMultiplier;
    
    UPROPERTY(EditAnywhere)
    FName BoneSocketName;
    
    UPROPERTY(EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(EditAnywhere)
    bool bPlayFacialAnim;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString AnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float PlayStartTime;
    
    UPROPERTY(EditAnywhere)
    float PlayEndTime;
    
    UPROPERTY(EditAnywhere)
    float PlayBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float PlayBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreStopAnimationWhenEnd;
    
    SB_API FSBSoundInfo();
};

