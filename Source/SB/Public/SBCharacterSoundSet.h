#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBSoundInfo.h"
#include "SBSoundInfo_Condition.h"
#include "SBSoundInfo_HitArray.h"
#include "SBCharacterSoundSet.generated.h"

UCLASS()
class SB_API USBCharacterSoundSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSoundInfo_HitArray> HitSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSoundInfo> ReactSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, FSBSoundInfo> EnvHitSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSoundInfo> VoiceSounds;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBSoundInfo_Condition> ConditionSounds;
    
    USBCharacterSoundSet();

};

