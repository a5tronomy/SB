#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventKeyStruct.h"
#include "SBMovieSceneEventSoundEventKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBMovieSceneEventSoundEventKeyStruct : public FSBMovieSceneEventKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    FSBMovieSceneEventSoundEventKeyStruct();
};

