#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceVisibilityTagSection.generated.h"

UCLASS(MinimalAPI)
class USBLevelSequenceVisibilityTagSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString VisibilityTag;
    
    USBLevelSequenceVisibilityTagSection();

};

