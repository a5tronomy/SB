#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventSection.h"
#include "SBMovieSceneEventTestChannel.h"
#include "SBMovieSceneEventTestSection.generated.h"

UCLASS()
class SB_API USBMovieSceneEventTestSection : public USBMovieSceneEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBMovieSceneEventTestChannel EventChannel;
    
public:
    USBMovieSceneEventTestSection();

};

