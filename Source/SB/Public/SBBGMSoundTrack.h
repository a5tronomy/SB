#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBBGMEndSoundInfo.h"
#include "SBBGMSoundInfo.h"
#include "SBBGMSoundTrackInfo.h"
#include "SBBGMSoundTrack.generated.h"

UCLASS()
class SB_API USBBGMSoundTrack : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBBGMSoundInfo DefaultBGM;
    
    UPROPERTY(EditAnywhere)
    FSBBGMEndSoundInfo DefaultBGMEnd;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundInfo BattleBGM;
    
    UPROPERTY(EditAnywhere)
    FSBBGMEndSoundInfo BattleBGMEnd;
    
    UPROPERTY(EditAnywhere)
    FSBBGMEndSoundInfo BattleBGMClear;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundTrackInfo DefaultBGMInfo;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundTrackInfo DefaultEndSoundInfo;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundTrackInfo BattleBGMInfo;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundTrackInfo BattleClearSoundInfo;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundTrackInfo BattleEndSoundInfo;
    
    UPROPERTY(EditAnywhere)
    bool PlayEndSoundImmediately;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DataVersion;
    
    USBBGMSoundTrack();

};

