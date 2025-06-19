#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBCharacterHitSoundType.h"
#include "SBAnimNotify_CharSESound.generated.h"

class USoundAttenuation;
class USoundBase;
class USoundClass;

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_CharSESound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName VoiceKey;
    
    UPROPERTY(EditAnywhere)
    FName ReactionKey;
    
    UPROPERTY(EditAnywhere)
    FName HitKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterHitSoundType> HitType;
    
    UPROPERTY(EditAnywhere)
    FName ConditionKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    USoundBase* DefaultSound;
    
    UPROPERTY(EditAnywhere)
    float DefaultPitchMultiply;
    
    UPROPERTY(EditAnywhere)
    float DefaultVolumeMultiply;
    
    UPROPERTY(EditAnywhere)
    USoundClass* DefaultSoundClass;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* DefaultAttenuation;
    
    USBAnimNotify_CharSESound();

};

