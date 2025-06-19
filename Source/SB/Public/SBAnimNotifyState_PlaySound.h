#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBAnimNotifyState_PlaySound.generated.h"

class UAudioComponent;
class USkeletalMeshComponent;
class USoundAttenuation;
class USoundBase;
class USoundClass;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class SB_API USBAnimNotifyState_PlaySound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
private:
    UPROPERTY(Instanced, Transient)
    TMap<USkeletalMeshComponent*, UAudioComponent*> AudioComponentMap;
    
public:
    USBAnimNotifyState_PlaySound();

};

