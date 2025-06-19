#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMovieSceneEventTriggerData.generated.h"

USTRUCT()
struct FSBMovieSceneEventTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    SB_API FSBMovieSceneEventTriggerData();
};

