#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "SBMovieSceneEventVibrationKeyStruct.h"
#include "SBMovieSceneEventVibrationChannel.generated.h"

USTRUCT(BlueprintType)
struct FSBMovieSceneEventVibrationChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FSBMovieSceneEventVibrationKeyStruct> KeyValues;
    
public:
    SB_API FSBMovieSceneEventVibrationChannel();
};

