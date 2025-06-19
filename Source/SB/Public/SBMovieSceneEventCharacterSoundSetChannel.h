#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "SBMovieSceneEventCharacterSoundSetKeyStruct.h"
#include "SBMovieSceneEventCharacterSoundSetChannel.generated.h"

USTRUCT(BlueprintType)
struct FSBMovieSceneEventCharacterSoundSetChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FSBMovieSceneEventCharacterSoundSetKeyStruct> KeyValues;
    
public:
    SB_API FSBMovieSceneEventCharacterSoundSetChannel();
};

