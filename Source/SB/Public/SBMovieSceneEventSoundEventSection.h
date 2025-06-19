#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventSection.h"
#include "SBMovieSceneEventSoundEventChannel.h"
#include "SBMovieSceneEventSoundEventSection.generated.h"

UCLASS()
class SB_API USBMovieSceneEventSoundEventSection : public USBMovieSceneEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBMovieSceneEventSoundEventChannel EventChannel;
    
public:
    USBMovieSceneEventSoundEventSection();

};

