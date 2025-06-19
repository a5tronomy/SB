#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Sound/SoundAttenuation.h"
#include "SBOnSingleSoundActivateDelegate.h"
#include "SBOnSingleSoundDeactivateDelegate.h"
#include "SBSingleSoundComponent.generated.h"

class USBSingleSoundData;
class USoundAttenuation;
class USoundBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSingleSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBSingleSoundData* SingleSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnSingleSoundActivate OnSingleSoundActivate;
    
    UPROPERTY(BlueprintAssignable)
    FSBOnSingleSoundDeactivate OnSingleSoundDeactivate;
    
    USBSingleSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveSingleSound() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSound(USoundBase* Sound, float FadeInTime, float FadeOutTime, bool bForceSync);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
    
};

