#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "ESBSoundParamType.h"
#include "SBVibrationComponent.generated.h"

class UAudioComponent;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class USBVibrationSet;
class USoundAttenuation;
class USoundWave;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBVibrationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowSpatialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* HapticAttenuationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceFeedbackLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UForceFeedbackAttenuation* ForceFeedbackAttenuation;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
private:
    UPROPERTY(Instanced)
    UAudioComponent* HapticComponent;
    
    UPROPERTY(Instanced)
    UForceFeedbackComponent* ForceFeedbackComponent;
    
public:
    USBVibrationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubscribeSoundParam(const TArray<ESBSoundParamType>& InSoundParamTypes);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetWaveParameter(FName InName, USoundWave* InWave);
    
    UFUNCTION(BlueprintCallable)
    void SetVibration(USBVibrationSet* NewVibrationSet);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameter(FName InName, int32 inInt);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName InName, float InFloat);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameter(FName InName, bool InBool);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
    
};

