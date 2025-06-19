#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterHitSoundType.h"
#include "ESBShowCharacterParticleTarget.h"
#include "ESBShowSESoundAttachType.h"
#include "SBShowSoundKey.h"
#include "SBShowCharSESoundKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowCharSESoundKey : public USBShowSoundKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterVoiceKey;
    
    UPROPERTY(EditAnywhere)
    FName CharacterReactKey;
    
    UPROPERTY(EditAnywhere)
    FName CharacterHitKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterHitSoundType> CharacterHitType;
    
    UPROPERTY(EditAnywhere)
    FName SoundConditionKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCharacterParticleTarget> TargetForCharacterVoice;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForCharacterVoice;
    
    UPROPERTY(EditAnywhere)
    ESBShowSESoundAttachType SESoundAttachType;
    
    USBShowCharSESoundKey();

};

