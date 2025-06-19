#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventSection.h"
#include "SBMovieSceneEventVibrationChannel.h"
#include "SBMovieSceneEventVibrationSection.generated.h"

UCLASS()
class SB_API USBMovieSceneEventVibrationSection : public USBMovieSceneEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBMovieSceneEventVibrationChannel EventChannel;
    
public:
    USBMovieSceneEventVibrationSection();

};

