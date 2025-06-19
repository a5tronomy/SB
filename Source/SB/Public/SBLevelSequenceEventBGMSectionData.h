#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventBGMSectionData.generated.h"

class USBBGMSoundTrack;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventBGMSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPlay;
    
    UPROPERTY(EditAnywhere)
    uint64 EventID;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    USBBGMSoundTrack* BGMTrack;
    
    UPROPERTY(EditAnywhere)
    bool bUseRemoveTimer;
    
    UPROPERTY(EditAnywhere)
    float RemoveTimer;
    
    UPROPERTY(EditAnywhere)
    float ChangedPeaceDelay;
    
    SB_API FSBLevelSequenceEventBGMSectionData();
};

