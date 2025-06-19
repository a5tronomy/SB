#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBBGMEventBattleSoundInfo.h"
#include "SBBGMFinishSoundInfo.h"
#include "SBBGMSoundInfoV2.h"
#include "SBBGMSoundTrackV2.generated.h"

UCLASS()
class SB_API USBBGMSoundTrackV2 : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBBGMSoundInfoV2 Default;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundInfoV2 Battle;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBBGMEventBattleSoundInfo> EventBattleArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBBGMFinishSoundInfo> BattleFinishArray;
    
    USBBGMSoundTrackV2();

};

