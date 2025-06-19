#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "SBMovieSceneEventTestKeyStruct.h"
#include "SBMovieSceneEventTestChannel.generated.h"

USTRUCT(BlueprintType)
struct FSBMovieSceneEventTestChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FSBMovieSceneEventTestKeyStruct> KeyValues;
    
public:
    SB_API FSBMovieSceneEventTestChannel();
};

