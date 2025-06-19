#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBLevelSequenceTheaterQTEType.h"
#include "SBLevelSequenceTheaterQTELocationData.h"
#include "SBLevelSequenceTheaterQTEFlowData.generated.h"

USTRUCT()
struct FSBLevelSequenceTheaterQTEFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterQTEType> ActionKey;
    
    UPROPERTY(EditAnywhere)
    int32 GoalInputCount;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceTheaterQTELocationData LocationData;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrame;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrame;
    
    SB_API FSBLevelSequenceTheaterQTEFlowData();
};

