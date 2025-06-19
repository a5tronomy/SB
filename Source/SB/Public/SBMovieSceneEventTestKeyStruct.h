#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventKeyStruct.h"
#include "SBMovieSceneEventTestKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBMovieSceneEventTestKeyStruct : public FSBMovieSceneEventKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LogData;
    
    FSBMovieSceneEventTestKeyStruct();
};

