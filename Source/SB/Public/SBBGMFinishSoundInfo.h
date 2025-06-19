#pragma once
#include "CoreMinimal.h"
#include "ESBBGMFinishSoundCondition.h"
#include "SBBGMFinishSoundInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSBBGMFinishSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundBase;
    
    UPROPERTY(EditAnywhere)
    ESBBGMFinishSoundCondition BGMStateCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventBattleStates;
    
    UPROPERTY(EditAnywhere)
    bool KeepTheBeatByQuartz;
    
    UPROPERTY(EditAnywhere)
    bool ForceFadeOutCheck;
    
    UPROPERTY(EditAnywhere)
    float ForceFadeOutTime;
    
    SB_API FSBBGMFinishSoundInfo();
};

