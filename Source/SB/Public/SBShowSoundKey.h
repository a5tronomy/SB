#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBEquipmentType.h"
#include "ESBShowCharacterParticleTarget.h"
#include "ESBShowSoundOwnerTarget.h"
#include "ESBShowSoundTarget.h"
#include "ESBSoundParamType.h"
#include "ESBSoundRelativeAxis.h"
#include "SBShowKey.h"
#include "SBShowVectorCurve.h"
#include "SBShowSoundKey.generated.h"

class USoundAttenuation;
class USoundBase;
class USoundClass;

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowSoundKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USoundBase> SoundSoftObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    ESBShowSoundOwnerTarget TargetForSoundOwner;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForSoundOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ESBSoundParamType> SubscribeSoundParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUISound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMuteWhenGamePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseStopAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StopAtEndFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachName;
    
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSoundRelativeAxis::Type> RelativeLocationAxis;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowSoundTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterSoundSet;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterParticleSet;
    
    UPROPERTY(EditAnywhere)
    FName CharacterParticleSetKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCharacterParticleTarget> TargetForCharacterParticle;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForCharacterParticle;
    
    UPROPERTY(EditAnywhere)
    bool bUseAsyncLoading;
    
    UPROPERTY(EditAnywhere)
    FSBShowVectorCurve RelativeLocationCurve;
    
    USBShowSoundKey();

};

