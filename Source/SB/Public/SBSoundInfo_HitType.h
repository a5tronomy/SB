#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterHitSoundType.h"
#include "SBSoundInfo.h"
#include "SBSoundInfo_HitType.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundInfo_HitType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterHitSoundType> HitType;
    
    UPROPERTY(EditAnywhere)
    FSBSoundInfo HitSound;
    
    SB_API FSBSoundInfo_HitType();
};

