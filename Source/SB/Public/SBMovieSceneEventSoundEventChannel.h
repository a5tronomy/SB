#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "SBMovieSceneEventSoundEventKeyStruct.h"
#include "SBMovieSceneEventSoundEventChannel.generated.h"

USTRUCT(BlueprintType)
struct FSBMovieSceneEventSoundEventChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FSBMovieSceneEventSoundEventKeyStruct> KeyValues;
    
public:
    SB_API FSBMovieSceneEventSoundEventChannel();
};

