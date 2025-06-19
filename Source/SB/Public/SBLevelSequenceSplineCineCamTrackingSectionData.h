#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceSplineCineCamTrackingSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceSplineCineCamTrackingSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TrackingCharacterTag;
    
    SB_API FSBLevelSequenceSplineCineCamTrackingSectionData();
};

