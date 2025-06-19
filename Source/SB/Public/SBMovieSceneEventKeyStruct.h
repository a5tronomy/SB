#pragma once
#include "CoreMinimal.h"
#include "MovieSceneKeyStruct.h"
#include "SBMovieSceneEventKeyStruct.generated.h"

USTRUCT()
struct SB_API FSBMovieSceneEventKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    FSBMovieSceneEventKeyStruct();
};

