#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EBinkMoviePlayerBinkBufferModes.h"
#include "EBinkMoviePlayerBinkSoundTrack.h"
#include "BinkMoviePlayerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class BINKMEDIAPLAYER_API UBinkMoviePlayerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EBinkMoviePlayerBinkBufferModes> BinkBufferMode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> BinkSoundTrack;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BinkSoundTrackStart;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FVector2D BinkDestinationUpperLeft;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FVector2D BinkDestinationLowerRight;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EPixelFormat> BinkPixelFormat;
    
    UBinkMoviePlayerSettings();

};

