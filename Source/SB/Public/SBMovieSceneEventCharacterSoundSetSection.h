#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventCharacterSoundSetChannel.h"
#include "SBMovieSceneEventSection.h"
#include "SBMovieSceneEventCharacterSoundSetSection.generated.h"

UCLASS()
class SB_API USBMovieSceneEventCharacterSoundSetSection : public USBMovieSceneEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBMovieSceneEventCharacterSoundSetChannel EventChannel;
    
public:
    USBMovieSceneEventCharacterSoundSetSection();

};

