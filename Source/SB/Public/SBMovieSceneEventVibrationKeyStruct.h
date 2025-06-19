#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventKeyStruct.h"
#include "SBMovieSceneEventVibrationKeyStruct.generated.h"

class USBVibrationSet;

USTRUCT(BlueprintType)
struct SB_API FSBMovieSceneEventVibrationKeyStruct : public FSBMovieSceneEventKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    float IntensityMultiplier;
    
    FSBMovieSceneEventVibrationKeyStruct();
};

