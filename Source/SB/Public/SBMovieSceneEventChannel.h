#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "SBMovieSceneEventKeyStruct.h"
#include "SBMovieSceneEventChannel.generated.h"

USTRUCT()
struct FSBMovieSceneEventChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FSBMovieSceneEventKeyStruct> KeyValues;
    
public:
    SB_API FSBMovieSceneEventChannel();
};

