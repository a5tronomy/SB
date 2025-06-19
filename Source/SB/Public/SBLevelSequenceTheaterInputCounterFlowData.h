#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBLevelSequenceTheaterInputCounterType.h"
#include "SBLevelSequenceTheaterInputCounterLocationData.h"
#include "SBLevelSequenceTheaterInputCounterFlowData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterInputCounterFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> ActionKey;
    
    UPROPERTY(EditAnywhere)
    int32 GoalInputCount;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterInputCounterLocationData LocationData;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrame;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrame;
    
    SB_API FSBLevelSequenceTheaterInputCounterFlowData();
};

