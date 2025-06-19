#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceBookmarkSectionData.h"
#include "SBLevelSequenceBookmarkSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceBookmarkSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceBookmarkSectionData Data;
    
    USBLevelSequenceBookmarkSection();

};

